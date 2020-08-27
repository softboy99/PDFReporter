//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/tball/tmp/j2objc/testing/mockito/build_result/java/org/mockito/internal/invocation/finder/AllInvocationsFinder.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_OrgMockitoInternalInvocationFinderAllInvocationsFinder")
#ifdef RESTRICT_OrgMockitoInternalInvocationFinderAllInvocationsFinder
#define INCLUDE_ALL_OrgMockitoInternalInvocationFinderAllInvocationsFinder 0
#else
#define INCLUDE_ALL_OrgMockitoInternalInvocationFinderAllInvocationsFinder 1
#endif
#undef RESTRICT_OrgMockitoInternalInvocationFinderAllInvocationsFinder

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if !defined (OrgMockitoInternalInvocationFinderAllInvocationsFinder_) && (INCLUDE_ALL_OrgMockitoInternalInvocationFinderAllInvocationsFinder || defined(INCLUDE_OrgMockitoInternalInvocationFinderAllInvocationsFinder))
#define OrgMockitoInternalInvocationFinderAllInvocationsFinder_

@protocol JavaUtilList;

@interface OrgMockitoInternalInvocationFinderAllInvocationsFinder : NSObject

#pragma mark Public

- (instancetype)init;

/*!
 @brief gets all invocations from mocks.
 Invocations are ordered earlier first. 
 @param mocks mocks
 @return invocations
 */
- (id<JavaUtilList>)findWithJavaUtilList:(id<JavaUtilList>)mocks;

@end

J2OBJC_EMPTY_STATIC_INIT(OrgMockitoInternalInvocationFinderAllInvocationsFinder)

FOUNDATION_EXPORT void OrgMockitoInternalInvocationFinderAllInvocationsFinder_init(OrgMockitoInternalInvocationFinderAllInvocationsFinder *self);

FOUNDATION_EXPORT OrgMockitoInternalInvocationFinderAllInvocationsFinder *new_OrgMockitoInternalInvocationFinderAllInvocationsFinder_init() NS_RETURNS_RETAINED;

FOUNDATION_EXPORT OrgMockitoInternalInvocationFinderAllInvocationsFinder *create_OrgMockitoInternalInvocationFinderAllInvocationsFinder_init();

J2OBJC_TYPE_LITERAL_HEADER(OrgMockitoInternalInvocationFinderAllInvocationsFinder)

#endif


#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_OrgMockitoInternalInvocationFinderAllInvocationsFinder")
