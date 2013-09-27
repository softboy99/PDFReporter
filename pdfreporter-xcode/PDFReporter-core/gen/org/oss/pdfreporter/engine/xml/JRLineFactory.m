//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: pdfreporter-core/src/org/oss/pdfreporter/engine/xml/JRLineFactory.java
//
//  Created by kendra on 9/27/13.
//

#include "org/oss/pdfreporter/engine/design/JRDesignLine.h"
#include "org/oss/pdfreporter/engine/design/JasperDesign.h"
#include "org/oss/pdfreporter/engine/type/LineDirectionEnum.h"
#include "org/oss/pdfreporter/engine/xml/JRLineFactory.h"
#include "org/oss/pdfreporter/engine/xml/JRXmlConstants.h"
#include "org/oss/pdfreporter/uses/org/apache/digester/IDigester.h"
#include "org/oss/pdfreporter/xml/parsers/IAttributes.h"

@implementation OrgOssPdfreporterEngineXmlJRLineFactory

- (id)createObjectWithOrgOssPdfreporterXmlParsersIAttributes:(id<OrgOssPdfreporterXmlParsersIAttributes>)atts {
  OrgOssPdfreporterEngineDesignJasperDesign *jasperDesign = (OrgOssPdfreporterEngineDesignJasperDesign *) [((id<OrgOssPdfreporterUsesOrgApacheDigesterIDigester>) nil_chk(digester_)) peekWithInt:[((id<OrgOssPdfreporterUsesOrgApacheDigesterIDigester>) nil_chk(digester_)) getCount] - 2];
  OrgOssPdfreporterEngineDesignJRDesignLine *line = [[OrgOssPdfreporterEngineDesignJRDesignLine alloc] initWithOrgOssPdfreporterEngineJRDefaultStyleProvider:jasperDesign];
  OrgOssPdfreporterEngineTypeLineDirectionEnumEnum *direction = [OrgOssPdfreporterEngineTypeLineDirectionEnumEnum getByNameWithNSString:[((id<OrgOssPdfreporterXmlParsersIAttributes>) nil_chk(atts)) getValueWithNSString:[OrgOssPdfreporterEngineXmlJRXmlConstants ATTRIBUTE_direction]]];
  if (direction != nil) {
    [((OrgOssPdfreporterEngineDesignJRDesignLine *) nil_chk(line)) setDirectionWithOrgOssPdfreporterEngineTypeLineDirectionEnumEnum:direction];
  }
  return line;
}

- (id)init {
  return [super init];
}

@end
