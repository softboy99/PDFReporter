//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/libcore/luni/src/main/java/java/lang/AssertionError.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_JavaLangAssertionError")
#ifdef RESTRICT_JavaLangAssertionError
#define INCLUDE_ALL_JavaLangAssertionError 0
#else
#define INCLUDE_ALL_JavaLangAssertionError 1
#endif
#undef RESTRICT_JavaLangAssertionError

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if !defined (JavaLangAssertionError_) && (INCLUDE_ALL_JavaLangAssertionError || defined(INCLUDE_JavaLangAssertionError))
#define JavaLangAssertionError_

#define RESTRICT_JavaLangError 1
#define INCLUDE_JavaLangError 1
#include "java/lang/Error.h"

/*!
 @brief Thrown when an assertion has failed.
 @since 1.4
 */
@interface JavaLangAssertionError : JavaLangError

#pragma mark Public

/*!
 @brief Constructs a new <code>AssertionError</code> with no message.
 */
- (instancetype)init;

/*!
 @brief Constructs a new <code>AssertionError</code> with a message based on calling
 <code>String.valueOf(boolean)</code> with the specified boolean value.
 @param detailMessage
 the value to be converted into the message.
 */
- (instancetype)initWithBoolean:(jboolean)detailMessage;

/*!
 @brief Constructs a new <code>AssertionError</code> with a message based on calling
 <code>String.valueOf(char)</code> with the specified character value.
 @param detailMessage
 the value to be converted into the message.
 */
- (instancetype)initWithChar:(jchar)detailMessage;

/*!
 @brief Constructs a new <code>AssertionError</code> with a message based on calling
 <code>String.valueOf(double)</code> with the specified double value.
 @param detailMessage
 the value to be converted into the message.
 */
- (instancetype)initWithDouble:(jdouble)detailMessage;

/*!
 @brief Constructs a new <code>AssertionError</code> with a message based on calling
 <code>String.valueOf(float)</code> with the specified float value.
 @param detailMessage
 the value to be converted into the message.
 */
- (instancetype)initWithFloat:(jfloat)detailMessage;

/*!
 @brief Constructs a new <code>AssertionError</code> with a message based on calling
 <code>String.valueOf(int)</code> with the specified integer value.
 @param detailMessage
 the value to be converted into the message.
 */
- (instancetype)initWithInt:(jint)detailMessage;

/*!
 @brief Constructs a new <code>AssertionError</code> with a message based on calling
 <code>String.valueOf(long)</code> with the specified long value.
 @param detailMessage
 the value to be converted into the message.
 */
- (instancetype)initWithLong:(jlong)detailMessage;

/*!
 @brief Constructs a new <code>AssertionError</code> with a message based on calling
 <code>String.valueOf(Object)</code> with the specified object.
 If the object
 is an instance of <code>Throwable</code>, then it also becomes the cause of
 this error.
 @param detailMessage
 the object to be converted into the detail message and
 optionally the cause.
 */
- (instancetype)initWithId:(id)detailMessage;

/*!
 @brief Constructs a new <code>AssertionError</code> with the given detail message and cause.
 @since 1.7
 */
- (instancetype)initWithNSString:(NSString *)detailMessage
                 withNSException:(NSException *)cause;

@end

J2OBJC_EMPTY_STATIC_INIT(JavaLangAssertionError)

FOUNDATION_EXPORT void JavaLangAssertionError_init(JavaLangAssertionError *self);

FOUNDATION_EXPORT JavaLangAssertionError *new_JavaLangAssertionError_init() NS_RETURNS_RETAINED;

FOUNDATION_EXPORT JavaLangAssertionError *create_JavaLangAssertionError_init();

FOUNDATION_EXPORT void JavaLangAssertionError_initWithNSString_withNSException_(JavaLangAssertionError *self, NSString *detailMessage, NSException *cause);

FOUNDATION_EXPORT JavaLangAssertionError *new_JavaLangAssertionError_initWithNSString_withNSException_(NSString *detailMessage, NSException *cause) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT JavaLangAssertionError *create_JavaLangAssertionError_initWithNSString_withNSException_(NSString *detailMessage, NSException *cause);

FOUNDATION_EXPORT void JavaLangAssertionError_initWithId_(JavaLangAssertionError *self, id detailMessage);

FOUNDATION_EXPORT JavaLangAssertionError *new_JavaLangAssertionError_initWithId_(id detailMessage) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT JavaLangAssertionError *create_JavaLangAssertionError_initWithId_(id detailMessage);

FOUNDATION_EXPORT void JavaLangAssertionError_initWithBoolean_(JavaLangAssertionError *self, jboolean detailMessage);

FOUNDATION_EXPORT JavaLangAssertionError *new_JavaLangAssertionError_initWithBoolean_(jboolean detailMessage) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT JavaLangAssertionError *create_JavaLangAssertionError_initWithBoolean_(jboolean detailMessage);

FOUNDATION_EXPORT void JavaLangAssertionError_initWithChar_(JavaLangAssertionError *self, jchar detailMessage);

FOUNDATION_EXPORT JavaLangAssertionError *new_JavaLangAssertionError_initWithChar_(jchar detailMessage) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT JavaLangAssertionError *create_JavaLangAssertionError_initWithChar_(jchar detailMessage);

FOUNDATION_EXPORT void JavaLangAssertionError_initWithInt_(JavaLangAssertionError *self, jint detailMessage);

FOUNDATION_EXPORT JavaLangAssertionError *new_JavaLangAssertionError_initWithInt_(jint detailMessage) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT JavaLangAssertionError *create_JavaLangAssertionError_initWithInt_(jint detailMessage);

FOUNDATION_EXPORT void JavaLangAssertionError_initWithLong_(JavaLangAssertionError *self, jlong detailMessage);

FOUNDATION_EXPORT JavaLangAssertionError *new_JavaLangAssertionError_initWithLong_(jlong detailMessage) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT JavaLangAssertionError *create_JavaLangAssertionError_initWithLong_(jlong detailMessage);

FOUNDATION_EXPORT void JavaLangAssertionError_initWithFloat_(JavaLangAssertionError *self, jfloat detailMessage);

FOUNDATION_EXPORT JavaLangAssertionError *new_JavaLangAssertionError_initWithFloat_(jfloat detailMessage) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT JavaLangAssertionError *create_JavaLangAssertionError_initWithFloat_(jfloat detailMessage);

FOUNDATION_EXPORT void JavaLangAssertionError_initWithDouble_(JavaLangAssertionError *self, jdouble detailMessage);

FOUNDATION_EXPORT JavaLangAssertionError *new_JavaLangAssertionError_initWithDouble_(jdouble detailMessage) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT JavaLangAssertionError *create_JavaLangAssertionError_initWithDouble_(jdouble detailMessage);

J2OBJC_TYPE_LITERAL_HEADER(JavaLangAssertionError)

#endif


#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_JavaLangAssertionError")
