//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/tball/tmp/j2objc/testing/mockito/build_result/java/org/mockito/internal/invocation/InvocationMarker.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_OrgMockitoInternalInvocationInvocationMarker")
#ifdef RESTRICT_OrgMockitoInternalInvocationInvocationMarker
#define INCLUDE_ALL_OrgMockitoInternalInvocationInvocationMarker 0
#else
#define INCLUDE_ALL_OrgMockitoInternalInvocationInvocationMarker 1
#endif
#undef RESTRICT_OrgMockitoInternalInvocationInvocationMarker

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if !defined (OrgMockitoInternalInvocationInvocationMarker_) && (INCLUDE_ALL_OrgMockitoInternalInvocationInvocationMarker || defined(INCLUDE_OrgMockitoInternalInvocationInvocationMarker))
#define OrgMockitoInternalInvocationInvocationMarker_

@protocol JavaUtilList;
@protocol OrgMockitoInternalInvocationCapturesArgumensFromInvocation;
@protocol OrgMockitoInternalVerificationApiInOrderContext;
@protocol OrgMockitoInvocationInvocation;

@interface OrgMockitoInternalInvocationInvocationMarker : NSObject

#pragma mark Public

- (instancetype)init;

- (void)markVerifiedWithOrgMockitoInvocationInvocation:(id<OrgMockitoInvocationInvocation>)invocation
withOrgMockitoInternalInvocationCapturesArgumensFromInvocation:(id<OrgMockitoInternalInvocationCapturesArgumensFromInvocation>)wanted;

- (void)markVerifiedWithJavaUtilList:(id<JavaUtilList>)invocations
withOrgMockitoInternalInvocationCapturesArgumensFromInvocation:(id<OrgMockitoInternalInvocationCapturesArgumensFromInvocation>)wanted;

- (void)markVerifiedInOrderWithJavaUtilList:(id<JavaUtilList>)chunk
withOrgMockitoInternalInvocationCapturesArgumensFromInvocation:(id<OrgMockitoInternalInvocationCapturesArgumensFromInvocation>)wanted
withOrgMockitoInternalVerificationApiInOrderContext:(id<OrgMockitoInternalVerificationApiInOrderContext>)context;

@end

J2OBJC_EMPTY_STATIC_INIT(OrgMockitoInternalInvocationInvocationMarker)

FOUNDATION_EXPORT void OrgMockitoInternalInvocationInvocationMarker_init(OrgMockitoInternalInvocationInvocationMarker *self);

FOUNDATION_EXPORT OrgMockitoInternalInvocationInvocationMarker *new_OrgMockitoInternalInvocationInvocationMarker_init() NS_RETURNS_RETAINED;

FOUNDATION_EXPORT OrgMockitoInternalInvocationInvocationMarker *create_OrgMockitoInternalInvocationInvocationMarker_init();

J2OBJC_TYPE_LITERAL_HEADER(OrgMockitoInternalInvocationInvocationMarker)

#endif


#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_OrgMockitoInternalInvocationInvocationMarker")
