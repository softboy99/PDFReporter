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
package org.oss.pdfreporter.engine.xml;


import org.oss.pdfreporter.registry.IRegistry;
import org.oss.pdfreporter.uses.org.apache.digester.AbstractRule;
import org.oss.pdfreporter.xml.parsers.IAttributes;


/**
 * 
 * @author Lucian Chirita (lucianc@users.sourceforge.net)
 * @version $Id: TransformedPropertyRule.java 4595 2011-09-08 15:55:10Z teodord $
 */
public abstract class TransformedPropertyRule extends AbstractRule
{

	protected final String attributeName;
	protected final String propertyName;

	protected TransformedPropertyRule(String attributeName)
	{
		this(attributeName, attributeName);
	}

	protected TransformedPropertyRule(String attributeName, String propertyName)
	{
		this.attributeName = attributeName;
		this.propertyName = propertyName;
	}

	public void begin(String namespace, String name, IAttributes attributes)
			throws Exception
	{
		String attrValue = attributes.getValue(attributeName);
		if (attrValue != null)
		{
			Object value = toPropertyValue(attrValue);
			if (value != null)
			{
				Object top = digester.peek();
				
				IRegistry.getIBeansFactory().newBeansUtils().setProperty(top, propertyName, value);
			}
		}
	}
	
	protected abstract Object toPropertyValue(String attributeValue);
	
}
