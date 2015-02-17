//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/libcore/luni/src/main/java/java/security/KeyManagementException.java
//

#ifndef _JavaSecurityKeyManagementException_H_
#define _JavaSecurityKeyManagementException_H_

@class JavaLangThrowable;

#include "J2ObjC_header.h"
#include "java/security/KeyException.h"

#define JavaSecurityKeyManagementException_serialVersionUID 947674216157062695LL

@interface JavaSecurityKeyManagementException : JavaSecurityKeyException {
}

- (instancetype)initWithNSString:(NSString *)msg;

- (instancetype)init;

- (instancetype)initWithNSString:(NSString *)message
           withJavaLangThrowable:(JavaLangThrowable *)cause;

- (instancetype)initWithJavaLangThrowable:(JavaLangThrowable *)cause;

@end

J2OBJC_EMPTY_STATIC_INIT(JavaSecurityKeyManagementException)

CF_EXTERN_C_BEGIN

J2OBJC_STATIC_FIELD_GETTER(JavaSecurityKeyManagementException, serialVersionUID, jlong)
CF_EXTERN_C_END

J2OBJC_TYPE_LITERAL_HEADER(JavaSecurityKeyManagementException)

#endif // _JavaSecurityKeyManagementException_H_
