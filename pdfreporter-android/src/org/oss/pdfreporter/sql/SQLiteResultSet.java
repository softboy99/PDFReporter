package org.oss.pdfreporter.sql;

import java.io.IOException;
import java.math.BigDecimal;
import java.text.ParseException;
import java.text.SimpleDateFormat;
import java.util.Date;

import org.oss.pdfreporter.exception.NotImplementedException;
import org.oss.pdfreporter.registry.ApiRegistry;

import android.database.Cursor;

public class SQLiteResultSet implements IResultSet {

    public final static String FORMAT_STRING = "yyyy-MM-dd HH:mm:ss";
    private Cursor cursor;
    private int lastColumnIndex = 0;

    public SQLiteResultSet(Cursor cursor) {
        this.cursor = cursor;
    }

    @Override
    public void close() throws IOException {
        cursor.close();
    }

    @Override
    public boolean next() throws SQLException {
        return cursor.moveToNext();
    }

    @Override
    public boolean getBoolean(int columnIndex) throws SQLException {
        lastColumnIndex = columnIndex;
        return cursor.getInt(columnIndex - 1) != 0;
    }

    @Override
    public byte getByte(int columnIndex) throws SQLException {
        lastColumnIndex = columnIndex;
        return (byte) cursor.getInt(columnIndex - 1);
    }

    @Override
    public double getDouble(int columnIndex) throws SQLException {
        lastColumnIndex = columnIndex;
        return cursor.getDouble(columnIndex - 1);
    }

    @Override
    public float getFloat(int columnIndex) throws SQLException {
        lastColumnIndex = columnIndex;
        return cursor.getFloat(columnIndex - 1);
    }

    @Override
    public int getInt(int columnIndex) throws SQLException {
        lastColumnIndex = columnIndex;
        return cursor.getInt(columnIndex - 1);
    }

    @Override
    public long getLong(int columnIndex) throws SQLException {
        lastColumnIndex = columnIndex;
        return cursor.getLong(columnIndex - 1);
    }

    @Override
    public short getShort(int columnIndex) throws SQLException {
        lastColumnIndex = columnIndex;
        return cursor.getShort(columnIndex - 1);
    }

    @Override
    public String getString(int columnIndex) throws SQLException {
        lastColumnIndex = columnIndex;
        return cursor.getString(columnIndex - 1);
    }

    @Override
    public BigDecimal getDecimal(int columnIndex) throws SQLException {
        lastColumnIndex = columnIndex;
        return new BigDecimal(cursor.getDouble(columnIndex - 1));
    }

    @Override
    public IDate getDate(int columnIndex) throws SQLException {
        lastColumnIndex = columnIndex;
		switch (getMetaData().getColumnType(columnIndex)) {
		case NULL:
			return null;
		case VARCHAR:
			try {
				return ApiRegistry.getSqlFactory().newDate(new SimpleDateFormat(FORMAT_STRING).parse(cursor.getString(columnIndex - 1)));
			} catch (ParseException e) {
				SQLException error = new SQLException("Error parsing date");
				error.initCause(e);
				throw error;
			}
		case FLOAT:
			throw new SQLException("No Calendar support for Date as float");
		default: // SQLITE_INTEGER:
			return ApiRegistry.getSqlFactory().newDate(new Date(cursor.getLong(columnIndex - 1)));
		}
    }

    @Override
    public ITimestamp getTimestamp(int columnIndex) throws SQLException {
        lastColumnIndex = columnIndex;
		switch (getMetaData().getColumnType(columnIndex)) {
		case NULL:
			return null;
		case VARCHAR:
			try {
                Date date = new SimpleDateFormat(FORMAT_STRING).parse(cursor.getString(columnIndex - 1));
                return ApiRegistry.getSqlFactory().newTimestamp(date.getTime());
                			} catch (ParseException e) {
				SQLException error = new SQLException("Error parsing date");
				error.initCause(e);
				throw error;
			}
		case FLOAT:
			throw new SQLException("No Calendar support for Timestamp as float");
		default: // SQLITE_INTEGER:
            return ApiRegistry.getSqlFactory().newTimestamp(cursor.getLong(columnIndex - 1));
		}
    }

    @Override
    public ITime getTime(int columnIndex) throws SQLException {
        lastColumnIndex = columnIndex;
		switch (getMetaData().getColumnType(columnIndex)) {
		case NULL:
			return null;
		case VARCHAR:
			try {
				return ApiRegistry.getSqlFactory().newTime(new SimpleDateFormat(FORMAT_STRING).parse(cursor.getString(columnIndex - 1)));
			} catch (ParseException e) {
				SQLException error = new SQLException("Error parsing date");
				error.initCause(e);
				throw error;
			}
		case FLOAT:
			throw new SQLException("No Calendar support for Time as float");
		default: // SQLITE_INTEGER:
			return ApiRegistry.getSqlFactory().newTime(new Date(cursor.getLong(columnIndex - 1)));
		}
    }

	@Override
	public IDateTime getDateTime(int columnIndex) throws SQLException {
		lastColumnIndex = columnIndex;
		switch (getMetaData().getColumnType(columnIndex)) {
		case NULL:
			return null;
		case VARCHAR:
			try {
				return ApiRegistry.getSqlFactory().newDateTime(new SimpleDateFormat(FORMAT_STRING).parse(cursor.getString(columnIndex - 1)));
			} catch (ParseException e) {
				SQLException error = new SQLException("Error parsing date");
				error.initCause(e);
				throw error;
			}
		case FLOAT:
			throw new SQLException("No Calendar support for DateTime as float");
		default: // SQLITE_INTEGER:
			return ApiRegistry.getSqlFactory().newDateTime(new Date(cursor.getLong(columnIndex - 1)));
		}
	}

    @Override
    public IBlob getBlob(int columnIndex) throws SQLException {
        lastColumnIndex = columnIndex;
        return ApiRegistry.getSqlFactory().newBlob(cursor.getBlob(columnIndex - 1));
    }

    @Override
    public Object getObject(int columnIndex) throws SQLException {
        lastColumnIndex = columnIndex;
        throw new NotImplementedException();
    }

    @Override
    public IResultMetaData getMetaData() throws SQLException {
        return new SQLiteMetaData(cursor);
    }

    @Override
    public boolean wasNull() throws SQLException {
        return cursor.isNull(lastColumnIndex - 1);
    }

}
