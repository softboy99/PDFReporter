//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/libcore/luni/src/main/java/java/security/interfaces/RSAMultiPrimePrivateCrtKey.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_JavaSecurityInterfacesRSAMultiPrimePrivateCrtKey")
#ifdef RESTRICT_JavaSecurityInterfacesRSAMultiPrimePrivateCrtKey
#define INCLUDE_ALL_JavaSecurityInterfacesRSAMultiPrimePrivateCrtKey 0
#else
#define INCLUDE_ALL_JavaSecurityInterfacesRSAMultiPrimePrivateCrtKey 1
#endif
#undef RESTRICT_JavaSecurityInterfacesRSAMultiPrimePrivateCrtKey

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if !defined (JavaSecurityInterfacesRSAMultiPrimePrivateCrtKey_) && (INCLUDE_ALL_JavaSecurityInterfacesRSAMultiPrimePrivateCrtKey || defined(INCLUDE_JavaSecurityInterfacesRSAMultiPrimePrivateCrtKey))
#define JavaSecurityInterfacesRSAMultiPrimePrivateCrtKey_

#define RESTRICT_JavaSecurityInterfacesRSAPrivateKey 1
#define INCLUDE_JavaSecurityInterfacesRSAPrivateKey 1
#include "java/security/interfaces/RSAPrivateKey.h"

@class IOSObjectArray;
@class JavaMathBigInteger;

/*!
 @brief The interface for a Multi-Prime RSA private key.
 Specified by <a
 href="http://www.rsa.com/rsalabs/node.asp?id=2125">PKCS #1 v2.0 Amendment 1:
 Multi-Prime RSA</a>.
 */
@protocol JavaSecurityInterfacesRSAMultiPrimePrivateCrtKey < JavaSecurityInterfacesRSAPrivateKey, NSObject, JavaObject >

/*!
 @brief Returns the CRT coefficient, <code>q^-1 mod p</code>.
 @return the CRT coefficient.
 */
- (JavaMathBigInteger *)getCrtCoefficient;

/*!
 @brief Returns the information for the additional primes.
 @return the information for the additional primes, or <code>null</code> if
 there are only the two primes (<code>p, q</code>),
 */
- (IOSObjectArray *)getOtherPrimeInfo;

/*!
 @brief Returns the prime factor <code>p</code> of <code>n</code>.
 @return the prime factor <code>p</code> of <code>n</code>.
 */
- (JavaMathBigInteger *)getPrimeP;

/*!
 @brief Returns the prime factor <code>q</code> of <code>n</code>.
 @return the prime factor <code>q</code> of <code>n</code>.
 */
- (JavaMathBigInteger *)getPrimeQ;

/*!
 @brief Returns the CRT exponent of the prime <code>p</code>.
 @return the CRT exponent of the prime <code>p</code>.
 */
- (JavaMathBigInteger *)getPrimeExponentP;

/*!
 @brief Returns the CRT exponent of the prime <code>q</code>.
 @return the CRT exponent of the prime <code>q</code>.
 */
- (JavaMathBigInteger *)getPrimeExponentQ;

/*!
 @brief Returns the public exponent <code>e</code>.
 @return the public exponent <code>e</code>.
 */
- (JavaMathBigInteger *)getPublicExponent;

@end

@interface JavaSecurityInterfacesRSAMultiPrimePrivateCrtKey : NSObject

+ (jlong)serialVersionUID;

@end

J2OBJC_EMPTY_STATIC_INIT(JavaSecurityInterfacesRSAMultiPrimePrivateCrtKey)

/*!
 @brief the serial version identifier.
 */
inline jlong JavaSecurityInterfacesRSAMultiPrimePrivateCrtKey_get_serialVersionUID();
#define JavaSecurityInterfacesRSAMultiPrimePrivateCrtKey_serialVersionUID 618058533534628008LL
J2OBJC_STATIC_FIELD_CONSTANT(JavaSecurityInterfacesRSAMultiPrimePrivateCrtKey, serialVersionUID, jlong)

J2OBJC_TYPE_LITERAL_HEADER(JavaSecurityInterfacesRSAMultiPrimePrivateCrtKey)

#endif


#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_JavaSecurityInterfacesRSAMultiPrimePrivateCrtKey")
