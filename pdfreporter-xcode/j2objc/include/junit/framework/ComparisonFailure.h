//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/tball/tmp/j2objc/junit/build_result/java/junit/framework/ComparisonFailure.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_JunitFrameworkComparisonFailure")
#ifdef RESTRICT_JunitFrameworkComparisonFailure
#define INCLUDE_ALL_JunitFrameworkComparisonFailure 0
#else
#define INCLUDE_ALL_JunitFrameworkComparisonFailure 1
#endif
#undef RESTRICT_JunitFrameworkComparisonFailure

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if !defined (JunitFrameworkComparisonFailure_) && (INCLUDE_ALL_JunitFrameworkComparisonFailure || defined(INCLUDE_JunitFrameworkComparisonFailure))
#define JunitFrameworkComparisonFailure_

#define RESTRICT_JunitFrameworkAssertionFailedError 1
#define INCLUDE_JunitFrameworkAssertionFailedError 1
#include "junit/framework/AssertionFailedError.h"

/*!
 @brief Thrown when an assert equals for Strings failed.
 Inspired by a patch from Alex Chaffee mailto:alex@@purpletech.com
 */
@interface JunitFrameworkComparisonFailure : JunitFrameworkAssertionFailedError

#pragma mark Public

/*!
 @brief Constructs a comparison failure.
 @param message the identifying message or null
 @param expected the expected string value
 @param actual the actual string value
 */
- (instancetype)initWithNSString:(NSString *)message
                    withNSString:(NSString *)expected
                    withNSString:(NSString *)actual;

/*!
 @brief Gets the actual string value
 @return the actual string value
 */
- (NSString *)getActual;

/*!
 @brief Gets the expected string value
 @return the expected string value
 */
- (NSString *)getExpected;

/*!
 @brief Returns "..." in place of common prefix and "..." in
 place of common suffix between expected and actual.
 - seealso: Throwable#getMessage()
 */
- (NSString *)getMessage;

@end

J2OBJC_EMPTY_STATIC_INIT(JunitFrameworkComparisonFailure)

FOUNDATION_EXPORT void JunitFrameworkComparisonFailure_initWithNSString_withNSString_withNSString_(JunitFrameworkComparisonFailure *self, NSString *message, NSString *expected, NSString *actual);

FOUNDATION_EXPORT JunitFrameworkComparisonFailure *new_JunitFrameworkComparisonFailure_initWithNSString_withNSString_withNSString_(NSString *message, NSString *expected, NSString *actual) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT JunitFrameworkComparisonFailure *create_JunitFrameworkComparisonFailure_initWithNSString_withNSString_withNSString_(NSString *message, NSString *expected, NSString *actual);

J2OBJC_TYPE_LITERAL_HEADER(JunitFrameworkComparisonFailure)

#endif


#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_JunitFrameworkComparisonFailure")
