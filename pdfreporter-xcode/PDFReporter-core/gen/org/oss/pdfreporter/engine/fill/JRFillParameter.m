//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: pdfreporter-core/src/org/oss/pdfreporter/engine/fill/JRFillParameter.java
//
//  Created by kendra on 9/27/13.
//

#include "IOSClass.h"
#include "java/lang/UnsupportedOperationException.h"
#include "org/oss/pdfreporter/engine/JRExpression.h"
#include "org/oss/pdfreporter/engine/JRParameter.h"
#include "org/oss/pdfreporter/engine/JRPropertiesHolder.h"
#include "org/oss/pdfreporter/engine/JRPropertiesMap.h"
#include "org/oss/pdfreporter/engine/fill/JRFillObjectFactory.h"
#include "org/oss/pdfreporter/engine/fill/JRFillParameter.h"

@implementation OrgOssPdfreporterEngineFillJRFillParameter

@synthesize parent = parent_;
@synthesize value = value_;

- (id)initWithOrgOssPdfreporterEngineJRParameter:(id<OrgOssPdfreporterEngineJRParameter>)parameter
withOrgOssPdfreporterEngineFillJRFillObjectFactory:(OrgOssPdfreporterEngineFillJRFillObjectFactory *)factory {
  if ((self = [super init])) {
    [((OrgOssPdfreporterEngineFillJRFillObjectFactory *) nil_chk(factory)) putWithId:parameter withId:self];
    parent_ = parameter;
  }
  return self;
}

- (NSString *)getName {
  return [((id<OrgOssPdfreporterEngineJRParameter>) nil_chk(parent_)) getName];
}

- (NSString *)getDescription {
  return [((id<OrgOssPdfreporterEngineJRParameter>) nil_chk(parent_)) getDescription];
}

- (void)setDescriptionWithNSString:(NSString *)description_ {
}

- (IOSClass *)getValueClass {
  return [((id<OrgOssPdfreporterEngineJRParameter>) nil_chk(parent_)) getValueClass];
}

- (NSString *)getValueClassName {
  return [((id<OrgOssPdfreporterEngineJRParameter>) nil_chk(parent_)) getValueClassName];
}

- (IOSClass *)getNestedType {
  return [((id<OrgOssPdfreporterEngineJRParameter>) nil_chk(parent_)) getNestedType];
}

- (NSString *)getNestedTypeName {
  return [((id<OrgOssPdfreporterEngineJRParameter>) nil_chk(parent_)) getNestedTypeName];
}

- (BOOL)isSystemDefined {
  return [((id<OrgOssPdfreporterEngineJRParameter>) nil_chk(parent_)) isSystemDefined];
}

- (BOOL)isForPrompting {
  return [((id<OrgOssPdfreporterEngineJRParameter>) nil_chk(parent_)) isForPrompting];
}

- (id<OrgOssPdfreporterEngineJRExpression>)getDefaultValueExpression {
  return [((id<OrgOssPdfreporterEngineJRParameter>) nil_chk(parent_)) getDefaultValueExpression];
}

- (id)getValue {
  return value_;
}

- (void)setValueWithId:(id)value {
  self.value = value;
}

- (BOOL)hasProperties {
  return [((id<OrgOssPdfreporterEngineJRParameter>) nil_chk(parent_)) hasProperties];
}

- (OrgOssPdfreporterEngineJRPropertiesMap *)getPropertiesMap {
  return [((id<OrgOssPdfreporterEngineJRParameter>) nil_chk(parent_)) getPropertiesMap];
}

- (id<OrgOssPdfreporterEngineJRPropertiesHolder>)getParentProperties {
  return nil;
}

- (id)clone {
  @throw [[JavaLangUnsupportedOperationException alloc] init];
}

- (id)copyWithZone:(NSZone *)zone {
  return [self clone];
}

- (void)copyAllPropertiesTo:(id)copy {
  [super copyAllPropertiesTo:copy];
  OrgOssPdfreporterEngineFillJRFillParameter *typedCopy = (OrgOssPdfreporterEngineFillJRFillParameter *) copy;
  typedCopy.parent = parent_;
  typedCopy.value = value_;
}

@end
