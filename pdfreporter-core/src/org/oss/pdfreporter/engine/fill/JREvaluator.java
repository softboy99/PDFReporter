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
package org.oss.pdfreporter.engine.fill;

import java.util.Calendar;
import java.util.Date;
import java.util.Map;
import java.util.logging.Level;
import java.util.logging.Logger;

import org.oss.pdfreporter.engine.JRException;
import org.oss.pdfreporter.engine.JRExpression;
import org.oss.pdfreporter.engine.JRParameter;
import org.oss.pdfreporter.engine.JRRuntimeException;
import org.oss.pdfreporter.engine.type.WhenResourceMissingTypeEnum;
import org.oss.pdfreporter.registry.ApiRegistry;
import org.oss.pdfreporter.text.bundle.StringLocale;
import org.oss.pdfreporter.text.format.IMessageFormat;
import org.oss.pdfreporter.text.format.factory.IFormatFactory.FormatType;

import com.google.j2objc.annotations.AutoreleasePool;


/**
 * Base class for the dynamically generated expression evaluator classes.
 *
 * @author Lucian Chirita (lucianc@users.sourceforge.net)
 * @version $Id: JREvaluator.java 5180 2012-03-29 13:23:12Z teodord $
 */
public abstract class JREvaluator implements DatasetExpressionEvaluator
{
	private static final Logger logger = Logger.getLogger(JREvaluator.class.getName());

	/**
	 * The resource missing type.
	 */
	private WhenResourceMissingTypeEnum whenResourceMissingType;

	/**
	 * The report Locale used when parsing the bundle message.
	 */
	private IJRFillParameter locale;

	/**
	 * Default constructor.
	 */
	protected JREvaluator()
	{
	}


	/**
	 * Initializes the evaluator by setting the parameter, field and variable objects.
	 *
	 * @param parametersMap the parameters indexed by name
	 * @param fieldsMap the fields indexed by name
	 * @param variablesMap the variables indexed by name
	 * @param resourceMissingType the resource missing type
	 * @throws JRException
	 */
	@Override
	public void init(
			final Map<String, IJRFillParameter> parametersMap,
			final Map<String, JRFillField> fieldsMap,
			final Map<String, JRFillVariable> variablesMap,
			final WhenResourceMissingTypeEnum resourceMissingType
			) throws JRException
	{
		this.whenResourceMissingType = resourceMissingType;
		this.locale = parametersMap.get(JRParameter.REPORT_LOCALE);
		customizedInit(parametersMap, fieldsMap, variablesMap);
	}





	/**
	 * Constructs a message using a pattern with one parameter.
	 *
	 * @param pattern the message pattern
	 * @param arg0 the message parameter
	 * @return the constructed message
	 * @see IMessageFormat#format(java.lang.Object[],java.lang.StringBuffer, java.text.FieldPosition)
	 */
	public String msg(final String pattern, final Object arg0)
	{
		return getMessageFormat(pattern).format(new Object[] { arg0 });
	}

	/**
	 * Constructs a message using a pattern with two parameters.
	 *
	 * @param pattern the message pattern
	 * @param arg0 the first message parameter
	 * @param arg1 the second message parameter
	 * @return the constructed message
	 * @see IMessageFormat#format(java.lang.Object[],java.lang.StringBuffer, java.text.FieldPosition)
	 */
	public String msg(final String pattern, final Object arg0, final Object arg1)
	{
		return getMessageFormat(pattern).format(new Object[] { arg0, arg1 });
	}


	/**
	 * Constructs a message using a pattern with three parameters.
	 *
	 * @param pattern the message pattern
	 * @param arg0 the first message parameter
	 * @param arg1 the second message parameter
	 * @param arg2 the third parameter
	 * @return the constructed message
	 * @see IMessageFormat#format(java.lang.Object[],java.lang.StringBuffer, java.text.FieldPosition)
	 */
	public String msg(final String pattern, final Object arg0, final Object arg1, final Object arg2)
	{
		return getMessageFormat(pattern).format(new Object[] { arg0, arg1, arg2 });
	}

	/**
	 * Constructs a message using a pattern with an Object array parameter.
	 *
	 * @param pattern the message pattern
	 * @param args the parameter Object array
	 * @return the constructed message
	 * @see IMessageFormat#format(java.lang.Object[],java.lang.StringBuffer, java.text.FieldPosition)
	 */
	public String msg(final String pattern, final Object[] args)
	{
		return getMessageFormat(pattern).format(args);
	}


	/**
	 *
	 */
	@Override
	@AutoreleasePool
	public Object evaluate(final JRExpression expression) throws JRExpressionEvalException
	{
		Object value = null;

		if (expression != null)
		{
			try
			{
				value = evaluate(expression.getId());
				if (logger.isLoggable(Level.FINEST)) {
					String msg = value==null ? null : value.toString();
					if (value instanceof Date) {
						final Calendar cal = Calendar.getInstance();
						cal.setTime((Date)value);
						msg = String.format("%04d-%02d-%02d %02d:%02d:%02d", cal.get(Calendar.YEAR), cal.get(Calendar.MONTH)+1, cal.get(Calendar.DAY_OF_MONTH), cal.get(Calendar.HOUR_OF_DAY), cal.get(Calendar.MINUTE), cal.get(Calendar.SECOND));
					}
					logger.finest("evaluate: " + expression.getId() + " = " + msg);
				}
			}
			// TODO (30.04.2013, Donat, Open Software Solutions): Very bad style eating exceptions keep it for compatibility (catch for OutOfMemory is not supported by j2objc)
			catch (final NullPointerException e) //NOPMD
			{
			}
//			catch (OutOfMemoryError e)
//			{
//				throw e;
//			}
			// we have to catch Throwable because there is no way we could modify the signature
			// of the evaluate method, without breaking backward compatibility of compiled report templates
			catch (final Throwable e) //NOPMD
			{
				throw new JRExpressionEvalException(expression, e);
			}
		}

		return value;
	}


