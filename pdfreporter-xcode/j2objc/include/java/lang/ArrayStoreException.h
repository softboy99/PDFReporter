//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/libcore/luni/src/main/java/java/lang/ArrayStoreException.java
//

#ifndef _JavaLangArrayStoreException_H_
#define _JavaLangArrayStoreException_H_

#include "J2ObjC_header.h"
#include "java/lang/RuntimeException.h"

#define JavaLangArrayStoreException_serialVersionUID -4522193890499838241LL

@interface JavaLangArrayStoreException : JavaLangRuntimeException {
}

- (instancetype)init;

- (instancetype)initWithNSString:(NSString *)detailMessage;

@end

J2OBJC_EMPTY_STATIC_INIT(JavaLangArrayStoreException)

CF_EXTERN_C_BEGIN

J2OBJC_STATIC_FIELD_GETTER(JavaLangArrayStoreException, serialVersionUID, jlong)
CF_EXTERN_C_END

J2OBJC_TYPE_LITERAL_HEADER(JavaLangArrayStoreException)

#endif // _JavaLangArrayStoreException_H_
