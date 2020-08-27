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
package org.oss.pdfreporter.sql;

import java.io.IOException;
import java.math.BigDecimal;
import java.sql.Types;


public class PreparedStatement implements IPreparedStatement {

	private final java.sql.PreparedStatement delegate;
	
	
	PreparedStatement(final java.sql.PreparedStatement delegate) {
		super();
		this.delegate = delegate;
	}

	@Override
	public IResultSet executeQuery() throws SQLException {
		try {
			return new ResultSet(delegate.executeQuery());
		} catch (final java.sql.SQLException e) {
			throw new SQLException(e);
		}
	}

	@Override
	public void setBlob(final int parameterIndex, final IBlob value) throws SQLException {
		try {
			delegate.setBlob(parameterIndex, value.getInputStream());
		} catch (final java.sql.SQLException e) {
			throw new SQLException(e);
		}
	}

	@Override
	public void setBoolean(final int parameterIndex, final boolean value)
			throws SQLException {
		try {
			delegate.setBoolean(parameterIndex, value);
		} catch (final java.sql.SQLException e) {
			throw new SQLException(e);
		}		
	}

	@Override
	public void setByte(final int parameterIndex, final byte value) throws SQLException {
		try {
			delegate.setByte(parameterIndex, value);
		} catch (final java.sql.SQLException e) {
			throw new SQLException(e);
		}
	}

	
	@Override
	public void setDate(final int parameterIndex, final IDate value) throws SQLException {
		try {
			delegate.setDate(parameterIndex,toDate(value.getDate()));
		} catch (final java.sql.SQLException e) {
			throw new SQLException(e);
		}
	}

	@Override
	public void setDateTime(final int parameterIndex, final IDateTime value)
			throws SQLException {
		try {
			delegate.setDate(parameterIndex,toDate(value.getDate()));
		} catch (final java.sql.SQLException e) {
			throw new SQLException(e);
		}
	}

	@Override
	public void setDecimal(final int parameterIndex, final BigDecimal value)
			throws SQLException {
		try {
			delegate.setBigDecimal(parameterIndex, value);
		} catch (final java.sql.SQLException e) {
			throw new SQLException(e);
		}
	}

	@Override
	public void setDouble(final int parameterIndex, final double value) throws SQLException {
		try {
			delegate.setDouble(parameterIndex, value);
		} catch (final java.sql.SQLException e) {
			throw new SQLException(e);
		}
	}

	@Override
	public void setFloat(final int parameterIndex, final float value) throws SQLException {
		try {
			delegate.setFloat(parameterIndex, value);
		} catch (final java.sql.SQLException e) {
			throw new SQLException(e);
		}
	}

	@Override
	public void setInt(final int parameterIndex, final int value) throws SQLException {
		try {
			delegate.setInt(parameterIndex, value);
		} catch (final java.sql.SQLException e) {
			throw new SQLException(e);
		}
	}

	@Override
	public void setLong(final int parameterIndex, final long value) throws SQLException {
		try {
			delegate.setLong(parameterIndex, value);
		} catch (final java.sql.SQLException e) {
			throw new SQLException(e);
		}
	}

	@Override
	public void setObject(final int parameterIndex, final Object value) throws SQLException {
		try {
			delegate.setObject(parameterIndex, value);
		} catch (final java.sql.SQLException e) {
			throw new SQLException(e);
		}
		
	}

	@Override
	public void setShort(final int parameterIndex, final short value) throws SQLException {
		try {
			delegate.setShort(parameterIndex, value);
		} catch (final java.sql.SQLException e) {
			throw new SQLException(e);
		}
	}

	@Override
	public void setString(final int parameterIndex, final String value) throws SQLException {
		try {
			delegate.setString(parameterIndex, value);
		} catch (final java.sql.SQLException e) {
			throw new SQLException(e);
		}
	}

	@Override
	public void setTime(final int parameterIndex, final ITime value) throws SQLException {
		try {
			delegate.setTime(parameterIndex, toTime(value.getDate()));
		} catch (final java.sql.SQLException e) {
			throw new SQLException(e);
		}
	}

	@Override
	public void setTimestamp(final int parameterIndex, final ITimestamp value)
			throws SQLException {
		try {
			delegate.setTimestamp(parameterIndex, toTimestamp(value.getMilliseconds()));
		} catch (final java.sql.SQLException e) {
			throw new SQLException(e);
		}
	}

	@Override
	public void setNull(final int parameterIndex, final SqlType type) throws SQLException {
		try {
			delegate.setNull(parameterIndex, toSqlType(type));
		} catch (final java.sql.SQLException e) {
			throw new SQLException(e);
		}
	}

	@Override
	public void close() throws IOException {
		try {
			delegate.close();
		} catch (final java.sql.SQLException e) {
			throw new IOException(e);
		}
	}

	@Override
	public void cancel() throws SQLException {
		try {
			delegate.cancel();
		} catch (final java.sql.SQLException e) {
			throw new SQLException(e);
		}
	}
	
	private static java.sql.Date toDate(final java.util.Date date) {
		return new java.sql.Date(date.getTime());
	}
	
	private static java.sql.Time toTime(final java.util.Date date) {
		return new java.sql.Time(date.getTime());
	}
	
	private static java.sql.Timestamp toTimestamp(final long milliseconds) {
		return new java.sql.Timestamp(milliseconds);
	}
	
	private static int toSqlType(final SqlType type) throws SQLException {
		switch(type) {
		case BIGINT:
			return Types.BIGINT;
		case CHAR:
			return Types.CHAR;
		case DATE:
			return Types.DATE;
		case DATETIME:
			return Types.DATE;
		case DECIMAL:
			return Types.DECIMAL;
		case DOUBLE:
			return Types.DOUBLE;
		case FLOAT:
			return Types.FLOAT;
		case INTEGER:
			return Types.INTEGER;
		case MEDIUMINT:
			return Types.INTEGER;
		case SMALLINT:
			return Types.SMALLINT;
		case NUMERIC:
			return Types.NUMERIC;
		case TIME:
			return Types.TIME;
		case TIMESTAMP:
			return Types.TIMESTAMP;
		case TINYINT:
			return Types.TINYINT;
		case VARCHAR:
			return Types.VARCHAR;
			default:
				throw new SQLException("Type: " + type + " cannot be set to null");
		}
	}

}
