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

import org.oss.pdfreporter.uses.org.oss.jshuntingyard.evaluator.AbstractOneArgFunctionElement;
import org.oss.pdfreporter.uses.org.oss.jshuntingyard.evaluator.FunctionArgumentFactory;
import org.oss.pdfreporter.uses.org.oss.jshuntingyard.evaluator.FunctionElementArgument;

/**
 *Integer to String
 *
 */
public class IntegerStringConverter extends AbstractOneArgFunctionElement<String,Integer> {

	/**
	 *
	 */
	public IntegerStringConverter() {
		super("intString", Precedence.USERFUNCTION);
	}


	@Override
	public boolean isUserFunction() {
		return true;
	}

	/*
	 * @see org.oss.evaluator.function.string.AbstractStringOperatorAssociativityLeftOneArg#execute(org.oss.evaluator.function.FunctionArgument)
	 */
	@Override
	protected FunctionElementArgument<String> execute(FunctionElementArgument<Integer> a) throws IllegalArgumentException {
		return FunctionArgumentFactory.createString(a.getValue().toString());
	}
}
