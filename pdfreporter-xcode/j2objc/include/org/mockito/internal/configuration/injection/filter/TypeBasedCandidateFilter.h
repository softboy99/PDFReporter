//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/tball/tmp/j2objc/testing/mockito/build_result/java/org/mockito/internal/configuration/injection/filter/TypeBasedCandidateFilter.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_OrgMockitoInternalConfigurationInjectionFilterTypeBasedCandidateFilter")
#ifdef RESTRICT_OrgMockitoInternalConfigurationInjectionFilterTypeBasedCandidateFilter
#define INCLUDE_ALL_OrgMockitoInternalConfigurationInjectionFilterTypeBasedCandidateFilter 0
#else
#define INCLUDE_ALL_OrgMockitoInternalConfigurationInjectionFilterTypeBasedCandidateFilter 1
#endif
#undef RESTRICT_OrgMockitoInternalConfigurationInjectionFilterTypeBasedCandidateFilter

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if !defined (OrgMockitoInternalConfigurationInjectionFilterTypeBasedCandidateFilter_) && (INCLUDE_ALL_OrgMockitoInternalConfigurationInjectionFilterTypeBasedCandidateFilter || defined(INCLUDE_OrgMockitoInternalConfigurationInjectionFilterTypeBasedCandidateFilter))
#define OrgMockitoInternalConfigurationInjectionFilterTypeBasedCandidateFilter_

#define RESTRICT_OrgMockitoInternalConfigurationInjectionFilterMockCandidateFilter 1
#define INCLUDE_OrgMockitoInternalConfigurationInjectionFilterMockCandidateFilter 1
#include "org/mockito/internal/configuration/injection/filter/MockCandidateFilter.h"

@class JavaLangReflectField;
@protocol JavaUtilCollection;
@protocol OrgMockitoInternalConfigurationInjectionFilterOngoingInjecter;

@interface OrgMockitoInternalConfigurationInjectionFilterTypeBasedCandidateFilter : NSObject < OrgMockitoInternalConfigurationInjectionFilterMockCandidateFilter > {
 @public
  id<OrgMockitoInternalConfigurationInjectionFilterMockCandidateFilter> next_;
}

#pragma mark Public

- (instancetype)initWithOrgMockitoInternalConfigurationInjectionFilterMockCandidateFilter:(id<OrgMockitoInternalConfigurationInjectionFilterMockCandidateFilter>)next;

- (id<OrgMockitoInternalConfigurationInjectionFilterOngoingInjecter>)filterCandidateWithJavaUtilCollection:(id<JavaUtilCollection>)mocks
                                                                                  withJavaLangReflectField:(JavaLangReflectField *)field
                                                                                                    withId:(id)fieldInstance;

@end

J2OBJC_EMPTY_STATIC_INIT(OrgMockitoInternalConfigurationInjectionFilterTypeBasedCandidateFilter)

J2OBJC_FIELD_SETTER(OrgMockitoInternalConfigurationInjectionFilterTypeBasedCandidateFilter, next_, id<OrgMockitoInternalConfigurationInjectionFilterMockCandidateFilter>)

FOUNDATION_EXPORT void OrgMockitoInternalConfigurationInjectionFilterTypeBasedCandidateFilter_initWithOrgMockitoInternalConfigurationInjectionFilterMockCandidateFilter_(OrgMockitoInternalConfigurationInjectionFilterTypeBasedCandidateFilter *self, id<OrgMockitoInternalConfigurationInjectionFilterMockCandidateFilter> next);

FOUNDATION_EXPORT OrgMockitoInternalConfigurationInjectionFilterTypeBasedCandidateFilter *new_OrgMockitoInternalConfigurationInjectionFilterTypeBasedCandidateFilter_initWithOrgMockitoInternalConfigurationInjectionFilterMockCandidateFilter_(id<OrgMockitoInternalConfigurationInjectionFilterMockCandidateFilter> next) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT OrgMockitoInternalConfigurationInjectionFilterTypeBasedCandidateFilter *create_OrgMockitoInternalConfigurationInjectionFilterTypeBasedCandidateFilter_initWithOrgMockitoInternalConfigurationInjectionFilterMockCandidateFilter_(id<OrgMockitoInternalConfigurationInjectionFilterMockCandidateFilter> next);

J2OBJC_TYPE_LITERAL_HEADER(OrgMockitoInternalConfigurationInjectionFilterTypeBasedCandidateFilter)

#endif


#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_OrgMockitoInternalConfigurationInjectionFilterTypeBasedCandidateFilter")
