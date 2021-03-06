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
package org.oss.pdfreporter.components.list;

import java.util.Map;
import java.util.logging.Level;
import java.util.logging.Logger;

import org.oss.pdfreporter.data.cache.DataCacheHandler;
import org.oss.pdfreporter.engine.JRDataSource;
import org.oss.pdfreporter.engine.JRDataset;
import org.oss.pdfreporter.engine.JRDatasetRun;
import org.oss.pdfreporter.engine.JRException;
import org.oss.pdfreporter.engine.JRExpression;
import org.oss.pdfreporter.engine.JRPropertiesUtil;
import org.oss.pdfreporter.engine.JRRewindableDataSource;
import org.oss.pdfreporter.engine.JasperReport;
import org.oss.pdfreporter.engine.fill.FillDatasetPosition;
import org.oss.pdfreporter.engine.fill.JRFillDataset;
import org.oss.pdfreporter.engine.fill.JRFillDatasetRun;
import org.oss.pdfreporter.engine.fill.JRFillExpressionEvaluator;
import org.oss.pdfreporter.engine.fill.JRFillObjectFactory;
import org.oss.pdfreporter.engine.fill.JRFillSubreport;
import org.oss.pdfreporter.engine.util.JRReportUtils;
import org.oss.pdfreporter.sql.IConnection;
/**
 * Used to iterate on the list subdataset at fill time.
 *
 * @author Lucian Chirita (lucianc@users.sourceforge.net)
 * @version $Id: FillDatasetRun.java 5340 2012-05-04 10:41:48Z lucianc $
 */
public class FillDatasetRun extends JRFillDatasetRun
{

	private static final Logger log = Logger.getLogger(FillDatasetRun.class.getName());

	private final JRFillExpressionEvaluator expressionEvaluator;

	private Map<String, Object> parameterValues;
	private FillDatasetPosition datasetPosition;
	private boolean cacheIncluded;
	private JRDataSource dataSource;
	private IConnection connection;
	private boolean first;

	public FillDatasetRun(JRDatasetRun datasetRun,
			JRFillObjectFactory factory) throws JRException
	{
		super(factory.getFiller(), datasetRun,
				createFillDataset(datasetRun, factory));

		this.expressionEvaluator = factory.getExpressionEvaluator();
	}

	private static JRFillDataset createFillDataset(JRDatasetRun datasetRun,
			JRFillObjectFactory factory) throws JRException
	{
		JasperReport jasperReport = factory.getFiller().getJasperReport();
		JRDataset reportDataset = JRReportUtils.findSubdataset(datasetRun, jasperReport);
		JRFillDataset fillDataset = new JRFillDataset(factory.getFiller(), reportDataset, factory);
		fillDataset.createCalculator(jasperReport);
		return fillDataset;
	}

	public void evaluate(byte evaluation) throws JRException
	{
		if (log.isLoggable(Level.FINE))
		{
			log.fine("Evaluating list dataset run parameters");
		}

		parameterValues = JRFillSubreport.getParameterValues(
			filler,
			expressionEvaluator,
			parametersMapExpression,
			parameters,
			evaluation,
			false,
			dataset.getResourceBundle() != null,//hasResourceBundle
			false//hasFormatFactory
			);

		JRFillDataset parentDataset = expressionEvaluator.getFillDataset();
		datasetPosition = new FillDatasetPosition(parentDataset.getDatasetPosition());
		datasetPosition.addAttribute("datasetRunUUID", getUUID());
		parentDataset.setCacheRecordIndex(datasetPosition, evaluation);

		String cacheIncludedProp = JRPropertiesUtil.getOwnProperty(this, DataCacheHandler.PROPERTY_INCLUDED);
		cacheIncluded = JRPropertiesUtil.asBoolean(cacheIncludedProp, true);// default to true

		if (dataSourceExpression != null)
		{
			if (filler.getFillContext().hasDataSnapshot() && cacheIncluded)
			{
				dataSource = null;
			}
			else
			{
				dataSource = (JRDataSource) expressionEvaluator.evaluate(
						dataSourceExpression, evaluation);
			}
		}
		else if (connectionExpression != null)
		{
			connection = (IConnection) expressionEvaluator.evaluate(
					connectionExpression, evaluation);
		}
	}

	public void start() throws JRException
	{
		if (log.isLoggable(Level.FINE))
		{
			log.fine("Starting list dataset iteration");
		}

		if (dataSourceExpression != null)
		{
			dataset.setDatasourceParameterValue(parameterValues, dataSource);
		}
		else if (connectionExpression != null)
		{
			dataset.setConnectionParameterValue(parameterValues, connection);
		}

		// set fill position for caching
		dataset.setFillPosition(datasetPosition);
		dataset.setCacheSkipped(!cacheIncluded);

		copyConnectionParameter(parameterValues);
		dataset.initCalculator();
		dataset.setParameterValues(parameterValues);

		dataset.initDatasource();

		dataset.start();
		init();
		first = true;
	}

	public boolean next() throws JRException
	{
		checkInterrupted();

		if (dataset.next())
		{
			if (!first)
			{
				group();
			}

			detail();

			return true;
		}

		return false;
	}

	public void end()
	{
		if (log.isLoggable(Level.FINE))
		{
			log.fine("Closing the data source");
		}

		dataset.closeDatasource();
		dataset.disposeParameterContributors();
	}

	public void rewind() throws JRException
	{
		if (dataSource != null)
		{
			if (dataSource instanceof JRRewindableDataSource)
			{
				if (log.isLoggable(Level.FINE))
				{
					log.fine("Rewinding the list data source");
				}

				((JRRewindableDataSource) dataSource).moveFirst();
			}
			else
			{
				log.warning("Cannot rewind list data source as it is not a JRRewindableDataSource");
			}
		}
	}

	public Object evaluateDatasetExpression(JRExpression expression, byte evaluationType)
		throws JRException
	{
		return dataset.evaluateExpression(expression, evaluationType);
	}

	@Override
	protected JRFillDataset getDataset()
	{
		// only added here for visibility
		return super.getDataset();
	}


}
