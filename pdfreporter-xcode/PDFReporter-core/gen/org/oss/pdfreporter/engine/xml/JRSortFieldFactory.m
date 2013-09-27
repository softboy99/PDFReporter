//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: pdfreporter-core/src/org/oss/pdfreporter/engine/xml/JRSortFieldFactory.java
//
//  Created by kendra on 9/27/13.
//

#include "org/oss/pdfreporter/engine/design/JRDesignSortField.h"
#include "org/oss/pdfreporter/engine/type/SortFieldTypeEnum.h"
#include "org/oss/pdfreporter/engine/type/SortOrderEnum.h"
#include "org/oss/pdfreporter/engine/xml/JRSortFieldFactory.h"
#include "org/oss/pdfreporter/engine/xml/JRXmlConstants.h"
#include "org/oss/pdfreporter/xml/parsers/IAttributes.h"

@implementation OrgOssPdfreporterEngineXmlJRSortFieldFactory

- (id)createObjectWithOrgOssPdfreporterXmlParsersIAttributes:(id<OrgOssPdfreporterXmlParsersIAttributes>)atts {
  OrgOssPdfreporterEngineDesignJRDesignSortField *sortField = [[OrgOssPdfreporterEngineDesignJRDesignSortField alloc] init];
  [((OrgOssPdfreporterEngineDesignJRDesignSortField *) nil_chk(sortField)) setNameWithNSString:[((id<OrgOssPdfreporterXmlParsersIAttributes>) nil_chk(atts)) getValueWithNSString:[OrgOssPdfreporterEngineXmlJRXmlConstants ATTRIBUTE_name]]];
  OrgOssPdfreporterEngineTypeSortOrderEnumEnum *order = [OrgOssPdfreporterEngineTypeSortOrderEnumEnum getByNameWithNSString:[((id<OrgOssPdfreporterXmlParsersIAttributes>) nil_chk(atts)) getValueWithNSString:[OrgOssPdfreporterEngineXmlJRXmlConstants ATTRIBUTE_order]]];
  if (order != nil) {
    [((OrgOssPdfreporterEngineDesignJRDesignSortField *) nil_chk(sortField)) setOrderWithOrgOssPdfreporterEngineTypeSortOrderEnumEnum:order];
  }
  OrgOssPdfreporterEngineTypeSortFieldTypeEnumEnum *type = [OrgOssPdfreporterEngineTypeSortFieldTypeEnumEnum getByNameWithNSString:[((id<OrgOssPdfreporterXmlParsersIAttributes>) nil_chk(atts)) getValueWithNSString:[OrgOssPdfreporterEngineXmlJRXmlConstants ATTRIBUTE_type]]];
  if (type != nil) {
    [((OrgOssPdfreporterEngineDesignJRDesignSortField *) nil_chk(sortField)) setTypeWithOrgOssPdfreporterEngineTypeSortFieldTypeEnumEnum:type];
  }
  return sortField;
}

- (id)init {
  return [super init];
}

@end
