//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/libcore/luni/src/main/java/java/sql/PreparedStatement.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_JavaSqlPreparedStatement")
#ifdef RESTRICT_JavaSqlPreparedStatement
#define INCLUDE_ALL_JavaSqlPreparedStatement 0
#else
#define INCLUDE_ALL_JavaSqlPreparedStatement 1
#endif
#undef RESTRICT_JavaSqlPreparedStatement

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if !defined (JavaSqlPreparedStatement_) && (INCLUDE_ALL_JavaSqlPreparedStatement || defined(INCLUDE_JavaSqlPreparedStatement))
#define JavaSqlPreparedStatement_

#define RESTRICT_JavaSqlStatement 1
#define INCLUDE_JavaSqlStatement 1
#include "java/sql/Statement.h"

@class IOSByteArray;
@class IOSObjectArray;
@class JavaIoInputStream;
@class JavaIoReader;
@class JavaMathBigDecimal;
@class JavaNetURL;
@class JavaSqlDate;
@class JavaSqlTime;
@class JavaSqlTimestamp;
@class JavaUtilCalendar;
@protocol JavaSqlArray;
@protocol JavaSqlBlob;
@protocol JavaSqlClob;
@protocol JavaSqlNClob;
@protocol JavaSqlParameterMetaData;
@protocol JavaSqlRef;
@protocol JavaSqlResultSet;
@protocol JavaSqlResultSetMetaData;
@protocol JavaSqlRowId;
@protocol JavaSqlSQLXML;

/*!
 @brief An interface for a precompiled SQL Statement.
 <p>
 An SQL Statement is put into a <code>PreparedStatement</code> and is precompiled
 so that it can be executed efficiently multiple times.
 <p>
 Setter methods are supplied in the <code>PreparedStatement</code> interface for
 the setting of <code>IN</code> parameters for the statement. The setter method
 used for each <code>IN</code> parameter must match the parameter's type.
 */
@protocol JavaSqlPreparedStatement < JavaSqlStatement, NSObject, JavaObject >

/*!
 @brief Add a set of parameters to the <code>PreparedStatement</code>'s command batch.
 @throws SQLException
 if a database error happens.
 */
- (void)addBatch;

/*!
 @brief Clear the current parameter values.
 <p>
 Typically, parameter values are retained for multiple executions of the
 <code>Statement</code>. Setting a parameter value replaces the previous value. This
 method clears the values for all parameters, releasing all resources used
 by those parameters.
 @throws SQLException
 if a database error happens.
 */
- (void)clearParameters;

/*!
 @brief Executes the SQL statement in this <code>PreparedStatement</code>.
 <p>
 A <code>PreparedStatement</code> may return multiple results. The execute
 method executes the <code>PreparedStatement</code> and returns a flag
 indicating the kind of result produced by the action. The methods
 <code>getResultSet</code> or <code>getUpdateCount</code> are used to retrieve
 the first result, and the second and subsequent results are
 retrieved with <code>getMoreResults</code>.
 @return <code>true</code> if the result of the execution is a <code>ResultSet</code>
 , <code>false</code> if there is no result or if the result
 is an update count.
 @throws SQLException
 if a database error happens.
 */
- (jboolean)execute;

/*!
 @brief Executes the SQL query in the <code>PreparedStatement</code> and returns the
 <code>ResultSet</code> generated by the query.
 @return the <code>ResultSet</code> generated by the query, never <code>null</code>.
 @throws SQLException
 if a database error happens or if the SQL statement does not
 produce a <code>ResultSet</code>.
 */
- (id<JavaSqlResultSet>)executeQuery;

/*!
 @brief Invokes the SQL command contained within the prepared statement.
 This
 must be <code>INSERT</code>, <code>UPDATE</code>, <code>DELETE</code>, or a command that
 returns nothing.
 @return the number of affected rows for <code>INSERT</code>, <code>UPDATE</code> or <code>DELETE</code>
  statements, <code>0</code> for statements that return nothing.
 @throws SQLException
 if a database error happens or if the SQL statement returns a
 <code>ResultSet</code>.
 */
- (jint)executeUpdate;

