//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/tball/tmp/j2objc/junit/build_result/java/org/junit/ComparisonFailure.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_OrgJunitComparisonFailure")
#ifdef RESTRICT_OrgJunitComparisonFailure
#define INCLUDE_ALL_OrgJunitComparisonFailure 0
#else
#define INCLUDE_ALL_OrgJunitComparisonFailure 1
#endif
#undef RESTRICT_OrgJunitComparisonFailure

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if !defined (OrgJunitComparisonFailure_) && (INCLUDE_ALL_OrgJunitComparisonFailure || defined(INCLUDE_OrgJunitComparisonFailure))
#define OrgJunitComparisonFailure_

#define RESTRICT_JavaLangAssertionError 1
#define INCLUDE_JavaLangAssertionError 1
#include "java/lang/AssertionError.h"

/*!
 @brief Thrown when an <code>assertEquals(String, String)</code> fails.
 Create and throw
 a <code>ComparisonFailure</code> manually if you want to show users the difference between two complex
 strings.
 Inspired by a patch from Alex Chaffee (alex@@purpletech.com)
 @since 4.0
 */
@interface OrgJunitComparisonFailure : JavaLangAssertionError

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
 @brief Returns the actual string value
 @return the actual string value
 */
- (NSString *)getActual;

/*!
 @brief Returns the expected string value
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

J2OBJC_EMPTY_STATIC_INIT(OrgJunitComparisonFailure)

FOUNDATION_EXPORT void OrgJunitComparisonFailure_initWithNSString_withNSString_withNSString_(OrgJunitComparisonFailure *self, NSString *message, NSString *expected, NSString *actual);

FOUNDATION_EXPORT OrgJunitComparisonFailure *new_OrgJunitComparisonFailure_initWithNSString_withNSString_withNSString_(NSString *message, NSString *expected, NSString *actual) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT OrgJunitComparisonFailure *create_OrgJunitComparisonFailure_initWithNSString_withNSString_withNSString_(NSString *message, NSString *expected, NSString *actual);

J2OBJC_TYPE_LITERAL_HEADER(OrgJunitComparisonFailure)

#endif


#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_OrgJunitComparisonFailure")
