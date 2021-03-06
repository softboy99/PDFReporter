//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/libcore/luni/src/main/java/java/io/InvalidObjectException.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_JavaIoInvalidObjectException")
#ifdef RESTRICT_JavaIoInvalidObjectException
#define INCLUDE_ALL_JavaIoInvalidObjectException 0
#else
#define INCLUDE_ALL_JavaIoInvalidObjectException 1
#endif
#undef RESTRICT_JavaIoInvalidObjectException

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if !defined (JavaIoInvalidObjectException_) && (INCLUDE_ALL_JavaIoInvalidObjectException || defined(INCLUDE_JavaIoInvalidObjectException))
#define JavaIoInvalidObjectException_

#define RESTRICT_JavaIoObjectStreamException 1
#define INCLUDE_JavaIoObjectStreamException 1
#include "java/io/ObjectStreamException.h"

/*!
 @brief Signals that, during deserialization, the validation of an object has failed.
 - seealso: ObjectInputStream#registerValidation(ObjectInputValidation,int)
 - seealso: ObjectInputValidation#validateObject()
 */
@interface JavaIoInvalidObjectException : JavaIoObjectStreamException

#pragma mark Public

/*!
 @brief Constructs an <code>InvalidObjectException</code> with its stack trace and
 detail message filled in.
 @param detailMessage
 the detail message for this exception.
 */
- (instancetype)initWithNSString:(NSString *)detailMessage;

@end

J2OBJC_EMPTY_STATIC_INIT(JavaIoInvalidObjectException)

FOUNDATION_EXPORT void JavaIoInvalidObjectException_initWithNSString_(JavaIoInvalidObjectException *self, NSString *detailMessage);

FOUNDATION_EXPORT JavaIoInvalidObjectException *new_JavaIoInvalidObjectException_initWithNSString_(NSString *detailMessage) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT JavaIoInvalidObjectException *create_JavaIoInvalidObjectException_initWithNSString_(NSString *detailMessage);

J2OBJC_TYPE_LITERAL_HEADER(JavaIoInvalidObjectException)

#endif


#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_JavaIoInvalidObjectException")
