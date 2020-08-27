//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/libcore/luni/src/main/java/java/net/BindException.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_JavaNetBindException")
#ifdef RESTRICT_JavaNetBindException
#define INCLUDE_ALL_JavaNetBindException 0
#else
#define INCLUDE_ALL_JavaNetBindException 1
#endif
#undef RESTRICT_JavaNetBindException

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if !defined (JavaNetBindException_) && (INCLUDE_ALL_JavaNetBindException || defined(INCLUDE_JavaNetBindException))
#define JavaNetBindException_

#define RESTRICT_JavaNetSocketException 1
#define INCLUDE_JavaNetSocketException 1
#include "java/net/SocketException.h"

/*!
 @brief A <code>BindException</code> is thrown when a process cannot bind a local
 address/port, either because it is already bound or reserved by the OS.
 <p>Most applications <strong>should not</strong> catch this exception; it is
 more robust to catch the superclass <code>SocketException</code>.
 */
@interface JavaNetBindException : JavaNetSocketException

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
 @brief Constructs a new instance with the given detail message and cause.
 */
- (instancetype)initWithNSString:(NSString *)detailMessage
                 withNSException:(NSException *)cause;

@end

J2OBJC_EMPTY_STATIC_INIT(JavaNetBindException)

FOUNDATION_EXPORT void JavaNetBindException_init(JavaNetBindException *self);

FOUNDATION_EXPORT JavaNetBindException *new_JavaNetBindException_init() NS_RETURNS_RETAINED;

FOUNDATION_EXPORT JavaNetBindException *create_JavaNetBindException_init();

FOUNDATION_EXPORT void JavaNetBindException_initWithNSString_(JavaNetBindException *self, NSString *detailMessage);

FOUNDATION_EXPORT JavaNetBindException *new_JavaNetBindException_initWithNSString_(NSString *detailMessage) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT JavaNetBindException *create_JavaNetBindException_initWithNSString_(NSString *detailMessage);

FOUNDATION_EXPORT void JavaNetBindException_initWithNSString_withNSException_(JavaNetBindException *self, NSString *detailMessage, NSException *cause);

FOUNDATION_EXPORT JavaNetBindException *new_JavaNetBindException_initWithNSString_withNSException_(NSString *detailMessage, NSException *cause) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT JavaNetBindException *create_JavaNetBindException_initWithNSString_withNSException_(NSString *detailMessage, NSException *cause);

J2OBJC_TYPE_LITERAL_HEADER(JavaNetBindException)

#endif


#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_JavaNetBindException")
