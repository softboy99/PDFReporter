//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/libcore/luni/src/main/java/java/io/InterruptedIOException.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_JavaIoInterruptedIOException")
#ifdef RESTRICT_JavaIoInterruptedIOException
#define INCLUDE_ALL_JavaIoInterruptedIOException 0
#else
#define INCLUDE_ALL_JavaIoInterruptedIOException 1
#endif
#undef RESTRICT_JavaIoInterruptedIOException

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if !defined (JavaIoInterruptedIOException_) && (INCLUDE_ALL_JavaIoInterruptedIOException || defined(INCLUDE_JavaIoInterruptedIOException))
#define JavaIoInterruptedIOException_

#define RESTRICT_JavaIoIOException 1
#define INCLUDE_JavaIoIOException 1
#include "java/io/IOException.h"

/*!
 @brief Signals that a blocking I/O operation has been interrupted.
 The number of
 bytes that were transferred successfully before the interruption took place
 is stored in a field of the exception.
 */
@interface JavaIoInterruptedIOException : JavaIoIOException {
 @public
  /*!
   @brief The number of bytes transferred before the I/O interrupt occurred.
   */
  jint bytesTransferred_;
}

#pragma mark Public

/*!
 @brief Constructs a new instance.
 */
- (instancetype)init;

/*!
 @brief Constructs a new instance with the given detail message.
 */
- (instancetype)initWithNSString:(NSString *)detailMessage;

/*!
 @brief Constructs a new instance with given detail message and cause.
  internal use only
 */
- (instancetype)initWithNSString:(NSString *)detailMessage
                 withNSException:(NSException *)cause;

@end

J2OBJC_EMPTY_STATIC_INIT(JavaIoInterruptedIOException)

FOUNDATION_EXPORT void JavaIoInterruptedIOException_init(JavaIoInterruptedIOException *self);

FOUNDATION_EXPORT JavaIoInterruptedIOException *new_JavaIoInterruptedIOException_init() NS_RETURNS_RETAINED;

FOUNDATION_EXPORT JavaIoInterruptedIOException *create_JavaIoInterruptedIOException_init();

FOUNDATION_EXPORT void JavaIoInterruptedIOException_initWithNSString_(JavaIoInterruptedIOException *self, NSString *detailMessage);

FOUNDATION_EXPORT JavaIoInterruptedIOException *new_JavaIoInterruptedIOException_initWithNSString_(NSString *detailMessage) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT JavaIoInterruptedIOException *create_JavaIoInterruptedIOException_initWithNSString_(NSString *detailMessage);

FOUNDATION_EXPORT void JavaIoInterruptedIOException_initWithNSString_withNSException_(JavaIoInterruptedIOException *self, NSString *detailMessage, NSException *cause);

FOUNDATION_EXPORT JavaIoInterruptedIOException *new_JavaIoInterruptedIOException_initWithNSString_withNSException_(NSString *detailMessage, NSException *cause) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT JavaIoInterruptedIOException *create_JavaIoInterruptedIOException_initWithNSString_withNSException_(NSString *detailMessage, NSException *cause);

J2OBJC_TYPE_LITERAL_HEADER(JavaIoInterruptedIOException)

#endif


#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_JavaIoInterruptedIOException")
