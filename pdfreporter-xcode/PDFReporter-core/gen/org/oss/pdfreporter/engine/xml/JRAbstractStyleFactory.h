//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: pdfreporter-core/src/org/oss/pdfreporter/engine/xml/JRAbstractStyleFactory.java
//
//  Created by kendra on 9/27/13.
//

#ifndef _OrgOssPdfreporterEngineXmlJRAbstractStyleFactory_H_
#define _OrgOssPdfreporterEngineXmlJRAbstractStyleFactory_H_

@class OrgOssPdfreporterEngineDesignJRDesignStyle;
@protocol OrgOssPdfreporterEngineJRStyle;
@protocol OrgOssPdfreporterXmlParsersIAttributes;

#import "JreEmulation.h"
#include "org/oss/pdfreporter/engine/xml/JRBaseFactory.h"

@interface OrgOssPdfreporterEngineXmlJRAbstractStyleFactory : OrgOssPdfreporterEngineXmlJRBaseFactory {
}

- (id)createObjectWithOrgOssPdfreporterXmlParsersIAttributes:(id<OrgOssPdfreporterXmlParsersIAttributes>)atts;
- (void)setCommonStyleWithOrgOssPdfreporterEngineJRStyle:(id<OrgOssPdfreporterEngineJRStyle>)style
              withOrgOssPdfreporterXmlParsersIAttributes:(id<OrgOssPdfreporterXmlParsersIAttributes>)atts;
- (void)setParentStyleWithOrgOssPdfreporterEngineDesignJRDesignStyle:(OrgOssPdfreporterEngineDesignJRDesignStyle *)currentStyle
                                                        withNSString:(NSString *)parentStyleName;
- (id)init;
@end

#endif // _OrgOssPdfreporterEngineXmlJRAbstractStyleFactory_H_
