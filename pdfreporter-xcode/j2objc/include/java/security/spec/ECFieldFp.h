//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/libcore/luni/src/main/java/java/security/spec/ECFieldFp.java
//

#ifndef _JavaSecuritySpecECFieldFp_H_
#define _JavaSecuritySpecECFieldFp_H_

@class JavaMathBigInteger;

#include "J2ObjC_header.h"
#include "java/security/spec/ECField.h"

@interface JavaSecuritySpecECFieldFp : NSObject < JavaSecuritySpecECField > {
}

- (instancetype)initWithJavaMathBigInteger:(JavaMathBigInteger *)p;

- (jint)getFieldSize;

- (JavaMathBigInteger *)getP;

- (jboolean)isEqual:(id)obj;

- (NSUInteger)hash;

@end

J2OBJC_EMPTY_STATIC_INIT(JavaSecuritySpecECFieldFp)

CF_EXTERN_C_BEGIN
CF_EXTERN_C_END

J2OBJC_TYPE_LITERAL_HEADER(JavaSecuritySpecECFieldFp)

#endif // _JavaSecuritySpecECFieldFp_H_
