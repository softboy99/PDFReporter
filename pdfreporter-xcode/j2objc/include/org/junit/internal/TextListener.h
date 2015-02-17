//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/krasnocka/Downloads/j2objc-master/junit/build_result/java/org/junit/internal/TextListener.java
//

#ifndef _OrgJunitInternalTextListener_H_
#define _OrgJunitInternalTextListener_H_

@class JavaIoPrintStream;
@class OrgJunitRunnerDescription;
@class OrgJunitRunnerNotificationFailure;
@class OrgJunitRunnerResult;
@protocol OrgJunitInternalJUnitSystem;

#include "J2ObjC_header.h"
#include "org/junit/runner/notification/RunListener.h"

@interface OrgJunitInternalTextListener : OrgJunitRunnerNotificationRunListener {
}

- (instancetype)initWithOrgJunitInternalJUnitSystem:(id<OrgJunitInternalJUnitSystem>)system;

- (instancetype)initWithJavaIoPrintStream:(JavaIoPrintStream *)writer;

- (void)testRunFinishedWithOrgJunitRunnerResult:(OrgJunitRunnerResult *)result;

- (void)testStartedWithOrgJunitRunnerDescription:(OrgJunitRunnerDescription *)description_;

- (void)testFailureWithOrgJunitRunnerNotificationFailure:(OrgJunitRunnerNotificationFailure *)failure;

- (void)testIgnoredWithOrgJunitRunnerDescription:(OrgJunitRunnerDescription *)description_;

- (void)printHeaderWithLong:(jlong)runTime;

- (void)printFailuresWithOrgJunitRunnerResult:(OrgJunitRunnerResult *)result;

- (void)printFailureWithOrgJunitRunnerNotificationFailure:(OrgJunitRunnerNotificationFailure *)each
                                             withNSString:(NSString *)prefix;

- (void)printFooterWithOrgJunitRunnerResult:(OrgJunitRunnerResult *)result;

- (NSString *)elapsedTimeAsStringWithLong:(jlong)runTime;

@end

J2OBJC_EMPTY_STATIC_INIT(OrgJunitInternalTextListener)

CF_EXTERN_C_BEGIN
CF_EXTERN_C_END

J2OBJC_TYPE_LITERAL_HEADER(OrgJunitInternalTextListener)

#endif // _OrgJunitInternalTextListener_H_
