//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/tball/tmp/j2objc/testing/mockito/build_result/java/org/mockito/internal/verification/NoMoreInteractions.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_OrgMockitoInternalVerificationNoMoreInteractions")
#ifdef RESTRICT_OrgMockitoInternalVerificationNoMoreInteractions
#define INCLUDE_ALL_OrgMockitoInternalVerificationNoMoreInteractions 0
#else
#define INCLUDE_ALL_OrgMockitoInternalVerificationNoMoreInteractions 1
#endif
#undef RESTRICT_OrgMockitoInternalVerificationNoMoreInteractions

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if !defined (OrgMockitoInternalVerificationNoMoreInteractions_) && (INCLUDE_ALL_OrgMockitoInternalVerificationNoMoreInteractions || defined(INCLUDE_OrgMockitoInternalVerificationNoMoreInteractions))
#define OrgMockitoInternalVerificationNoMoreInteractions_

#define RESTRICT_OrgMockitoVerificationVerificationMode 1
#define INCLUDE_OrgMockitoVerificationVerificationMode 1
#include "org/mockito/verification/VerificationMode.h"

#define RESTRICT_OrgMockitoInternalVerificationApiVerificationInOrderMode 1
#define INCLUDE_OrgMockitoInternalVerificationApiVerificationInOrderMode 1
#include "org/mockito/internal/verification/api/VerificationInOrderMode.h"

@protocol OrgMockitoInternalVerificationApiVerificationData;
@protocol OrgMockitoInternalVerificationApiVerificationDataInOrder;

@interface OrgMockitoInternalVerificationNoMoreInteractions : NSObject < OrgMockitoVerificationVerificationMode, OrgMockitoInternalVerificationApiVerificationInOrderMode >

#pragma mark Public

- (instancetype)init;

- (void)verifyWithOrgMockitoInternalVerificationApiVerificationData:(id<OrgMockitoInternalVerificationApiVerificationData>)data;

- (void)verifyInOrderWithOrgMockitoInternalVerificationApiVerificationDataInOrder:(id<OrgMockitoInternalVerificationApiVerificationDataInOrder>)data;

@end

J2OBJC_EMPTY_STATIC_INIT(OrgMockitoInternalVerificationNoMoreInteractions)

FOUNDATION_EXPORT void OrgMockitoInternalVerificationNoMoreInteractions_init(OrgMockitoInternalVerificationNoMoreInteractions *self);

FOUNDATION_EXPORT OrgMockitoInternalVerificationNoMoreInteractions *new_OrgMockitoInternalVerificationNoMoreInteractions_init() NS_RETURNS_RETAINED;

FOUNDATION_EXPORT OrgMockitoInternalVerificationNoMoreInteractions *create_OrgMockitoInternalVerificationNoMoreInteractions_init();

J2OBJC_TYPE_LITERAL_HEADER(OrgMockitoInternalVerificationNoMoreInteractions)

#endif


#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_OrgMockitoInternalVerificationNoMoreInteractions")
