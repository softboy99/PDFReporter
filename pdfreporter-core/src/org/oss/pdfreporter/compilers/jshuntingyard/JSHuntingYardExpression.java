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
package org.oss.pdfreporter.compilers.jshuntingyard;

import java.util.ArrayList;
import java.util.Collection;
import java.util.HashMap;
import java.util.List;
import java.util.Map;
import java.util.logging.Level;
import java.util.logging.Logger;

import org.oss.pdfreporter.compilers.ExpressionEvaluationException;
import org.oss.pdfreporter.compilers.ExpressionParseException;
import org.oss.pdfreporter.compilers.IExpressionChunk;
import org.oss.pdfreporter.compilers.IExpressionChunk.ExpresionType;
import org.oss.pdfreporter.compilers.IVariable;
import org.oss.pdfreporter.compilers.IVariableExpressionChunk;
import org.oss.pdfreporter.compilers.jshuntingyard.functions.BooleanConverter;
import org.oss.pdfreporter.compilers.jshuntingyard.functions.BytesAsStream;
import org.oss.pdfreporter.compilers.jshuntingyard.functions.Conditional;
import org.oss.pdfreporter.compilers.jshuntingyard.functions.CurrentDate;
import org.oss.pdfreporter.compilers.jshuntingyard.functions.DateStringConverter;
import org.oss.pdfreporter.compilers.jshuntingyard.functions.DecodeBase64Bytes;
import org.oss.pdfreporter.compilers.jshuntingyard.functions.DecodeBase64String;
import org.oss.pdfreporter.compilers.jshuntingyard.functions.DisplayName;
import org.oss.pdfreporter.compilers.jshuntingyard.functions.DoubleStringConverter;
import org.oss.pdfreporter.compilers.jshuntingyard.functions.FloatStringConverter;
import org.oss.pdfreporter.compilers.jshuntingyard.functions.IntegerStringConverter;
import org.oss.pdfreporter.compilers.jshuntingyard.functions.IsNull;
import org.oss.pdfreporter.compilers.jshuntingyard.functions.LongStringConverter;
import org.oss.pdfreporter.compilers.jshuntingyard.functions.Message;
import org.oss.pdfreporter.compilers.jshuntingyard.functions.MessageWithArgs;
import org.oss.pdfreporter.compilers.jshuntingyard.functions.SubDataSource;
import org.oss.pdfreporter.compilers.jshuntingyard.functions.ToMilliseconds;
import org.oss.pdfreporter.compilers.jshuntingyard.functions.TruncateDateTo;
import org.oss.pdfreporter.compilers.util.ResultUtil;
import org.oss.pdfreporter.uses.org.oss.jshuntingyard.evaluator.FunctionElement;
import org.oss.pdfreporter.uses.org.oss.jshuntingyard.evaluator.FunctionElementArgument;
import org.oss.pdfreporter.uses.org.oss.jshuntingyard.evaluator.interpreter.Evaluator;
import org.oss.pdfreporter.uses.org.oss.jshuntingyard.evaluator.interpreter.Variable;


public class JSHuntingYardExpression {


	private final static Logger logger = Logger.getLogger(JSHuntingYardExpression.class.getName());
	private final Map<String,IVariable> variables;
	private final Collection<FunctionElement> userFunctions;
	private Evaluator newEval;
	private Evaluator oldEval;
	private String expression;

	public static JSHuntingYardExpression newInstance(List<IExpressionChunk> chunks) throws ExpressionParseException, ExpressionEvaluationException {
		JSHuntingYardExpression expression = new JSHuntingYardExpression();
		expression.parse(chunks);
		return expression;
	}

	public JSHuntingYardExpression() {
		this.variables = new HashMap<String, IVariable>();
		this.userFunctions = new ArrayList<FunctionElement>();
		putFunction(new BooleanConverter());
		putFunction(new IntegerStringConverter());
		putFunction(new LongStringConverter());
		putFunction(new FloatStringConverter());
		putFunction(new DoubleStringConverter());
		putFunction(new DateStringConverter());
		putFunction(new TruncateDateTo());
		putFunction(new Conditional());
		putFunction(new CurrentDate());
		putFunction(new IsNull());
		putFunction(new Message());
		putFunction(new MessageWithArgs());
		putFunction(new DisplayName());
		putFunction(new ToMilliseconds());
		putFunction(new SubDataSource());
		putFunction(new BytesAsStream());
		putFunction(new DecodeBase64Bytes());
		putFunction(new DecodeBase64String());
	}

