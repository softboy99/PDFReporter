//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: pdfreporter-extensions/src/org/oss/pdfreporter/uses/org/apache/digester/IObjectCreationFactory.java
//
//  Created by kendra on 9/27/13.
//

#ifndef _OrgOssPdfreporterUsesOrgApacheDigesterIObjectCreationFactory_H_
#define _OrgOssPdfreporterUsesOrgApacheDigesterIObjectCreationFactory_H_

@protocol OrgOssPdfreporterUsesOrgApacheDigesterIDigester;
@protocol OrgOssPdfreporterXmlParsersIAttributes;

#import "JreEmulation.h"

@protocol OrgOssPdfreporterUsesOrgApacheDigesterIObjectCreationFactory < NSObject, JavaObject >
- (id)createObjectWithOrgOssPdfreporterXmlParsersIAttributes:(id<OrgOssPdfreporterXmlParsersIAttributes>)attributes;
- (id<OrgOssPdfreporterUsesOrgApacheDigesterIDigester>)getDigester;
- (void)setDigesterWithOrgOssPdfreporterUsesOrgApacheDigesterIDigester:(id<OrgOssPdfreporterUsesOrgApacheDigesterIDigester>)digester;
@end

#endif // _OrgOssPdfreporterUsesOrgApacheDigesterIObjectCreationFactory_H_
