//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/libcore/luni/src/main/java/java/io/EmulatedFields.java
//

#ifndef _JavaIoEmulatedFields_H_
#define _JavaIoEmulatedFields_H_

@class IOSClass;
@class IOSObjectArray;
@class JavaIoEmulatedFields_ObjectSlot;
@class JavaIoObjectStreamField;

#include "J2ObjC_header.h"

@interface JavaIoEmulatedFields : NSObject {
}

- (instancetype)initWithJavaIoObjectStreamFieldArray:(IOSObjectArray *)fields
                    withJavaIoObjectStreamFieldArray:(IOSObjectArray *)declared;

- (jboolean)defaultedWithNSString:(NSString *)name;

- (jbyte)getWithNSString:(NSString *)name
                withByte:(jbyte)defaultValue;

- (jchar)getWithNSString:(NSString *)name
                withChar:(jchar)defaultValue;

- (jdouble)getWithNSString:(NSString *)name
                withDouble:(jdouble)defaultValue;

- (jfloat)getWithNSString:(NSString *)name
                withFloat:(jfloat)defaultValue;

- (jint)getWithNSString:(NSString *)name
                withInt:(jint)defaultValue;

- (jlong)getWithNSString:(NSString *)name
                withLong:(jlong)defaultValue;

- (id)getWithNSString:(NSString *)name
               withId:(id)defaultValue;

- (jshort)getWithNSString:(NSString *)name
                withShort:(jshort)defaultValue;

- (jboolean)getWithNSString:(NSString *)name
                withBoolean:(jboolean)defaultValue;

- (void)putWithNSString:(NSString *)name
               withByte:(jbyte)value;

- (void)putWithNSString:(NSString *)name
               withChar:(jchar)value;

- (void)putWithNSString:(NSString *)name
             withDouble:(jdouble)value;

- (void)putWithNSString:(NSString *)name
              withFloat:(jfloat)value;

- (void)putWithNSString:(NSString *)name
                withInt:(jint)value;

- (void)putWithNSString:(NSString *)name
               withLong:(jlong)value;

- (void)putWithNSString:(NSString *)name
                 withId:(id)value;

- (void)putWithNSString:(NSString *)name
              withShort:(jshort)value;

- (void)putWithNSString:(NSString *)name
            withBoolean:(jboolean)value;

- (IOSObjectArray *)slots;

@end

J2OBJC_EMPTY_STATIC_INIT(JavaIoEmulatedFields)

CF_EXTERN_C_BEGIN
CF_EXTERN_C_END

J2OBJC_TYPE_LITERAL_HEADER(JavaIoEmulatedFields)

@interface JavaIoEmulatedFields_ObjectSlot : NSObject {
 @public
  JavaIoObjectStreamField *field_;
  id fieldValue_;
  jboolean defaulted_;
}

- (JavaIoObjectStreamField *)getField;

- (id)getFieldValue;

- (instancetype)init;

@end

J2OBJC_EMPTY_STATIC_INIT(JavaIoEmulatedFields_ObjectSlot)

J2OBJC_FIELD_SETTER(JavaIoEmulatedFields_ObjectSlot, field_, JavaIoObjectStreamField *)
J2OBJC_FIELD_SETTER(JavaIoEmulatedFields_ObjectSlot, fieldValue_, id)

CF_EXTERN_C_BEGIN
CF_EXTERN_C_END

J2OBJC_TYPE_LITERAL_HEADER(JavaIoEmulatedFields_ObjectSlot)

#endif // _JavaIoEmulatedFields_H_
