//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/tball/tmp/j2objc/testing/mockito/build_result/java/org/mockito/internal/stubbing/answers/ReturnsArgumentAt.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_OrgMockitoInternalStubbingAnswersReturnsArgumentAt")
#ifdef RESTRICT_OrgMockitoInternalStubbingAnswersReturnsArgumentAt
#define INCLUDE_ALL_OrgMockitoInternalStubbingAnswersReturnsArgumentAt 0
#else
#define INCLUDE_ALL_OrgMockitoInternalStubbingAnswersReturnsArgumentAt 1
#endif
#undef RESTRICT_OrgMockitoInternalStubbingAnswersReturnsArgumentAt

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if !defined (OrgMockitoInternalStubbingAnswersReturnsArgumentAt_) && (INCLUDE_ALL_OrgMockitoInternalStubbingAnswersReturnsArgumentAt || defined(INCLUDE_OrgMockitoInternalStubbingAnswersReturnsArgumentAt))
#define OrgMockitoInternalStubbingAnswersReturnsArgumentAt_

#define RESTRICT_OrgMockitoStubbingAnswer 1
#define INCLUDE_OrgMockitoStubbingAnswer 1
#include "org/mockito/stubbing/Answer.h"

#define RESTRICT_JavaIoSerializable 1
#define INCLUDE_JavaIoSerializable 1
#include "java/io/Serializable.h"

@class IOSClass;
@protocol OrgMockitoInvocationInvocationOnMock;

/*!
 @brief Returns the passed parameter identity at specified index.
 <p>The <code>argumentIndex</code> represents the index in the argument array of the invocation.</p>
 <p>If this number equals -1 then the last argument is returned.</p>
 - seealso: org.mockito.AdditionalAnswers
 @since 1.9.5
 */
@interface OrgMockitoInternalStubbingAnswersReturnsArgumentAt : NSObject < OrgMockitoStubbingAnswer, JavaIoSerializable >

+ (jint)LAST_ARGUMENT;

#pragma mark Public

/*!
 @brief Build the identity answer to return the argument at the given position in the argument array.
 @param wantedArgumentPosition The position of the argument identity to return in the invocation.
 Using <code>-1</code> indicates the last argument.
 */
- (instancetype)initWithInt:(jint)wantedArgumentPosition;

- (id)answerWithOrgMockitoInvocationInvocationOnMock:(id<OrgMockitoInvocationInvocationOnMock>)invocation;

- (IOSClass *)returnedTypeOnSignatureWithOrgMockitoInvocationInvocationOnMock:(id<OrgMockitoInvocationInvocationOnMock>)invocation;

- (void)validateIndexWithinInvocationRangeWithOrgMockitoInvocationInvocationOnMock:(id<OrgMockitoInvocationInvocationOnMock>)invocation;

- (jint)wantedArgumentPosition;

@end

J2OBJC_EMPTY_STATIC_INIT(OrgMockitoInternalStubbingAnswersReturnsArgumentAt)

inline jint OrgMockitoInternalStubbingAnswersReturnsArgumentAt_get_LAST_ARGUMENT();
#define OrgMockitoInternalStubbingAnswersReturnsArgumentAt_LAST_ARGUMENT -1
J2OBJC_STATIC_FIELD_CONSTANT(OrgMockitoInternalStubbingAnswersReturnsArgumentAt, LAST_ARGUMENT, jint)

FOUNDATION_EXPORT void OrgMockitoInternalStubbingAnswersReturnsArgumentAt_initWithInt_(OrgMockitoInternalStubbingAnswersReturnsArgumentAt *self, jint wantedArgumentPosition);

FOUNDATION_EXPORT OrgMockitoInternalStubbingAnswersReturnsArgumentAt *new_OrgMockitoInternalStubbingAnswersReturnsArgumentAt_initWithInt_(jint wantedArgumentPosition) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT OrgMockitoInternalStubbingAnswersReturnsArgumentAt *create_OrgMockitoInternalStubbingAnswersReturnsArgumentAt_initWithInt_(jint wantedArgumentPosition);

J2OBJC_TYPE_LITERAL_HEADER(OrgMockitoInternalStubbingAnswersReturnsArgumentAt)

#endif


#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_OrgMockitoInternalStubbingAnswersReturnsArgumentAt")
