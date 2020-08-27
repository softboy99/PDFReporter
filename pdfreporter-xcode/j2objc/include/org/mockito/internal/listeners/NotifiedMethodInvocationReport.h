//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/tball/tmp/j2objc/testing/mockito/build_result/java/org/mockito/internal/listeners/NotifiedMethodInvocationReport.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_OrgMockitoInternalListenersNotifiedMethodInvocationReport")
#ifdef RESTRICT_OrgMockitoInternalListenersNotifiedMethodInvocationReport
#define INCLUDE_ALL_OrgMockitoInternalListenersNotifiedMethodInvocationReport 0
#else
#define INCLUDE_ALL_OrgMockitoInternalListenersNotifiedMethodInvocationReport 1
#endif
#undef RESTRICT_OrgMockitoInternalListenersNotifiedMethodInvocationReport

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if !defined (OrgMockitoInternalListenersNotifiedMethodInvocationReport_) && (INCLUDE_ALL_OrgMockitoInternalListenersNotifiedMethodInvocationReport || defined(INCLUDE_OrgMockitoInternalListenersNotifiedMethodInvocationReport))
#define OrgMockitoInternalListenersNotifiedMethodInvocationReport_

#define RESTRICT_OrgMockitoListenersMethodInvocationReport 1
#define INCLUDE_OrgMockitoListenersMethodInvocationReport 1
#include "org/mockito/listeners/MethodInvocationReport.h"

@protocol OrgMockitoInvocationDescribedInvocation;
@protocol OrgMockitoInvocationInvocation;

/*!
 @brief Report on a method call
 */
@interface OrgMockitoInternalListenersNotifiedMethodInvocationReport : NSObject < OrgMockitoListenersMethodInvocationReport >

#pragma mark Public

/*!
 @brief Build a new <code>org.mockito.listeners.MethodInvocationReport</code> with a return value.
 @param invocation Information on the method call
 @param returnedValue The value returned by the method invocation
 */
- (instancetype)initWithOrgMockitoInvocationInvocation:(id<OrgMockitoInvocationInvocation>)invocation
                                                withId:(id)returnedValue;

/*!
 @brief Build a new <code>org.mockito.listeners.MethodInvocationReport</code> with a return value.
 @param invocation Information on the method call
 @param throwable Tha throwable raised by the method invocation
 */
- (instancetype)initWithOrgMockitoInvocationInvocation:(id<OrgMockitoInvocationInvocation>)invocation
                                       withNSException:(NSException *)throwable;

- (jboolean)isEqual:(id)o;

- (id<OrgMockitoInvocationDescribedInvocation>)getInvocation;

- (NSString *)getLocationOfStubbing;

- (id)getReturnedValue;

- (NSException *)getThrowable;

- (NSUInteger)hash;

- (jboolean)threwException;

@end

J2OBJC_EMPTY_STATIC_INIT(OrgMockitoInternalListenersNotifiedMethodInvocationReport)

FOUNDATION_EXPORT void OrgMockitoInternalListenersNotifiedMethodInvocationReport_initWithOrgMockitoInvocationInvocation_withId_(OrgMockitoInternalListenersNotifiedMethodInvocationReport *self, id<OrgMockitoInvocationInvocation> invocation, id returnedValue);

FOUNDATION_EXPORT OrgMockitoInternalListenersNotifiedMethodInvocationReport *new_OrgMockitoInternalListenersNotifiedMethodInvocationReport_initWithOrgMockitoInvocationInvocation_withId_(id<OrgMockitoInvocationInvocation> invocation, id returnedValue) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT OrgMockitoInternalListenersNotifiedMethodInvocationReport *create_OrgMockitoInternalListenersNotifiedMethodInvocationReport_initWithOrgMockitoInvocationInvocation_withId_(id<OrgMockitoInvocationInvocation> invocation, id returnedValue);

FOUNDATION_EXPORT void OrgMockitoInternalListenersNotifiedMethodInvocationReport_initWithOrgMockitoInvocationInvocation_withNSException_(OrgMockitoInternalListenersNotifiedMethodInvocationReport *self, id<OrgMockitoInvocationInvocation> invocation, NSException *throwable);

FOUNDATION_EXPORT OrgMockitoInternalListenersNotifiedMethodInvocationReport *new_OrgMockitoInternalListenersNotifiedMethodInvocationReport_initWithOrgMockitoInvocationInvocation_withNSException_(id<OrgMockitoInvocationInvocation> invocation, NSException *throwable) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT OrgMockitoInternalListenersNotifiedMethodInvocationReport *create_OrgMockitoInternalListenersNotifiedMethodInvocationReport_initWithOrgMockitoInvocationInvocation_withNSException_(id<OrgMockitoInvocationInvocation> invocation, NSException *throwable);

J2OBJC_TYPE_LITERAL_HEADER(OrgMockitoInternalListenersNotifiedMethodInvocationReport)

#endif


#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_OrgMockitoInternalListenersNotifiedMethodInvocationReport")
