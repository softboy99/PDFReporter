//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: pdfreporter-core/src/org/oss/pdfreporter/compilers/jeval/functions/DoubleStringConverter.java
//
//  Created by kendra on 9/27/13.
//

#include "java/lang/Double.h"
#include "java/lang/Exception.h"
#include "org/oss/pdfreporter/compilers/jeval/functions/DoubleStringConverter.h"
#include "org/oss/pdfreporter/uses/net/sourceforge/jeval/Evaluator.h"
#include "org/oss/pdfreporter/uses/net/sourceforge/jeval/function/FunctionConstants.h"
#include "org/oss/pdfreporter/uses/net/sourceforge/jeval/function/FunctionException.h"
#include "org/oss/pdfreporter/uses/net/sourceforge/jeval/function/FunctionResult.h"

@implementation OrgOssPdfreporterCompilersJevalFunctionsDoubleStringConverter

- (NSString *)getName {
  return @"doubleString";
}

- (OrgOssPdfreporterUsesNetSourceforgeJevalFunctionFunctionResult *)executeWithOrgOssPdfreporterUsesNetSourceforgeJevalEvaluator:(OrgOssPdfreporterUsesNetSourceforgeJevalEvaluator *)evaluator
                                                                                                                    withNSString:(NSString *)arguments {
  NSString *result = nil;
  JavaLangDouble *number = nil;
  @try {
    number = [[JavaLangDouble alloc] initWithNSString:arguments];
  }
  @catch (JavaLangException *e) {
    @throw [[OrgOssPdfreporterUsesNetSourceforgeJevalFunctionFunctionException alloc] initWithNSString:@"Invalid argument." withJavaLangException:e];
  }
  result = [((JavaLangDouble *) nil_chk(number)) description];
  return [[OrgOssPdfreporterUsesNetSourceforgeJevalFunctionFunctionResult alloc] initWithNSString:result withInt:OrgOssPdfreporterUsesNetSourceforgeJevalFunctionFunctionConstants_FUNCTION_RESULT_TYPE_STRING];
}

- (id)init {
  return [super init];
}

@end
