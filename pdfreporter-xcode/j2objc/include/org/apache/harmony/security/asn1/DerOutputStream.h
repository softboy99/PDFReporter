//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/libcore/luni/src/main/java/org/apache/harmony/security/asn1/DerOutputStream.java
//

#ifndef _OrgApacheHarmonySecurityAsn1DerOutputStream_H_
#define _OrgApacheHarmonySecurityAsn1DerOutputStream_H_

@class IOSIntArray;
@class IOSObjectArray;
@class OrgApacheHarmonySecurityAsn1ASN1Choice;
@class OrgApacheHarmonySecurityAsn1ASN1Explicit;
@class OrgApacheHarmonySecurityAsn1ASN1Sequence;
@class OrgApacheHarmonySecurityAsn1ASN1SequenceOf;
@class OrgApacheHarmonySecurityAsn1ASN1SetOf;
@class OrgApacheHarmonySecurityAsn1ASN1Type;
@class OrgApacheHarmonySecurityAsn1ASN1ValueCollection;

#include "J2ObjC_header.h"
#include "org/apache/harmony/security/asn1/BerOutputStream.h"

#define OrgApacheHarmonySecurityAsn1DerOutputStream_initSize 32

@interface OrgApacheHarmonySecurityAsn1DerOutputStream : OrgApacheHarmonySecurityAsn1BerOutputStream {
}

- (instancetype)initWithOrgApacheHarmonySecurityAsn1ASN1Type:(OrgApacheHarmonySecurityAsn1ASN1Type *)asn1
                                                      withId:(id)object;

- (void)encodeChoiceWithOrgApacheHarmonySecurityAsn1ASN1Choice:(OrgApacheHarmonySecurityAsn1ASN1Choice *)choice;

- (void)encodeExplicitWithOrgApacheHarmonySecurityAsn1ASN1Explicit:(OrgApacheHarmonySecurityAsn1ASN1Explicit *)explicit_;

- (void)encodeSequenceWithOrgApacheHarmonySecurityAsn1ASN1Sequence:(OrgApacheHarmonySecurityAsn1ASN1Sequence *)sequence;

- (void)encodeSequenceOfWithOrgApacheHarmonySecurityAsn1ASN1SequenceOf:(OrgApacheHarmonySecurityAsn1ASN1SequenceOf *)sequenceOf;

- (void)encodeSetOfWithOrgApacheHarmonySecurityAsn1ASN1SetOf:(OrgApacheHarmonySecurityAsn1ASN1SetOf *)setOf;

- (void)getChoiceLengthWithOrgApacheHarmonySecurityAsn1ASN1Choice:(OrgApacheHarmonySecurityAsn1ASN1Choice *)choice;

- (void)getExplicitLengthWithOrgApacheHarmonySecurityAsn1ASN1Explicit:(OrgApacheHarmonySecurityAsn1ASN1Explicit *)explicit_;

- (void)getSequenceLengthWithOrgApacheHarmonySecurityAsn1ASN1Sequence:(OrgApacheHarmonySecurityAsn1ASN1Sequence *)sequence;

- (void)getSequenceOfLengthWithOrgApacheHarmonySecurityAsn1ASN1SequenceOf:(OrgApacheHarmonySecurityAsn1ASN1SequenceOf *)sequence;

- (void)getSetOfLengthWithOrgApacheHarmonySecurityAsn1ASN1SetOf:(OrgApacheHarmonySecurityAsn1ASN1SetOf *)setOf;

@end

J2OBJC_EMPTY_STATIC_INIT(OrgApacheHarmonySecurityAsn1DerOutputStream)

CF_EXTERN_C_BEGIN

J2OBJC_STATIC_FIELD_GETTER(OrgApacheHarmonySecurityAsn1DerOutputStream, initSize, jint)
CF_EXTERN_C_END

J2OBJC_TYPE_LITERAL_HEADER(OrgApacheHarmonySecurityAsn1DerOutputStream)

#endif // _OrgApacheHarmonySecurityAsn1DerOutputStream_H_
