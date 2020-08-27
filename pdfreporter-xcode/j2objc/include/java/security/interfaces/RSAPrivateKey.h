//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/libcore/luni/src/main/java/java/security/interfaces/RSAPrivateKey.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_JavaSecurityInterfacesRSAPrivateKey")
#ifdef RESTRICT_JavaSecurityInterfacesRSAPrivateKey
#define INCLUDE_ALL_JavaSecurityInterfacesRSAPrivateKey 0
#else
#define INCLUDE_ALL_JavaSecurityInterfacesRSAPrivateKey 1
#endif
#undef RESTRICT_JavaSecurityInterfacesRSAPrivateKey

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if !defined (JavaSecurityInterfacesRSAPrivateKey_) && (INCLUDE_ALL_JavaSecurityInterfacesRSAPrivateKey || defined(INCLUDE_JavaSecurityInterfacesRSAPrivateKey))
#define JavaSecurityInterfacesRSAPrivateKey_

#define RESTRICT_JavaSecurityPrivateKey 1
#define INCLUDE_JavaSecurityPrivateKey 1
#include "java/security/PrivateKey.h"

#define RESTRICT_JavaSecurityInterfacesRSAKey 1
#define INCLUDE_JavaSecurityInterfacesRSAKey 1
#include "java/security/interfaces/RSAKey.h"

@class JavaMathBigInteger;

/*!
 @brief The interface for an PKCS#1 RSA private key.
 */
@protocol JavaSecurityInterfacesRSAPrivateKey < JavaSecurityPrivateKey, JavaSecurityInterfacesRSAKey, NSObject, JavaObject >

/*!
 @brief Returns the private exponent <code>d</code>.
 @return the private exponent <code>d</code>.
 */
- (JavaMathBigInteger *)getPrivateExponent;

@end

@interface JavaSecurityInterfacesRSAPrivateKey : NSObject

+ (jlong)serialVersionUID;

@end

J2OBJC_EMPTY_STATIC_INIT(JavaSecurityInterfacesRSAPrivateKey)

/*!
 @brief The serial version identifier.
 */
inline jlong JavaSecurityInterfacesRSAPrivateKey_get_serialVersionUID();
#define JavaSecurityInterfacesRSAPrivateKey_serialVersionUID 5187144804936595022LL
J2OBJC_STATIC_FIELD_CONSTANT(JavaSecurityInterfacesRSAPrivateKey, serialVersionUID, jlong)

J2OBJC_TYPE_LITERAL_HEADER(JavaSecurityInterfacesRSAPrivateKey)

#endif


#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_JavaSecurityInterfacesRSAPrivateKey")
