//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/libcore/luni/src/main/java/java/lang/reflect/AnnotatedElement.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_JavaLangReflectAnnotatedElement")
#ifdef RESTRICT_JavaLangReflectAnnotatedElement
#define INCLUDE_ALL_JavaLangReflectAnnotatedElement 0
#else
#define INCLUDE_ALL_JavaLangReflectAnnotatedElement 1
#endif
#undef RESTRICT_JavaLangReflectAnnotatedElement

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if !defined (JavaLangReflectAnnotatedElement_) && (INCLUDE_ALL_JavaLangReflectAnnotatedElement || defined(INCLUDE_JavaLangReflectAnnotatedElement))
#define JavaLangReflectAnnotatedElement_

@class IOSClass;
@class IOSObjectArray;
@protocol JavaLangAnnotationAnnotation;

/*!
 @brief This interface provides reflective access to annotation information.
 @since 1.5
 */
@protocol JavaLangReflectAnnotatedElement < NSObject, JavaObject >

/*!
 @brief Returns, for this element, the annotation with the specified type, or
 <code>null</code> if no annotation with the specified type is present
 (including inherited annotations).
 @param annotationType
 the type of the annotation to search for
 @return the annotation with the specified type or <code>null</code>
 @throws NullPointerException
 if <code>annotationType</code> is <code>null</code>
 */
- (id)getAnnotationWithIOSClass:(IOSClass *)annotationType;

/*!
 @brief Returns, for this element, an array containing all annotations (including
 inherited annotations).
 If there are no annotations present, this method
 returns a zero length array.
 @return an array of all annotations for this element
 */
- (IOSObjectArray *)getAnnotations;

/*!
 @brief Returns, for this element, all annotations that are explicitly declared
 (not inherited).
 If there are no declared annotations present, this
 method returns a zero length array.
 @return an array of annotations declared for this element
 */
- (IOSObjectArray *)getDeclaredAnnotations;

/*!
 @brief Indicates whether or not this element has an annotation with the
 specified annotation type (including inherited annotations).
 @param annotationType
 the type of the annotation to search for
 @return <code>true</code> if the annotation exists, <code>false</code> otherwise
 @throws NullPointerException
 if <code>annotationType</code> is <code>null</code>
 */
- (jboolean)isAnnotationPresentWithIOSClass:(IOSClass *)annotationType;

@end

J2OBJC_EMPTY_STATIC_INIT(JavaLangReflectAnnotatedElement)

J2OBJC_TYPE_LITERAL_HEADER(JavaLangReflectAnnotatedElement)

#endif


#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_JavaLangReflectAnnotatedElement")
