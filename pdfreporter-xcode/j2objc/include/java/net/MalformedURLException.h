//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/libcore/luni/src/main/java/java/net/MalformedURLException.java
//

#ifndef _JavaNetMalformedURLException_H_
#define _JavaNetMalformedURLException_H_

@class JavaLangThrowable;

#include "J2ObjC_header.h"
#include "java/io/IOException.h"

#define JavaNetMalformedURLException_serialVersionUID -182787522200415866LL

@interface JavaNetMalformedURLException : JavaIoIOException {
}

- (instancetype)init;

- (instancetype)initWithNSString:(NSString *)detailMessage;

- (instancetype)initWithNSString:(NSString *)detailMessage
           withJavaLangThrowable:(JavaLangThrowable *)cause;

@end

J2OBJC_EMPTY_STATIC_INIT(JavaNetMalformedURLException)

CF_EXTERN_C_BEGIN

J2OBJC_STATIC_FIELD_GETTER(JavaNetMalformedURLException, serialVersionUID, jlong)
CF_EXTERN_C_END

J2OBJC_TYPE_LITERAL_HEADER(JavaNetMalformedURLException)

#endif // _JavaNetMalformedURLException_H_
