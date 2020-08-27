/*
 * JasperReports - Free Java Reporting Library.
 * Copyright (C) 2001 - 2011 Jaspersoft Corporation. All rights reserved.
 * http://www.jaspersoft.com
 *
 * Unless you have purchased a commercial license agreement from Jaspersoft,
 * the following license terms apply:
 *
 * This program is part of JasperReports.
 *
 * JasperReports is free software: you can redistribute it and/or modify
 * it under the terms of the GNU Lesser General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * JasperReports is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the
 * GNU Lesser General Public License for more details.
 *
 * You should have received a copy of the GNU Lesser General Public License
 * along with JasperReports. If not, see <http://www.gnu.org/licenses/>.
 */

/*
 * Contributors:
 * Artur Biesiadowski - abies@users.sourceforge.net 
 */
package org.oss.pdfreporter.engine.xml;

import java.io.File;
import java.io.FileInputStream;
import java.io.IOException;
import java.io.InputStream;
import java.util.ArrayList;
import java.util.HashMap;
import java.util.HashSet;
import java.util.Iterator;
import java.util.LinkedList;
import java.util.List;
import java.util.Map;
import java.util.Set;

import org.oss.pdfreporter.engine.JRDataset;
import org.oss.pdfreporter.engine.JRDatasetRun;
import org.oss.pdfreporter.engine.JRElementDataset;
import org.oss.pdfreporter.engine.JRException;
import org.oss.pdfreporter.engine.JRGroup;
import org.oss.pdfreporter.engine.JRRuntimeException;
import org.oss.pdfreporter.engine.JRVariable;
import org.oss.pdfreporter.engine.design.JRDesignDataset;
import org.oss.pdfreporter.engine.design.JRDesignElement;
import org.oss.pdfreporter.engine.design.JRDesignElementDataset;
import org.oss.pdfreporter.engine.design.JRDesignImage;
import org.oss.pdfreporter.engine.design.JRDesignTextField;
import org.oss.pdfreporter.engine.design.JRDesignVariable;
import org.oss.pdfreporter.engine.design.JRValidationException;
import org.oss.pdfreporter.engine.design.JasperDesign;
import org.oss.pdfreporter.engine.type.IncrementTypeEnum;
import org.oss.pdfreporter.engine.type.ResetTypeEnum;
import org.oss.pdfreporter.engine.util.JRProperties;
import org.oss.pdfreporter.extensions.ExtensionsEnvironment;
import org.oss.pdfreporter.progress.IProgressHandler.ProgressState;
import org.oss.pdfreporter.progress.ProgressManager;
import org.oss.pdfreporter.registry.IRegistry;
import org.oss.pdfreporter.uses.org.apache.digester.IDigester;
import org.oss.pdfreporter.xml.parsers.IInputSource;
import org.oss.pdfreporter.xml.parsers.ParserConfigurationException;
import org.oss.pdfreporter.xml.parsers.XMLParseException;



/**
 * @author Teodor Danciu (teodord@users.sourceforge.net)
 * @version $Id: JRXmlLoader.java 5180 2012-03-29 13:23:12Z teodord $
 */
public class JRXmlLoader
{

	/**
	 *
	 */
	private JasperDesign jasperDesign;
	private final LinkedList<XmlLoaderReportContext> contextStack = 
		new LinkedList<XmlLoaderReportContext>();
	
	private final Map<XmlGroupReference, XmlLoaderReportContext> groupReferences = 
		new HashMap<XmlGroupReference, XmlLoaderReportContext>();
	
	//TODO use XmlGroupReference for datasets
	private final Set<JRElementDataset> groupBoundDatasets = new HashSet<JRElementDataset>();
	
	private final List<Exception> errors = new ArrayList<Exception>();

	private final IDigester digester;

	private boolean ignoreConsistencyProblems;
		
	/**
	 *
	 */
	public JRXmlLoader(final IDigester digester)
	{
		this.digester = digester;
	}

	/**
	 *
	 */
	public void setJasperDesign(final JasperDesign jasperDesign)
	{
		this.jasperDesign = jasperDesign;
	}
	
	public void addGroupReference(final XmlGroupReference reference)
	{
		final XmlLoaderReportContext reportContext = getReportContext();
		groupReferences.put(reference, reportContext);
	}
	
	public void addGroupReprintedElement(final JRDesignElement element)
	{
		addGroupReference(
				new ElementReprintGroupReference(element));
	}
	
	public void addGroupEvaluatedImage(final JRDesignImage image)
	{
		addGroupReference(
				new ImageEvaluationGroupReference(image));
	}
	
	public void addGroupEvaluatedTextField(final JRDesignTextField textField)
	{
		addGroupReference(
				new TextFieldEvaluationGroupReference(textField));
	}

