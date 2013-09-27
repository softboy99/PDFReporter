//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/tball/tmp/j2objc-0.8.3/junit/build_result/java/junit/runner/BaseTestRunner.java
//
//  Created by tball on 7/15/13.
//

#ifndef _JunitRunnerBaseTestRunner_H_
#define _JunitRunnerBaseTestRunner_H_

@class IOSClass;
@class IOSObjectArray;
@class JavaIoFile;
@class JavaLangThrowable;
@class JavaUtilProperties;
@class JunitFrameworkAssertionFailedError;
@protocol JunitFrameworkTest;

#import "JreEmulation.h"
#include "junit/framework/TestListener.h"

@interface JunitRunnerBaseTestRunner : NSObject < JunitFrameworkTestListener > {
 @public
  BOOL fLoading_;
}

@property (nonatomic, assign) BOOL fLoading;

+ (NSString *)SUITE_METHODNAME;
+ (JavaUtilProperties *)fPreferences;
+ (void)setFPreferences:(JavaUtilProperties *)fPreferences;
+ (int)fgMaxMessageLength;
+ (int *)fgMaxMessageLengthRef;
+ (BOOL)fgFilterStack;
+ (BOOL *)fgFilterStackRef;
- (void)startTestWithJunitFrameworkTest:(id<JunitFrameworkTest>)test;
+ (void)setPreferencesWithJavaUtilProperties:(JavaUtilProperties *)preferences;
+ (JavaUtilProperties *)getPreferences;
+ (void)savePreferences;
+ (void)setPreferenceWithNSString:(NSString *)key
                     withNSString:(NSString *)value;
- (void)endTestWithJunitFrameworkTest:(id<JunitFrameworkTest>)test;
- (void)addErrorWithJunitFrameworkTest:(id<JunitFrameworkTest>)test
                 withJavaLangThrowable:(JavaLangThrowable *)t;
- (void)addFailureWithJunitFrameworkTest:(id<JunitFrameworkTest>)test
  withJunitFrameworkAssertionFailedError:(JunitFrameworkAssertionFailedError *)t;
- (void)testStartedWithNSString:(NSString *)testName;
- (void)testEndedWithNSString:(NSString *)testName;
- (void)testFailedWithInt:(int)status
   withJunitFrameworkTest:(id<JunitFrameworkTest>)test
    withJavaLangThrowable:(JavaLangThrowable *)t;
- (id<JunitFrameworkTest>)getTestWithNSString:(NSString *)suiteClassName;
- (NSString *)elapsedTimeAsStringWithLongInt:(long long int)runTime;
- (NSString *)processArgumentsWithNSStringArray:(IOSObjectArray *)args;
- (void)setLoadingWithBOOL:(BOOL)enable;
- (NSString *)extractClassNameWithNSString:(NSString *)className_;
+ (NSString *)truncateWithNSString:(NSString *)s;
- (void)runFailedWithNSString:(NSString *)message;
- (IOSClass *)loadSuiteClassWithNSString:(NSString *)suiteClassName;
- (void)clearStatus;
- (BOOL)useReloadingTestSuiteLoader;
+ (JavaIoFile *)getPreferencesFile;
+ (void)readPreferences;
+ (NSString *)getPreferenceWithNSString:(NSString *)key;
+ (int)getPreferenceWithNSString:(NSString *)key
                         withInt:(int)dflt;
+ (NSString *)getFilteredTraceWithJavaLangThrowable:(JavaLangThrowable *)t;
+ (NSString *)getFilteredTraceWithNSString:(NSString *)stack;
+ (BOOL)showStackRaw;
+ (BOOL)filterLineWithNSString:(NSString *)line;
- (id)init;
@end

#endif // _JunitRunnerBaseTestRunner_H_
