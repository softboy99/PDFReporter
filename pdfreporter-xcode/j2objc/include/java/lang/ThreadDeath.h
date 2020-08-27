//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/libcore/luni/src/main/java/java/lang/ThreadDeath.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_JavaLangThreadDeath")
#ifdef RESTRICT_JavaLangThreadDeath
#define INCLUDE_ALL_JavaLangThreadDeath 0
#else
#define INCLUDE_ALL_JavaLangThreadDeath 1
#endif
#undef RESTRICT_JavaLangThreadDeath

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if !defined (JavaLangThreadDeath_) && (INCLUDE_ALL_JavaLangThreadDeath || defined(INCLUDE_JavaLangThreadDeath))
#define JavaLangThreadDeath_

#define RESTRICT_JavaLangError 1
#define INCLUDE_JavaLangError 1
#include "java/lang/Error.h"

/*!
 @brief ThreadDeath is thrown when a thread stops executing.
 It is used to aid in the
 orderly unrolling of the thread's stack (eg. cleanup of monitors).
 */
@interface JavaLangThreadDeath : JavaLangError

#pragma mark Public

/*!
 @brief Constructs a new instance of this class.
 Note that in the case of
 ThreadDeath, the stack trace may <em>not</em> be filled in a way which
 allows a stack trace to be printed.
 */
- (instancetype)init;

@end

J2OBJC_EMPTY_STATIC_INIT(JavaLangThreadDeath)

FOUNDATION_EXPORT void JavaLangThreadDeath_init(JavaLangThreadDeath *self);

FOUNDATION_EXPORT JavaLangThreadDeath *new_JavaLangThreadDeath_init() NS_RETURNS_RETAINED;

FOUNDATION_EXPORT JavaLangThreadDeath *create_JavaLangThreadDeath_init();

J2OBJC_TYPE_LITERAL_HEADER(JavaLangThreadDeath)

#endif


#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_JavaLangThreadDeath")
