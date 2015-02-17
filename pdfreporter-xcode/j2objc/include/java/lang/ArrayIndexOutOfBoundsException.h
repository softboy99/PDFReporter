//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/libcore/luni/src/main/java/java/lang/ArrayIndexOutOfBoundsException.java
//

#ifndef _JavaLangArrayIndexOutOfBoundsException_H_
#define _JavaLangArrayIndexOutOfBoundsException_H_

#include "J2ObjC_header.h"
#include "java/lang/IndexOutOfBoundsException.h"

#define JavaLangArrayIndexOutOfBoundsException_serialVersionUID -5116101128118950844LL

@interface JavaLangArrayIndexOutOfBoundsException : JavaLangIndexOutOfBoundsException {
}

- (instancetype)init;

- (instancetype)initWithInt:(jint)index;

- (instancetype)initWithNSString:(NSString *)detailMessage;

- (instancetype)initWithInt:(jint)sourceLength
                    withInt:(jint)index;

- (instancetype)initWithInt:(jint)sourceLength
                    withInt:(jint)offset
                    withInt:(jint)count;

@end

J2OBJC_EMPTY_STATIC_INIT(JavaLangArrayIndexOutOfBoundsException)

CF_EXTERN_C_BEGIN

J2OBJC_STATIC_FIELD_GETTER(JavaLangArrayIndexOutOfBoundsException, serialVersionUID, jlong)
CF_EXTERN_C_END

J2OBJC_TYPE_LITERAL_HEADER(JavaLangArrayIndexOutOfBoundsException)

#endif // _JavaLangArrayIndexOutOfBoundsException_H_
