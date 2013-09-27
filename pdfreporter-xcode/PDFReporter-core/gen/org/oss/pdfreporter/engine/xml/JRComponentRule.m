//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: pdfreporter-core/src/org/oss/pdfreporter/engine/xml/JRComponentRule.java
//
//  Created by kendra on 9/27/13.
//

#include "IOSClass.h"
#include "org/oss/pdfreporter/engine/JRException.h"
#include "org/oss/pdfreporter/engine/component/Component.h"
#include "org/oss/pdfreporter/engine/component/ComponentKey.h"
#include "org/oss/pdfreporter/engine/design/JRDesignComponentElement.h"
#include "org/oss/pdfreporter/engine/xml/JRComponentRule.h"
#include "org/oss/pdfreporter/engine/xml/JRXmlDigester.h"
#include "org/oss/pdfreporter/uses/org/apache/digester/AbstractRule.h"
#include "org/oss/pdfreporter/uses/org/apache/digester/IDigester.h"

@implementation OrgOssPdfreporterEngineXmlJRComponentRule

+ (OrgOssPdfreporterEngineXmlJRComponentRule *)newInstance OBJC_METHOD_FAMILY_NONE {
  return [[OrgOssPdfreporterEngineXmlJRComponentRule alloc] init];
}

- (void)endWithNSString:(NSString *)namespace_
           withNSString:(NSString *)name {
  id top = [((id<OrgOssPdfreporterUsesOrgApacheDigesterIDigester>) nil_chk([self getDigester])) peek];
  if (!([top conformsToProtocol: @protocol(OrgOssPdfreporterEngineComponentComponent)])) {
    @throw [[OrgOssPdfreporterEngineJRException alloc] initWithNSString:[NSString stringWithFormat:@"Object of type %@ is not a %@ instance", [[nil_chk(top) getClass] getName], [[IOSClass classWithProtocol:@protocol(OrgOssPdfreporterEngineComponentComponent)] getName]]];
  }
  id<OrgOssPdfreporterEngineComponentComponent> component = (id<OrgOssPdfreporterEngineComponentComponent>) top;
  OrgOssPdfreporterEngineDesignJRDesignComponentElement *componentElement = (OrgOssPdfreporterEngineDesignJRDesignComponentElement *) [((id<OrgOssPdfreporterUsesOrgApacheDigesterIDigester>) nil_chk([self getDigester])) peekWithInt:1];
  NSString *namespacePrefix = [((OrgOssPdfreporterEngineXmlJRXmlDigester *) [self getDigester]) getLastNamespacePrefix];
  OrgOssPdfreporterEngineComponentComponentKey *componentKey = [[OrgOssPdfreporterEngineComponentComponentKey alloc] initWithNSString:namespace_ withNSString:namespacePrefix withNSString:name];
  [((OrgOssPdfreporterEngineDesignJRDesignComponentElement *) nil_chk(componentElement)) setComponentKeyWithOrgOssPdfreporterEngineComponentComponentKey:componentKey];
  [((OrgOssPdfreporterEngineDesignJRDesignComponentElement *) nil_chk(componentElement)) setComponentWithOrgOssPdfreporterEngineComponentComponent:component];
}

- (id)init {
  return [super init];
}

@end