/*!
 @brief Returns a <code>ResultSetMetaData</code> describing the <code>ResultSet</code>
  that would be produced by execution of the <code>PreparedStatement</code>.
 <p>
 It is possible to know the metadata for the <code>ResultSet</code> without
 executing the <code>PreparedStatement</code>, because the <code>PreparedStatement</code>
  is precompiled. As a result the metadata can be
 queried ahead of time without actually executing the statement.
 @return a <code>ResultSetMetaData</code> object with the information about the
 columns of the <code>ResultSet</code>, if the driver can return a
 <code>ResultSetMetaData</code>. <code>null</code> otherwise.
 @throws SQLException
 if there is a database error.
 */
- (id<JavaSqlResultSetMetaData>)getMetaData;

/*!
 @brief Gets information about the parameters of the <code>PreparedStatement</code>.
 @return a <code>ParameterMetaData</code> object which holds information about
 the number, type, and properties of the parameters of this <code>PreparedStatement</code>
 .
 @throws SQLException
 if a database error happens.
 */
- (id<JavaSqlParameterMetaData>)getParameterMetaData;

/*!
 @brief Sets the value of a specified parameter to the supplied <code>Array</code>.
 @param parameterIndex
 the parameter number index, where the first parameter has
 index 1.
 @param theArray
 a <code>java.sql.Array</code> giving the new value of the parameter at <code>parameterIndex</code>
 .
 @throws SQLException
 if a database error happens.
 - seealso: Array
 */
- (void)setArrayWithInt:(jint)parameterIndex
       withJavaSqlArray:(id<JavaSqlArray>)theArray;

/*!
 @brief Sets the value of a specified parameter to the content of a supplied
 <code>InputStream</code>, which has a specified number of bytes.
 <p>
 This is a good method for setting an SQL <code>LONGVARCHAR</code> parameter
 where the length of the data is large. Data is read from the <code>InputStream</code>
  until end-of-file is reached or the specified number of
 bytes is copied.
 @param parameterIndex
 the parameter number index, where the first parameter has
 index 1.
 @param theInputStream
 the ASCII <code>InputStream</code> carrying the data to which the
 parameter at <code>parameterIndex</code> is set.
 @param length
 the number of bytes in the <code>InputStream</code> to copy to the
 parameter.
 @throws SQLException
 if a database error happens.
 */
- (void)setAsciiStreamWithInt:(jint)parameterIndex
        withJavaIoInputStream:(JavaIoInputStream *)theInputStream
                      withInt:(jint)length;

/*!
 @brief Sets the value of a specified parameter to a supplied <code>java.math.BigDecimal</code>
  value.
 @param parameterIndex
 the parameter number index, where the first parameter has
 index 1.
 @param theBigDecimal
 the value to which the parameter at <code>parameterIndex</code> is
 set.
 @throws SQLException
 if a database error happens.
 - seealso: java.math.BigDecimal
 */
- (void)setBigDecimalWithInt:(jint)parameterIndex
      withJavaMathBigDecimal:(JavaMathBigDecimal *)theBigDecimal;

/*!
 @brief Sets the value of a specified parameter to the content of a supplied
 binary <code>InputStream</code>, which has a specified number of bytes.
 <p>
 Use this method when a large amount of data needs to be set into a
 <code>LONGVARBINARY</code> parameter.
 @param parameterIndex
 the parameter number index, where the first parameter has
 index 1.
 @param theInputStream
 the binary <code>InputStream</code> carrying the data to update the
 parameter.
 @param length
 the number of bytes in the <code>InputStream</code> to copy to the
 parameter.
 @throws SQLException
 if a database error happens.
 */
- (void)setBinaryStreamWithInt:(jint)parameterIndex
         withJavaIoInputStream:(JavaIoInputStream *)theInputStream
                       withInt:(jint)length;

/*!
 @brief Sets the value of a specified parameter to the given <code>Blob</code> object.
 @param parameterIndex
 the parameter number index, where the first parameter has
 index 1.
 @param theBlob
 the <code>java.sql.Blob</code> to which the parameter at <code>parameterIndex</code>
  is set.
 @throws SQLException
 if a database error happens.
 - seealso: Blob
 */
