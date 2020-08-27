//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/libcore/luni/src/main/java/java/lang/IllegalThreadStateException.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_JavaLangIllegalThreadStateException")
#ifdef RESTRICT_JavaLangIllegalThreadStateException
#define INCLUDE_ALL_JavaLangIllegalThreadStateException 0
#else
#define INCLUDE_ALL_JavaLangIllegalThreadStateException 1
#endif
#undef RESTRICT_JavaLangIllegalThreadStateException

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if !defined (JavaLangIllegalThreadStateException_) && (INCLUDE_ALL_JavaLangIllegalThreadStateException || defined(INCLUDE_JavaLangIllegalThreadStateException))
#define JavaLangIllegalThreadStateException_

#define RESTRICT_JavaLangIllegalArgumentException 1
#define INCLUDE_JavaLangIllegalArgumentException 1
#include "java/lang/IllegalArgumentException.h"

/*!
 @brief Thrown when an operation is attempted which is not possible given the state
 that the executing thread is in.
 */
@interface JavaLangIllegalThreadStateException : JavaLangIllegalArgumentException

#pragma mark Public

/*!
 @brief Constructs a new <code>IllegalThreadStateException</code> that includes the
 current stack trace.
 */
- (instancetype)init;

/*!
 @brief Constructs a new <code>IllegalThreadStateException</code> with the current
 stack trace and the specified detail message.
 @param detailMessage
 the detail message for this exception.
 */
- (instancetype)initWithNSString:(NSString *)detailMessage;

@end

J2OBJC_EMPTY_STATIC_INIT(JavaLangIllegalThreadStateException)

FOUNDATION_EXPORT void JavaLangIllegalThreadStateException_init(JavaLangIllegalThreadStateException *self);

FOUNDATION_EXPORT JavaLangIllegalThreadStateException *new_JavaLangIllegalThreadStateException_init() NS_RETURNS_RETAINED;

FOUNDATION_EXPORT JavaLangIllegalThreadStateException *create_JavaLangIllegalThreadStateException_init();

FOUNDATION_EXPORT void JavaLangIllegalThreadStateException_initWithNSString_(JavaLangIllegalThreadStateException *self, NSString *detailMessage);

FOUNDATION_EXPORT JavaLangIllegalThreadStateException *new_JavaLangIllegalThreadStateException_initWithNSString_(NSString *detailMessage) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT JavaLangIllegalThreadStateException *create_JavaLangIllegalThreadStateException_initWithNSString_(NSString *detailMessage);

J2OBJC_TYPE_LITERAL_HEADER(JavaLangIllegalThreadStateException)

#endif


#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_JavaLangIllegalThreadStateException")
