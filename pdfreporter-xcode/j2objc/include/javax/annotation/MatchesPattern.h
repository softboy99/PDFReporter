//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/krasnocka/Downloads/j2objc-master/jsr305/build_result/java/javax/annotation/MatchesPattern.java
//

#ifndef _JavaxAnnotationMatchesPattern_H_
#define _JavaxAnnotationMatchesPattern_H_

@class JavaxAnnotationMetaWhenEnum;

#include "J2ObjC_header.h"
#include "java/lang/annotation/Annotation.h"
#include "javax/annotation/meta/TypeQualifierValidator.h"

@protocol JavaxAnnotationMatchesPattern < JavaLangAnnotationAnnotation >

@property (readonly) NSString *value;
@property (readonly) jint flags;

@end

@interface JavaxAnnotationMatchesPattern : NSObject < JavaxAnnotationMatchesPattern > {
 @private
  NSString *value_;
  jint flags_;
}

- (instancetype)initWithFlags:(jint)flags__ withValue:(NSString *)value__;

+ (jint)flagsDefault;

@end

J2OBJC_EMPTY_STATIC_INIT(JavaxAnnotationMatchesPattern)

J2OBJC_TYPE_LITERAL_HEADER(JavaxAnnotationMatchesPattern)

@interface JavaxAnnotationMatchesPattern_Checker : NSObject < JavaxAnnotationMetaTypeQualifierValidator > {
}

- (JavaxAnnotationMetaWhenEnum *)forConstantValueWithJavaLangAnnotationAnnotation:(id<JavaxAnnotationMatchesPattern>)annotation
                                                                           withId:(id)value;

- (instancetype)init;

@end

J2OBJC_EMPTY_STATIC_INIT(JavaxAnnotationMatchesPattern_Checker)

CF_EXTERN_C_BEGIN
CF_EXTERN_C_END

J2OBJC_TYPE_LITERAL_HEADER(JavaxAnnotationMatchesPattern_Checker)

#endif // _JavaxAnnotationMatchesPattern_H_