- (void)setBlobWithInt:(jint)parameterIndex
       withJavaSqlBlob:(id<JavaSqlBlob>)theBlob;

/*!
 @brief Sets the value of a specified parameter to a supplied <code>boolean</code>
 value.
 @param parameterIndex
 the parameter number index, where the first parameter has
 index 1.
 @param theBoolean
 the boolean value to which the parameter at <code>parameterIndex</code>
  is set.
 @throws SQLException
 if a database error happens.
 */
- (void)setBooleanWithInt:(jint)parameterIndex
              withBoolean:(jboolean)theBoolean;

/*!
 @brief Sets the value of a specified parameter to a supplied <code>byte</code> value.
 @param parameterIndex
 the parameter number index, where the first parameter has
 index 1.
 @param theByte
 the byte value to which the parameter at <code>parameterIndex</code>
  is set.
 @throws SQLException
 if a database error happens.
 */
- (void)setByteWithInt:(jint)parameterIndex
              withByte:(jbyte)theByte;

/*!
 @brief Sets the value of a specified parameter to a supplied array of bytes.
 The
 array is mapped to a <code>VARBINARY</code> or <code>LONGVARBINARY</code> in the
 database.
 @param parameterIndex
 the parameter number index, where the first parameter has
 index 1.
 @param theBytes
 the array of bytes to which the parameter at <code>parameterIndex</code>
  is set.
 @throws SQLException
 if a database error happens.
 */
- (void)setBytesWithInt:(jint)parameterIndex
          withByteArray:(IOSByteArray *)theBytes;

/*!
 @brief Sets the value of a specified parameter to the character content of a
 <code>Reader</code> object, with the specified length of character data.
 <p>
 Data is read from the <code>Reader</code>
  until end-of-file is reached or the specified number of
 characters are copied.
 @param parameterIndex
 the parameter number index, where the first parameter has
 index 1
 @param reader
 the <code>java.io.Reader</code> containing the character data.
 @param length
 the number of characters to be read.
 @throws SQLException
 if a database error happens.
 */
- (void)setCharacterStreamWithInt:(jint)parameterIndex
                 withJavaIoReader:(JavaIoReader *)reader
                          withInt:(jint)length;

/*!
 @brief Sets the value of a specified parameter to the given <code>Clob</code> object.
 @param parameterIndex
 the parameter number index, where the first parameter has
 index 1.
 @param theClob
 a <code>java.sql.Clob</code> holding the data to which the
 parameter at <code>parameterIndex</code> is set.
 @throws SQLException
 if a database error happens.
 */
- (void)setClobWithInt:(jint)parameterIndex
       withJavaSqlClob:(id<JavaSqlClob>)theClob;

/*!
 @brief Sets the value of a specified parameter to a supplied <code>java.sql.Date</code>
  value.
 @param parameterIndex
 the parameter number index, where the first parameter has
 index 1.
 @param theDate
 a <code>java.sql.Date</code> to which the parameter at <code>parameterIndex</code>
  is set.
 @throws SQLException
 if a database error happens.
 */
- (void)setDateWithInt:(jint)parameterIndex
       withJavaSqlDate:(JavaSqlDate *)theDate;

/*!
 @brief Sets the value of a specified parameter to a supplied <code>java.sql.Date</code>
  value, using a supplied <code>Calendar</code> to map the Date.
 The <code>Calendar</code> allows the application to control the timezone used
 to compute the SQL <code>DATE</code> in the database - without the supplied
 <code>Calendar</code>, the driver uses the VM defaults.
 See "<a href="../util/Locale.html#default_locale">Be wary of the default locale</a>".
 @param parameterIndex
 the parameter number index, where the first parameter has
 index 1.
 @param theDate
 a <code>java.sql.Date</code> to which the parameter at <code>parameterIndex</code>
  is set.
 @param cal
 a <code>Calendar</code> to use to construct the SQL <code>DATE</code>
 value.
 @throws SQLException
 if a database error happens.
 - seealso: Date
 - seealso: java.util.Calendar
 */
