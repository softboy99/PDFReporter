/*******************************************************************************
 * Copyright (c) 2013 Open Software Solutions GmbH.
 * All rights reserved. This program and the accompanying materials
 * are made available under the terms of the GNU Lesser Public License v3.0
 * which accompanies this distribution, and is available at
 * http://www.gnu.org/licenses/lgpl-3.0.html
 *
 * Contributors:
 *     Open Software Solutions GmbH - initial API and implementation
 ******************************************************************************/
package org.oss.pdfreporter.compilers.jshuntingyard.functions;

import java.util.Locale;

import org.oss.pdfreporter.text.bundle.StringLocale;
import org.oss.pdfreporter.uses.org.oss.jshuntingyard.evaluator.AbstractOneArgFunctionElement;
import org.oss.pdfreporter.uses.org.oss.jshuntingyard.evaluator.FunctionArgumentFactory;
import org.oss.pdfreporter.uses.org.oss.jshuntingyard.evaluator.FunctionElementArgument;

/**
 * Date to String
 *
 */
public class DisplayName extends AbstractOneArgFunctionElement<String,StringLocale>  {

	/**
	 *
	 */
	public DisplayName() {
		super("displayName", Precedence.USERFUNCTION);
	}


	@Override
	public boolean isUserFunction() {
		return true;
	}

	/* (non-Javadoc)
	 * @see org.oss.jshuntingyard.evaluator.AbstractOneArgFunctionElement#execute(org.oss.jshuntingyard.evaluator.FunctionElementArgument)
	 */
	protected FunctionElementArgument<String> execute(FunctionElementArgument<StringLocale> a) throws IllegalArgumentException {
		Locale locale = a.getValue().toLocale();
		return FunctionArgumentFactory.createString(locale.getDisplayName(locale));
	}
}