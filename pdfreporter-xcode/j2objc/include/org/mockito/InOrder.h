//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/krasnocka/Downloads/j2objc-master/testing/mockito/build_result/java/org/mockito/InOrder.java
//

#ifndef _OrgMockitoInOrder_H_
#define _OrgMockitoInOrder_H_

@protocol OrgMockitoVerificationVerificationMode;

#include "J2ObjC_header.h"

@protocol OrgMockitoInOrder < NSObject, JavaObject >

- (id)verifyWithId:(id)mock;

- (id)verifyWithId:(id)mock
withOrgMockitoVerificationVerificationMode:(id<OrgMockitoVerificationVerificationMode>)mode;

- (void)verifyNoMoreInteractions;

@end

J2OBJC_EMPTY_STATIC_INIT(OrgMockitoInOrder)

J2OBJC_TYPE_LITERAL_HEADER(OrgMockitoInOrder)

#endif // _OrgMockitoInOrder_H_