- (void)setDateWithInt:(jint)parameterIndex
       withJavaSqlDate:(JavaSqlDate *)theDate
  withJavaUtilCalendar:(JavaUtilCalendar *)cal;

/*!
 @brief Sets the value of a specified parameter to a supplied <code>double</code>
 value.
 @param parameterIndex
 the parameter number index, where the first parameter has
 index 1.
 @param theDouble
 the <code>double</code> value to which the parameter at <code>parameterIndex</code>
  is set.
 @throws SQLException
 if a database error happens.
 */
- (void)setDoubleWithInt:(jint)parameterIndex
              withDouble:(jdouble)theDouble;

/*!
 @brief Sets the value of a specified parameter to to a supplied <code>float</code>
 value.
 @param parameterIndex
 the parameter number index, where the first parameter has
 index 1.
 @param theFloat
 the <code>float</code> value to update the parameter.
 @throws SQLException
 if a database error happens.
 */
- (void)setFloatWithInt:(jint)parameterIndex
              withFloat:(jfloat)theFloat;

/*!
 @brief Sets the value of a specified parameter to a supplied <code>int</code> value.
 @param parameterIndex
 the parameter number index, where the first parameter has
 index 1.
 @param theInt
 the <code>int</code> value to which the parameter at <code>parameterIndex</code>
  is set.
 @throws SQLException
 if a database error happens.
 */
- (void)setIntWithInt:(jint)parameterIndex
              withInt:(jint)theInt;

/*!
 @brief Sets the value of a specified parameter to a supplied <code>long</code> value.
 @param parameterIndex
 the parameter number index, where the first parameter has
 index 1.
 @param theLong
 the <code>long</code> value to which the parameter at <code>parameterIndex</code>
  is set.
 @throws SQLException
 if a database error happens.
 */
- (void)setLongWithInt:(jint)parameterIndex
              withLong:(jlong)theLong;

/*!
 @brief Sets the value of a specified parameter to SQL <code>NULL</code>.
 Don't use
 this version of <code>setNull</code> for <i>User Defined Types</i> (UDT) or
 for REF type parameters.
 @param parameterIndex
 the parameter number index, where the first parameter has
 index 1.
 @param sqlType
 the SQL type of the parameter, as defined in <code>java.sql.Types</code>
 .
 @throws SQLException
 if a database error happens.
 */
- (void)setNullWithInt:(jint)parameterIndex
               withInt:(jint)sqlType;

/*!
 @brief Sets the value of a specified parameter to SQL <code>NULL</code>.
 This version
 of <code>setNull</code> should be used for <i>User Defined Types</i> (UDTs)
 and also REF types. UDTs can be <code>STRUCT</code>, <code>DISTINCT</code>, <code>JAVA_OBJECT</code>
  and named array types.
 <p>
 Applications must provide the SQL type code and also a fully qualified
 SQL type name when supplying a <code>NULL</code> UDT or REF. For a UDT, the
 type name is the type name of the parameter itself, but for a REF
 parameter the type name is the type name of the referenced type.
 @param paramIndex
 the parameter number index, where the first parameter has
 index 1.
 @param sqlType
 the SQL type of the parameter, as defined in <code>java.sql.Types</code>
 .
 @param typeName
 the fully qualified name of a UDT or REF type - ignored if the
 parameter is not a UDT.
 @throws SQLException
 if a database error happens.
 - seealso: Types
 */
- (void)setNullWithInt:(jint)paramIndex
               withInt:(jint)sqlType
          withNSString:(NSString *)typeName;

/*!
 @brief Sets the value of a specified parameter using a supplied object.
 <p>
 There is a standard mapping from Java types to SQL types, defined in the
 JDBC specification. The passed object is then transformed into the
 appropriate SQL type, and then transferred to the database. <code>setObject</code>
  can be used to pass abstract data types unique to the
 database, by using a JDBC driver specific Java type. If the object's
 class implements the interface <code>SQLData</code>, the JDBC driver calls
 <code>SQLData.writeSQL</code> to write it to the SQL data stream. If the
 object's class implements <code>Ref</code>, <code>Blob</code>, <code>Clob</code>,
 <code>Struct</code>, or <code>Array</code>, the driver passes it to the database as
 a value of the corresponding SQL type.
 @param parameterIndex
 the parameter number index, where the first parameter has
 index 1.
 @param theObject
 the object containing the value to which the parameter at
 <code>parameterIndex</code> is set.
 @throws SQLException
 if a database error happens.
 */
