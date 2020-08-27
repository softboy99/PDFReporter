//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/libcore/luni/src/main/java/java/sql/SQLClientInfoException.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_JavaSqlSQLClientInfoException")
#ifdef RESTRICT_JavaSqlSQLClientInfoException
#define INCLUDE_ALL_JavaSqlSQLClientInfoException 0
#else
#define INCLUDE_ALL_JavaSqlSQLClientInfoException 1
#endif
#undef RESTRICT_JavaSqlSQLClientInfoException

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if !defined (JavaSqlSQLClientInfoException_) && (INCLUDE_ALL_JavaSqlSQLClientInfoException || defined(INCLUDE_JavaSqlSQLClientInfoException))
#define JavaSqlSQLClientInfoException_

#define RESTRICT_JavaSqlSQLException 1
#define INCLUDE_JavaSqlSQLException 1
#include "java/sql/SQLException.h"

@protocol JavaUtilMap;

/*!
 @brief An exception, which is subclass of SQLException, is thrown when one or more
 client info properties could not be set on a Connection.
 */
@interface JavaSqlSQLClientInfoException : JavaSqlSQLException

#pragma mark Public

/*!
 @brief Creates an SQLClientInfoException object.
 The Reason string is set to
 null, the SQLState string is set to null and the Error Code is set to 0.
 */
- (instancetype)init;

/*!
 @brief Creates an SQLClientInfoException object.
 The Reason string is set to the
 given reason string, the SQLState string is set to null and the Error
 Code is set to 0, and the Map<String,ClientInfoStatus> object is set to
 the failed properties.
 @param failedProperties
 the Map<String,ClientInfoStatus> object to use as the
 property values
 */
- (instancetype)initWithJavaUtilMap:(id<JavaUtilMap>)failedProperties;

/*!
 @brief Creates an SQLClientInfoException object.
 The Reason string is set to the
 null if cause == null or cause.toString() if cause!=null, the cause
 Throwable object is set to the given cause Throwable object, and the Map<String,ClientInfoStatus>
 object is set to the failed properties.
 @param failedProperties
 the Map<String,ClientInfoStatus> object to use as the
 property values
 @param cause
 the Throwable object for the underlying reason this
 SQLException
 */
- (instancetype)initWithJavaUtilMap:(id<JavaUtilMap>)failedProperties
                    withNSException:(NSException *)cause;

/*!
 @brief Creates an SQLClientInfoException object.
 The Reason string is set to
 reason, and the Map<String,ClientInfoStatus> object is set to the failed
 properties.
 @param reason
 the string to use as the Reason string
 @param failedProperties
 the Map<String,ClientInfoStatus> object to use as the
 property values
 */
- (instancetype)initWithNSString:(NSString *)reason
                 withJavaUtilMap:(id<JavaUtilMap>)failedProperties;

/*!
 @brief Creates an SQLClientInfoException object.
 The Reason string is set to
 reason, the cause Throwable object is set to the given cause Throwable
 object, and the Map<String,ClientInfoStatus> object is set to the failed
 properties.
 @param reason
 the string to use as the Reason string
 @param failedProperties
 the Map<String,ClientInfoStatus> object to use as the
 property values
 @param cause
 the Throwable object for the underlying reason this
 SQLException
 */
- (instancetype)initWithNSString:(NSString *)reason
                 withJavaUtilMap:(id<JavaUtilMap>)failedProperties
                 withNSException:(NSException *)cause;

/*!
 @brief Creates an SQLClientInfoException object.
 The Reason string is set to
 reason, the SQLState string is set to the sqlState, the Error Code is set
 to the vendorCode and the Map<String,ClientInfoStatus> object is set to
 the failed properties.
 @param reason
 the string to use as the Reason string
 @param sqlState
 the string to use as the SQLState string
 @param vendorCode
 the integer value for the error code
 @param failedProperties
 the Map<String,ClientInfoStatus> object to use as the
 property values
 */
- (instancetype)initWithNSString:(NSString *)reason
                    withNSString:(NSString *)sqlState
                         withInt:(jint)vendorCode
                 withJavaUtilMap:(id<JavaUtilMap>)failedProperties;

