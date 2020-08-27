//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/tball/tmp/j2objc/testing/mockito/build_result/java/org/mockito/invocation/MockHandler.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_OrgMockitoInvocationMockHandler")
#ifdef RESTRICT_OrgMockitoInvocationMockHandler
#define INCLUDE_ALL_OrgMockitoInvocationMockHandler 0
#else
#define INCLUDE_ALL_OrgMockitoInvocationMockHandler 1
#endif
#undef RESTRICT_OrgMockitoInvocationMockHandler

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if !defined (OrgMockitoInvocationMockHandler_) && (INCLUDE_ALL_OrgMockitoInvocationMockHandler || defined(INCLUDE_OrgMockitoInvocationMockHandler))
#define OrgMockitoInvocationMockHandler_

#define RESTRICT_JavaIoSerializable 1
#define INCLUDE_JavaIoSerializable 1
#include "java/io/Serializable.h"

@class IOSObjectArray;
@protocol OrgMockitoInvocationInvocation;

/*!
 @brief Mockito handler of an invocation on a mock.
 This is a core part of the API, the heart of Mockito.
 See also the <code>org.mockito.plugins.MockMaker</code>.
 <p>
 This api is work in progress. Do not provide your own implementations.
 Mockito will provide you with the implementation via other <code>org.mockito.plugins.MockMaker</code> methods.
 */
@protocol OrgMockitoInvocationMockHandler < JavaIoSerializable, NSObject, JavaObject >

/*!
 @brief Takes an invocation object and handles it.
 <p>
 The default implementation provided by Mockito handles invocations by recording
 method calls on mocks for further verification, captures the stubbing information when mock is stubbed,
 returns the stubbed values for invocations that have been stubbed, and much more.
 @param invocation The invocation to handle
 @return Result
 @throws Throwable Throwable
 */
- (id)handleWithOrgMockitoInvocationInvocation:(id<OrgMockitoInvocationInvocation>)invocation;

@end

J2OBJC_EMPTY_STATIC_INIT(OrgMockitoInvocationMockHandler)

J2OBJC_TYPE_LITERAL_HEADER(OrgMockitoInvocationMockHandler)

#endif


#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_OrgMockitoInvocationMockHandler")