- (void)setObjectWithInt:(jint)parameterIndex
                  withId:(id)theObject;

/*!
 @brief Sets the value of a specified parameter using a supplied object.
 <p>
 The object is converted to the given <code>targetSqlType</code> before it is
 sent to the database. If the object has a custom mapping (its class
 implements the interface <code>SQLData</code>), the JDBC driver will call the method
 <code>SQLData.writeSQL</code> to write it to the SQL data stream. If the
 object's class implements <code>Ref</code>, <code>Blob</code>, <code>Clob</code>,
 <code>Struct</code>, or <code>Array</code>, the driver will pass it to the database
 in the form of the relevant SQL type.
 @param parameterIndex
 the parameter index, where the first parameter has index 1.
 @param theObject
 the Object containing the value to which the parameter at
 <code>parameterIndex</code> is set.
 @param targetSqlType
 the SQL type to send to the database, as defined in <code>java.sql.Types</code>
 .
 @throws SQLException
 if a database error happens.
 */
- (void)setObjectWithInt:(jint)parameterIndex
                  withId:(id)theObject
                 withInt:(jint)targetSqlType;

/*!
 @brief Sets the value of a specified parameter using a supplied object.
 <p>
 The object is converted to the given <code>targetSqlType</code> before it is
 sent to the database. If the object has a custom mapping (its class
 implements the interface <code>SQLData</code>), the JDBC driver will call the method
 <code>SQLData.writeSQL</code> to write it to the SQL data stream. If the
 object's class implements <code>Ref</code>, <code>Blob</code>, <code>Clob</code>,
 <code>Struct</code>, or <code>Array</code>, the driver will pass it to the database
 in the form of the relevant SQL type.
 @param parameterIndex
 the parameter index, where the first parameter has index 1.
 @param theObject
 the Object containing the value to which the parameter at
 <code>parameterIndex</code> is set.
 @param targetSqlType
 the SQL type to send to the database, as defined in <code>java.sql.Types</code>
 .
 @param scale_
 the number of digits after the decimal point - only applies to
 the types <code>java.sql.Types.DECIMAL</code> and <code>java.sql.Types.NUMERIC</code>
  - ignored for all other types.
 @throws SQLException
 if a database error happens.
 */
- (void)setObjectWithInt:(jint)parameterIndex
                  withId:(id)theObject
                 withInt:(jint)targetSqlType
                 withInt:(jint)scale_;

/*!
 @brief Sets the value of a specified parameter to a supplied <code>REF(<structured-type>)</code>
  value.
 This is stored as an SQL <code>REF</code>.
 @param parameterIndex
 the parameter number index, where the first parameter has
 index 1.
 @param theRef
 a <code>java.sql.Ref</code> value to which the parameter at <code>parameterIndex</code>
  is set.
 @throws SQLException
 if a database error happens.
 - seealso: Ref
 */
- (void)setRefWithInt:(jint)parameterIndex
       withJavaSqlRef:(id<JavaSqlRef>)theRef;

/*!
 @brief Sets the value of a specified parameter to a supplied <code>short</code>
 value.
 @param parameterIndex
 the parameter number index, where the first parameter has
 index 1.
 @param theShort
 a <code>short</code> value to which the parameter at <code>parameterIndex</code>
  is set.
 @throws SQLException
 if a database error happens.
 */
- (void)setShortWithInt:(jint)parameterIndex
              withShort:(jshort)theShort;

/*!
 @brief Sets the value of a specified parameter to a supplied string.
 @param parameterIndex
 the parameter number index, where the first parameter has
 index 1.
 @param theString
 the value to which the parameter at <code>parameterIndex</code> is
 set.
 @throws SQLException
 if a database error happens.
 */
- (void)setStringWithInt:(jint)parameterIndex
            withNSString:(NSString *)theString;