/*!
 @brief Creates an SQLClientInfoException object.
 The Reason string is set to
 reason, the SQLState string is set to the sqlState, the Error Code is set
 to the vendorCode the cause Throwable object is set to the given cause
 Throwable object, and the Map<String,ClientInfoStatus> object is set to
 the failed properties.
 @param reason
 the string to use as the Reason string
 @param sqlState
 the string to use as the SQLState string
 @param vendorCode
 the integer value for the error code
 @param failedProperties
 the Map<String,ClientInfoStatus> object to use as the
 property values
 @param cause
 the Throwable object for the underlying reason this
 SQLException
 */
- (instancetype)initWithNSString:(NSString *)reason
                    withNSString:(NSString *)sqlState
                         withInt:(jint)vendorCode
                 withJavaUtilMap:(id<JavaUtilMap>)failedProperties
                 withNSException:(NSException *)cause;

/*!
 @brief Creates an SQLClientInfoException object.
 The Reason string is set to
 reason, the SQLState string is set to the sqlState, and the Map<String,ClientInfoStatus>
 object is set to the failed properties.
 @param reason
 the string to use as the Reason string
 @param sqlState
 the string to use as the SQLState string
 @param failedProperties
 the Map<String,ClientInfoStatus> object to use as the
 property values
 */
- (instancetype)initWithNSString:(NSString *)reason
                    withNSString:(NSString *)sqlState
                 withJavaUtilMap:(id<JavaUtilMap>)failedProperties;

/*!
 @brief Creates an SQLClientInfoException object.
 The Reason string is set to
 reason, the SQLState string is set to the sqlState, the Error Code is set
 to the vendorCode, and the Map<String,ClientInfoStatus> object is set to
 the failed properties.
 @param reason
 the string to use as the Reason string
 @param sqlState
 the string to use as the SQLState string
 @param failedProperties
 the Map<String,ClientInfoStatus> object to use as the
 property values
 @param cause
 the Throwable object for the underlying reason this
 SQLException
 */
- (instancetype)initWithNSString:(NSString *)reason
                    withNSString:(NSString *)sqlState
                 withJavaUtilMap:(id<JavaUtilMap>)failedProperties
                 withNSException:(NSException *)cause;

/*!
 @brief returns that the client info properties which could not be set
 @return the list of ClientInfoStatus objects indicate client info
 properties
 */
- (id<JavaUtilMap>)getFailedProperties;

#pragma mark Package-Private

@end

J2OBJC_EMPTY_STATIC_INIT(JavaSqlSQLClientInfoException)

FOUNDATION_EXPORT void JavaSqlSQLClientInfoException_init(JavaSqlSQLClientInfoException *self);

FOUNDATION_EXPORT JavaSqlSQLClientInfoException *new_JavaSqlSQLClientInfoException_init() NS_RETURNS_RETAINED;

FOUNDATION_EXPORT JavaSqlSQLClientInfoException *create_JavaSqlSQLClientInfoException_init();

FOUNDATION_EXPORT void JavaSqlSQLClientInfoException_initWithJavaUtilMap_(JavaSqlSQLClientInfoException *self, id<JavaUtilMap> failedProperties);

FOUNDATION_EXPORT JavaSqlSQLClientInfoException *new_JavaSqlSQLClientInfoException_initWithJavaUtilMap_(id<JavaUtilMap> failedProperties) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT JavaSqlSQLClientInfoException *create_JavaSqlSQLClientInfoException_initWithJavaUtilMap_(id<JavaUtilMap> failedProperties);

FOUNDATION_EXPORT void JavaSqlSQLClientInfoException_initWithJavaUtilMap_withNSException_(JavaSqlSQLClientInfoException *self, id<JavaUtilMap> failedProperties, NSException *cause);

FOUNDATION_EXPORT JavaSqlSQLClientInfoException *new_JavaSqlSQLClientInfoException_initWithJavaUtilMap_withNSException_(id<JavaUtilMap> failedProperties, NSException *cause) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT JavaSqlSQLClientInfoException *create_JavaSqlSQLClientInfoException_initWithJavaUtilMap_withNSException_(id<JavaUtilMap> failedProperties, NSException *cause);

FOUNDATION_EXPORT void JavaSqlSQLClientInfoException_initWithNSString_withJavaUtilMap_(JavaSqlSQLClientInfoException *self, NSString *reason, id<JavaUtilMap> failedProperties);

FOUNDATION_EXPORT JavaSqlSQLClientInfoException *new_JavaSqlSQLClientInfoException_initWithNSString_withJavaUtilMap_(NSString *reason, id<JavaUtilMap> failedProperties) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT JavaSqlSQLClientInfoException *create_JavaSqlSQLClientInfoException_initWithNSString_withJavaUtilMap_(NSString *reason, id<JavaUtilMap> failedProperties);