	/**
	 *
	 */
	@Override
	public Object evaluateOld(final JRExpression expression) throws JRExpressionEvalException
	{
		Object value = null;

		if (expression != null)
		{
			try
			{
				value = evaluateOld(expression.getId());
				logger.finest("evaluateOld: " + expression.getId() + " = " + value);
			}
			// TODO (30.04.2013, Donat, Open Software Solutions): Very bad style eating exceptions keep it for compatibility (catch for OutOfMemory is not supported by j2objc)
			catch (final NullPointerException e) //NOPMD
			{
			}
//			catch (OutOfMemoryError e)
//			{
//				throw e;
//			}
			// we have to catch Throwable because there is no way we could modify the signature
			// of the evaluate method, without breaking backward compatibility of compiled report templates
			catch (final Throwable e) //NOPMD
			{
				throw new JRExpressionEvalException(expression, e);
			}
		}

		return value;
	}


	/**
	 *
	 */
	@Override
	public Object evaluateEstimated(final JRExpression expression) throws JRExpressionEvalException
	{
		Object value = null;

		if (expression != null)
		{
			try
			{
				value = evaluateEstimated(expression.getId());
				logger.finest("evaluateEstimated: " + expression.getId() + " = " + value);
			}
			// TODO (30.04.2013, Donat, Open Software Solutions): Very bad style eating exceptions keep it for compatibility (catch for OutOfMemory is not supported by j2objc)
			catch (final NullPointerException e) //NOPMD
			{
			}
//			catch (OutOfMemoryError e)
//			{
//				throw e;
//			}
			// we have to catch Throwable because there is no way we could modify the signature
			// of the evaluate method, without breaking backward compatibility of compiled report templates
			catch (final Throwable e) //NOPMD
			{
				throw new JRExpressionEvalException(expression, e);
			}
		}

		return value;
	}


	/**
	 * Handles the case when a resource is missing.
	 *
	 * @param key
	 *            the resource key
	 * @param e
	 *            the exception
	 * @return the value to use for the resource
	 * @throws JRRuntimeException
	 *             when the resource missing handling type is Error
	 */
	protected String handleMissingResource(final String key, final Exception e) throws JRRuntimeException
	{
		String str;
		switch (whenResourceMissingType)
		{
			case EMPTY:
			{
				str = "";
				break;
			}
			case KEY:
			{
				str = key;
				break;
			}
			case ERROR:
			{
				throw new JRRuntimeException("Resource not found for key \"" + key + "\".", e);
			}
			case NULL:
			default:
			{
				str = null;
				break;
			}
		}

		return str;
	}


	/**
	 * Initializes the parameters, fields and variables of the evaluator.
	 *
	 * @param parametersMap the parameters indexed by name
	 * @param fieldsMap the fields indexed by name
	 * @param variablesMap the variables indexed by name
	 * @throws JRException
	 */
	protected abstract void customizedInit(
			Map<String, IJRFillParameter> parametersMap,
			Map<String, JRFillField> fieldsMap,
			Map<String, JRFillVariable> variablesMap
			) throws JRException;


	/**
	 * Evaluates an expression using current fields and variables values.
	 *
	 * @param id the expression id
	 * @return the result of the evaluation
	 * @throws Throwable
	 * @see org.oss.pdfreporter.engine.JRExpression#EVALUATION_DEFAULT
	 * @see JRFillVariable#getValue()
	 * @see JRFillField#getValue()
	 */
	protected abstract Object evaluate(int id) throws Throwable; //NOSONAR


	/**
	 * Evaluates an expression using old fields and variables values.
	 *
	 * @param id the expression id
	 * @return the result of the evaluation
	 * @throws Throwable
	 * @see org.oss.pdfreporter.engine.JRExpression#EVALUATION_OLD
	 * @see JRFillVariable#getOldValue()
	 * @see JRFillField#getOldValue()
	 */
	protected abstract Object evaluateOld(int id) throws Throwable; //NOSONAR


	/**
	 * Evaluates an expression using estimated variables values.
	 *
	 * @param id the expression id
	 * @return the result of the evaluation
	 * @throws Throwable
	 * @see org.oss.pdfreporter.engine.JRExpression#EVALUATION_ESTIMATED
	 * @see JRFillVariable#getEstimatedValue()
	 */
	protected abstract Object evaluateEstimated(int id) throws Throwable; //NOSONAR


	/**
	 *
	 */
	private IMessageFormat getMessageFormat(final String pattern)
	{
		return ApiRegistry.getIFormatFactory(FormatType.DEFAULT).newMessageFormat(pattern, ((StringLocale)locale.getValue()).toLocale());
	}

}
