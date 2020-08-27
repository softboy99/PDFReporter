/**
 * Copyright [2015] [Open Software Solutions GmbH]
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 * 		http://www.apache.org/licenses/LICENSE-2.0
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 *
 */
package org.oss.pdfreporter.compilers.jshuntingyard.functions;

import org.oss.pdfreporter.uses.org.oss.jshuntingyard.evaluator.AbstractFunctionElement;
import org.oss.pdfreporter.uses.org.oss.jshuntingyard.evaluator.FunctionArgumentFactory;
import org.oss.pdfreporter.uses.org.oss.jshuntingyard.evaluator.FunctionElementArgument;

/**
 *returns a formatted "today".
 */
public class IsNull extends AbstractFunctionElement {


	public IsNull() {
		super("isNull", 1, Precedence.USERFUNCTION);
	}


	@Override
	public boolean isUserFunction() {
		return true;
	}




	@Override
	public FunctionElementArgument<?> execute(
			FunctionElementArgument<?>... args) throws IllegalArgumentException {
		assertNumArgs(args);
		return FunctionArgumentFactory.createObject(args[0].getValue()==null);
	}
}
