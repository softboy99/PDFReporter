//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/libcore/luni/src/main/java/java/util/SimpleTimeZone.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_JavaUtilSimpleTimeZone")
#ifdef RESTRICT_JavaUtilSimpleTimeZone
#define INCLUDE_ALL_JavaUtilSimpleTimeZone 0
#else
#define INCLUDE_ALL_JavaUtilSimpleTimeZone 1
#endif
#undef RESTRICT_JavaUtilSimpleTimeZone

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if !defined (JavaUtilSimpleTimeZone_) && (INCLUDE_ALL_JavaUtilSimpleTimeZone || defined(INCLUDE_JavaUtilSimpleTimeZone))
#define JavaUtilSimpleTimeZone_

#define RESTRICT_JavaUtilTimeZone 1
#define INCLUDE_JavaUtilTimeZone 1
#include "java/util/TimeZone.h"

@class JavaUtilDate;

/*!
 @brief <code>SimpleTimeZone</code> is a concrete subclass of <code>TimeZone</code>
 that represents a time zone for use with a Gregorian calendar.
 This class
 does not handle historical changes.
 <p>
 Use a negative value for <code>dayOfWeekInMonth</code> to indicate that
 <code>SimpleTimeZone</code> should count from the end of the month
 backwards. For example, Daylight Savings Time ends at the last
 (dayOfWeekInMonth = -1) Sunday in October, at 2 AM in standard time.
 - seealso: Calendar
 - seealso: GregorianCalendar
 - seealso: TimeZone
 */
@interface JavaUtilSimpleTimeZone : JavaUtilTimeZone

+ (jint)UTC_TIME;

+ (jint)STANDARD_TIME;

+ (jint)WALL_TIME;

#pragma mark Public

/*!
 @brief Constructs a <code>SimpleTimeZone</code> with the given base time zone offset from GMT
 and time zone ID.
 Timezone IDs can be obtained from
 <code>TimeZone.getAvailableIDs</code>. Normally you should use <code>TimeZone.getDefault</code> to
 construct a <code>TimeZone</code>.
 @param offset
 the given base time zone offset to GMT.
 @param name
 the time zone ID which is obtained from
 <code>TimeZone.getAvailableIDs</code>.
 */
- (instancetype)initWithInt:(jint)offset
               withNSString:(NSString *)name;

/*!
 @brief Constructs a <code>SimpleTimeZone</code> with the given base time zone offset from GMT,
 time zone ID, and times to start and end the daylight savings time.
 Timezone IDs can
 be obtained from <code>TimeZone.getAvailableIDs</code>. Normally you should use
 <code>TimeZone.getDefault</code> to create a <code>TimeZone</code>. For a time zone that does not
 use daylight saving time, do not use this constructor; instead you should
 use <code>SimpleTimeZone(rawOffset, ID)</code>.
 <p>
 By default, this constructor specifies day-of-week-in-month rules. That
 is, if the <code>startDay</code> is 1, and the <code>startDayOfWeek</code> is <code>SUNDAY</code>, then this
 indicates the first Sunday in the <code>startMonth</code>. A <code>startDay</code> of -1 likewise
 indicates the last Sunday. However, by using negative or zero values for
 certain parameters, other types of rules can be specified.
 <p>
 Day of month: To specify an exact day of the month, such as March 1, set
 <code>startDayOfWeek</code> to zero.
 <p>
 Day of week after day of month: To specify the first day of the week
 occurring on or after an exact day of the month, make the day of the week
 negative. For example, if <code>startDay</code> is 5 and <code>startDayOfWeek</code> is <code>-MONDAY</code>,
 this indicates the first Monday on or after the 5th day of the
 <code>startMonth</code>.
 <p>
 Day of week before day of month: To specify the last day of the week
 occurring on or before an exact day of the month, make the day of the
 week and the day of the month negative. For example, if <code>startDay</code> is <code>-21</code>
 and <code>startDayOfWeek</code> is <code>-WEDNESDAY</code>, this indicates the last Wednesday on or
 before the 21st of the <code>startMonth</code>.
 <p>
 The above examples refer to the <code>startMonth</code>, <code>startDay</code>, and <code>startDayOfWeek</code>;
 the same applies for the <code>endMonth</code>, <code>endDay</code>, and <code>endDayOfWeek</code>.
 <p>
 The daylight savings time difference is set to the default value: one hour.
 @param offset
 the given base time zone offset to GMT.
 @param name
 the time zone ID which is obtained from
 <code>TimeZone.getAvailableIDs</code>.
 @param startMonth
 the daylight savings starting month. The month indexing is 0-based. eg, 0
 for January.
 @param startDay
 the daylight savings starting day-of-week-in-month. Please see
 the member description for an example.
 @param startDayOfWeek
 the daylight savings starting day-of-week. Please see the
 member description for an example.
 @param startTime
 the daylight savings starting time in local wall time, which
 is standard time in this case. Please see the member
 description for an example.
 @param endMonth
 the daylight savings ending month. The month indexing is 0-based. eg, 0 for
 January.
 @param endDay
 the daylight savings ending day-of-week-in-month. Please see
 the member description for an example.
 @param endDayOfWeek
 the daylight savings ending day-of-week. Please see the member
 description for an example.
 @param endTime
 the daylight savings ending time in local wall time, which is
 daylight time in this case. Please see the member description
 for an example.
 @throws IllegalArgumentException
 if the month, day, dayOfWeek, or time parameters are out of
 range for the start or end rule.
 */
