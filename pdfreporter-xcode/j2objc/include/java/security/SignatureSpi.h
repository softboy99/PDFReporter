//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/libcore/luni/src/main/java/java/security/SignatureSpi.java
//

#ifndef _JavaSecuritySignatureSpi_H_
#define _JavaSecuritySignatureSpi_H_

@class IOSByteArray;
@class JavaNioByteBuffer;
@class JavaSecurityAlgorithmParameters;
@class JavaSecuritySecureRandom;
@protocol JavaSecurityPrivateKey;
@protocol JavaSecurityPublicKey;
@protocol JavaSecuritySpecAlgorithmParameterSpec;

#include "J2ObjC_header.h"

@interface JavaSecuritySignatureSpi : NSObject {
 @public
  JavaSecuritySecureRandom *appRandom_;
}

- (void)engineInitVerifyWithJavaSecurityPublicKey:(id<JavaSecurityPublicKey>)publicKey;

- (void)engineInitSignWithJavaSecurityPrivateKey:(id<JavaSecurityPrivateKey>)privateKey;

- (void)engineInitSignWithJavaSecurityPrivateKey:(id<JavaSecurityPrivateKey>)privateKey
                    withJavaSecuritySecureRandom:(JavaSecuritySecureRandom *)random;

- (void)engineUpdateWithByte:(jbyte)b;

- (void)engineUpdateWithByteArray:(IOSByteArray *)b
                          withInt:(jint)off
                          withInt:(jint)len;

- (void)engineUpdateWithJavaNioByteBuffer:(JavaNioByteBuffer *)input;

- (IOSByteArray *)engineSign;

- (jint)engineSignWithByteArray:(IOSByteArray *)outbuf
                        withInt:(jint)offset
                        withInt:(jint)len;

- (jboolean)engineVerifyWithByteArray:(IOSByteArray *)sigBytes;

- (jboolean)engineVerifyWithByteArray:(IOSByteArray *)sigBytes
                              withInt:(jint)offset
                              withInt:(jint)length;

- (void)engineSetParameterWithNSString:(NSString *)param
                                withId:(id)value;

- (void)engineSetParameterWithJavaSecuritySpecAlgorithmParameterSpec:(id<JavaSecuritySpecAlgorithmParameterSpec>)params;

- (JavaSecurityAlgorithmParameters *)engineGetParameters;

- (id)engineGetParameterWithNSString:(NSString *)param;

- (id)clone;

- (instancetype)init;

@end

J2OBJC_EMPTY_STATIC_INIT(JavaSecuritySignatureSpi)

J2OBJC_FIELD_SETTER(JavaSecuritySignatureSpi, appRandom_, JavaSecuritySecureRandom *)

CF_EXTERN_C_BEGIN
CF_EXTERN_C_END

J2OBJC_TYPE_LITERAL_HEADER(JavaSecuritySignatureSpi)

#endif // _JavaSecuritySignatureSpi_H_
