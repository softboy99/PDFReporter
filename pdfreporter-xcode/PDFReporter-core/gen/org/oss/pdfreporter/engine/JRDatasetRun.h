//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: pdfreporter-core/src/org/oss/pdfreporter/engine/JRDatasetRun.java
//
//  Created by kendra on 9/27/13.
//

#ifndef _OrgOssPdfreporterEngineJRDatasetRun_H_
#define _OrgOssPdfreporterEngineJRDatasetRun_H_

@class IOSObjectArray;
@protocol OrgOssPdfreporterEngineJRExpression;

#import "JreEmulation.h"
#include "org/oss/pdfreporter/engine/JRCloneable.h"
#include "org/oss/pdfreporter/engine/JRIdentifiable.h"
#include "org/oss/pdfreporter/engine/JRPropertiesHolder.h"

@protocol OrgOssPdfreporterEngineJRDatasetRun < OrgOssPdfreporterEngineJRCloneable, OrgOssPdfreporterEngineJRIdentifiable, OrgOssPdfreporterEngineJRPropertiesHolder, NSObject, JavaObject >
- (NSString *)getDatasetName;
- (id<OrgOssPdfreporterEngineJRExpression>)getParametersMapExpression;
- (IOSObjectArray *)getParameters;
- (id<OrgOssPdfreporterEngineJRExpression>)getConnectionExpression;
- (id<OrgOssPdfreporterEngineJRExpression>)getDataSourceExpression;
- (id)copyWithZone:(NSZone *)zone;
@end

#endif // _OrgOssPdfreporterEngineJRDatasetRun_H_