	/**
	*
	*/
	public Set<JRElementDataset> getGroupBoundDatasets()
	{
		return groupBoundDatasets;
	}


	/**
	 *
	 */
	public static JasperDesign load(final String sourceFileName) throws JRException//FIXMEREPO consider renaming
	{
		return load(new File(sourceFileName));
	}


	/**
	 *
	 */
	public static JasperDesign load(final File file) throws JRException
	{
		JasperDesign jasperDesign = null;

		FileInputStream fis = null;

		try
		{
			fis = new FileInputStream(file);
			jasperDesign = JRXmlLoader.load(fis);
		}
		catch(final IOException e)
		{
			throw new JRException(e);
		}
		finally
		{
			if (fis != null)
			{
				try
				{
					fis.close();
				}
				catch(final IOException e)
				{
				}
			}
		}

		return jasperDesign;
	}


	/**
	 *
	 */
	public static JasperDesign load(final InputStream is) throws JRException
	{
		// TODO (08.08.2013, Donat, Open Software Solutions): Temporary solution to reset properties and extensions for each exporter run
		JRProperties.reload();
		ExtensionsEnvironment.reset();
		final ProgressManager pm = new ProgressManager(ProgressState.LOADING);
		JasperDesign jasperDesign = null;

		JRXmlLoader xmlLoader = null;

		try 
		{
			xmlLoader = new JRXmlLoader(JRXmlDigesterFactory.createDigester());
		}
		catch (final XMLParseException e) 
		{
			throw new JRException(e);
		}
		
		jasperDesign = xmlLoader.loadXML(is);

		pm.done();
		return jasperDesign;
	}



	/**
	 *
	 */
	public JasperDesign loadXML(final InputStream is) throws JRException
	{
		return loadXML(IRegistry.getIXmlParserFactory().newInputSource(is));
	}

	/**
	 *
	 */
	public JasperDesign loadXML(final IInputSource is) throws JRException
	{
		try
		{
			digester.push(this);	

			/*   */
			digester.parse(is);
		}
		catch(final XMLParseException e)
		{
			throw new JRException("Error loading jrxml from IInputSource.",e);
		}
		catch(final IOException e)
		{
			throw new JRException(e);
		} catch (final ParserConfigurationException e) {
			throw new JRException(e);
		}
		finally 
		{
			digester.clear();
		}
		
		if (errors.size() > 0)
		{
			final Exception e = errors.get(0);
			if (e instanceof JRException)
			{
				throw (JRException)e;
			}
			throw new JRException(e);
		}

		/*   */
		assignGroupsToVariables(jasperDesign.getMainDesignDataset());
		for (final Iterator<JRDataset> it = jasperDesign.getDatasetsList().iterator(); it.hasNext();)
		{
			final JRDesignDataset dataset = (JRDesignDataset) it.next();
			assignGroupsToVariables(dataset);
		}
		
		assignGroupReferences();
		this.assignGroupsToDatasets();
		
		return this.jasperDesign;
	}

	/**
	 *
	 */
	private void assignGroupsToVariables(final JRDesignDataset dataset) throws JRException
	{
		final JRVariable[] variables = dataset.getVariables();
		if (variables != null && variables.length > 0)
		{
			final Map<String,JRGroup> groupsMap = dataset.getGroupsMap();
			for(int i = 0; i < variables.length; i++)
			{
				final JRDesignVariable variable = (JRDesignVariable)variables[i];
				if (variable.getResetTypeValue() == ResetTypeEnum.GROUP)
				{
					String groupName = null;
					JRGroup group = variable.getResetGroup();
					if (group != null)
					{
						groupName = group.getName();
						group = groupsMap.get(groupName);
					}

					if (!ignoreConsistencyProblems && group == null)
					{
						throw 
							new JRValidationException(
								"Unknown reset group '" + groupName 
								+ "' for variable : " + variable.getName(),
								variable
								);
					}

					variable.setResetGroup(group);
				}
				else
				{
					variable.setResetGroup(null);
				}

				if (variable.getIncrementTypeValue() == IncrementTypeEnum.GROUP)
				{
					String groupName = null;
					JRGroup group = variable.getIncrementGroup();
					if (group != null)
					{
						groupName = group.getName();
						group = groupsMap.get(groupName);
					}

					if (!ignoreConsistencyProblems && group == null)
					{
						throw 
							new JRValidationException(
								"Unknown increment group '" + groupName 
								+ "' for variable : " + variable.getName(),
								variable
								);
					}

					variable.setIncrementGroup(group);
				}
				else
				{
					variable.setIncrementGroup(null);
				}
			}
		}
	}


