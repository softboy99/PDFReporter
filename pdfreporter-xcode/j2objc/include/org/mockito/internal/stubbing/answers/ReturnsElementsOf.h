//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/krasnocka/Downloads/j2objc-master/testing/mockito/build_result/java/org/mockito/internal/stubbing/answers/ReturnsElementsOf.java
//

#ifndef _OrgMockitoInternalStubbingAnswersReturnsElementsOf_H_
#define _OrgMockitoInternalStubbingAnswersReturnsElementsOf_H_

@class JavaUtilLinkedList;
@protocol JavaUtilCollection;
@protocol OrgMockitoInvocationInvocationOnMock;

#include "J2ObjC_header.h"
#include "org/mockito/stubbing/Answer.h"

@interface OrgMockitoInternalStubbingAnswersReturnsElementsOf : NSObject < OrgMockitoStubbingAnswer > {
}

- (instancetype)initWithJavaUtilCollection:(id<JavaUtilCollection>)elements;

- (id)answerWithOrgMockitoInvocationInvocationOnMock:(id<OrgMockitoInvocationInvocationOnMock>)invocation;

@end

J2OBJC_EMPTY_STATIC_INIT(OrgMockitoInternalStubbingAnswersReturnsElementsOf)

CF_EXTERN_C_BEGIN
CF_EXTERN_C_END

J2OBJC_TYPE_LITERAL_HEADER(OrgMockitoInternalStubbingAnswersReturnsElementsOf)

#endif // _OrgMockitoInternalStubbingAnswersReturnsElementsOf_H_
