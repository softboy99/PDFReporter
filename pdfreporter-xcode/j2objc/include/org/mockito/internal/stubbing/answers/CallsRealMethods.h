//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/krasnocka/Downloads/j2objc-master/testing/mockito/build_result/java/org/mockito/internal/stubbing/answers/CallsRealMethods.java
//

#ifndef _OrgMockitoInternalStubbingAnswersCallsRealMethods_H_
#define _OrgMockitoInternalStubbingAnswersCallsRealMethods_H_

@protocol OrgMockitoInvocationInvocationOnMock;

#include "J2ObjC_header.h"
#include "java/io/Serializable.h"
#include "org/mockito/stubbing/Answer.h"

#define OrgMockitoInternalStubbingAnswersCallsRealMethods_serialVersionUID 9057165148930624087LL

@interface OrgMockitoInternalStubbingAnswersCallsRealMethods : NSObject < OrgMockitoStubbingAnswer, JavaIoSerializable > {
}

- (id)answerWithOrgMockitoInvocationInvocationOnMock:(id<OrgMockitoInvocationInvocationOnMock>)invocation;

- (instancetype)init;

@end

J2OBJC_EMPTY_STATIC_INIT(OrgMockitoInternalStubbingAnswersCallsRealMethods)

CF_EXTERN_C_BEGIN

J2OBJC_STATIC_FIELD_GETTER(OrgMockitoInternalStubbingAnswersCallsRealMethods, serialVersionUID, jlong)
CF_EXTERN_C_END

J2OBJC_TYPE_LITERAL_HEADER(OrgMockitoInternalStubbingAnswersCallsRealMethods)

#endif // _OrgMockitoInternalStubbingAnswersCallsRealMethods_H_
