//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/tball/tmp/j2objc/testing/mockito/build_result/java/org/mockito/internal/stubbing/defaultanswers/GloballyConfiguredAnswer.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_OrgMockitoInternalStubbingDefaultanswersGloballyConfiguredAnswer")
#ifdef RESTRICT_OrgMockitoInternalStubbingDefaultanswersGloballyConfiguredAnswer
#define INCLUDE_ALL_OrgMockitoInternalStubbingDefaultanswersGloballyConfiguredAnswer 0
#else
#define INCLUDE_ALL_OrgMockitoInternalStubbingDefaultanswersGloballyConfiguredAnswer 1
#endif
#undef RESTRICT_OrgMockitoInternalStubbingDefaultanswersGloballyConfiguredAnswer

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if !defined (OrgMockitoInternalStubbingDefaultanswersGloballyConfiguredAnswer_) && (INCLUDE_ALL_OrgMockitoInternalStubbingDefaultanswersGloballyConfiguredAnswer || defined(INCLUDE_OrgMockitoInternalStubbingDefaultanswersGloballyConfiguredAnswer))
#define OrgMockitoInternalStubbingDefaultanswersGloballyConfiguredAnswer_

#define RESTRICT_OrgMockitoStubbingAnswer 1
#define INCLUDE_OrgMockitoStubbingAnswer 1
#include "org/mockito/stubbing/Answer.h"

#define RESTRICT_JavaIoSerializable 1
#define INCLUDE_JavaIoSerializable 1
#include "java/io/Serializable.h"

@protocol OrgMockitoInvocationInvocationOnMock;

/*!
 @brief Globally configured Answer.
 <p>
 See javadoc for <code>IMockitoConfiguration</code>
 */
@interface OrgMockitoInternalStubbingDefaultanswersGloballyConfiguredAnswer : NSObject < OrgMockitoStubbingAnswer, JavaIoSerializable >

#pragma mark Public

- (instancetype)init;

- (id)answerWithOrgMockitoInvocationInvocationOnMock:(id<OrgMockitoInvocationInvocationOnMock>)invocation;

@end

J2OBJC_EMPTY_STATIC_INIT(OrgMockitoInternalStubbingDefaultanswersGloballyConfiguredAnswer)

FOUNDATION_EXPORT void OrgMockitoInternalStubbingDefaultanswersGloballyConfiguredAnswer_init(OrgMockitoInternalStubbingDefaultanswersGloballyConfiguredAnswer *self);

FOUNDATION_EXPORT OrgMockitoInternalStubbingDefaultanswersGloballyConfiguredAnswer *new_OrgMockitoInternalStubbingDefaultanswersGloballyConfiguredAnswer_init() NS_RETURNS_RETAINED;

FOUNDATION_EXPORT OrgMockitoInternalStubbingDefaultanswersGloballyConfiguredAnswer *create_OrgMockitoInternalStubbingDefaultanswersGloballyConfiguredAnswer_init();

J2OBJC_TYPE_LITERAL_HEADER(OrgMockitoInternalStubbingDefaultanswersGloballyConfiguredAnswer)

#endif


#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_OrgMockitoInternalStubbingDefaultanswersGloballyConfiguredAnswer")
