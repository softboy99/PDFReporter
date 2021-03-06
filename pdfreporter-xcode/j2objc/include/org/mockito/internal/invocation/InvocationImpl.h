//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/tball/tmp/j2objc/testing/mockito/build_result/java/org/mockito/internal/invocation/InvocationImpl.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_OrgMockitoInternalInvocationInvocationImpl")
#ifdef RESTRICT_OrgMockitoInternalInvocationInvocationImpl
#define INCLUDE_ALL_OrgMockitoInternalInvocationInvocationImpl 0
#else
#define INCLUDE_ALL_OrgMockitoInternalInvocationInvocationImpl 1
#endif
#undef RESTRICT_OrgMockitoInternalInvocationInvocationImpl

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if !defined (OrgMockitoInternalInvocationInvocationImpl_) && (INCLUDE_ALL_OrgMockitoInternalInvocationInvocationImpl || defined(INCLUDE_OrgMockitoInternalInvocationInvocationImpl))
#define OrgMockitoInternalInvocationInvocationImpl_

#define RESTRICT_OrgMockitoInvocationInvocation 1
#define INCLUDE_OrgMockitoInvocationInvocation 1
#include "org/mockito/invocation/Invocation.h"

#define RESTRICT_OrgMockitoInternalExceptionsVerificationAwareInvocation 1
#define INCLUDE_OrgMockitoInternalExceptionsVerificationAwareInvocation 1
#include "org/mockito/internal/exceptions/VerificationAwareInvocation.h"

@class IOSObjectArray;
@class JavaLangReflectMethod;
@protocol OrgMockitoInternalInvocationMockitoMethod;
@protocol OrgMockitoInternalInvocationRealmethodRealMethod;
@protocol OrgMockitoInvocationLocation;
@protocol OrgMockitoInvocationStubInfo;

/*!
 @brief Method call on a mock object.
 <p>
 Contains sequence number which should be globally unique and is used for
 verification in order.
 <p>
 Contains stack trace of invocation
 */
@interface OrgMockitoInternalInvocationInvocationImpl : NSObject < OrgMockitoInvocationInvocation, OrgMockitoInternalExceptionsVerificationAwareInvocation > {
 @public
  id<OrgMockitoInternalInvocationRealmethodRealMethod> realMethod_;
}

#pragma mark Public

- (instancetype)initWithId:(id)mock
withOrgMockitoInternalInvocationMockitoMethod:(id<OrgMockitoInternalInvocationMockitoMethod>)mockitoMethod
         withNSObjectArray:(IOSObjectArray *)args
                   withInt:(jint)sequenceNumber
withOrgMockitoInternalInvocationRealmethodRealMethod:(id<OrgMockitoInternalInvocationRealmethodRealMethod>)realMethod;

- (id)callRealMethod;

- (jboolean)isEqual:(id)o;

- (IOSObjectArray *)getArguments;

- (id<OrgMockitoInvocationLocation>)getLocation;

- (JavaLangReflectMethod *)getMethod;

- (id)getMock;

- (IOSObjectArray *)getRawArguments;

- (jint)getSequenceNumber;

- (NSUInteger)hash;

- (void)ignoreForVerification;

- (jboolean)isIgnoredForVerification;

- (jboolean)isVerified;

- (void)markStubbedWithOrgMockitoInvocationStubInfo:(id<OrgMockitoInvocationStubInfo>)stubInfo;

- (void)markVerified;

- (id<OrgMockitoInvocationStubInfo>)stubInfo;

- (NSString *)description;

@end

J2OBJC_EMPTY_STATIC_INIT(OrgMockitoInternalInvocationInvocationImpl)

J2OBJC_FIELD_SETTER(OrgMockitoInternalInvocationInvocationImpl, realMethod_, id<OrgMockitoInternalInvocationRealmethodRealMethod>)

FOUNDATION_EXPORT void OrgMockitoInternalInvocationInvocationImpl_initWithId_withOrgMockitoInternalInvocationMockitoMethod_withNSObjectArray_withInt_withOrgMockitoInternalInvocationRealmethodRealMethod_(OrgMockitoInternalInvocationInvocationImpl *self, id mock, id<OrgMockitoInternalInvocationMockitoMethod> mockitoMethod, IOSObjectArray *args, jint sequenceNumber, id<OrgMockitoInternalInvocationRealmethodRealMethod> realMethod);

FOUNDATION_EXPORT OrgMockitoInternalInvocationInvocationImpl *new_OrgMockitoInternalInvocationInvocationImpl_initWithId_withOrgMockitoInternalInvocationMockitoMethod_withNSObjectArray_withInt_withOrgMockitoInternalInvocationRealmethodRealMethod_(id mock, id<OrgMockitoInternalInvocationMockitoMethod> mockitoMethod, IOSObjectArray *args, jint sequenceNumber, id<OrgMockitoInternalInvocationRealmethodRealMethod> realMethod) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT OrgMockitoInternalInvocationInvocationImpl *create_OrgMockitoInternalInvocationInvocationImpl_initWithId_withOrgMockitoInternalInvocationMockitoMethod_withNSObjectArray_withInt_withOrgMockitoInternalInvocationRealmethodRealMethod_(id mock, id<OrgMockitoInternalInvocationMockitoMethod> mockitoMethod, IOSObjectArray *args, jint sequenceNumber, id<OrgMockitoInternalInvocationRealmethodRealMethod> realMethod);

J2OBJC_TYPE_LITERAL_HEADER(OrgMockitoInternalInvocationInvocationImpl)

#endif


#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_OrgMockitoInternalInvocationInvocationImpl")
