//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/libcore/luni/src/main/java/java/util/logging/LogRecord.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_JavaUtilLoggingLogRecord")
#ifdef RESTRICT_JavaUtilLoggingLogRecord
#define INCLUDE_ALL_JavaUtilLoggingLogRecord 0
#else
#define INCLUDE_ALL_JavaUtilLoggingLogRecord 1
#endif
#undef RESTRICT_JavaUtilLoggingLogRecord

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if !defined (JavaUtilLoggingLogRecord_) && (INCLUDE_ALL_JavaUtilLoggingLogRecord || defined(INCLUDE_JavaUtilLoggingLogRecord))
#define JavaUtilLoggingLogRecord_

#define RESTRICT_JavaIoSerializable 1
#define INCLUDE_JavaIoSerializable 1
#include "java/io/Serializable.h"

@class IOSObjectArray;
@class JavaUtilLoggingLevel;
@class JavaUtilResourceBundle;

/*!
 @brief A <code>LogRecord</code> object represents a logging request.
 It is passed between
 the logging framework and individual logging handlers. Client applications
 should not modify a <code>LogRecord</code> object that has been passed into the
 logging framework.
 <p>
 The <code>LogRecord</code> class will infer the source method name and source
 class name the first time they are accessed if the client application didn't
 specify them explicitly. This automatic inference is based on the analysis of
 the call stack and is not guaranteed to be precise. Client applications
 should force the initialization of these two fields by calling
 <code>getSourceClassName</code> or <code>getSourceMethodName</code> if they expect to
 use them after passing the <code>LogRecord</code> object to another thread or
 transmitting it over RMI.
 */
@interface JavaUtilLoggingLogRecord : NSObject < JavaIoSerializable >

#pragma mark Public

/*!
 @brief Constructs a <code>LogRecord</code> object using the supplied the logging
 level and message.
 The millis property is set to the current time. The
 sequence property is set to a new unique value, allocated in increasing
 order within the VM. The thread ID is set to a unique value
 for the current thread. All other properties are set to <code>null</code>.
 @param level
 the logging level, may not be <code>null</code>.
 @param msg
 the raw message.
 @throws NullPointerException
 if <code>level</code> is <code>null</code>.
 */
- (instancetype)initWithJavaUtilLoggingLevel:(JavaUtilLoggingLevel *)level
                                withNSString:(NSString *)msg;

/*!
 @brief Gets the logging level.
 @return the logging level.
 */
- (JavaUtilLoggingLevel *)getLevel;

/*!
 @brief Gets the name of the logger.
 @return the logger name.
 */
- (NSString *)getLoggerName;

/*!
 @brief Gets the raw message.
 @return the raw message, may be <code>null</code>.
 */
- (NSString *)getMessage;

/*!
 @brief Gets the time when this event occurred, in milliseconds since 1970.
 @return the time when this event occurred, in milliseconds since 1970.
 */
- (jlong)getMillis;

/*!
 @brief Gets the parameters.
 @return the array of parameters or <code>null</code> if there are no
 parameters.
 */
- (IOSObjectArray *)getParameters;

/*!
 @brief Gets the resource bundle used to localize the raw message during
 formatting.
 @return the associated resource bundle, <code>null</code> if none is
 available or the message is not localizable.
 */
- (JavaUtilResourceBundle *)getResourceBundle;

/*!
 @brief Gets the name of the resource bundle.
 @return the name of the resource bundle, <code>null</code> if none is
 available or the message is not localizable.
 */
- (NSString *)getResourceBundleName;

/*!
 @brief Gets the sequence number.
 @return the sequence number.
 */
- (jlong)getSequenceNumber;

/*!
 @brief Gets the name of the class that is the source of this log record.
 This
 information can be changed, may be <code>null</code> and is untrusted.
 @return the name of the source class of this log record (possiblity <code>null</code>)
 */
- (NSString *)getSourceClassName;

/*!
 @brief Gets the name of the method that is the source of this log record.
 @return the name of the source method of this log record.
 */
- (NSString *)getSourceMethodName;

