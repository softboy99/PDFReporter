//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/libcore/luni/src/main/java/java/lang/ref/WeakReference.java
//

#ifndef _JavaLangRefWeakReference_H_
#define _JavaLangRefWeakReference_H_

@class JavaLangRefReferenceQueue;

#include "J2ObjC_header.h"
#include "java/lang/ref/Reference.h"

@interface JavaLangRefWeakReference : JavaLangRefReference {
}

- (instancetype)initWithId:(id)r;

- (instancetype)initWithId:(id)r
withJavaLangRefReferenceQueue:(JavaLangRefReferenceQueue *)q;

@end

J2OBJC_EMPTY_STATIC_INIT(JavaLangRefWeakReference)

CF_EXTERN_C_BEGIN
CF_EXTERN_C_END

J2OBJC_TYPE_LITERAL_HEADER(JavaLangRefWeakReference)

#endif // _JavaLangRefWeakReference_H_
