//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/libcore/luni/src/main/java/java/security/InvalidParameterException.java
//

#ifndef _JavaSecurityInvalidParameterException_H_
#define _JavaSecurityInvalidParameterException_H_

#include "J2ObjC_header.h"
#include "java/lang/IllegalArgumentException.h"

#define JavaSecurityInvalidParameterException_serialVersionUID -857968536935667808LL

@interface JavaSecurityInvalidParameterException : JavaLangIllegalArgumentException {
}

- (instancetype)initWithNSString:(NSString *)msg;

- (instancetype)init;

@end

J2OBJC_EMPTY_STATIC_INIT(JavaSecurityInvalidParameterException)

CF_EXTERN_C_BEGIN

J2OBJC_STATIC_FIELD_GETTER(JavaSecurityInvalidParameterException, serialVersionUID, jlong)
CF_EXTERN_C_END

J2OBJC_TYPE_LITERAL_HEADER(JavaSecurityInvalidParameterException)

#endif // _JavaSecurityInvalidParameterException_H_