FOUNDATION_EXPORT void JavaSqlSQLClientInfoException_initWithNSString_withJavaUtilMap_withNSException_(JavaSqlSQLClientInfoException *self, NSString *reason, id<JavaUtilMap> failedProperties, NSException *cause);

FOUNDATION_EXPORT JavaSqlSQLClientInfoException *new_JavaSqlSQLClientInfoException_initWithNSString_withJavaUtilMap_withNSException_(NSString *reason, id<JavaUtilMap> failedProperties, NSException *cause) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT JavaSqlSQLClientInfoException *create_JavaSqlSQLClientInfoException_initWithNSString_withJavaUtilMap_withNSException_(NSString *reason, id<JavaUtilMap> failedProperties, NSException *cause);

FOUNDATION_EXPORT void JavaSqlSQLClientInfoException_initWithNSString_withNSString_withInt_withJavaUtilMap_(JavaSqlSQLClientInfoException *self, NSString *reason, NSString *sqlState, jint vendorCode, id<JavaUtilMap> failedProperties);

FOUNDATION_EXPORT JavaSqlSQLClientInfoException *new_JavaSqlSQLClientInfoException_initWithNSString_withNSString_withInt_withJavaUtilMap_(NSString *reason, NSString *sqlState, jint vendorCode, id<JavaUtilMap> failedProperties) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT JavaSqlSQLClientInfoException *create_JavaSqlSQLClientInfoException_initWithNSString_withNSString_withInt_withJavaUtilMap_(NSString *reason, NSString *sqlState, jint vendorCode, id<JavaUtilMap> failedProperties);

FOUNDATION_EXPORT void JavaSqlSQLClientInfoException_initWithNSString_withNSString_withInt_withJavaUtilMap_withNSException_(JavaSqlSQLClientInfoException *self, NSString *reason, NSString *sqlState, jint vendorCode, id<JavaUtilMap> failedProperties, NSException *cause);

FOUNDATION_EXPORT JavaSqlSQLClientInfoException *new_JavaSqlSQLClientInfoException_initWithNSString_withNSString_withInt_withJavaUtilMap_withNSException_(NSString *reason, NSString *sqlState, jint vendorCode, id<JavaUtilMap> failedProperties, NSException *cause) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT JavaSqlSQLClientInfoException *create_JavaSqlSQLClientInfoException_initWithNSString_withNSString_withInt_withJavaUtilMap_withNSException_(NSString *reason, NSString *sqlState, jint vendorCode, id<JavaUtilMap> failedProperties, NSException *cause);

FOUNDATION_EXPORT void JavaSqlSQLClientInfoException_initWithNSString_withNSString_withJavaUtilMap_(JavaSqlSQLClientInfoException *self, NSString *reason, NSString *sqlState, id<JavaUtilMap> failedProperties);

FOUNDATION_EXPORT JavaSqlSQLClientInfoException *new_JavaSqlSQLClientInfoException_initWithNSString_withNSString_withJavaUtilMap_(NSString *reason, NSString *sqlState, id<JavaUtilMap> failedProperties) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT JavaSqlSQLClientInfoException *create_JavaSqlSQLClientInfoException_initWithNSString_withNSString_withJavaUtilMap_(NSString *reason, NSString *sqlState, id<JavaUtilMap> failedProperties);

FOUNDATION_EXPORT void JavaSqlSQLClientInfoException_initWithNSString_withNSString_withJavaUtilMap_withNSException_(JavaSqlSQLClientInfoException *self, NSString *reason, NSString *sqlState, id<JavaUtilMap> failedProperties, NSException *cause);

FOUNDATION_EXPORT JavaSqlSQLClientInfoException *new_JavaSqlSQLClientInfoException_initWithNSString_withNSString_withJavaUtilMap_withNSException_(NSString *reason, NSString *sqlState, id<JavaUtilMap> failedProperties, NSException *cause) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT JavaSqlSQLClientInfoException *create_JavaSqlSQLClientInfoException_initWithNSString_withNSString_withJavaUtilMap_withNSException_(NSString *reason, NSString *sqlState, id<JavaUtilMap> failedProperties, NSException *cause);

J2OBJC_TYPE_LITERAL_HEADER(JavaSqlSQLClientInfoException)

#endif


#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_JavaSqlSQLClientInfoException")
