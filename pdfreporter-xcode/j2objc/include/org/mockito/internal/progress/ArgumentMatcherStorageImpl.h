//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/krasnocka/Downloads/j2objc-master/testing/mockito/build_result/java/org/mockito/internal/progress/ArgumentMatcherStorageImpl.java
//

#ifndef _OrgMockitoInternalProgressArgumentMatcherStorageImpl_H_
#define _OrgMockitoInternalProgressArgumentMatcherStorageImpl_H_

@class JavaUtilStack;
@class OrgMockitoInternalProgressHandyReturnValues;
@protocol JavaUtilList;
@protocol OrgHamcrestMatcher;

#include "J2ObjC_header.h"
#include "org/mockito/internal/progress/ArgumentMatcherStorage.h"

#define OrgMockitoInternalProgressArgumentMatcherStorageImpl_ONE_SUB_MATCHER 1
#define OrgMockitoInternalProgressArgumentMatcherStorageImpl_TWO_SUB_MATCHERS 2

@interface OrgMockitoInternalProgressArgumentMatcherStorageImpl : NSObject < OrgMockitoInternalProgressArgumentMatcherStorage > {
}

- (OrgMockitoInternalProgressHandyReturnValues *)reportMatcherWithOrgHamcrestMatcher:(id<OrgHamcrestMatcher>)matcher;

- (id<JavaUtilList>)pullLocalizedMatchers;

- (OrgMockitoInternalProgressHandyReturnValues *)reportAnd;

- (OrgMockitoInternalProgressHandyReturnValues *)reportOr;

- (OrgMockitoInternalProgressHandyReturnValues *)reportNot;

- (void)validateState;

- (void)reset;

- (instancetype)init;

@end

J2OBJC_EMPTY_STATIC_INIT(OrgMockitoInternalProgressArgumentMatcherStorageImpl)

CF_EXTERN_C_BEGIN

J2OBJC_STATIC_FIELD_GETTER(OrgMockitoInternalProgressArgumentMatcherStorageImpl, TWO_SUB_MATCHERS, jint)

J2OBJC_STATIC_FIELD_GETTER(OrgMockitoInternalProgressArgumentMatcherStorageImpl, ONE_SUB_MATCHER, jint)
CF_EXTERN_C_END

J2OBJC_TYPE_LITERAL_HEADER(OrgMockitoInternalProgressArgumentMatcherStorageImpl)

#endif // _OrgMockitoInternalProgressArgumentMatcherStorageImpl_H_
