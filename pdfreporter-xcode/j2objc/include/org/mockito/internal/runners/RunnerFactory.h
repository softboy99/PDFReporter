//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/tball/tmp/j2objc/testing/mockito/build_result/java/org/mockito/internal/runners/RunnerFactory.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_OrgMockitoInternalRunnersRunnerFactory")
#ifdef RESTRICT_OrgMockitoInternalRunnersRunnerFactory
#define INCLUDE_ALL_OrgMockitoInternalRunnersRunnerFactory 0
#else
#define INCLUDE_ALL_OrgMockitoInternalRunnersRunnerFactory 1
#endif
#undef RESTRICT_OrgMockitoInternalRunnersRunnerFactory

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if !defined (OrgMockitoInternalRunnersRunnerFactory_) && (INCLUDE_ALL_OrgMockitoInternalRunnersRunnerFactory || defined(INCLUDE_OrgMockitoInternalRunnersRunnerFactory))
#define OrgMockitoInternalRunnersRunnerFactory_

@class IOSClass;
@class OrgMockitoInternalRunnersUtilRunnerProvider;
@protocol OrgMockitoInternalRunnersRunnerImpl;

@interface OrgMockitoInternalRunnersRunnerFactory : NSObject

#pragma mark Public

- (instancetype)init;

- (id<OrgMockitoInternalRunnersRunnerImpl>)createWithIOSClass:(IOSClass *)klass;

#pragma mark Package-Private

- (instancetype)initWithOrgMockitoInternalRunnersUtilRunnerProvider:(OrgMockitoInternalRunnersUtilRunnerProvider *)runnerProvider;

@end

J2OBJC_EMPTY_STATIC_INIT(OrgMockitoInternalRunnersRunnerFactory)

FOUNDATION_EXPORT void OrgMockitoInternalRunnersRunnerFactory_initWithOrgMockitoInternalRunnersUtilRunnerProvider_(OrgMockitoInternalRunnersRunnerFactory *self, OrgMockitoInternalRunnersUtilRunnerProvider *runnerProvider);

FOUNDATION_EXPORT OrgMockitoInternalRunnersRunnerFactory *new_OrgMockitoInternalRunnersRunnerFactory_initWithOrgMockitoInternalRunnersUtilRunnerProvider_(OrgMockitoInternalRunnersUtilRunnerProvider *runnerProvider) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT OrgMockitoInternalRunnersRunnerFactory *create_OrgMockitoInternalRunnersRunnerFactory_initWithOrgMockitoInternalRunnersUtilRunnerProvider_(OrgMockitoInternalRunnersUtilRunnerProvider *runnerProvider);

FOUNDATION_EXPORT void OrgMockitoInternalRunnersRunnerFactory_init(OrgMockitoInternalRunnersRunnerFactory *self);

FOUNDATION_EXPORT OrgMockitoInternalRunnersRunnerFactory *new_OrgMockitoInternalRunnersRunnerFactory_init() NS_RETURNS_RETAINED;

FOUNDATION_EXPORT OrgMockitoInternalRunnersRunnerFactory *create_OrgMockitoInternalRunnersRunnerFactory_init();

J2OBJC_TYPE_LITERAL_HEADER(OrgMockitoInternalRunnersRunnerFactory)

#endif


#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_OrgMockitoInternalRunnersRunnerFactory")