/*!
 @brief Sets the value of a specified parameter to a supplied <code>java.sql.Time</code>
  value.
 @param parameterIndex
 the parameter number index, where the first parameter has
 index 1.
 @param theTime
 a <code>java.sql.Time</code> value to which the parameter at
 <code>parameterIndex</code> is set.
 @throws SQLException
 if a database error happens.
 */
- (void)setTimeWithInt:(jint)parameterIndex
       withJavaSqlTime:(JavaSqlTime *)theTime;

/*!
 @brief Sets the value of a specified parameter to a supplied <code>java.sql.Time</code>
  value, using a supplied <code>Calendar</code>.
 <p>
 The driver uses the supplied <code>Calendar</code> to create the SQL <code>TIME</code>
  value, which allows it to use a custom timezone - otherwise the
 driver uses the VM defaults.
 See "<a href="../util/Locale.html#default_locale">Be wary of the default locale</a>".
 @param parameterIndex
 the parameter number index, where the first parameter has
 index 1.
 @param theTime
 a <code>java.sql.Time</code> value to which the parameter at
 <code>parameterIndex</code> is set.
 @param cal
 a <code>Calendar</code> to use to construct the SQL <code>TIME</code>
 value.
 @throws SQLException
 if a database error happens.
 - seealso: Time
 - seealso: java.util.Calendar
 */
- (void)setTimeWithInt:(jint)parameterIndex
       withJavaSqlTime:(JavaSqlTime *)theTime
  withJavaUtilCalendar:(JavaUtilCalendar *)cal;

/*!
 @brief Sets the value of a specified parameter to a supplied java.sql.Timestamp
 value.
 @param parameterIndex
 the parameter number index, where the first parameter has
 index 1.
 @param theTimestamp
 the java.sql.Timestamp value to which the parameter at <code>parameterIndex</code>
  is set.
 @throws SQLException
 if a database error happens.
 */
- (void)setTimestampWithInt:(jint)parameterIndex
       withJavaSqlTimestamp:(JavaSqlTimestamp *)theTimestamp;

/*!
 @brief Sets the value of a specified parameter to a supplied <code>java.sql.Timestamp</code>
  value, using the supplied <code>Calendar</code>.
 <p>
 The driver uses the supplied <code>Calendar</code> to create the SQL <code>TIMESTAMP</code>
  value, which allows it to use a custom timezone - otherwise
 the driver uses the VM defaults.
 See "<a href="../util/Locale.html#default_locale">Be wary of the default locale</a>".
 @param parameterIndex
 the parameter number index, where the first parameter has
 index 1.
 @param theTimestamp
 the <code>java.sql.Timestamp</code> value to which the parameter at
 <code>parameterIndex</code> is set.
 @param cal
 a <code>Calendar</code> to use to construct the SQL <code>TIMESTAMP</code>
  value
 @throws SQLException
 if a database error happens.
 - seealso: Timestamp
 - seealso: java.util.Calendar
 */
- (void)setTimestampWithInt:(jint)parameterIndex
       withJavaSqlTimestamp:(JavaSqlTimestamp *)theTimestamp
       withJavaUtilCalendar:(JavaUtilCalendar *)cal;

/*!
 @brief Sets the value of a specified parameter to the characters from a supplied
 <code>InputStream</code>, with a specified number of bytes.
 @param parameterIndex
 the parameter number index, where the first parameter has
 index 1.
 @param theInputStream
 the <code>InputStream</code> with the character data to which the
 parameter at <code>parameterIndex</code> is set.
 @param length
 the number of bytes to read from the <code>InputStream</code>.
 @throws SQLException
 if a database error happens.
 */
- (void)setUnicodeStreamWithInt:(jint)parameterIndex
          withJavaIoInputStream:(JavaIoInputStream *)theInputStream
                        withInt:(jint)length __attribute__((deprecated));

/*!
 @brief Sets the value of a specified parameter to a supplied <code>java.net.URL</code>
 .
 @param parameterIndex
 the parameter number index, where the first parameter has
 index 1.
 @param theURL
 the <code>URL</code> to which the parameter at <code>parameterIndex</code>
  is set.
 @throws SQLException
 if a database error happens.
 - seealso: URL
 */
