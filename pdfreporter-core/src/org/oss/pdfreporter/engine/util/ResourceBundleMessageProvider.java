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
 * Gaganis Giorgos - gaganis@users.sourceforge.net
 */
package org.oss.pdfreporter.engine.util;

import java.text.MessageFormat;
import java.util.HashMap;

import org.oss.pdfreporter.text.bundle.ITextBundle;
import org.oss.pdfreporter.text.bundle.StringLocale;
import org.oss.pdfreporter.text.bundle.TextBundle;

/**
 * @author Teodor Danciu (teodord@users.sourceforge.net)
 * @version $Id: ResourceBundleMessageProvider.java 5180 2012-03-29 13:23:12Z teodord $
 */
public class ResourceBundleMessageProvider implements MessageProvider
{
	private final String baseName;
	private final HashMap<StringLocale, ITextBundle> bundles = new HashMap<StringLocale, ITextBundle>();
	
	/**
	 *
	 */
	public ResourceBundleMessageProvider(String baseName)
	{
		this.baseName = baseName;
	}

	/**
	 *
	 */
	public String getMessage(String code, Object[] args, StringLocale locale)
	{
		String pattern = getMessage(code, locale);
		
		return MessageFormat.format(pattern, args);
	}


	/**
	 *
	 */
	public String getMessage(String code, StringLocale locale)
	{
		ITextBundle bundle = bundles.get(locale);
		if (bundle == null)
		{
			bundle = TextBundle.getInstance(baseName, locale);
			bundles.put(locale, bundle);
		}
		
		return bundle.getString(code);
	}
}
