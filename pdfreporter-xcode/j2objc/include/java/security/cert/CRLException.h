//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/libcore/luni/src/main/java/java/security/cert/CRLException.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_JavaSecurityCertCRLException")
#ifdef RESTRICT_JavaSecurityCertCRLException
#define INCLUDE_ALL_JavaSecurityCertCRLException 0
#else
#define INCLUDE_ALL_JavaSecurityCertCRLException 1
#endif
#undef RESTRICT_JavaSecurityCertCRLException

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if !defined (JavaSecurityCertCRLException_) && (INCLUDE_ALL_JavaSecurityCertCRLException || defined(INCLUDE_JavaSecurityCertCRLException))
#define JavaSecurityCertCRLException_

#define RESTRICT_JavaSecurityGeneralSecurityException 1
#define INCLUDE_JavaSecurityGeneralSecurityException 1
#include "java/security/GeneralSecurityException.h"

/*!
 @brief The exception that is thrown if errors occur during handling of <code>CRL</code>s.
 */
@interface JavaSecurityCertCRLException : JavaSecurityGeneralSecurityException

#pragma mark Public

/*!
 @brief Creates a new <code>CRLException</code>.
 */
- (instancetype)init;

/*!
 @brief Creates a new <code>CRLException</code> with the specified message.
 @param msg
 the detail message for this exception.
 */
- (instancetype)initWithNSString:(NSString *)msg;

/*!
 @brief Creates a new <code>CRLException</code> with the specified message and cause.
 @param message
 the detail message for this exception.
 @param cause
 the cause for this exception.
 */
- (instancetype)initWithNSString:(NSString *)message
                 withNSException:(NSException *)cause;

/*!
 @brief Creates a new <code>CRLException</code> with the specified cause.
 @param cause
 the cause for this exception.
 */
- (instancetype)initWithNSException:(NSException *)cause;

@end

J2OBJC_EMPTY_STATIC_INIT(JavaSecurityCertCRLException)

FOUNDATION_EXPORT void JavaSecurityCertCRLException_initWithNSString_(JavaSecurityCertCRLException *self, NSString *msg);

FOUNDATION_EXPORT JavaSecurityCertCRLException *new_JavaSecurityCertCRLException_initWithNSString_(NSString *msg) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT JavaSecurityCertCRLException *create_JavaSecurityCertCRLException_initWithNSString_(NSString *msg);

FOUNDATION_EXPORT void JavaSecurityCertCRLException_init(JavaSecurityCertCRLException *self);

FOUNDATION_EXPORT JavaSecurityCertCRLException *new_JavaSecurityCertCRLException_init() NS_RETURNS_RETAINED;

FOUNDATION_EXPORT JavaSecurityCertCRLException *create_JavaSecurityCertCRLException_init();

FOUNDATION_EXPORT void JavaSecurityCertCRLException_initWithNSString_withNSException_(JavaSecurityCertCRLException *self, NSString *message, NSException *cause);

FOUNDATION_EXPORT JavaSecurityCertCRLException *new_JavaSecurityCertCRLException_initWithNSString_withNSException_(NSString *message, NSException *cause) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT JavaSecurityCertCRLException *create_JavaSecurityCertCRLException_initWithNSString_withNSException_(NSString *message, NSException *cause);

FOUNDATION_EXPORT void JavaSecurityCertCRLException_initWithNSException_(JavaSecurityCertCRLException *self, NSException *cause);

FOUNDATION_EXPORT JavaSecurityCertCRLException *new_JavaSecurityCertCRLException_initWithNSException_(NSException *cause) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT JavaSecurityCertCRLException *create_JavaSecurityCertCRLException_initWithNSException_(NSException *cause);

J2OBJC_TYPE_LITERAL_HEADER(JavaSecurityCertCRLException)

#endif


#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_JavaSecurityCertCRLException")