- (instancetype)initWithInt:(jint)offset
               withNSString:(NSString *)name
                    withInt:(jint)startMonth
                    withInt:(jint)startDay
                    withInt:(jint)startDayOfWeek
                    withInt:(jint)startTime
                    withInt:(jint)endMonth
                    withInt:(jint)endDay
                    withInt:(jint)endDayOfWeek
                    withInt:(jint)endTime;

/*!
 @brief Constructs a <code>SimpleTimeZone</code> with the given base time zone offset from GMT,
 time zone ID, times to start and end the daylight savings time, and
 the daylight savings time difference in milliseconds.
 @param offset
 the given base time zone offset to GMT.
 @param name
 the time zone ID which is obtained from
 <code>TimeZone.getAvailableIDs</code>.
 @param startMonth
 the daylight savings starting month. Month is 0-based. eg, 0
 for January.
 @param startDay
 the daylight savings starting day-of-week-in-month. Please see
 the description of <code>SimpleTimeZone(int,String,int,int,int,int,int,int,int,int)</code> for an example.
 @param startDayOfWeek
 the daylight savings starting day-of-week. Please see the
 description of <code>SimpleTimeZone(int,String,int,int,int,int,int,int,int,int)</code> for an example.
 @param startTime
 The daylight savings starting time in local wall time, which
 is standard time in this case. Please see the description of
 <code>SimpleTimeZone(int,String,int,int,int,int,int,int,int,int)</code> for an example.
 @param endMonth
 the daylight savings ending month. Month is 0-based. eg, 0 for
 January.
 @param endDay
 the daylight savings ending day-of-week-in-month. Please see
 the description of <code>SimpleTimeZone(int,String,int,int,int,int,int,int,int,int)</code> for an example.
 @param endDayOfWeek
 the daylight savings ending day-of-week. Please see the description of
 <code>SimpleTimeZone(int,String,int,int,int,int,int,int,int,int)</code> for an example.
 @param endTime
 the daylight savings ending time in local wall time, which is
 daylight time in this case. Please see the description of <code>SimpleTimeZone(int,String,int,int,int,int,int,int,int,int)</code>
 for an example.
 @param daylightSavings
 the daylight savings time difference in milliseconds.
 @throws IllegalArgumentException
 if the month, day, dayOfWeek, or time parameters are out of
 range for the start or end rule.
 */
- (instancetype)initWithInt:(jint)offset
               withNSString:(NSString *)name
                    withInt:(jint)startMonth
                    withInt:(jint)startDay
                    withInt:(jint)startDayOfWeek
                    withInt:(jint)startTime
                    withInt:(jint)endMonth
                    withInt:(jint)endDay
                    withInt:(jint)endDayOfWeek
                    withInt:(jint)endTime
                    withInt:(jint)daylightSavings;

