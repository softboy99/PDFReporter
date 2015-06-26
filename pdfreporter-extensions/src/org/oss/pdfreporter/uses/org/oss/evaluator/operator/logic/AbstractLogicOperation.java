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
package org.oss.pdfreporter.uses.org.oss.evaluator.operator.logic;

import org.oss.pdfreporter.uses.org.oss.evaluator.function.Function;
import org.oss.pdfreporter.uses.org.oss.evaluator.function.FunctionArgument;
import org.oss.pdfreporter.uses.org.oss.evaluator.operator.AbstractOperator;

public abstract class AbstractLogicOperation extends AbstractOperator {

	public AbstractLogicOperation(String name, int numberOfParameters, Precedence precedence) {
		super(name, numberOfParameters, Function.Associativity.LEFT, precedence);
	}

	protected void assertBoolean(FunctionArgument<?>... args) throws IllegalArgumentException {
		for (FunctionArgument<?> arg : args) {
			if (!(arg.getType()==FunctionArgument.ArgumentType.BOOLEAN) ) {
				throw new IllegalArgumentException(String.format("operator supports only boolean arguments and not %s", arg.getType()));
			}
		}
	}

}