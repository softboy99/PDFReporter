//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/libcore/luni/src/main/java/java/net/PortUnreachableException.java
//

#ifndef _JavaNetPortUnreachableException_H_
#define _JavaNetPortUnreachableException_H_

@class JavaLangThrowable;

#include "J2ObjC_header.h"
#include "java/net/SocketException.h"

#define JavaNetPortUnreachableException_serialVersionUID 8462541992376507323LL

@interface JavaNetPortUnreachableException : JavaNetSocketException {
}

- (instancetype)init;

- (instancetype)initWithNSString:(NSString *)detailMessage;

- (instancetype)initWithNSString:(NSString *)detailMessage
           withJavaLangThrowable:(JavaLangThrowable *)cause;

@end

J2OBJC_EMPTY_STATIC_INIT(JavaNetPortUnreachableException)

CF_EXTERN_C_BEGIN

J2OBJC_STATIC_FIELD_GETTER(JavaNetPortUnreachableException, serialVersionUID, jlong)
CF_EXTERN_C_END

J2OBJC_TYPE_LITERAL_HEADER(JavaNetPortUnreachableException)

#endif // _JavaNetPortUnreachableException_H_
