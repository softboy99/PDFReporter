//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: pdfreporter-core/src/org/oss/pdfreporter/engine/xml/UuidPropertyRule.java
//
//  Created by kendra on 9/27/13.
//

#include "org/oss/pdfreporter/engine/xml/UuidPropertyRule.h"
#include "org/oss/pdfreporter/uses/java/util/UUID.h"

@implementation OrgOssPdfreporterEngineXmlUuidPropertyRule

- (id)initWithNSString:(NSString *)attributeName
          withNSString:(NSString *)propertyName {
  return [super initWithNSString:attributeName withNSString:propertyName];
}

- (id)initWithNSString:(NSString *)attributeName {
  return [super initWithNSString:attributeName];
}

- (id)toPropertyValueWithNSString:(NSString *)attributeValue {
  return [OrgOssPdfreporterUsesJavaUtilUUID fromStringWithNSString:attributeValue];
}

@end