- (void)setURLWithInt:(jint)parameterIndex
       withJavaNetURL:(JavaNetURL *)theURL;

/*!
 @brief Sets the value of a specified parameter to a supplied <code>java.sql.RowId</code>
 .
 @param parameterIndex
 the parameter number index, where the first parameter has
 index 1.
 @param theRowId
 the <code>RowId</code> to which the parameter at <code>parameterIndex</code>
  is set.
 @throws SQLException if a database error happens.
 */
- (void)setRowIdWithInt:(jint)parameterIndex
       withJavaSqlRowId:(id<JavaSqlRowId>)theRowId;

/*!
 @brief Sets the value of a specified parameter to a supplied string.
 @param parameterIndex
 the parameter number index, where the first parameter has
 index 1.
 @param theString
 the <code>String</code> to which the parameter at <code>parameterIndex</code>
  is set.
 @throws SQLException if a database error happens.
 */
- (void)setNStringWithInt:(jint)parameterIndex
             withNSString:(NSString *)theString;

/*!
 @brief Sets the value of the specified parameter to the next <code>length</code> characters
 from <code>reader</code>.
 @param parameterIndex
 the parameter number index, where the first parameter has
 index 1.
 @param reader the <code>Reader</code>
 @param length character count
 @throws SQLException if a database error happens.
 */
- (void)setNCharacterStreamWithInt:(jint)parameterIndex
                  withJavaIoReader:(JavaIoReader *)reader
                          withLong:(jlong)length;

/*!
 @brief Sets the value of the specified parameter to <code>value</code>.
 @param parameterIndex
 the parameter number index, where the first parameter has
 index 1.
 @param value
 the <code>NClob</code> to which the parameter at <code>parameterIndex</code>
  is set.
 @throws SQLException if a database error happens.
 */
- (void)setNClobWithInt:(jint)parameterIndex
       withJavaSqlNClob:(id<JavaSqlNClob>)value;

/*!
 @brief Sets the value of the specified parameter to the next <code>length</code> characters
 from <code>reader</code>.
 @param parameterIndex
 the parameter number index, where the first parameter has
 index 1.
 @param reader the <code>Reader</code>
 @param length character count
 @throws SQLException if a database error happens.
 */
- (void)setClobWithInt:(jint)parameterIndex
      withJavaIoReader:(JavaIoReader *)reader
              withLong:(jlong)length;

/*!
 @brief Sets the value of the specified parameter to the next <code>length</code> bytes
 from <code>inputStream</code>.
 @param parameterIndex
 the parameter number index, where the first parameter has
 index 1.
 @param inputStream the <code>InputStream</code>
 @param length character count
 @throws SQLException if a database error happens.
 */
- (void)setBlobWithInt:(jint)parameterIndex
 withJavaIoInputStream:(JavaIoInputStream *)inputStream
              withLong:(jlong)length;

/*!
 @brief Sets the value of the specified parameter to the next <code>length</code> characters
 from <code>reader</code>.
 @param parameterIndex
 the parameter number index, where the first parameter has
 index 1.
 @param reader the <code>Reader</code>
 @param length character count
 @throws SQLException if a database error happens.
 */
- (void)setNClobWithInt:(jint)parameterIndex
       withJavaIoReader:(JavaIoReader *)reader
               withLong:(jlong)length;

/*!
 @brief Sets the value of the specified parameter to the value of <code>xmlObject</code>.
 @param parameterIndex
 the parameter number index, where the first parameter has
 index 1.
 @param xmlObject the <code>SQLXML</code>
 @throws SQLException if a database error happens.
 */
- (void)setSQLXMLWithInt:(jint)parameterIndex
       withJavaSqlSQLXML:(id<JavaSqlSQLXML>)xmlObject;

/*!
 @brief Sets the value of the specified parameter to the next <code>length</code> bytes
 from <code>inputStream</code>.
 @param parameterIndex
 the parameter number index, where the first parameter has
 index 1.
 @param inputStream the <code>InputStream</code>
 @param length character count
 @throws SQLException if a database error happens.
 */
