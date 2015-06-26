//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/krasnocka/Downloads/j2objc-master/junit/build_result/java/org/junit/runners/Suite.java
//

#ifndef _OrgJunitRunnersSuite_H_
#define _OrgJunitRunnersSuite_H_

@class IOSClass;
@class IOSObjectArray;
@class OrgJunitRunnerDescription;
@class OrgJunitRunnerNotificationRunNotifier;
@class OrgJunitRunnerRunner;
@class OrgJunitRunnersModelRunnerBuilder;
@protocol JavaUtilList;

#include "J2ObjC_header.h"
#include "java/lang/annotation/Annotation.h"
#include "org/junit/runners/ParentRunner.h"

@interface OrgJunitRunnersSuite : OrgJunitRunnersParentRunner {
}

+ (OrgJunitRunnerRunner *)emptySuite;

- (instancetype)initWithIOSClass:(IOSClass *)klass
withOrgJunitRunnersModelRunnerBuilder:(OrgJunitRunnersModelRunnerBuilder *)builder;

- (instancetype)initWithOrgJunitRunnersModelRunnerBuilder:(OrgJunitRunnersModelRunnerBuilder *)builder
                                        withIOSClassArray:(IOSObjectArray *)classes;

- (instancetype)initWithIOSClass:(IOSClass *)klass
               withIOSClassArray:(IOSObjectArray *)suiteClasses;

- (instancetype)initWithOrgJunitRunnersModelRunnerBuilder:(OrgJunitRunnersModelRunnerBuilder *)builder
                                             withIOSClass:(IOSClass *)klass
                                        withIOSClassArray:(IOSObjectArray *)suiteClasses;

- (instancetype)initWithIOSClass:(IOSClass *)klass
                withJavaUtilList:(id<JavaUtilList>)runners;

- (id<JavaUtilList>)getChildren;

- (OrgJunitRunnerDescription *)describeChildWithId:(OrgJunitRunnerRunner *)child;

- (void)runChildWithId:(OrgJunitRunnerRunner *)runner
withOrgJunitRunnerNotificationRunNotifier:(OrgJunitRunnerNotificationRunNotifier *)notifier;

@end

J2OBJC_EMPTY_STATIC_INIT(OrgJunitRunnersSuite)

CF_EXTERN_C_BEGIN

FOUNDATION_EXPORT OrgJunitRunnerRunner *OrgJunitRunnersSuite_emptySuite();
CF_EXTERN_C_END

J2OBJC_TYPE_LITERAL_HEADER(OrgJunitRunnersSuite)

@protocol OrgJunitRunnersSuite_SuiteClasses < JavaLangAnnotationAnnotation >

@property (readonly) IOSObjectArray *value;

@end

@interface OrgJunitRunnersSuite_SuiteClasses : NSObject < OrgJunitRunnersSuite_SuiteClasses > {
 @private
  IOSObjectArray *value_;
}

- (instancetype)initWithValue:(IOSObjectArray *)value__;

@end

J2OBJC_EMPTY_STATIC_INIT(OrgJunitRunnersSuite_SuiteClasses)

J2OBJC_TYPE_LITERAL_HEADER(OrgJunitRunnersSuite_SuiteClasses)

#endif // _OrgJunitRunnersSuite_H_