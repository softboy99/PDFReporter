//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: pdfreporter-core/src/org/oss/pdfreporter/compilers/jeval/functions/CurrentDate.java
//
//  Created by kendra on 9/27/13.
//

#ifndef _OrgOssPdfreporterCompilersJevalFunctionsCurrentDate_H_
#define _OrgOssPdfreporterCompilersJevalFunctionsCurrentDate_H_

@class OrgOssPdfreporterUsesNetSourceforgeJevalEvaluator;
@class OrgOssPdfreporterUsesNetSourceforgeJevalFunctionFunctionResult;

#import "JreEmulation.h"
#include "org/oss/pdfreporter/uses/net/sourceforge/jeval/function/Function.h"

@interface OrgOssPdfreporterCompilersJevalFunctionsCurrentDate : NSObject < OrgOssPdfreporterUsesNetSourceforgeJevalFunctionFunction > {
}

- (NSString *)getName;
- (OrgOssPdfreporterUsesNetSourceforgeJevalFunctionFunctionResult *)executeWithOrgOssPdfreporterUsesNetSourceforgeJevalEvaluator:(OrgOssPdfreporterUsesNetSourceforgeJevalEvaluator *)evaluator
                                                                                                                    withNSString:(NSString *)arguments;
- (id)init;
@end

#endif // _OrgOssPdfreporterCompilersJevalFunctionsCurrentDate_H_
