//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: pdfreporter-core/src/org/oss/pdfreporter/engine/xml/JRInitialValueExpressionFactory.java
//
//  Created by kendra on 9/27/13.
//

#include "org/oss/pdfreporter/engine/design/JRDesignExpression.h"
#include "org/oss/pdfreporter/engine/design/JRDesignVariable.h"
#include "org/oss/pdfreporter/engine/xml/JRInitialValueExpressionFactory.h"
#include "org/oss/pdfreporter/uses/org/apache/digester/IDigester.h"
#include "org/oss/pdfreporter/xml/parsers/IAttributes.h"

@implementation OrgOssPdfreporterEngineXmlJRInitialValueExpressionFactory

- (id)createObjectWithOrgOssPdfreporterXmlParsersIAttributes:(id<OrgOssPdfreporterXmlParsersIAttributes>)atts {
  OrgOssPdfreporterEngineDesignJRDesignVariable *variable = (OrgOssPdfreporterEngineDesignJRDesignVariable *) [((id<OrgOssPdfreporterUsesOrgApacheDigesterIDigester>) nil_chk(digester_)) peek];
  OrgOssPdfreporterEngineDesignJRDesignExpression *expression = [[OrgOssPdfreporterEngineDesignJRDesignExpression alloc] init];
  [((OrgOssPdfreporterEngineDesignJRDesignExpression *) nil_chk(expression)) setValueClassNameWithNSString:[((OrgOssPdfreporterEngineDesignJRDesignVariable *) nil_chk(variable)) getValueClassName]];
  return expression;
}

- (id)init {
  return [super init];
}

@end
