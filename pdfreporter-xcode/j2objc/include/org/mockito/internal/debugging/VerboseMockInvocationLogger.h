//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/krasnocka/Downloads/j2objc-master/testing/mockito/build_result/java/org/mockito/internal/debugging/VerboseMockInvocationLogger.java
//

#ifndef _OrgMockitoInternalDebuggingVerboseMockInvocationLogger_H_
#define _OrgMockitoInternalDebuggingVerboseMockInvocationLogger_H_

@class JavaIoPrintStream;
@protocol OrgMockitoInvocationDescribedInvocation;
@protocol OrgMockitoListenersMethodInvocationReport;

#include "J2ObjC_header.h"
#include "org/mockito/listeners/InvocationListener.h"

@interface OrgMockitoInternalDebuggingVerboseMockInvocationLogger : NSObject < OrgMockitoListenersInvocationListener > {
 @public
  JavaIoPrintStream *printStream_;
}

- (instancetype)init;

- (instancetype)initWithJavaIoPrintStream:(JavaIoPrintStream *)printStream;

- (void)reportInvocationWithOrgMockitoListenersMethodInvocationReport:(id<OrgMockitoListenersMethodInvocationReport>)methodInvocationReport;

@end

J2OBJC_EMPTY_STATIC_INIT(OrgMockitoInternalDebuggingVerboseMockInvocationLogger)

J2OBJC_FIELD_SETTER(OrgMockitoInternalDebuggingVerboseMockInvocationLogger, printStream_, JavaIoPrintStream *)

CF_EXTERN_C_BEGIN
CF_EXTERN_C_END

J2OBJC_TYPE_LITERAL_HEADER(OrgMockitoInternalDebuggingVerboseMockInvocationLogger)

#endif // _OrgMockitoInternalDebuggingVerboseMockInvocationLogger_H_
