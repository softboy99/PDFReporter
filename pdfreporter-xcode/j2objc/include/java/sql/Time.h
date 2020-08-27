//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/libcore/luni/src/main/java/java/sql/Time.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_JavaSqlTime")
#ifdef RESTRICT_JavaSqlTime
#define INCLUDE_ALL_JavaSqlTime 0
#else
#define INCLUDE_ALL_JavaSqlTime 1
#endif
#undef RESTRICT_JavaSqlTime

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if !defined (JavaSqlTime_) && (INCLUDE_ALL_JavaSqlTime || defined(INCLUDE_JavaSqlTime))
#define JavaSqlTime_

#define RESTRICT_JavaUtilDate 1
#define INCLUDE_JavaUtilDate 1
#include "java/util/Date.h"

@class IOSObjectArray;

/*!
 @brief Java representation of an SQL <code>TIME</code> value.
 Provides utilities to
 format and parse the time's representation as a String in JDBC escape format.
 */
@interface JavaSqlTime : JavaUtilDate

#pragma mark Public

/*!
 @brief Constructs a <code>Time</code> object using the supplied values for <i>Hour</i>,
 <i>Minute</i> and <i>Second</i>.
 The <i>Year</i>, <i>Month</i> and
 <i>Day</i> elements of the <code>Time</code> object are set to the date
 of the Epoch (January 1, 1970).
 <p>
 Any attempt to access the <i>Year</i>, <i>Month</i> or <i>Day</i>
 elements of a <code>Time</code> object will result in an <code>IllegalArgumentException</code>
 .
 <p>
 The result is undefined if any argument is out of bounds.
 @param theHour
 a value in the range <code>[0,23]</code>.
 @param theMinute
 a value in the range <code>[0,59]</code>.
 @param theSecond
 a value in the range <code>[0,59]</code>.
 */
- (instancetype)initWithInt:(jint)theHour
                    withInt:(jint)theMinute
                    withInt:(jint)theSecond __attribute__((deprecated));

/*!
 @brief Constructs a <code>Time</code> object using a supplied time specified in
 milliseconds.
 @param theTime
 a <code>Time</code> specified in milliseconds since the
 <i>Epoch</i> (January 1st 1970, 00:00:00.000).
 */
- (instancetype)initWithLong:(jlong)theTime;

/*!
 @return does not return anything.
 @throws IllegalArgumentException
 if this method is called.
 */
- (jint)getDate __attribute__((deprecated));

/*!
 @return does not return anything.
 @throws IllegalArgumentException
 if this method is called.
 */
- (jint)getDay __attribute__((deprecated));

/*!
 @return does not return anything.
 @throws IllegalArgumentException
 if this method is called.
 */
- (jint)getMonth __attribute__((deprecated));

/*!
 @return does not return anything.
 @throws IllegalArgumentException
 if this method is called.
 */
- (jint)getYear __attribute__((deprecated));

/*!
 @throws IllegalArgumentException
 if this method is called.
 */
- (void)setDateWithInt:(jint)i __attribute__((deprecated));

/*!
 @throws IllegalArgumentException
 if this method is called.
 */
- (void)setMonthWithInt:(jint)i __attribute__((deprecated));

/*!
 @brief Sets the time for this <code>Time</code> object to the supplied milliseconds
 value.
 @param time
 A time value expressed as milliseconds since the <i>Epoch</i>.
 Negative values are milliseconds before the Epoch. The Epoch
 is January 1 1970, 00:00:00.000.
 */
- (void)setTimeWithLong:(jlong)time;

/*!
 @throws IllegalArgumentException
 if this method is called.
 */
- (void)setYearWithInt:(jint)i __attribute__((deprecated));

/*!
 @brief Formats the <code>Time</code> as a String in JDBC escape format: <code>hh:mm:ss</code>
 .
 @return A String representing the <code>Time</code> value in JDBC escape
 format: <code>HH:mm:ss</code>
 */
- (NSString *)description;

/*!
 @brief Creates a <code>Time</code> object from a string holding a time represented in
 JDBC escape format: <code>hh:mm:ss</code>.
 <p>
 An exception occurs if the input string does not comply with this format.
 @param timeString
 A String representing the time value in JDBC escape format:
 <code>hh:mm:ss</code>.
 @return The <code>Time</code> object set to a time corresponding to the given
 time.
 @throws IllegalArgumentException
 if the supplied time string is not in JDBC escape format.
 */
+ (JavaSqlTime *)valueOfWithNSString:(NSString *)timeString;

@end

J2OBJC_EMPTY_STATIC_INIT(JavaSqlTime)

FOUNDATION_EXPORT void JavaSqlTime_initWithInt_withInt_withInt_(JavaSqlTime *self, jint theHour, jint theMinute, jint theSecond);

FOUNDATION_EXPORT JavaSqlTime *new_JavaSqlTime_initWithInt_withInt_withInt_(jint theHour, jint theMinute, jint theSecond) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT JavaSqlTime *create_JavaSqlTime_initWithInt_withInt_withInt_(jint theHour, jint theMinute, jint theSecond);

FOUNDATION_EXPORT void JavaSqlTime_initWithLong_(JavaSqlTime *self, jlong theTime);

FOUNDATION_EXPORT JavaSqlTime *new_JavaSqlTime_initWithLong_(jlong theTime) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT JavaSqlTime *create_JavaSqlTime_initWithLong_(jlong theTime);

FOUNDATION_EXPORT JavaSqlTime *JavaSqlTime_valueOfWithNSString_(NSString *timeString);

J2OBJC_TYPE_LITERAL_HEADER(JavaSqlTime)

#endif


#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_JavaSqlTime")
