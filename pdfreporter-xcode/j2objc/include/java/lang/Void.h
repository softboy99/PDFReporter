//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/libcore/luni/src/main/java/java/lang/Void.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_JavaLangVoid")
#ifdef RESTRICT_JavaLangVoid
#define INCLUDE_ALL_JavaLangVoid 0
#else
#define INCLUDE_ALL_JavaLangVoid 1
#endif
#undef RESTRICT_JavaLangVoid

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if !defined (JavaLangVoid_) && (INCLUDE_ALL_JavaLangVoid || defined(INCLUDE_JavaLangVoid))
#define JavaLangVoid_

@class IOSClass;

/*!
 @brief Placeholder class for the Java keyword <code>void</code>.
 @since 1.1
 */
@interface JavaLangVoid : NSObject

+ (IOSClass *)TYPE;

@end

J2OBJC_STATIC_INIT(JavaLangVoid)

/*!
 @brief The <code>Class</code> object that represents the primitive type <code>void</code>.
 */
inline IOSClass *JavaLangVoid_get_TYPE();
/*! INTERNAL ONLY - Use accessor function from above. */
FOUNDATION_EXPORT IOSClass *JavaLangVoid_TYPE;
J2OBJC_STATIC_FIELD_OBJ_FINAL(JavaLangVoid, TYPE, IOSClass *)

J2OBJC_TYPE_LITERAL_HEADER(JavaLangVoid)

#endif


#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_JavaLangVoid")
