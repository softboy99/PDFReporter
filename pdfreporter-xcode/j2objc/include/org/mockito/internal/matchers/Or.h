//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/krasnocka/Downloads/j2objc-master/testing/mockito/build_result/java/org/mockito/internal/matchers/Or.java
//

#ifndef _OrgMockitoInternalMatchersOr_H_
#define _OrgMockitoInternalMatchersOr_H_

@protocol JavaUtilList;
@protocol OrgHamcrestDescription;

#include "J2ObjC_header.h"
#include "java/io/Serializable.h"
#include "org/mockito/ArgumentMatcher.h"

#define OrgMockitoInternalMatchersOr_serialVersionUID 5888739035212283087LL

@interface OrgMockitoInternalMatchersOr : OrgMockitoArgumentMatcher < JavaIoSerializable > {
}

- (instancetype)initWithJavaUtilList:(id<JavaUtilList>)matchers;

- (jboolean)matchesWithId:(id)actual;

- (void)describeToWithOrgHamcrestDescription:(id<OrgHamcrestDescription>)description_;

@end

J2OBJC_EMPTY_STATIC_INIT(OrgMockitoInternalMatchersOr)

CF_EXTERN_C_BEGIN

J2OBJC_STATIC_FIELD_GETTER(OrgMockitoInternalMatchersOr, serialVersionUID, jlong)
CF_EXTERN_C_END

J2OBJC_TYPE_LITERAL_HEADER(OrgMockitoInternalMatchersOr)

#endif // _OrgMockitoInternalMatchersOr_H_