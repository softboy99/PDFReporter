//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/libcore/luni/src/main/java/java/lang/annotation/Target.java
//

#ifndef _JavaLangAnnotationTarget_H_
#define _JavaLangAnnotationTarget_H_

@class IOSObjectArray;

#include "J2ObjC_header.h"
#include "java/lang/annotation/Annotation.h"

@protocol JavaLangAnnotationTarget < JavaLangAnnotationAnnotation >

@property (readonly) IOSObjectArray *value;

@end

@interface JavaLangAnnotationTarget : NSObject < JavaLangAnnotationTarget > {
 @private
  IOSObjectArray *value_;
}

- (instancetype)initWithValue:(IOSObjectArray *)value__;

@end

J2OBJC_EMPTY_STATIC_INIT(JavaLangAnnotationTarget)

J2OBJC_TYPE_LITERAL_HEADER(JavaLangAnnotationTarget)

#endif // _JavaLangAnnotationTarget_H_
