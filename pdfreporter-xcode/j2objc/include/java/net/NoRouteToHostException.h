//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/libcore/luni/src/main/java/java/net/NoRouteToHostException.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_JavaNetNoRouteToHostException")
#ifdef RESTRICT_JavaNetNoRouteToHostException
#define INCLUDE_ALL_JavaNetNoRouteToHostException 0
#else
#define INCLUDE_ALL_JavaNetNoRouteToHostException 1
#endif
#undef RESTRICT_JavaNetNoRouteToHostException

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if !defined (JavaNetNoRouteToHostException_) && (INCLUDE_ALL_JavaNetNoRouteToHostException || defined(INCLUDE_JavaNetNoRouteToHostException))
#define JavaNetNoRouteToHostException_

#define RESTRICT_JavaNetSocketException 1
#define INCLUDE_JavaNetSocketException 1
#include "java/net/SocketException.h"

/*!
 @brief The <code>NoRouteToHostException</code> will be thrown while attempting to connect
 to a remote host but the host cannot be reached for instance because of a
 badly configured router or a blocking firewall.
 <p>Most applications <strong>should not</strong> catch this exception; it is
 more robust to catch the superclass <code>SocketException</code>.
 */
@interface JavaNetNoRouteToHostException : JavaNetSocketException

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

J2OBJC_EMPTY_STATIC_INIT(JavaNetNoRouteToHostException)

FOUNDATION_EXPORT void JavaNetNoRouteToHostException_init(JavaNetNoRouteToHostException *self);

FOUNDATION_EXPORT JavaNetNoRouteToHostException *new_JavaNetNoRouteToHostException_init() NS_RETURNS_RETAINED;

FOUNDATION_EXPORT JavaNetNoRouteToHostException *create_JavaNetNoRouteToHostException_init();

FOUNDATION_EXPORT void JavaNetNoRouteToHostException_initWithNSString_(JavaNetNoRouteToHostException *self, NSString *detailMessage);

FOUNDATION_EXPORT JavaNetNoRouteToHostException *new_JavaNetNoRouteToHostException_initWithNSString_(NSString *detailMessage) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT JavaNetNoRouteToHostException *create_JavaNetNoRouteToHostException_initWithNSString_(NSString *detailMessage);

FOUNDATION_EXPORT void JavaNetNoRouteToHostException_initWithNSString_withNSException_(JavaNetNoRouteToHostException *self, NSString *detailMessage, NSException *cause);

FOUNDATION_EXPORT JavaNetNoRouteToHostException *new_JavaNetNoRouteToHostException_initWithNSString_withNSException_(NSString *detailMessage, NSException *cause) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT JavaNetNoRouteToHostException *create_JavaNetNoRouteToHostException_initWithNSString_withNSException_(NSString *detailMessage, NSException *cause);

J2OBJC_TYPE_LITERAL_HEADER(JavaNetNoRouteToHostException)

#endif


#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_JavaNetNoRouteToHostException")