/*!
 @brief Construct a <code>SimpleTimeZone</code> with the given base time zone offset from GMT,
 time zone ID, times to start and end the daylight savings time including a
 mode specifier, the daylight savings time difference in milliseconds.
 The mode specifies either <code>WALL_TIME</code>, <code>STANDARD_TIME</code>, or
 <code>UTC_TIME</code>.
 @param offset
 the given base time zone offset to GMT.
 @param name
 the time zone ID which is obtained from
 <code>TimeZone.getAvailableIDs</code>.
 @param startMonth
 the daylight savings starting month. The month indexing is 0-based. eg, 0
 for January.
 @param startDay
 the daylight savings starting day-of-week-in-month. Please see
 the description of <code>SimpleTimeZone(int,String,int,int,int,int,int,int,int,int)</code> for an example.
 @param startDayOfWeek
 the daylight savings starting day-of-week. Please see the
 description of <code>SimpleTimeZone(int,String,int,int,int,int,int,int,int,int)</code> for an example.
 @param startTime
 the time of day in milliseconds on which daylight savings
 time starts, based on the <code>startTimeMode</code>.
 @param startTimeMode
 the mode (UTC, standard, or wall time) of the start time
 value.
 @param endDay
 the day of the week on which daylight savings time ends.
 @param endMonth
 the daylight savings ending month. The month indexing is 0-based. eg, 0 for
 January.
 @param endDayOfWeek
 the daylight savings ending day-of-week. Please see the description of
 <code>SimpleTimeZone(int,String,int,int,int,int,int,int,int,int)</code> for an example.
 @param endTime
 the time of day in milliseconds on which daylight savings
 time ends, based on the <code>endTimeMode</code>.
 @param endTimeMode
 the mode (UTC, standard, or wall time) of the end time value.
 @param daylightSavings
 the daylight savings time difference in milliseconds.
 @throws IllegalArgumentException
 if the month, day, dayOfWeek, or time parameters are out of
 range for the start or end rule.
 */
- (instancetype)initWithInt:(jint)offset
               withNSString:(NSString *)name
                    withInt:(jint)startMonth
                    withInt:(jint)startDay
                    withInt:(jint)startDayOfWeek
                    withInt:(jint)startTime
                    withInt:(jint)startTimeMode
                    withInt:(jint)endMonth
                    withInt:(jint)endDay
                    withInt:(jint)endDayOfWeek
                    withInt:(jint)endTime
                    withInt:(jint)endTimeMode
                    withInt:(jint)daylightSavings;

/*!
 @brief Returns a new <code>SimpleTimeZone</code> with the same ID, <code>rawOffset</code> and daylight
 savings time rules as this SimpleTimeZone.
 @return a shallow copy of this <code>SimpleTimeZone</code>.
 - seealso: java.lang.Cloneable
 */
- (id)clone;

/*!
 @brief Compares the specified object to this <code>SimpleTimeZone</code> and returns whether they
 are equal.
 The object must be an instance of <code>SimpleTimeZone</code> and have the
 same internal data.
 @param object
 the object to compare with this object.
 @return <code>true</code> if the specified object is equal to this
 <code>SimpleTimeZone</code>, <code>false</code> otherwise.
 - seealso: #hashCode
 */
- (jboolean)isEqual:(id)object;

- (jint)getDSTSavings;

- (jint)getOffsetWithInt:(jint)era
                 withInt:(jint)year
                 withInt:(jint)month
                 withInt:(jint)day
                 withInt:(jint)dayOfWeek
                 withInt:(jint)time;

- (jint)getOffsetWithLong:(jlong)time;

- (jint)getRawOffset;

/*!
 @brief Returns an integer hash code for the receiver.
 Objects which are equal
 return the same value for this method.
 @return the receiver's hash.
 - seealso: #equals
 */
- (NSUInteger)hash;

- (jboolean)hasSameRulesWithJavaUtilTimeZone:(JavaUtilTimeZone *)zone;

- (jboolean)inDaylightTimeWithJavaUtilDate:(JavaUtilDate *)time;

/*!
 @brief Sets the daylight savings offset in milliseconds for this <code>SimpleTimeZone</code>.
 @param milliseconds
 the daylight savings offset in milliseconds.
 */
- (void)setDSTSavingsWithInt:(jint)milliseconds;

/*!
 @brief Sets the rule which specifies the end of daylight savings time.
 @param month
 the <code>Calendar</code> month in which daylight savings time ends.
 @param dayOfMonth
 the <code>Calendar</code> day of the month on which daylight savings time
 ends.
 @param time
 the time of day in milliseconds standard time on which
 daylight savings time ends.
 */
- (void)setEndRuleWithInt:(jint)month
                  withInt:(jint)dayOfMonth
                  withInt:(jint)time;

/*!
 @brief Sets the rule which specifies the end of daylight savings time.
 @param month
 the <code>Calendar</code> month in which daylight savings time ends.
 @param day
 the occurrence of the day of the week on which daylight
 savings time ends.
 @param dayOfWeek
 the <code>Calendar</code> day of the week on which daylight savings time
 ends.
 @param time
 the time of day in milliseconds standard time on which
 daylight savings time ends.
 */
- (void)setEndRuleWithInt:(jint)month
                  withInt:(jint)day
                  withInt:(jint)dayOfWeek
                  withInt:(jint)time;

