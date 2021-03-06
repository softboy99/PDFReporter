//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/libcore/luni/src/main/java/java/util/FormatterClosedException.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_JavaUtilFormatterClosedException")
#ifdef RESTRICT_JavaUtilFormatterClosedException
#define INCLUDE_ALL_JavaUtilFormatterClosedException 0
#else
#define INCLUDE_ALL_JavaUtilFormatterClosedException 1
#endif
#undef RESTRICT_JavaUtilFormatterClosedException

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if !defined (JavaUtilFormatterClosedException_) && (INCLUDE_ALL_JavaUtilFormatterClosedException || defined(INCLUDE_JavaUtilFormatterClosedException))
#define JavaUtilFormatterClosedException_

#define RESTRICT_JavaLangIllegalStateException 1
#define INCLUDE_JavaLangIllegalStateException 1
#include "java/lang/IllegalStateException.h"

#define RESTRICT_JavaIoSerializable 1
#define INCLUDE_JavaIoSerializable 1
#include "java/io/Serializable.h"

/*!
 @brief A <code>FormatterClosedException</code> will be thrown if the formatter has been
 closed.
 - seealso: java.lang.RuntimeException
 */
@interface JavaUtilFormatterClosedException : JavaLangIllegalStateException < JavaIoSerializable >

#pragma mark Public

/*!
 @brief Constructs a new <code>FormatterClosedException</code> with the stack trace
 filled in.
 */
- (instancetype)init;

@end

J2OBJC_EMPTY_STATIC_INIT(JavaUtilFormatterClosedException)

FOUNDATION_EXPORT void JavaUtilFormatterClosedException_init(JavaUtilFormatterClosedException *self);

FOUNDATION_EXPORT JavaUtilFormatterClosedException *new_JavaUtilFormatterClosedException_init() NS_RETURNS_RETAINED;

FOUNDATION_EXPORT JavaUtilFormatterClosedException *create_JavaUtilFormatterClosedException_init();

J2OBJC_TYPE_LITERAL_HEADER(JavaUtilFormatterClosedException)

#endif


#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_JavaUtilFormatterClosedException")
