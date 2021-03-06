//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/tball/tmp/j2objc/jsr305/build_result/java/javax/annotation/meta/Exclusive.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_JavaxAnnotationMetaExclusive")
#ifdef RESTRICT_JavaxAnnotationMetaExclusive
#define INCLUDE_ALL_JavaxAnnotationMetaExclusive 0
#else
#define INCLUDE_ALL_JavaxAnnotationMetaExclusive 1
#endif
#undef RESTRICT_JavaxAnnotationMetaExclusive

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if !defined (JavaxAnnotationMetaExclusive_) && (INCLUDE_ALL_JavaxAnnotationMetaExclusive || defined(INCLUDE_JavaxAnnotationMetaExclusive))
#define JavaxAnnotationMetaExclusive_

#define RESTRICT_JavaLangAnnotationAnnotation 1
#define INCLUDE_JavaLangAnnotationAnnotation 1
#include "java/lang/annotation/Annotation.h"

@class IOSClass;
@class IOSObjectArray;

/*!
 @brief This annotation can be applied to the value() element of an annotation that
 is annotated as a TypeQualifier.
 For example, the following defines a type qualifier such that if you know a
 value is &commat;&commat;Foo(1), then the value cannot be &commat;&commat;Foo(2) or {&commat;&commat;Foo(3).
 <code>
  @@interface Foo {
  int value();
 }
 </code>
 */
@protocol JavaxAnnotationMetaExclusive < JavaLangAnnotationAnnotation >

@end

@interface JavaxAnnotationMetaExclusive : NSObject < JavaxAnnotationMetaExclusive >

@end

J2OBJC_EMPTY_STATIC_INIT(JavaxAnnotationMetaExclusive)

FOUNDATION_EXPORT id<JavaxAnnotationMetaExclusive> create_JavaxAnnotationMetaExclusive();

J2OBJC_TYPE_LITERAL_HEADER(JavaxAnnotationMetaExclusive)

#endif


#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_JavaxAnnotationMetaExclusive")