	/**
	 *
	 */
	private void assignGroupReferences() throws JRException
	{
		for (final Map.Entry<XmlGroupReference, XmlLoaderReportContext> entry : 
			groupReferences.entrySet())
		{
			final XmlGroupReference reference = entry.getKey();
			final XmlLoaderReportContext context = entry.getValue();

			String groupName = null;
			JRGroup group = reference.getGroupReference();
			if (group != null)
			{
				groupName = group.getName();
				group = resolveGroup(groupName, context);
			}

			if (!ignoreConsistencyProblems && group == null)
			{
				reference.groupNotFound(groupName);
			}
			else
			{
				reference.assignGroup(group);
			}
		}
	}
	
	protected JRGroup resolveGroup(final String groupName, final XmlLoaderReportContext context)
	{
		JRGroup group;
		if (context == null)
		{
			// main dataset groups
			final Map<String,JRGroup> groupsMap = jasperDesign.getGroupsMap();
			group = groupsMap.get(groupName);
		}
		else
		{
			final String datasetName = context.getSubdatesetName();
			final JRDesignDataset dataset = (JRDesignDataset) jasperDesign.getDatasetMap().get(datasetName);
			if (dataset == null)
			{
				throw new JRRuntimeException("Could not find subdataset of name \"" 
						+ datasetName + "\"");
			}
			
			group = dataset.getGroupsMap().get(groupName);
		}
		return group;
	}


	/**
	 *
	 */
	private void assignGroupsToDatasets() throws JRException
	{
		for(final Iterator<JRElementDataset> it = groupBoundDatasets.iterator(); it.hasNext();)
		{
			final JRDesignElementDataset dataset = (JRDesignElementDataset) it.next();
			
			final JRDatasetRun datasetRun = dataset.getDatasetRun();
			Map<String,JRGroup> groupsMap;
			if (datasetRun == null)
			{
				groupsMap = jasperDesign.getGroupsMap();
			}
			else
			{
				final Map<String,JRDataset> datasetMap = jasperDesign.getDatasetMap();
				final String datasetName = datasetRun.getDatasetName();
				final JRDesignDataset subDataset = (JRDesignDataset) datasetMap.get(datasetName);
				if (subDataset == null)
				{
					throw new JRException("Unknown sub dataset '" + datasetName + "' for chart dataset.");
				}
				groupsMap = subDataset.getGroupsMap();
			}

			if (dataset.getIncrementTypeValue() == IncrementTypeEnum.GROUP)
			{
				String groupName = null;
				JRGroup group = dataset.getIncrementGroup();
				if (group != null)
				{
					groupName = group.getName();
					group = groupsMap.get(group.getName());
				}

				if (!ignoreConsistencyProblems && group == null)
				{
					throw new JRValidationException("Unknown increment group '" + groupName + "' for chart dataset.", dataset);
				}

				dataset.setIncrementGroup(group);
			}
			else
			{
				dataset.setIncrementGroup(null);
			}

			if (dataset.getResetTypeValue() == ResetTypeEnum.GROUP)
			{
				String groupName = null;
				JRGroup group = dataset.getResetGroup();
				if (group != null)
				{
					groupName = group.getName();
					group = groupsMap.get(group.getName());
				}

				if (!ignoreConsistencyProblems && group == null)
				{
					throw new JRValidationException("Unknown reset group '" + groupName + "' for chart dataset.", dataset);
				}

				dataset.setResetGroup(group);
			}
			else
			{
				dataset.setResetGroup(null);
			}
		}
	}

	
	/**
	 *
	 */
	public void addError(final Exception e)
	{
		if(!ignoreConsistencyProblems)
		{
			this.errors.add(e);
		}
	}
	
	/**
	 * Returns true if the loader is set to ignore consistency problems
	 * @return the ignoreConsistencyProblems flag.
	 */
	public boolean isIgnoreConsistencyProblems() {
		return ignoreConsistencyProblems;
	}
	
	/**
	 * Allows to enable or disable the reporting of consistency problems. Consistency 
	 * problems are problems in the logical structure of the report such as references
	 * to missing groups and fonts.
	 * 
	 * @param ignoreConsistencyProblems The ignoreConsistencyProblems value to set.
	 */
	public void setIgnoreConsistencyProblems(final boolean ignoreConsistencyProblems) {
		this.ignoreConsistencyProblems = ignoreConsistencyProblems;
	}

	public void pushReportContext(final XmlLoaderReportContext context)
	{
		contextStack.addFirst(context);
	}
	
	public XmlLoaderReportContext popReportContext()
	{
		return contextStack.removeFirst();
	}
	
	public XmlLoaderReportContext getReportContext()
	{
		return contextStack.isEmpty() ? null : contextStack.getFirst();
	}
}
