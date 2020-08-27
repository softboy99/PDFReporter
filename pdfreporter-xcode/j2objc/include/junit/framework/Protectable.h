//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/tball/tmp/j2objc/junit/build_result/java/junit/framework/Protectable.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_JunitFrameworkProtectable")
#ifdef RESTRICT_JunitFrameworkProtectable
#define INCLUDE_ALL_JunitFrameworkProtectable 0
#else
#define INCLUDE_ALL_JunitFrameworkProtectable 1
#endif
#undef RESTRICT_JunitFrameworkProtectable

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if !defined (JunitFrameworkProtectable_) && (INCLUDE_ALL_JunitFrameworkProtectable || defined(INCLUDE_JunitFrameworkProtectable))
#define JunitFrameworkProtectable_

/*!
 @brief A <em>Protectable</em> can be run and can throw a Throwable.
 - seealso: TestResult
 */
@protocol JunitFrameworkProtectable < NSObject, JavaObject >

/*!
 @brief Run the the following method protected.
 */
- (void)protect;

@end

J2OBJC_EMPTY_STATIC_INIT(JunitFrameworkProtectable)

J2OBJC_TYPE_LITERAL_HEADER(JunitFrameworkProtectable)

#endif


#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_JunitFrameworkProtectable")
