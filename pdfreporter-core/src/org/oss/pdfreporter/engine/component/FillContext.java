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
package org.oss.pdfreporter.engine.component;

import java.util.TimeZone;

import org.oss.pdfreporter.engine.JRComponentElement;
import org.oss.pdfreporter.engine.JRDefaultStyleProvider;
import org.oss.pdfreporter.engine.JRException;
import org.oss.pdfreporter.engine.JRExpression;
import org.oss.pdfreporter.engine.JROrigin;
import org.oss.pdfreporter.engine.JRPrintElement;
import org.oss.pdfreporter.engine.JRStyle;
import org.oss.pdfreporter.engine.fill.FillContainerContext;
import org.oss.pdfreporter.engine.fill.IJRBaseFiller;
import org.oss.pdfreporter.engine.fill.IJRFillExpressionEvaluator;
import org.oss.pdfreporter.engine.type.EvaluationTimeEnum;
import org.oss.pdfreporter.text.bundle.ITextBundle;
import org.oss.pdfreporter.text.bundle.StringLocale;


/**
 * A fill context provides access to data and functionality related to a
 * report component fill.
 *
 * @author Lucian Chirita (lucianc@users.sourceforge.net)
 * @version $Id: FillContext.java 5766 2012-11-01 16:39:01Z lucianc $
 */
public interface FillContext extends IJRFillExpressionEvaluator
{

	/**
	 * Returns the component element that wraps the component.
	 *
	 * @return the current component element
	 */
	JRComponentElement getComponentElement();

	/**
	 * Returns the fill element Id associated to the component element.
	 *
	 * @return the Id of the component fill element
	 * @see JRPrintElement#getSourceElementId()
	 */
	int getElementSourceId();

	/**
	 * Evaluates an expression in the main report dataset.
	 *
	 * @param expression the expression to evaluate
	 * @param evaluation the evaluation type; usually directly passed from
	 * {@link FillComponent#evaluate(byte)}
	 * @return the result of the evaluation
	 * @throws JRException
	 */
	Object evaluate(JRExpression expression, byte evaluation) throws JRException;

	/**
	 * Returns the default style provider for the generated report.
	 *
	 * @return the default style provider of the generated report
	 */
	JRDefaultStyleProvider getDefaultStyleProvider();

	/**
	 * Returns the origin of the current component element.
	 *
	 * @return the origin of the component element
	 */
	JROrigin getElementOrigin();

	/**
	 * Returns the position on the vertical axis where the component element
	 * starts printing.
	 *
	 * @return the position on the vertical axis of the component element
	 */
	int getElementPrintY();

	/**
	 * Returns the current style of the component element.
	 *
	 * @return the current style of the component element
	 */
	JRStyle getElementStyle();

	/**
	 * Registers a delayed evaluation for a print element.
	 *
	 * @param printElement the print element
	 * @param evaluationTime the delayed evaluation time; one of
	 * <ul>
	 * 	<li>{@link EvaluationTimeEnum#BAND}
	 * 	<li>{@link EvaluationTimeEnum#COLUMN}
	 * 	<li>{@link EvaluationTimeEnum#PAGE}
	 * 	<li>{@link EvaluationTimeEnum#GROUP}
	 * 	<li>{@link EvaluationTimeEnum#REPORT}
	 * </ul>
	 * @param evaluationGroup the evaluation group name, if
	 * <code>evaluationTime</code> is {@link EvaluationTimeEnum#GROUP}
	 * @see FillComponent#evaluateDelayedElement(JRPrintElement, byte)
	 */
	void registerDelayedEvaluation(JRPrintElement printElement,
			EvaluationTimeEnum evaluationTime, String evaluationGroup);

	/**
	 * Returns the resource bundle used for the current report.
	 *
	 * @return the report resource bundle
	 * @see net.sf.jasperreports.engine.JRReport#getResourceBundle()
	 * @see net.sf.jasperreports.engine.JRParameter#REPORT_RESOURCE_BUNDLE
	 */
	ITextBundle getReportResourceBundle();

	/**
	 * Returns the locale used to fill the current report.
	 *
	 * @return the report locale
	 * @see org.oss.pdfreporter.engine.JRParameter#REPORT_LOCALE
	 */
	StringLocale getReportLocale();

	/**
	 * Returns the time zone used to fill the current report.
	 *
	 * @return the report time zone
	 * @see org.oss.pdfreporter.engine.JRParameter#REPORT_TIME_ZONE
	 */
	TimeZone getReportTimezone();

	/**
	 * Returns the filler object.
	 *
	 * @return the filler object
	 */
	IJRBaseFiller getFiller();

	FillContainerContext getFillContainerContext();

	//TODO access to params/fields/vars?
}
