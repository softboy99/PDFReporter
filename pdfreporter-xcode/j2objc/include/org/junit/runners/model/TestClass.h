//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/krasnocka/Downloads/j2objc-master/junit/build_result/java/org/junit/runners/model/TestClass.java
//

#ifndef _OrgJunitRunnersModelTestClass_H_
#define _OrgJunitRunnersModelTestClass_H_

@class IOSClass;
@class IOSObjectArray;
@class JavaLangReflectConstructor;
@class OrgJunitRunnersModelFrameworkMember;
@protocol JavaUtilList;
@protocol JavaUtilMap;

#include "J2ObjC_header.h"

@interface OrgJunitRunnersModelTestClass : NSObject {
}

- (instancetype)initWithIOSClass:(IOSClass *)klass;

- (id<JavaUtilList>)getAnnotatedMethodsWithIOSClass:(IOSClass *)annotationClass;

- (id<JavaUtilList>)getAnnotatedFieldsWithIOSClass:(IOSClass *)annotationClass;

- (IOSClass *)getJavaClass;

- (NSString *)getName;

- (JavaLangReflectConstructor *)getOnlyConstructor;

- (IOSObjectArray *)getAnnotations;

- (id<JavaUtilList>)getAnnotatedFieldValuesWithId:(id)test
                                     withIOSClass:(IOSClass *)annotationClass
                                     withIOSClass:(IOSClass *)valueClass;

- (jboolean)isANonStaticInnerClass;

@end

J2OBJC_EMPTY_STATIC_INIT(OrgJunitRunnersModelTestClass)

CF_EXTERN_C_BEGIN
CF_EXTERN_C_END

J2OBJC_TYPE_LITERAL_HEADER(OrgJunitRunnersModelTestClass)

#endif // _OrgJunitRunnersModelTestClass_H_