/*!
 @brief Sets the rule which specifies the end of daylight savings time.
 @param month
 the <code>Calendar</code> month in which daylight savings time ends.
 @param day
 the <code>Calendar</code> day of the month.
 @param dayOfWeek
 the <code>Calendar</code> day of the week on which daylight savings time
 ends.
 @param time
 the time of day in milliseconds on which daylight savings time
 ends.
 @param after
 selects the day after or before the day of month.
 */
- (void)setEndRuleWithInt:(jint)month
                  withInt:(jint)day
                  withInt:(jint)dayOfWeek
                  withInt:(jint)time
              withBoolean:(jboolean)after;

/*!
 @brief Sets the offset for standard time from GMT for this <code>SimpleTimeZone</code>.
 @param offset
 the offset from GMT of standard time in milliseconds.
 */
- (void)setRawOffsetWithInt:(jint)offset;

/*!
 @brief Sets the rule which specifies the start of daylight savings time.
 @param month
 the <code>Calendar</code> month in which daylight savings time starts.
 @param dayOfMonth
 the <code>Calendar</code> day of the month on which daylight savings time
 starts.
 @param time
 the time of day in milliseconds on which daylight savings time
 starts.
 */
- (void)setStartRuleWithInt:(jint)month
                    withInt:(jint)dayOfMonth
                    withInt:(jint)time;

/*!
 @brief Sets the rule which specifies the start of daylight savings time.
 @param month
 the <code>Calendar</code> month in which daylight savings time starts.
 @param day
 the occurrence of the day of the week on which daylight
 savings time starts.
 @param dayOfWeek
 the <code>Calendar</code> day of the week on which daylight savings time
 starts.
 @param time
 the time of day in milliseconds on which daylight savings time
 starts.
 */
- (void)setStartRuleWithInt:(jint)month
                    withInt:(jint)day
                    withInt:(jint)dayOfWeek
                    withInt:(jint)time;

/*!
 @brief Sets the rule which specifies the start of daylight savings time.
 @param month
 the <code>Calendar</code> month in which daylight savings time starts.
 @param day
 the <code>Calendar</code> day of the month.
 @param dayOfWeek
 the <code>Calendar</code> day of the week on which daylight savings time
 starts.
 @param time
 the time of day in milliseconds on which daylight savings time
 starts.
 @param after
 selects the day after or before the day of month.
 */
- (void)setStartRuleWithInt:(jint)month
                    withInt:(jint)day
                    withInt:(jint)dayOfWeek
                    withInt:(jint)time
                withBoolean:(jboolean)after;

/*!
 @brief Sets the starting year for daylight savings time in this <code>SimpleTimeZone</code>.
 Years before this start year will always be in standard time.
 @param year
 the starting year.
 */
- (void)setStartYearWithInt:(jint)year;

/*!
 @brief Returns the string representation of this <code>SimpleTimeZone</code>.
 @return the string representation of this <code>SimpleTimeZone</code>.
 */
- (NSString *)description;

- (jboolean)useDaylightTime;

@end

J2OBJC_EMPTY_STATIC_INIT(JavaUtilSimpleTimeZone)

/*!
 @brief The constant for representing a start or end time in GMT time mode.
 */
inline jint JavaUtilSimpleTimeZone_get_UTC_TIME();
#define JavaUtilSimpleTimeZone_UTC_TIME 2
J2OBJC_STATIC_FIELD_CONSTANT(JavaUtilSimpleTimeZone, UTC_TIME, jint)

/*!
 @brief The constant for representing a start or end time in standard local time mode,
 based on timezone's raw offset from GMT; does not include Daylight
 savings.
 */
inline jint JavaUtilSimpleTimeZone_get_STANDARD_TIME();
#define JavaUtilSimpleTimeZone_STANDARD_TIME 1
J2OBJC_STATIC_FIELD_CONSTANT(JavaUtilSimpleTimeZone, STANDARD_TIME, jint)

/*!
 @brief The constant for representing a start or end time in local wall clock time
 mode, based on timezone's adjusted offset from GMT; includes
 Daylight savings.
 */
inline jint JavaUtilSimpleTimeZone_get_WALL_TIME();
#define JavaUtilSimpleTimeZone_WALL_TIME 0
J2OBJC_STATIC_FIELD_CONSTANT(JavaUtilSimpleTimeZone, WALL_TIME, jint)

FOUNDATION_EXPORT void JavaUtilSimpleTimeZone_initWithInt_withNSString_(JavaUtilSimpleTimeZone *self, jint offset, NSString *name);

