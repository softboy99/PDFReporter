//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/tball/tmp/j2objc/junit/build_result/java/org/hamcrest/core/IsAnything.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_OrgHamcrestCoreIsAnything")
#ifdef RESTRICT_OrgHamcrestCoreIsAnything
#define INCLUDE_ALL_OrgHamcrestCoreIsAnything 0
#else
#define INCLUDE_ALL_OrgHamcrestCoreIsAnything 1
#endif
#undef RESTRICT_OrgHamcrestCoreIsAnything

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if !defined (OrgHamcrestCoreIsAnything_) && (INCLUDE_ALL_OrgHamcrestCoreIsAnything || defined(INCLUDE_OrgHamcrestCoreIsAnything))
#define OrgHamcrestCoreIsAnything_

#define RESTRICT_OrgHamcrestBaseMatcher 1
#define INCLUDE_OrgHamcrestBaseMatcher 1
#include "org/hamcrest/BaseMatcher.h"

@class IOSObjectArray;
@protocol OrgHamcrestDescription;
@protocol OrgHamcrestMatcher;

/*!
 @brief A matcher that always returns <code>true</code>.
 */
@interface OrgHamcrestCoreIsAnything : OrgHamcrestBaseMatcher

#pragma mark Public

- (instancetype)init;

- (instancetype)initWithNSString:(NSString *)message;

/*!
 @brief Creates a matcher that always matches, regardless of the examined object.
 */
+ (id<OrgHamcrestMatcher>)anything;

/*!
 @brief Creates a matcher that always matches, regardless of the examined object, but describes
 itself with the specified <code>String</code>.
 @param description_
 a meaningful <code>String</code> used when describing itself
 */
+ (id<OrgHamcrestMatcher>)anythingWithNSString:(NSString *)description_;

- (void)describeToWithOrgHamcrestDescription:(id<OrgHamcrestDescription>)description_;

- (jboolean)matchesWithId:(id)o;

@end

J2OBJC_EMPTY_STATIC_INIT(OrgHamcrestCoreIsAnything)

FOUNDATION_EXPORT void OrgHamcrestCoreIsAnything_init(OrgHamcrestCoreIsAnything *self);

FOUNDATION_EXPORT OrgHamcrestCoreIsAnything *new_OrgHamcrestCoreIsAnything_init() NS_RETURNS_RETAINED;

FOUNDATION_EXPORT OrgHamcrestCoreIsAnything *create_OrgHamcrestCoreIsAnything_init();

FOUNDATION_EXPORT void OrgHamcrestCoreIsAnything_initWithNSString_(OrgHamcrestCoreIsAnything *self, NSString *message);

FOUNDATION_EXPORT OrgHamcrestCoreIsAnything *new_OrgHamcrestCoreIsAnything_initWithNSString_(NSString *message) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT OrgHamcrestCoreIsAnything *create_OrgHamcrestCoreIsAnything_initWithNSString_(NSString *message);

FOUNDATION_EXPORT id<OrgHamcrestMatcher> OrgHamcrestCoreIsAnything_anything();

FOUNDATION_EXPORT id<OrgHamcrestMatcher> OrgHamcrestCoreIsAnything_anythingWithNSString_(NSString *description_);

J2OBJC_TYPE_LITERAL_HEADER(OrgHamcrestCoreIsAnything)

#endif


#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_OrgHamcrestCoreIsAnything")
