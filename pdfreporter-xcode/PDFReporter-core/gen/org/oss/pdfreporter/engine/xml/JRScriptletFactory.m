//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: pdfreporter-core/src/org/oss/pdfreporter/engine/xml/JRScriptletFactory.java
//
//  Created by kendra on 9/27/13.
//

#include "org/oss/pdfreporter/engine/design/JRDesignScriptlet.h"
#include "org/oss/pdfreporter/engine/xml/JRScriptletFactory.h"
#include "org/oss/pdfreporter/engine/xml/JRXmlConstants.h"
#include "org/oss/pdfreporter/xml/parsers/IAttributes.h"

@implementation OrgOssPdfreporterEngineXmlJRScriptletFactory

- (id)createObjectWithOrgOssPdfreporterXmlParsersIAttributes:(id<OrgOssPdfreporterXmlParsersIAttributes>)atts {
  OrgOssPdfreporterEngineDesignJRDesignScriptlet *scriptlet = [[OrgOssPdfreporterEngineDesignJRDesignScriptlet alloc] init];
  [self setScriptletAttributesWithOrgOssPdfreporterEngineDesignJRDesignScriptlet:scriptlet withOrgOssPdfreporterXmlParsersIAttributes:atts];
  return scriptlet;
}

- (void)setScriptletAttributesWithOrgOssPdfreporterEngineDesignJRDesignScriptlet:(OrgOssPdfreporterEngineDesignJRDesignScriptlet *)scriptlet
                                      withOrgOssPdfreporterXmlParsersIAttributes:(id<OrgOssPdfreporterXmlParsersIAttributes>)atts {
  [((OrgOssPdfreporterEngineDesignJRDesignScriptlet *) nil_chk(scriptlet)) setNameWithNSString:[((id<OrgOssPdfreporterXmlParsersIAttributes>) nil_chk(atts)) getValueWithNSString:[OrgOssPdfreporterEngineXmlJRXmlConstants ATTRIBUTE_name]]];
  if ([((id<OrgOssPdfreporterXmlParsersIAttributes>) nil_chk(atts)) getValueWithNSString:[OrgOssPdfreporterEngineXmlJRXmlConstants ATTRIBUTE_class]] != nil) {
    [((OrgOssPdfreporterEngineDesignJRDesignScriptlet *) nil_chk(scriptlet)) setValueClassNameWithNSString:[((id<OrgOssPdfreporterXmlParsersIAttributes>) nil_chk(atts)) getValueWithNSString:[OrgOssPdfreporterEngineXmlJRXmlConstants ATTRIBUTE_class]]];
  }
}

- (id)init {
  return [super init];
}

@end
