//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/frameworks/base/core/java/android/util/ContainerHelpers.java
//

#ifndef _AndroidUtilContainerHelpers_H_
#define _AndroidUtilContainerHelpers_H_

@class IOSBooleanArray;
@class IOSIntArray;
@class IOSLongArray;
@class IOSObjectArray;

#include "J2ObjC_header.h"

@interface AndroidUtilContainerHelpers : NSObject {
}

+ (jint)binarySearchWithIntArray:(IOSIntArray *)array
                         withInt:(jint)size
                         withInt:(jint)value;

+ (jint)binarySearchWithLongArray:(IOSLongArray *)array
                          withInt:(jint)size
                         withLong:(jlong)value;

- (instancetype)init;

@end

FOUNDATION_EXPORT BOOL AndroidUtilContainerHelpers_initialized;
J2OBJC_STATIC_INIT(AndroidUtilContainerHelpers)

CF_EXTERN_C_BEGIN

FOUNDATION_EXPORT jint AndroidUtilContainerHelpers_binarySearchWithIntArray_withInt_withInt_(IOSIntArray *array, jint size, jint value);

FOUNDATION_EXPORT jint AndroidUtilContainerHelpers_binarySearchWithLongArray_withInt_withLong_(IOSLongArray *array, jint size, jlong value);

FOUNDATION_EXPORT IOSBooleanArray *AndroidUtilContainerHelpers_EMPTY_BOOLEANS_;
J2OBJC_STATIC_FIELD_GETTER(AndroidUtilContainerHelpers, EMPTY_BOOLEANS_, IOSBooleanArray *)

FOUNDATION_EXPORT IOSIntArray *AndroidUtilContainerHelpers_EMPTY_INTS_;
J2OBJC_STATIC_FIELD_GETTER(AndroidUtilContainerHelpers, EMPTY_INTS_, IOSIntArray *)

FOUNDATION_EXPORT IOSLongArray *AndroidUtilContainerHelpers_EMPTY_LONGS_;
J2OBJC_STATIC_FIELD_GETTER(AndroidUtilContainerHelpers, EMPTY_LONGS_, IOSLongArray *)

FOUNDATION_EXPORT IOSObjectArray *AndroidUtilContainerHelpers_EMPTY_OBJECTS_;
J2OBJC_STATIC_FIELD_GETTER(AndroidUtilContainerHelpers, EMPTY_OBJECTS_, IOSObjectArray *)
CF_EXTERN_C_END

J2OBJC_TYPE_LITERAL_HEADER(AndroidUtilContainerHelpers)

#endif // _AndroidUtilContainerHelpers_H_
