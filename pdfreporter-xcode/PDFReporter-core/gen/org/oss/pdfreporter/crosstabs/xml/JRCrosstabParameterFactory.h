//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: pdfreporter-core/src/org/oss/pdfreporter/crosstabs/xml/JRCrosstabParameterFactory.java
//
//  Created by kendra on 9/27/13.
//

#ifndef _OrgOssPdfreporterCrosstabsXmlJRCrosstabParameterFactory_H_
#define _OrgOssPdfreporterCrosstabsXmlJRCrosstabParameterFactory_H_

@protocol OrgOssPdfreporterXmlParsersIAttributes;

#import "JreEmulation.h"
#include "org/oss/pdfreporter/engine/xml/JRParameterFactory.h"

@interface OrgOssPdfreporterCrosstabsXmlJRCrosstabParameterFactory : OrgOssPdfreporterEngineXmlJRParameterFactory {
}

+ (NSString *)ELEMENT_crosstabParameter;
+ (NSString *)ELEMENT_parameterValueExpression;
+ (NSString *)ATTRIBUTE_name;
+ (NSString *)ATTRIBUTE_class;
- (id)createObjectWithOrgOssPdfreporterXmlParsersIAttributes:(id<OrgOssPdfreporterXmlParsersIAttributes>)atts;
- (id)init;
@end

#endif // _OrgOssPdfreporterCrosstabsXmlJRCrosstabParameterFactory_H_