FOUNDATION_EXPORT JavaUtilSimpleTimeZone *new_JavaUtilSimpleTimeZone_initWithInt_withNSString_(jint offset, NSString *name) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT JavaUtilSimpleTimeZone *create_JavaUtilSimpleTimeZone_initWithInt_withNSString_(jint offset, NSString *name);

FOUNDATION_EXPORT void JavaUtilSimpleTimeZone_initWithInt_withNSString_withInt_withInt_withInt_withInt_withInt_withInt_withInt_withInt_(JavaUtilSimpleTimeZone *self, jint offset, NSString *name, jint startMonth, jint startDay, jint startDayOfWeek, jint startTime, jint endMonth, jint endDay, jint endDayOfWeek, jint endTime);

FOUNDATION_EXPORT JavaUtilSimpleTimeZone *new_JavaUtilSimpleTimeZone_initWithInt_withNSString_withInt_withInt_withInt_withInt_withInt_withInt_withInt_withInt_(jint offset, NSString *name, jint startMonth, jint startDay, jint startDayOfWeek, jint startTime, jint endMonth, jint endDay, jint endDayOfWeek, jint endTime) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT JavaUtilSimpleTimeZone *create_JavaUtilSimpleTimeZone_initWithInt_withNSString_withInt_withInt_withInt_withInt_withInt_withInt_withInt_withInt_(jint offset, NSString *name, jint startMonth, jint startDay, jint startDayOfWeek, jint startTime, jint endMonth, jint endDay, jint endDayOfWeek, jint endTime);

FOUNDATION_EXPORT void JavaUtilSimpleTimeZone_initWithInt_withNSString_withInt_withInt_withInt_withInt_withInt_withInt_withInt_withInt_withInt_(JavaUtilSimpleTimeZone *self, jint offset, NSString *name, jint startMonth, jint startDay, jint startDayOfWeek, jint startTime, jint endMonth, jint endDay, jint endDayOfWeek, jint endTime, jint daylightSavings);

FOUNDATION_EXPORT JavaUtilSimpleTimeZone *new_JavaUtilSimpleTimeZone_initWithInt_withNSString_withInt_withInt_withInt_withInt_withInt_withInt_withInt_withInt_withInt_(jint offset, NSString *name, jint startMonth, jint startDay, jint startDayOfWeek, jint startTime, jint endMonth, jint endDay, jint endDayOfWeek, jint endTime, jint daylightSavings) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT JavaUtilSimpleTimeZone *create_JavaUtilSimpleTimeZone_initWithInt_withNSString_withInt_withInt_withInt_withInt_withInt_withInt_withInt_withInt_withInt_(jint offset, NSString *name, jint startMonth, jint startDay, jint startDayOfWeek, jint startTime, jint endMonth, jint endDay, jint endDayOfWeek, jint endTime, jint daylightSavings);

FOUNDATION_EXPORT void JavaUtilSimpleTimeZone_initWithInt_withNSString_withInt_withInt_withInt_withInt_withInt_withInt_withInt_withInt_withInt_withInt_withInt_(JavaUtilSimpleTimeZone *self, jint offset, NSString *name, jint startMonth, jint startDay, jint startDayOfWeek, jint startTime, jint startTimeMode, jint endMonth, jint endDay, jint endDayOfWeek, jint endTime, jint endTimeMode, jint daylightSavings);

FOUNDATION_EXPORT JavaUtilSimpleTimeZone *new_JavaUtilSimpleTimeZone_initWithInt_withNSString_withInt_withInt_withInt_withInt_withInt_withInt_withInt_withInt_withInt_withInt_withInt_(jint offset, NSString *name, jint startMonth, jint startDay, jint startDayOfWeek, jint startTime, jint startTimeMode, jint endMonth, jint endDay, jint endDayOfWeek, jint endTime, jint endTimeMode, jint daylightSavings) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT JavaUtilSimpleTimeZone *create_JavaUtilSimpleTimeZone_initWithInt_withNSString_withInt_withInt_withInt_withInt_withInt_withInt_withInt_withInt_withInt_withInt_withInt_(jint offset, NSString *name, jint startMonth, jint startDay, jint startDayOfWeek, jint startTime, jint startTimeMode, jint endMonth, jint endDay, jint endDayOfWeek, jint endTime, jint endTimeMode, jint daylightSavings);

J2OBJC_TYPE_LITERAL_HEADER(JavaUtilSimpleTimeZone)

#endif


#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_JavaUtilSimpleTimeZone")
