//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/krasnocka/Downloads/j2objc-master/testing/mockito/build_result/java/org/mockito/internal/util/reflection/FieldInitializer.java
//

#ifndef _OrgMockitoInternalUtilReflectionFieldInitializer_H_
#define _OrgMockitoInternalUtilReflectionFieldInitializer_H_

@class IOSClass;
@class IOSObjectArray;
@class JavaLangReflectConstructor;
@class JavaLangReflectField;
@class OrgMockitoInternalUtilReflectionFieldInitializationReport;
@protocol OrgMockitoInternalUtilReflectionFieldInitializer_ConstructorArgumentResolver;
@protocol OrgMockitoInternalUtilReflectionFieldInitializer_ConstructorInstantiator;

#include "J2ObjC_header.h"
#include "java/util/Comparator.h"

@interface OrgMockitoInternalUtilReflectionFieldInitializer : NSObject {
}

- (instancetype)initWithId:(id)fieldOwner
  withJavaLangReflectField:(JavaLangReflectField *)field;

- (instancetype)initWithId:(id)fieldOwner
  withJavaLangReflectField:(JavaLangReflectField *)field
withOrgMockitoInternalUtilReflectionFieldInitializer_ConstructorArgumentResolver:(id<OrgMockitoInternalUtilReflectionFieldInitializer_ConstructorArgumentResolver>)argResolver;

- (OrgMockitoInternalUtilReflectionFieldInitializationReport *)initialize__ OBJC_METHOD_FAMILY_NONE;

@end

J2OBJC_EMPTY_STATIC_INIT(OrgMockitoInternalUtilReflectionFieldInitializer)

CF_EXTERN_C_BEGIN
CF_EXTERN_C_END

J2OBJC_TYPE_LITERAL_HEADER(OrgMockitoInternalUtilReflectionFieldInitializer)

@protocol OrgMockitoInternalUtilReflectionFieldInitializer_ConstructorArgumentResolver < NSObject, JavaObject >

- (IOSObjectArray *)resolveTypeInstancesWithIOSClassArray:(IOSObjectArray *)argTypes;

@end

J2OBJC_EMPTY_STATIC_INIT(OrgMockitoInternalUtilReflectionFieldInitializer_ConstructorArgumentResolver)

J2OBJC_TYPE_LITERAL_HEADER(OrgMockitoInternalUtilReflectionFieldInitializer_ConstructorArgumentResolver)

@protocol OrgMockitoInternalUtilReflectionFieldInitializer_ConstructorInstantiator < NSObject, JavaObject >

- (OrgMockitoInternalUtilReflectionFieldInitializationReport *)instantiate;

@end

J2OBJC_EMPTY_STATIC_INIT(OrgMockitoInternalUtilReflectionFieldInitializer_ConstructorInstantiator)

J2OBJC_TYPE_LITERAL_HEADER(OrgMockitoInternalUtilReflectionFieldInitializer_ConstructorInstantiator)

@interface OrgMockitoInternalUtilReflectionFieldInitializer_NoArgConstructorInstantiator : NSObject < OrgMockitoInternalUtilReflectionFieldInitializer_ConstructorInstantiator > {
}

- (instancetype)initWithId:(id)testClass
  withJavaLangReflectField:(JavaLangReflectField *)field;

- (OrgMockitoInternalUtilReflectionFieldInitializationReport *)instantiate;

@end

J2OBJC_EMPTY_STATIC_INIT(OrgMockitoInternalUtilReflectionFieldInitializer_NoArgConstructorInstantiator)

CF_EXTERN_C_BEGIN
CF_EXTERN_C_END

J2OBJC_TYPE_LITERAL_HEADER(OrgMockitoInternalUtilReflectionFieldInitializer_NoArgConstructorInstantiator)

@interface OrgMockitoInternalUtilReflectionFieldInitializer_ParameterizedConstructorInstantiator : NSObject < OrgMockitoInternalUtilReflectionFieldInitializer_ConstructorInstantiator > {
}

- (instancetype)initWithId:(id)testClass
  withJavaLangReflectField:(JavaLangReflectField *)field
withOrgMockitoInternalUtilReflectionFieldInitializer_ConstructorArgumentResolver:(id<OrgMockitoInternalUtilReflectionFieldInitializer_ConstructorArgumentResolver>)argumentResolver;

- (OrgMockitoInternalUtilReflectionFieldInitializationReport *)instantiate;

@end

J2OBJC_EMPTY_STATIC_INIT(OrgMockitoInternalUtilReflectionFieldInitializer_ParameterizedConstructorInstantiator)

CF_EXTERN_C_BEGIN
CF_EXTERN_C_END

J2OBJC_TYPE_LITERAL_HEADER(OrgMockitoInternalUtilReflectionFieldInitializer_ParameterizedConstructorInstantiator)

@interface OrgMockitoInternalUtilReflectionFieldInitializer_ParameterizedConstructorInstantiator_$1 : NSObject < JavaUtilComparator > {
}

- (jint)compareWithId:(JavaLangReflectConstructor *)constructorA
               withId:(JavaLangReflectConstructor *)constructorB;

- (instancetype)init;

@end

J2OBJC_EMPTY_STATIC_INIT(OrgMockitoInternalUtilReflectionFieldInitializer_ParameterizedConstructorInstantiator_$1)

CF_EXTERN_C_BEGIN
CF_EXTERN_C_END

J2OBJC_TYPE_LITERAL_HEADER(OrgMockitoInternalUtilReflectionFieldInitializer_ParameterizedConstructorInstantiator_$1)

#endif // _OrgMockitoInternalUtilReflectionFieldInitializer_H_