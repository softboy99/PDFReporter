//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: pdfreporter-core/src/org/oss/pdfreporter/engine/query/StandardSingleQueryParameterTypesClauseFunctionBundle.java
//
//  Created by kendra on 9/27/13.
//

#include "IOSObjectArray.h"
#include "java/util/Arrays.h"
#include "java/util/Collection.h"
#include "java/util/Collections.h"
#include "java/util/HashMap.h"
#include "java/util/List.h"
#include "java/util/Map.h"
#include "java/util/Set.h"
#include "org/oss/pdfreporter/engine/query/ParameterTypesClauseFunction.h"
#include "org/oss/pdfreporter/engine/query/StandardSingleQueryParameterTypesClauseFunctionBundle.h"

@implementation OrgOssPdfreporterEngineQueryStandardSingleQueryParameterTypesClauseFunctionBundle

@synthesize queryLanguage = queryLanguage_;
@synthesize clauseFunctions = clauseFunctions_;

- (id)initWithNSString:(NSString *)queryLanguage {
  if ((self = [super init])) {
    self.queryLanguage = queryLanguage;
    self.clauseFunctions = [[JavaUtilHashMap alloc] init];
  }
  return self;
}

- (void)setFunctionsWithNSString:(NSString *)clauseId
withOrgOssPdfreporterEngineQueryParameterTypesClauseFunctionArray:(IOSObjectArray *)functions {
  (void) [((id<JavaUtilMap>) nil_chk(clauseFunctions_)) putWithId:clauseId withId:[JavaUtilArrays asListWithNSObjectArray:functions]];
}

- (void)setFunctionsWithNSString:(NSString *)clauseId
withOrgOssPdfreporterEngineQueryParameterTypesClauseFunction:(id<OrgOssPdfreporterEngineQueryParameterTypesClauseFunction>)function {
  (void) [((id<JavaUtilMap>) nil_chk(clauseFunctions_)) putWithId:clauseId withId:[JavaUtilCollections singletonWithId:function]];
}

- (id<JavaUtilCollection>)getTypeFunctionsWithNSString:(NSString *)queryLanguage
                                          withNSString:(NSString *)clauseId {
  if (![((NSString *) nil_chk(self.queryLanguage)) isEqual:queryLanguage]) {
    return nil;
  }
  return [((id<JavaUtilMap>) nil_chk(clauseFunctions_)) getWithId:clauseId];
}

- (void)copyAllPropertiesTo:(id)copy {
  [super copyAllPropertiesTo:copy];
  OrgOssPdfreporterEngineQueryStandardSingleQueryParameterTypesClauseFunctionBundle *typedCopy = (OrgOssPdfreporterEngineQueryStandardSingleQueryParameterTypesClauseFunctionBundle *) copy;
  typedCopy.queryLanguage = queryLanguage_;
  typedCopy.clauseFunctions = clauseFunctions_;
}

@end
