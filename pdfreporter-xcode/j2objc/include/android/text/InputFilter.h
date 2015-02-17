//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/frameworks/base/core/java/android/text/InputFilter.java
//

#ifndef _AndroidTextInputFilter_H_
#define _AndroidTextInputFilter_H_

@protocol AndroidTextSpanned;
@protocol JavaLangCharSequence;

#include "J2ObjC_header.h"

@protocol AndroidTextInputFilter < NSObject, JavaObject >

- (id<JavaLangCharSequence>)filterWithJavaLangCharSequence:(id<JavaLangCharSequence>)source
                                                   withInt:(jint)start
                                                   withInt:(jint)end
                                    withAndroidTextSpanned:(id<AndroidTextSpanned>)dest
                                                   withInt:(jint)dstart
                                                   withInt:(jint)dend;

@end

J2OBJC_EMPTY_STATIC_INIT(AndroidTextInputFilter)

J2OBJC_TYPE_LITERAL_HEADER(AndroidTextInputFilter)

@interface AndroidTextInputFilter_AllCaps : NSObject < AndroidTextInputFilter > {
}

- (id<JavaLangCharSequence>)filterWithJavaLangCharSequence:(id<JavaLangCharSequence>)source
                                                   withInt:(jint)start
                                                   withInt:(jint)end
                                    withAndroidTextSpanned:(id<AndroidTextSpanned>)dest
                                                   withInt:(jint)dstart
                                                   withInt:(jint)dend;

- (instancetype)init;

@end

J2OBJC_EMPTY_STATIC_INIT(AndroidTextInputFilter_AllCaps)

CF_EXTERN_C_BEGIN
CF_EXTERN_C_END

J2OBJC_TYPE_LITERAL_HEADER(AndroidTextInputFilter_AllCaps)

@interface AndroidTextInputFilter_LengthFilter : NSObject < AndroidTextInputFilter > {
}

- (instancetype)initWithInt:(jint)max;

- (id<JavaLangCharSequence>)filterWithJavaLangCharSequence:(id<JavaLangCharSequence>)source
                                                   withInt:(jint)start
                                                   withInt:(jint)end
                                    withAndroidTextSpanned:(id<AndroidTextSpanned>)dest
                                                   withInt:(jint)dstart
                                                   withInt:(jint)dend;

@end

J2OBJC_EMPTY_STATIC_INIT(AndroidTextInputFilter_LengthFilter)

CF_EXTERN_C_BEGIN
CF_EXTERN_C_END

J2OBJC_TYPE_LITERAL_HEADER(AndroidTextInputFilter_LengthFilter)

#endif // _AndroidTextInputFilter_H_
