/*******************************************************************************
 * Copyright (c) 2015 Open Software Solutions GmbH.
 * All rights reserved. This program and the accompanying materials
 * are made available under the terms of the GNU Lesser Public License v3.0
 * which accompanies this distribution, and is available at
 * http://www.gnu.org/licenses/lgpl-3.0.html
 *
 * Contributors:
 *     Open Software Solutions GmbH
 ******************************************************************************/
package org.oss.pdfreporter.beans;

import java.lang.reflect.Field;
import java.lang.reflect.InvocationTargetException;
import java.lang.reflect.Modifier;
import java.util.Iterator;
import java.util.Map;

import org.oss.pdfreporter.commons.beans.IBeansUtils;
import org.oss.pdfreporter.exception.ConversionException;


public class BeanUtils implements IBeansUtils {

	@Override
	public void setProperty(Object top, String propertyName, Object value) {
		if (top != null) {
			try {
				Field field = getDeclarecField(top.getClass(),propertyName);
				if (field != null) {
					field.setAccessible(true);
					Class<?> clazz = field.getType();
					if (clazz == value.getClass()) {
						field.set(top, value);
					} else if (clazz==int.class || clazz==Integer.class) {
						field.set(top, Integer.parseInt((String)value));
					} else {
						throw new IllegalArgumentException("Typ= " + clazz.getSimpleName() + " is not supported");
					}
				}
			} catch (Exception e) {
				throw new ConversionException("Cannot set Property " + propertyName + " on Object "
						+ top, e);
			}
		}

	}

	@Override
	public Object getProperty(Object top, String propertyName) {
		try {
			Field field = getDeclarecField(top.getClass(),propertyName);
			field.setAccessible(true);
			return field.get(top);
		} catch (Exception e) {
			throw new ConversionException("Cannot get Property " + propertyName + " from Object "
					+ top, e);
		}
	}
	
	

	@Override
	public boolean isWriteable(Object bean, String name) {
		try {
			Field field = getDeclarecField(bean.getClass(),name);
			return !Modifier.isFinal(field.getModifiers());
		} catch (Exception e) {
			throw new ConversionException("Cannot get Property " + name + " from Object " + bean, e);
		}
	}

	@Override
	public boolean hasProperty(Object bean, String name) {
		return getDeclarecField(bean.getClass(),name)!=null;
	}
		

	@SuppressWarnings("rawtypes")
	@Override
	public void populate(Object bean, Map properties) throws IllegalAccessException,
			InvocationTargetException {

		// Do nothing unless both arguments have been specified
		if ((bean == null) || (properties == null)) {
			return;
		}

		// Loop through the property name/value pairs to be set
		Iterator entries = properties.entrySet().iterator();
		while (entries.hasNext()) {

			// Identify the property name and value(s) to be assigned
			Map.Entry entry = (Map.Entry) entries.next();
			String name = (String) entry.getKey();
			if (name == null) {
				continue;
			}

			// Perform the assignment for this property
			setProperty(bean, name, entry.getValue());
		}
	}

	private Field getDeclarecField(Class<?> clazz, String fieldName) {
		try {
			return clazz==null ? null : clazz.getDeclaredField(fieldName);
		} catch (NoSuchFieldException e) {
			return getDeclarecField(clazz.getSuperclass(),fieldName);
		} catch (SecurityException e) {
			throw new ConversionException("Cannot get Property " + fieldName + " from Class " + clazz, e);
		}
	}
	
}
