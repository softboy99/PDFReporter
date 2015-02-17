//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/libcore/luni/src/main/java/org/apache/harmony/security/asn1/BitString.java
//

#ifndef _OrgApacheHarmonySecurityAsn1BitString_H_
#define _OrgApacheHarmonySecurityAsn1BitString_H_

@class IOSBooleanArray;
@class IOSByteArray;

#include "J2ObjC_header.h"

@interface OrgApacheHarmonySecurityAsn1BitString : NSObject {
 @public
  IOSByteArray *bytes_;
  jint unusedBits_;
}

- (instancetype)initWithByteArray:(IOSByteArray *)bytes
                          withInt:(jint)unusedBits;

- (instancetype)initWithBooleanArray:(IOSBooleanArray *)values;

- (jboolean)getBitWithInt:(jint)bit;

- (void)setBitWithInt:(jint)bit
          withBoolean:(jboolean)value;

- (IOSBooleanArray *)toBooleanArray;

@end

FOUNDATION_EXPORT BOOL OrgApacheHarmonySecurityAsn1BitString_initialized;
J2OBJC_STATIC_INIT(OrgApacheHarmonySecurityAsn1BitString)

J2OBJC_FIELD_SETTER(OrgApacheHarmonySecurityAsn1BitString, bytes_, IOSByteArray *)

CF_EXTERN_C_BEGIN

FOUNDATION_EXPORT IOSByteArray *OrgApacheHarmonySecurityAsn1BitString_SET_MASK_;
J2OBJC_STATIC_FIELD_GETTER(OrgApacheHarmonySecurityAsn1BitString, SET_MASK_, IOSByteArray *)

FOUNDATION_EXPORT IOSByteArray *OrgApacheHarmonySecurityAsn1BitString_RESET_MASK_;
J2OBJC_STATIC_FIELD_GETTER(OrgApacheHarmonySecurityAsn1BitString, RESET_MASK_, IOSByteArray *)
CF_EXTERN_C_END

J2OBJC_TYPE_LITERAL_HEADER(OrgApacheHarmonySecurityAsn1BitString)

#endif // _OrgApacheHarmonySecurityAsn1BitString_H_
