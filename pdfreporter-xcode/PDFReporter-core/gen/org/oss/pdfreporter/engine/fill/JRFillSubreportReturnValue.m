//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: pdfreporter-core/src/org/oss/pdfreporter/engine/fill/JRFillSubreportReturnValue.java
//
//  Created by kendra on 9/27/13.
//

#include "IOSClass.h"
#include "java/lang/ClassNotFoundException.h"
#include "java/lang/UnsupportedOperationException.h"
#include "org/oss/pdfreporter/engine/JRRuntimeException.h"
#include "org/oss/pdfreporter/engine/JRSubreportReturnValue.h"
#include "org/oss/pdfreporter/engine/JRVariable.h"
#include "org/oss/pdfreporter/engine/fill/JRBaseFiller.h"
#include "org/oss/pdfreporter/engine/fill/JRDefaultIncrementerFactory.h"
#include "org/oss/pdfreporter/engine/fill/JRExtendedIncrementerFactory.h"
#include "org/oss/pdfreporter/engine/fill/JRFillObjectFactory.h"
#include "org/oss/pdfreporter/engine/fill/JRFillSubreportReturnValue.h"
#include "org/oss/pdfreporter/engine/fill/JRFillVariable.h"
#include "org/oss/pdfreporter/engine/fill/JRIncrementer.h"
#include "org/oss/pdfreporter/engine/fill/JRIncrementerFactory.h"
#include "org/oss/pdfreporter/engine/fill/JRIncrementerFactoryCache.h"
#include "org/oss/pdfreporter/engine/type/CalculationEnum.h"
#include "org/oss/pdfreporter/engine/util/JRClassLoader.h"

@implementation OrgOssPdfreporterEngineFillJRFillSubreportReturnValue

@synthesize parent = parent_;
@synthesize incrementer = incrementer_;
@synthesize filler = filler_;

- (id)initWithOrgOssPdfreporterEngineJRSubreportReturnValue:(id<OrgOssPdfreporterEngineJRSubreportReturnValue>)returnValue
         withOrgOssPdfreporterEngineFillJRFillObjectFactory:(OrgOssPdfreporterEngineFillJRFillObjectFactory *)factory
                withOrgOssPdfreporterEngineFillJRBaseFiller:(OrgOssPdfreporterEngineFillJRBaseFiller *)filler {
  if ((self = [super init])) {
    [((OrgOssPdfreporterEngineFillJRFillObjectFactory *) nil_chk(factory)) putWithId:returnValue withId:self];
    parent_ = returnValue;
    self.filler = filler;
  }
  return self;
}

- (NSString *)getSubreportVariable {
  return [((id<OrgOssPdfreporterEngineJRSubreportReturnValue>) nil_chk(parent_)) getSubreportVariable];
}

- (NSString *)getToVariable {
  return [((id<OrgOssPdfreporterEngineJRSubreportReturnValue>) nil_chk(parent_)) getToVariable];
}

- (NSString *)getIncrementerFactoryClassName {
  return [((id<OrgOssPdfreporterEngineJRSubreportReturnValue>) nil_chk(parent_)) getIncrementerFactoryClassName];
}

- (OrgOssPdfreporterEngineTypeCalculationEnumEnum *)getCalculationValue {
  return [((id<OrgOssPdfreporterEngineJRSubreportReturnValue>) nil_chk(parent_)) getCalculationValue];
}

- (id<OrgOssPdfreporterEngineFillJRIncrementer>)getIncrementer {
  if (incrementer_ == nil) {
    NSString *incrementerFactoryClassName = [self getIncrementerFactoryClassName];
    id<OrgOssPdfreporterEngineFillJRIncrementerFactory> incrementerFactory;
    if (incrementerFactoryClassName == nil) {
      id<OrgOssPdfreporterEngineJRVariable> toVariable = [((OrgOssPdfreporterEngineFillJRBaseFiller *) nil_chk(filler_)) getVariableWithNSString:[self getToVariable]];
      incrementerFactory = [OrgOssPdfreporterEngineFillJRDefaultIncrementerFactory getFactoryWithIOSClass:[((id<OrgOssPdfreporterEngineJRVariable>) nil_chk(toVariable)) getValueClass]];
    }
    else {
      @try {
        IOSClass *incrementerFactoryClass = [OrgOssPdfreporterEngineUtilJRClassLoader loadClassForNameWithNSString:incrementerFactoryClassName];
        incrementerFactory = [OrgOssPdfreporterEngineFillJRIncrementerFactoryCache getInstanceWithIOSClass:incrementerFactoryClass];
      }
      @catch (JavaLangClassNotFoundException *e) {
        @throw [[OrgOssPdfreporterEngineJRRuntimeException alloc] initWithNSString:[NSString stringWithFormat:@"Increment class %@ not found.", incrementerFactoryClassName] withJavaLangThrowable:e];
      }
    }
    incrementer_ = [((id<OrgOssPdfreporterEngineFillJRIncrementerFactory>) nil_chk(incrementerFactory)) getIncrementerWithChar:[((OrgOssPdfreporterEngineTypeCalculationEnumEnum *) nil_chk([self getCalculationValue])) getValue]];
  }
  return incrementer_;
}

- (id)clone {
  @throw [[JavaLangUnsupportedOperationException alloc] init];
}

- (id)copyWithZone:(NSZone *)zone {
  return [self clone];
}

- (void)copyAllPropertiesTo:(id)copy {
  [super copyAllPropertiesTo:copy];
  OrgOssPdfreporterEngineFillJRFillSubreportReturnValue *typedCopy = (OrgOssPdfreporterEngineFillJRFillSubreportReturnValue *) copy;
  typedCopy.parent = parent_;
  typedCopy.incrementer = incrementer_;
  typedCopy.filler = filler_;
}

@end
