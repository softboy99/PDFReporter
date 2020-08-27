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
package org.oss.pdfreporter.engine.query;

import java.util.HashMap;
import java.util.List;
import java.util.Map;
import java.util.TimeZone;

import javax.xml.parsers.DocumentBuilderFactory;

import org.oss.pdfreporter.engine.DefaultJasperReportsContext;
import org.oss.pdfreporter.engine.JRDataSource;
import org.oss.pdfreporter.engine.JRDataset;
import org.oss.pdfreporter.engine.JRException;
import org.oss.pdfreporter.engine.JRPropertiesUtil;
import org.oss.pdfreporter.engine.JRPropertiesUtil.PropertySuffix;
import org.oss.pdfreporter.engine.JRValueParameter;
import org.oss.pdfreporter.engine.JasperReportsContext;
import org.oss.pdfreporter.engine.data.XalanXmlDataSource;
import org.oss.pdfreporter.text.bundle.StringLocale;
import org.oss.pdfreporter.uses.org.w3c.dom.Document;



/**
 * Xalan XPath query executer implementation.
 * <p/>
 * The XPath query of the report is executed against the document specified by the
 * {@link org.oss.pdfreporter.engine.query.XalanXPathQueryExecuterFactory#PARAMETER_XML_DATA_DOCUMENT PARAMETER_XML_DATA_DOCUMENT}
 * parameter.
 * <p/>
 * All the parameters in the XPath query are replaced by calling <code>String.valueOf(Object)</code>
 * on the parameter value.
 * 
 * @author Narcis Marcu (narcism@users.sourceforge.net)
 * @version $Id: XalanXPathQueryExecuter.java 5576 2012-08-16 09:04:00Z lucianc $
 */
public class XalanXPathQueryExecuter extends JRAbstractQueryExecuter
{
	private final Document document;
	
	private final DocumentBuilderFactory documentBuilderFactory;
	
	private Map<String, String> namespacesMap;
	
	/**
	 * 
	 */
	@SuppressWarnings("unchecked")
	public XalanXPathQueryExecuter(
		JasperReportsContext jasperReportsContext, 
		JRDataset dataset, 
		Map<String,? extends JRValueParameter> parametersMap
		)
	{
		super(jasperReportsContext, dataset, parametersMap);
				
		document = (Document) getParameterValue(XalanXPathQueryExecuterFactory.PARAMETER_XML_DATA_DOCUMENT);
		documentBuilderFactory = (DocumentBuilderFactory) getParameterValue(XalanXPathQueryExecuterFactory.PARAMETER_DOCUMENT_BUILDER_FACTORY);
		namespacesMap = (Map<String, String>) getParameterValue(XalanXPathQueryExecuterFactory.PARAMETER_XML_NAMESPACE_MAP);

		parseQuery();
	}

	/**
	 * @deprecated Replaced by {@link #XalanXPathQueryExecuter(JasperReportsContext, JRDataset, Map)}.
	 */
	public XalanXPathQueryExecuter(JRDataset dataset, Map<String,? extends JRValueParameter> parametersMap)
	{
		this(DefaultJasperReportsContext.getInstance(), dataset, parametersMap);
	}

	@Override
	protected String getCanonicalQueryLanguage()
	{
		return JRXPathQueryExecuter.CANONICAL_LANGUAGE;
	}

	protected String getParameterReplacement(String parameterName)
	{
		return String.valueOf(getParameterValue(parameterName));
	}

	public JRDataSource createDatasource() throws JRException
	{
		XalanXmlDataSource datasource = null;
		
		String xPath = getQueryString();
		
		if (document != null && xPath != null)
		{
			if (namespacesMap == null)
			{
				namespacesMap = extractXmlNamespacesFromProperties();
			}
			
			datasource = new XalanXmlDataSource(document, xPath);
			
			datasource.setXmlNamespaceMap(namespacesMap);
			datasource.setDetectXmlNamespaces(getBooleanParameterOrProperty(XalanXPathQueryExecuterFactory.XML_DETECT_NAMESPACES, false));
			datasource.setDocumentBuilderFactory(documentBuilderFactory);
			
			datasource.setLocale((StringLocale)getParameterValue(XalanXPathQueryExecuterFactory.XML_LOCALE, true));
			datasource.setDatePattern((String)getParameterValue(XalanXPathQueryExecuterFactory.XML_DATE_PATTERN, true));
			datasource.setNumberPattern((String)getParameterValue(XalanXPathQueryExecuterFactory.XML_NUMBER_PATTERN, true));
			datasource.setTimeZone((TimeZone)getParameterValue(XalanXPathQueryExecuterFactory.XML_TIME_ZONE, true));
		}
		
		return datasource;
	}

	public void close()
	{
		//nothing to do
	}

	public boolean cancelQuery() throws JRException
	{
		//nothing to cancel
		return false;
	}
	
	private Map<String, String> extractXmlNamespacesFromProperties() throws JRException 
	{
		Map<String, String> namespaces = new HashMap<String, String>();
		
		String xmlnsPrefix = XalanXPathQueryExecuterFactory.XML_NAMESPACE_PREFIX;
		List<PropertySuffix> nsProperties = JRPropertiesUtil.getProperties(dataset, xmlnsPrefix);
		
		for (int i=0; i < nsProperties.size(); ++i) 
		{
			PropertySuffix prop = nsProperties.get(i);
			String nsPrefix = prop.getKey().substring(xmlnsPrefix.length());
			if (nsPrefix.length() > 0) 
			{
				namespaces.put(nsPrefix, prop.getValue());
			}
		}
		
		return namespaces.size()>0 ? namespaces : null;
	}
	
}
