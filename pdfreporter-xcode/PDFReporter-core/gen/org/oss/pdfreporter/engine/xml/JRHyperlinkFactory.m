//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: pdfreporter-core/src/org/oss/pdfreporter/engine/xml/JRHyperlinkFactory.java
//
//  Created by kendra on 9/27/13.
//

#include "org/oss/pdfreporter/engine/design/JRDesignHyperlink.h"
#include "org/oss/pdfreporter/engine/xml/JRHyperlinkFactory.h"
#include "org/oss/pdfreporter/engine/xml/JRXmlConstants.h"
#include "org/oss/pdfreporter/xml/parsers/IAttributes.h"

@implementation OrgOssPdfreporterEngineXmlJRHyperlinkFactory

- (id)createObjectWithOrgOssPdfreporterXmlParsersIAttributes:(id<OrgOssPdfreporterXmlParsersIAttributes>)atts {
  OrgOssPdfreporterEngineDesignJRDesignHyperlink *link = [[OrgOssPdfreporterEngineDesignJRDesignHyperlink alloc] init];
  [((OrgOssPdfreporterEngineDesignJRDesignHyperlink *) nil_chk(link)) setLinkTypeWithNSString:[((id<OrgOssPdfreporterXmlParsersIAttributes>) nil_chk(atts)) getValueWithNSString:[OrgOssPdfreporterEngineXmlJRXmlConstants ATTRIBUTE_hyperlinkType]]];
  [((OrgOssPdfreporterEngineDesignJRDesignHyperlink *) nil_chk(link)) setLinkTargetWithNSString:[((id<OrgOssPdfreporterXmlParsersIAttributes>) nil_chk(atts)) getValueWithNSString:[OrgOssPdfreporterEngineXmlJRXmlConstants ATTRIBUTE_hyperlinkTarget]]];
  return link;
}

- (id)init {
  return [super init];
}

@end
