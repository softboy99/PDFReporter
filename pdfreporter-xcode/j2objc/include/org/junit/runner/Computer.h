//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/tball/tmp/j2objc/junit/build_result/java/org/junit/runner/Computer.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_OrgJunitRunnerComputer")
#ifdef RESTRICT_OrgJunitRunnerComputer
#define INCLUDE_ALL_OrgJunitRunnerComputer 0
#else
#define INCLUDE_ALL_OrgJunitRunnerComputer 1
#endif
#undef RESTRICT_OrgJunitRunnerComputer

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if !defined (OrgJunitRunnerComputer_) && (INCLUDE_ALL_OrgJunitRunnerComputer || defined(INCLUDE_OrgJunitRunnerComputer))
#define OrgJunitRunnerComputer_

@class IOSClass;
@class IOSObjectArray;
@class OrgJunitRunnerRunner;
@class OrgJunitRunnersModelRunnerBuilder;

/*!
 @brief Represents a strategy for computing runners and suites.
 WARNING: this class is very likely to undergo serious changes in version 4.8 and
 beyond.
 @since 4.6
 */
@interface OrgJunitRunnerComputer : NSObject

#pragma mark Public

- (instancetype)init;

/*!
 @brief Create a suite for <code>classes</code>, building Runners with <code>builder</code>.
 Throws an InitializationError if Runner construction fails
 */
- (OrgJunitRunnerRunner *)getSuiteWithOrgJunitRunnersModelRunnerBuilder:(OrgJunitRunnersModelRunnerBuilder *)builder
                                                      withIOSClassArray:(IOSObjectArray *)classes;

/*!
 @brief Returns a new default computer, which runs tests in serial order
 */
+ (OrgJunitRunnerComputer *)serial;

#pragma mark Protected

/*!
 @brief Create a single-class runner for <code>testClass</code>, using <code>builder</code>
 */
- (OrgJunitRunnerRunner *)getRunnerWithOrgJunitRunnersModelRunnerBuilder:(OrgJunitRunnersModelRunnerBuilder *)builder
                                                            withIOSClass:(IOSClass *)testClass;

@end

J2OBJC_EMPTY_STATIC_INIT(OrgJunitRunnerComputer)

FOUNDATION_EXPORT OrgJunitRunnerComputer *OrgJunitRunnerComputer_serial();

FOUNDATION_EXPORT void OrgJunitRunnerComputer_init(OrgJunitRunnerComputer *self);

FOUNDATION_EXPORT OrgJunitRunnerComputer *new_OrgJunitRunnerComputer_init() NS_RETURNS_RETAINED;

FOUNDATION_EXPORT OrgJunitRunnerComputer *create_OrgJunitRunnerComputer_init();

J2OBJC_TYPE_LITERAL_HEADER(OrgJunitRunnerComputer)

#endif


#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_OrgJunitRunnerComputer")
