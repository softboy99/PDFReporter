//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: pdfreporter-core/src/org/oss/pdfreporter/engine/JRHyperlink.java
//
//  Created by kendra on 9/27/13.
//

#ifndef _OrgOssPdfreporterEngineJRHyperlink_H_
#define _OrgOssPdfreporterEngineJRHyperlink_H_

@class IOSObjectArray;
@class OrgOssPdfreporterEngineTypeHyperlinkTypeEnumEnum;
@protocol OrgOssPdfreporterEngineJRExpression;

#import "JreEmulation.h"
#include "org/oss/pdfreporter/engine/JRCloneable.h"

@protocol OrgOssPdfreporterEngineJRHyperlink < OrgOssPdfreporterEngineJRCloneable, NSObject, JavaObject >
- (char)getHyperlinkType;
- (OrgOssPdfreporterEngineTypeHyperlinkTypeEnumEnum *)getHyperlinkTypeValue;
- (char)getHyperlinkTarget;
- (id<OrgOssPdfreporterEngineJRExpression>)getHyperlinkReferenceExpression;
- (id<OrgOssPdfreporterEngineJRExpression>)getHyperlinkAnchorExpression;
- (id<OrgOssPdfreporterEngineJRExpression>)getHyperlinkPageExpression;
- (NSString *)getLinkType;
- (NSString *)getLinkTarget;
- (IOSObjectArray *)getHyperlinkParameters;
- (id<OrgOssPdfreporterEngineJRExpression>)getHyperlinkTooltipExpression;
- (id)copyWithZone:(NSZone *)zone;
@end

#endif // _OrgOssPdfreporterEngineJRHyperlink_H_
