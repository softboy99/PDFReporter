//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/libcore/luni/src/main/java/java/io/UnsupportedEncodingException.java
//

#ifndef _JavaIoUnsupportedEncodingException_H_
#define _JavaIoUnsupportedEncodingException_H_

#include "J2ObjC_header.h"
#include "java/io/IOException.h"

#define JavaIoUnsupportedEncodingException_serialVersionUID -4274276298326136670LL

@interface JavaIoUnsupportedEncodingException : JavaIoIOException {
}

- (instancetype)init;

- (instancetype)initWithNSString:(NSString *)detailMessage;

@end

J2OBJC_EMPTY_STATIC_INIT(JavaIoUnsupportedEncodingException)

CF_EXTERN_C_BEGIN

J2OBJC_STATIC_FIELD_GETTER(JavaIoUnsupportedEncodingException, serialVersionUID, jlong)
CF_EXTERN_C_END

J2OBJC_TYPE_LITERAL_HEADER(JavaIoUnsupportedEncodingException)

#endif // _JavaIoUnsupportedEncodingException_H_
