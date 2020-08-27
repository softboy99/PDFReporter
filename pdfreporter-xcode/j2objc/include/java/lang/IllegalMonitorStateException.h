//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/libcore/luni/src/main/java/java/lang/IllegalMonitorStateException.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_JavaLangIllegalMonitorStateException")
#ifdef RESTRICT_JavaLangIllegalMonitorStateException
#define INCLUDE_ALL_JavaLangIllegalMonitorStateException 0
#else
#define INCLUDE_ALL_JavaLangIllegalMonitorStateException 1
#endif
#undef RESTRICT_JavaLangIllegalMonitorStateException

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if !defined (JavaLangIllegalMonitorStateException_) && (INCLUDE_ALL_JavaLangIllegalMonitorStateException || defined(INCLUDE_JavaLangIllegalMonitorStateException))
#define JavaLangIllegalMonitorStateException_

#define RESTRICT_JavaLangRuntimeException 1
#define INCLUDE_JavaLangRuntimeException 1
#include "java/lang/RuntimeException.h"

/*!
 @brief Thrown when a monitor operation is attempted when the monitor is not in the
 correct state, for example when a thread attempts to exit a monitor which it
 does not own.
 */
@interface JavaLangIllegalMonitorStateException : JavaLangRuntimeException

#pragma mark Public

/*!
 @brief Constructs a new <code>IllegalMonitorStateException</code> that includes the
 current stack trace.
 */
- (instancetype)init;

/*!
 @brief Constructs a new <code>IllegalArgumentException</code> with the current stack
 trace and the specified detail message.
 @param detailMessage
 the detail message for this exception.
 */
- (instancetype)initWithNSString:(NSString *)detailMessage;

@end

J2OBJC_EMPTY_STATIC_INIT(JavaLangIllegalMonitorStateException)

FOUNDATION_EXPORT void JavaLangIllegalMonitorStateException_init(JavaLangIllegalMonitorStateException *self);

FOUNDATION_EXPORT JavaLangIllegalMonitorStateException *new_JavaLangIllegalMonitorStateException_init() NS_RETURNS_RETAINED;

FOUNDATION_EXPORT JavaLangIllegalMonitorStateException *create_JavaLangIllegalMonitorStateException_init();

FOUNDATION_EXPORT void JavaLangIllegalMonitorStateException_initWithNSString_(JavaLangIllegalMonitorStateException *self, NSString *detailMessage);

FOUNDATION_EXPORT JavaLangIllegalMonitorStateException *new_JavaLangIllegalMonitorStateException_initWithNSString_(NSString *detailMessage) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT JavaLangIllegalMonitorStateException *create_JavaLangIllegalMonitorStateException_initWithNSString_(NSString *detailMessage);

J2OBJC_TYPE_LITERAL_HEADER(JavaLangIllegalMonitorStateException)

#endif


#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_JavaLangIllegalMonitorStateException")
