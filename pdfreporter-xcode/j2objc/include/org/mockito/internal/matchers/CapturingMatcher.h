//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/krasnocka/Downloads/j2objc-master/testing/mockito/build_result/java/org/mockito/internal/matchers/CapturingMatcher.java
//

#ifndef _OrgMockitoInternalMatchersCapturingMatcher_H_
#define _OrgMockitoInternalMatchersCapturingMatcher_H_

@class JavaUtilLinkedList;
@protocol JavaUtilList;
@protocol OrgHamcrestDescription;

#include "J2ObjC_header.h"
#include "java/io/Serializable.h"
#include "org/mockito/ArgumentMatcher.h"
#include "org/mockito/internal/matchers/CapturesArguments.h"

#define OrgMockitoInternalMatchersCapturingMatcher_serialVersionUID 4274067078639307295LL

@interface OrgMockitoInternalMatchersCapturingMatcher : OrgMockitoArgumentMatcher < OrgMockitoInternalMatchersCapturesArguments, JavaIoSerializable > {
}

- (jboolean)matchesWithId:(id)argument;

- (void)describeToWithOrgHamcrestDescription:(id<OrgHamcrestDescription>)description_;

- (id)getLastValue;

- (id<JavaUtilList>)getAllValues;

- (void)captureFromWithId:(id)argument;

- (instancetype)init;

@end

J2OBJC_EMPTY_STATIC_INIT(OrgMockitoInternalMatchersCapturingMatcher)

CF_EXTERN_C_BEGIN

J2OBJC_STATIC_FIELD_GETTER(OrgMockitoInternalMatchersCapturingMatcher, serialVersionUID, jlong)
CF_EXTERN_C_END

J2OBJC_TYPE_LITERAL_HEADER(OrgMockitoInternalMatchersCapturingMatcher)

#endif // _OrgMockitoInternalMatchersCapturingMatcher_H_
