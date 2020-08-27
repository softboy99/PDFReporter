package org.oss.pdfreporter.sql;

import java.io.IOException;
import java.math.BigDecimal;
import java.util.Collection;
import java.util.TreeMap;

import org.oss.pdfreporter.exception.NotImplementedException;

import android.database.sqlite.SQLiteDatabase;

public class SQLitePreparedStatement implements IPreparedStatement {
    private final TreeMap<Integer, String> values;
    private final SQLiteDatabase db;
    private final String sql;

    public SQLitePreparedStatement(final String sql, final SQLiteDatabase db) {
        this.db = db;
        values = new TreeMap<Integer, String>();
        this.sql = sql;
    }

    @Override
    public void close() throws IOException {
    }

    @Override
    public IResultSet executeQuery() throws SQLException {
        final Collection<String> strings = values.values();
        final String[] array = strings.toArray(new String[strings.size()]);
        return new SQLiteResultSet(db.rawQuery(sql, array));
    }

    @Override
    public void setBlob(final int parameterIndex, final IBlob value) throws SQLException {
        throw new NotImplementedException();
    }

    @Override
    public void setBoolean(final int parameterIndex, final boolean value) throws SQLException {
        values.put(parameterIndex, value ? "1" : "0");
    }

    @Override
    public void setByte(final int parameterIndex, final byte value) throws SQLException {
        values.put(parameterIndex, String.valueOf(value));
    }

    @Override
    public void setDate(final int parameterIndex, final IDate value) throws SQLException {
        final String text = String.format("%.4d-%.2d-%.2d 00:00:00.000", value.getYear(), value.getMonth(), value.getDay());
        values.put(parameterIndex, text);
    }

    @Override
    public void setDateTime(final int parameterIndex, final IDateTime value) throws SQLException {
        final String text = String.format("%.4d-%.2d-%.2d %.2d:%.2d:%.2d.000", value.getYear(), value.getMonth(), value.getDay(), value.getHours(), value.getMinutes(), value.getSeconds());
        values.put(parameterIndex, text);
    }

    @Override
    public void setDecimal(final int parameterIndex, final BigDecimal value) throws SQLException {
        values.put(parameterIndex, String.valueOf(value.doubleValue()));
    }

    @Override
    public void setDouble(final int parameterIndex, final double value) throws SQLException {
        values.put(parameterIndex, String.valueOf(value));
    }

    @Override
    public void setFloat(final int parameterIndex, final float value) throws SQLException {
        values.put(parameterIndex, String.valueOf(value));
    }

    @Override
    public void setInt(final int parameterIndex, final int value) throws SQLException {
        values.put(parameterIndex, String.valueOf(value));
    }

    @Override
    public void setLong(final int parameterIndex, final long value) throws SQLException {
        values.put(parameterIndex, String.valueOf(value));
    }

    @Override
    public void setObject(final int parameterIndex, final Object value) throws SQLException {
        throw new NotImplementedException();
    }

    @Override
    public void setShort(final int parameterIndex, final short value) throws SQLException {
        values.put(parameterIndex, String.valueOf(value));
    }

    @Override
    public void setString(final int parameterIndex, final String value) throws SQLException {
        values.put(parameterIndex, value);
    }

    @Override
    public void setTime(final int parameterIndex, final ITime value) throws SQLException {
        final String text = String.format("%.4d-%.2d-%.2d %.2d:%.2d:%.2d.000", 0, 1, 1, value.getHours(), value.getMinutes(), value.getSeconds());
        values.put(parameterIndex, text);
    }

    @Override
    public void setTimestamp(final int parameterIndex, final ITimestamp value) throws SQLException {
        values.put(parameterIndex, String.valueOf(value.getMilliseconds()));
    }

    @Override
    public void setNull(final int parameterIndex, final SqlType type) throws SQLException {
        values.put(parameterIndex, "NULL");
    }

    @Override
    public void cancel() throws SQLException {
    }

}