/*!
 @brief Gets a unique ID of the thread originating the log record.
 Every thread
 becomes a different ID.
 <p>
 Notice : the ID doesn't necessary map the OS thread ID
 </p>
 @return the ID of the thread originating this log record.
 */
- (jint)getThreadID;

/*!
 @brief Gets the <code>Throwable</code> object associated with this log record.
 @return the <code>Throwable</code> object associated with this log record.
 */
- (NSException *)getThrown;

/*!
 @brief Sets the logging level.
 @param level
 the level to set.
 @throws NullPointerException
 if <code>level</code> is <code>null</code>.
 */
- (void)setLevelWithJavaUtilLoggingLevel:(JavaUtilLoggingLevel *)level;

/*!
 @brief Sets the name of the logger.
 @param loggerName
 the logger name to set.
 */
- (void)setLoggerNameWithNSString:(NSString *)loggerName;

/*!
 @brief Sets the raw message.
 When this record is formatted by a logger that has
 a localization resource bundle that contains an entry for <code>message</code>,
 then the raw message is replaced with its localized version.
 @param message
 the raw message to set, may be <code>null</code>.
 */
- (void)setMessageWithNSString:(NSString *)message;

/*!
 @brief Sets the time when this event occurred, in milliseconds since 1970.
 @param millis
 the time when this event occurred, in milliseconds since 1970.
 */
- (void)setMillisWithLong:(jlong)millis;

/*!
 @brief Sets the parameters.
 @param parameters
 the array of parameters to set, may be <code>null</code>.
 */
- (void)setParametersWithNSObjectArray:(IOSObjectArray *)parameters;

/*!
 @brief Sets the resource bundle used to localize the raw message during
 formatting.
 @param resourceBundle
 the resource bundle to set, may be <code>null</code>.
 */
- (void)setResourceBundleWithJavaUtilResourceBundle:(JavaUtilResourceBundle *)resourceBundle;

/*!
 @brief Sets the name of the resource bundle.
 @param resourceBundleName
 the name of the resource bundle to set.
 */
- (void)setResourceBundleNameWithNSString:(NSString *)resourceBundleName;

/*!
 @brief Sets the sequence number.
 It is usually not necessary to call this method
 to change the sequence number because the number is allocated when this
 instance is constructed.
 @param sequenceNumber
 the sequence number to set.
 */
- (void)setSequenceNumberWithLong:(jlong)sequenceNumber;

/*!
 @brief Sets the name of the class that is the source of this log record.
 @param sourceClassName
 the name of the source class of this log record, may be
 <code>null</code>.
 */
- (void)setSourceClassNameWithNSString:(NSString *)sourceClassName;

/*!
 @brief Sets the name of the method that is the source of this log record.
 @param sourceMethodName
 the name of the source method of this log record, may be
 <code>null</code>.
 */
- (void)setSourceMethodNameWithNSString:(NSString *)sourceMethodName;

/*!
 @brief Sets the ID of the thread originating this log record.
 @param threadID
 the new ID of the thread originating this log record.
 */
- (void)setThreadIDWithInt:(jint)threadID;

/*!
 @brief Sets the <code>Throwable</code> object associated with this log record.
 @param thrown
 the new <code>Throwable</code> object to associate with this log
 record.
 */
- (void)setThrownWithNSException:(NSException *)thrown;

@end

J2OBJC_STATIC_INIT(JavaUtilLoggingLogRecord)

FOUNDATION_EXPORT void JavaUtilLoggingLogRecord_initWithJavaUtilLoggingLevel_withNSString_(JavaUtilLoggingLogRecord *self, JavaUtilLoggingLevel *level, NSString *msg);

FOUNDATION_EXPORT JavaUtilLoggingLogRecord *new_JavaUtilLoggingLogRecord_initWithJavaUtilLoggingLevel_withNSString_(JavaUtilLoggingLevel *level, NSString *msg) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT JavaUtilLoggingLogRecord *create_JavaUtilLoggingLogRecord_initWithJavaUtilLoggingLevel_withNSString_(JavaUtilLoggingLevel *level, NSString *msg);

J2OBJC_TYPE_LITERAL_HEADER(JavaUtilLoggingLogRecord)

#endif


#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_JavaUtilLoggingLogRecord")
