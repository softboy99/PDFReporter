//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/platform/libcore/ojluni/src/main/java/java/lang/annotation/ElementType.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_JavaLangAnnotationElementType")
#ifdef RESTRICT_JavaLangAnnotationElementType
#define INCLUDE_ALL_JavaLangAnnotationElementType 0
#else
#define INCLUDE_ALL_JavaLangAnnotationElementType 1
#endif
#undef RESTRICT_JavaLangAnnotationElementType

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if !defined (JavaLangAnnotationElementType_) && (INCLUDE_ALL_JavaLangAnnotationElementType || defined(INCLUDE_JavaLangAnnotationElementType))
#define JavaLangAnnotationElementType_

#define RESTRICT_JavaLangEnum 1
#define INCLUDE_JavaLangEnum 1
#include "java/lang/Enum.h"

typedef NS_ENUM(NSUInteger, JavaLangAnnotationElementType_Enum) {
  JavaLangAnnotationElementType_Enum_TYPE = 0,
  JavaLangAnnotationElementType_Enum_FIELD = 1,
  JavaLangAnnotationElementType_Enum_METHOD = 2,
  JavaLangAnnotationElementType_Enum_PARAMETER = 3,
  JavaLangAnnotationElementType_Enum_CONSTRUCTOR = 4,
  JavaLangAnnotationElementType_Enum_LOCAL_VARIABLE = 5,
  JavaLangAnnotationElementType_Enum_ANNOTATION_TYPE = 6,
  JavaLangAnnotationElementType_Enum_PACKAGE = 7,
  JavaLangAnnotationElementType_Enum_TYPE_PARAMETER = 8,
  JavaLangAnnotationElementType_Enum_TYPE_USE = 9,
};

/*!
 @brief A program element type.
 The constants of this enumerated type
 provide a simple classification of the declared elements in a
 Java program.
 <p>These constants are used with the <code>Target</code> meta-annotation type
 to specify where it is legal to use an annotation type.
 @author Joshua Bloch
 @since 1.5
 */
@interface JavaLangAnnotationElementType : JavaLangEnum < NSCopying >

+ (JavaLangAnnotationElementType *)TYPE;

+ (JavaLangAnnotationElementType *)FIELD;

+ (JavaLangAnnotationElementType *)METHOD;

+ (JavaLangAnnotationElementType *)PARAMETER;

+ (JavaLangAnnotationElementType *)CONSTRUCTOR;

+ (JavaLangAnnotationElementType *)LOCAL_VARIABLE;

+ (JavaLangAnnotationElementType *)ANNOTATION_TYPE;

+ (JavaLangAnnotationElementType *)PACKAGE;

+ (JavaLangAnnotationElementType *)TYPE_PARAMETER;

+ (JavaLangAnnotationElementType *)TYPE_USE;

#pragma mark Package-Private

+ (IOSObjectArray *)values;

+ (JavaLangAnnotationElementType *)valueOfWithNSString:(NSString *)name;

- (id)copyWithZone:(NSZone *)zone;
- (JavaLangAnnotationElementType_Enum)toNSEnum;

@end

J2OBJC_STATIC_INIT(JavaLangAnnotationElementType)

/*! INTERNAL ONLY - Use enum accessors declared below. */
FOUNDATION_EXPORT JavaLangAnnotationElementType *JavaLangAnnotationElementType_values_[];

/*!
 @brief Class, interface (including annotation type), or enum declaration
 */
inline JavaLangAnnotationElementType *JavaLangAnnotationElementType_get_TYPE();
J2OBJC_ENUM_CONSTANT(JavaLangAnnotationElementType, TYPE)

/*!
 @brief Field declaration (includes enum constants)
 */
inline JavaLangAnnotationElementType *JavaLangAnnotationElementType_get_FIELD();
J2OBJC_ENUM_CONSTANT(JavaLangAnnotationElementType, FIELD)

/*!
 @brief Method declaration
 */
inline JavaLangAnnotationElementType *JavaLangAnnotationElementType_get_METHOD();
J2OBJC_ENUM_CONSTANT(JavaLangAnnotationElementType, METHOD)

/*!
 @brief Formal parameter declaration
 */
inline JavaLangAnnotationElementType *JavaLangAnnotationElementType_get_PARAMETER();
J2OBJC_ENUM_CONSTANT(JavaLangAnnotationElementType, PARAMETER)

/*!
 @brief Constructor declaration
 */
inline JavaLangAnnotationElementType *JavaLangAnnotationElementType_get_CONSTRUCTOR();
J2OBJC_ENUM_CONSTANT(JavaLangAnnotationElementType, CONSTRUCTOR)

/*!
 @brief Local variable declaration
 */
inline JavaLangAnnotationElementType *JavaLangAnnotationElementType_get_LOCAL_VARIABLE();
J2OBJC_ENUM_CONSTANT(JavaLangAnnotationElementType, LOCAL_VARIABLE)

/*!
 @brief Annotation type declaration
 */
inline JavaLangAnnotationElementType *JavaLangAnnotationElementType_get_ANNOTATION_TYPE();
J2OBJC_ENUM_CONSTANT(JavaLangAnnotationElementType, ANNOTATION_TYPE)

/*!
 @brief Package declaration
 */
inline JavaLangAnnotationElementType *JavaLangAnnotationElementType_get_PACKAGE();
J2OBJC_ENUM_CONSTANT(JavaLangAnnotationElementType, PACKAGE)

/*!
 @brief Type parameter declaration
 @since 1.8
  1.8
 */
inline JavaLangAnnotationElementType *JavaLangAnnotationElementType_get_TYPE_PARAMETER();
J2OBJC_ENUM_CONSTANT(JavaLangAnnotationElementType, TYPE_PARAMETER)

/*!
 @brief Use of a type
 @since 1.8
  1.8
 */
inline JavaLangAnnotationElementType *JavaLangAnnotationElementType_get_TYPE_USE();
J2OBJC_ENUM_CONSTANT(JavaLangAnnotationElementType, TYPE_USE)

FOUNDATION_EXPORT IOSObjectArray *JavaLangAnnotationElementType_values();

FOUNDATION_EXPORT JavaLangAnnotationElementType *JavaLangAnnotationElementType_valueOfWithNSString_(NSString *name);

FOUNDATION_EXPORT JavaLangAnnotationElementType *JavaLangAnnotationElementType_fromOrdinal(NSUInteger ordinal);

J2OBJC_TYPE_LITERAL_HEADER(JavaLangAnnotationElementType)

#endif


#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_JavaLangAnnotationElementType")