	private void putFunction(FunctionElement function) {
		userFunctions.add(function);
	}

	private void parse(List<IExpressionChunk> chunks) throws ExpressionParseException, ExpressionEvaluationException  {
		expression = buildExpression(chunks);

		newEval = new Evaluator();
		newEval.addFunctions(userFunctions);
		newEval.parse(expression);
		bindVariables(newEval,variables,false);

		oldEval = new Evaluator();
		oldEval.addFunctions(userFunctions);
		oldEval.parse(expression);
		bindVariables(oldEval,variables,true);
	}

	public String getExpression() {
		return expression;
	}
	
	private String buildExpression(List<IExpressionChunk> chunks) throws ExpressionEvaluationException {
		StringBuffer sb = new StringBuffer();
		String name;
		IVariable variable;
		for (IExpressionChunk chunk : chunks) {
			switch (chunk.getType()) {
			case TYPE_FIELD:
			case TYPE_PARAMETER:
			case TYPE_VARIABLE:
				name = getKey(chunk.getType(),chunk.getText());
				sb.append("$");
				sb.append(name);
				variable = ((IVariableExpressionChunk)chunk).getVariable();
				variables.put(name, variable);
				break;
			case TYPE_TEXT:
			case TYPE_RESOURCE:
				sb.append(chunk.getText());
				break;
			}
		}
		return sb.toString();
	}


	private String getKey(ExpresionType type, String name) {
		switch (type.ordinal()) {
		case 1:
			return "P_" + name;
		case 2:
			return "F_" + name;
		case 3:
			return "V_" + name;
		case 4:
			return "R_" + name;
		default:
			return "T_" + name;
		}
	}


	public Object evaluateValue() throws ExpressionEvaluationException {
		try {
			FunctionElementArgument<?> evaluate = this.newEval.evaluate();
			logger.log(Level.FINER, "Evaluating new exprsseion: {0} to {1} of type: {2}", new Object[] {expression,evaluate.getValue(),evaluate.getType()});
			return  evaluate.getValue();
		} catch (RuntimeException e) {
			throw new ExpressionEvaluationException("Error while evaluating '" + expression + "' with variables: " + ResultUtil.getDump(variables.values()),e);
		}
	}

	public Object evaluateOldValue() throws ExpressionEvaluationException {
		try {
			FunctionElementArgument<?> evaluate = this.oldEval.evaluate();
			logger.log(Level.FINER, "Evaluating old exprsseion: {0} to {1} of type: {2}", new Object[] {expression,evaluate.getValue(),evaluate.getType()});
			return  evaluate.getValue();
		} catch (RuntimeException e) {
			throw new ExpressionEvaluationException("Error while evaluating '" + expression + "' with variables: " + ResultUtil.getDump(variables.values()),e);
		}
	}

	private void bindVariables(Evaluator evaluator, Map<String,IVariable> variables, boolean oldValue) {
		for (Map.Entry<String,IVariable> entry : variables.entrySet()) {
			if (oldValue) {
				evaluator.bindVariable(new OldValue(entry.getKey(),entry.getValue()));
			} else {
				evaluator.bindVariable(new NewValue(entry.getKey(),entry.getValue()));
			}
		}
	}

	private static class NewValue implements Variable {

		private final String name;
		private final IVariable delegate;

		NewValue(String name, IVariable variable){
			this.name = name;
			this.delegate = variable;
		}
		@Override
		public String getName() {
			return name;
		}

		@Override
		public Object getValue() {
			try {
				Object value = delegate.getValue();
				return value==null ? delegate.getEsimatedValue() : value;
			} catch (ExpressionEvaluationException e) {
				throw new RuntimeException(e);
			}
		}

	}

	private static class OldValue implements Variable {

		private final String name;
		private final IVariable delegate;

		OldValue(String name, IVariable variable){
			this.name = name;
			this.delegate = variable;
		}
		@Override
		public String getName() {
			return name;
		}

		@Override
		public Object getValue() {
			try {
				Object value = delegate.getOldValue();
				return value==null ? delegate.getEsimatedValue() : value;
			} catch (ExpressionEvaluationException e) {
				throw new RuntimeException(e);
			}
		}

	}

}