- (void)setAsciiStreamWithInt:(jint)parameterIndex
        withJavaIoInputStream:(JavaIoInputStream *)inputStream
                     withLong:(jlong)length;

/*!
 @brief Sets the value of the specified parameter to the next <code>length</code> bytes
 from <code>inputStream</code>.
 @param parameterIndex
 the parameter number index, where the first parameter has
 index 1.
 @param inputStream the <code>InputStream</code>
 @param length character count
 @throws SQLException if a database error happens.
 */
- (void)setBinaryStreamWithInt:(jint)parameterIndex
         withJavaIoInputStream:(JavaIoInputStream *)inputStream
                      withLong:(jlong)length;

/*!
 @brief Sets the value of the specified parameter to the next <code>length</code> characters
 from <code>reader</code>.
 @param parameterIndex
 the parameter number index, where the first parameter has
 index 1.
 @param reader the <code>Reader</code>
 @param length character count
 @throws SQLException if a database error happens.
 */
- (void)setCharacterStreamWithInt:(jint)parameterIndex
                 withJavaIoReader:(JavaIoReader *)reader
                         withLong:(jlong)length;

/*!
 @brief Sets the value of the specified parameter to the bytes
 from <code>inputStream</code>.
 @param parameterIndex
 the parameter number index, where the first parameter has
 index 1.
 @param inputStream the <code>InputStream</code>
 @throws SQLException if a database error happens.
 */
- (void)setAsciiStreamWithInt:(jint)parameterIndex
        withJavaIoInputStream:(JavaIoInputStream *)inputStream;

/*!
 @brief Sets the value of the specified parameter to the bytes
 from <code>inputStream</code>.
 @param parameterIndex
 the parameter number index, where the first parameter has
 index 1.
 @param inputStream the <code>InputStream</code>
 @throws SQLException if a database error happens.
 */
- (void)setBinaryStreamWithInt:(jint)parameterIndex
         withJavaIoInputStream:(JavaIoInputStream *)inputStream;

/*!
 @brief Sets the value of the specified parameter to the characters
 from <code>reader</code>.
 @param parameterIndex
 the parameter number index, where the first parameter has
 index 1.
 @param reader the <code>Reader</code>
 @throws SQLException if a database error happens.
 */
- (void)setCharacterStreamWithInt:(jint)parameterIndex
                 withJavaIoReader:(JavaIoReader *)reader;

/*!
 @brief Sets the value of the specified parameter to the characters
 from <code>reader</code>.
 @param parameterIndex
 the parameter number index, where the first parameter has
 index 1.
 @param reader the <code>Reader</code>
 @throws SQLException if a database error happens.
 */
- (void)setNCharacterStreamWithInt:(jint)parameterIndex
                  withJavaIoReader:(JavaIoReader *)reader;

/*!
 @brief Sets the value of the specified parameter to the characters
 from <code>reader</code>.
 @param parameterIndex
 the parameter number index, where the first parameter has
 index 1.
 @param reader the <code>Reader</code>
 @throws SQLException if a database error happens.
 */
- (void)setClobWithInt:(jint)parameterIndex
      withJavaIoReader:(JavaIoReader *)reader;

/*!
 @brief Sets the value of the specified parameter to the bytes
 from <code>inputStream</code>.
 @param parameterIndex
 the parameter number index, where the first parameter has
 index 1.
 @param inputStream the <code>InputStream</code>
 @throws SQLException if a database error happens.
 */
- (void)setBlobWithInt:(jint)parameterIndex
 withJavaIoInputStream:(JavaIoInputStream *)inputStream;

/*!
 @brief Sets the value of the specified parameter to the characters
 from <code>reader</code>.
 @param parameterIndex
 the parameter number index, where the first parameter has
 index 1.
 @param reader the <code>Reader</code>
 @throws SQLException if a database error happens.
 */
- (void)setNClobWithInt:(jint)parameterIndex
       withJavaIoReader:(JavaIoReader *)reader;

@end

J2OBJC_EMPTY_STATIC_INIT(JavaSqlPreparedStatement)

J2OBJC_TYPE_LITERAL_HEADER(JavaSqlPreparedStatement)

#endif


#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_JavaSqlPreparedStatement")
