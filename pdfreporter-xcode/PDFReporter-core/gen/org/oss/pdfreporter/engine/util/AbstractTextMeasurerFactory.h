//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: pdfreporter-core/src/org/oss/pdfreporter/engine/util/AbstractTextMeasurerFactory.java
//
//  Created by kendra on 9/27/13.
//

#ifndef _OrgOssPdfreporterEngineUtilAbstractTextMeasurerFactory_H_
#define _OrgOssPdfreporterEngineUtilAbstractTextMeasurerFactory_H_

@protocol OrgOssPdfreporterEngineFillJRTextMeasurer;
@protocol OrgOssPdfreporterEngineJRCommonText;
@protocol OrgOssPdfreporterEngineJasperReportsContext;

#import "JreEmulation.h"
#include "org/oss/pdfreporter/engine/util/JRTextMeasurerFactory.h"

@interface OrgOssPdfreporterEngineUtilAbstractTextMeasurerFactory : NSObject < OrgOssPdfreporterEngineUtilJRTextMeasurerFactory > {
}

- (id<OrgOssPdfreporterEngineFillJRTextMeasurer>)createMeasurerWithOrgOssPdfreporterEngineJRCommonText:(id<OrgOssPdfreporterEngineJRCommonText>)text;
- (id<OrgOssPdfreporterEngineFillJRTextMeasurer>)createMeasurerWithOrgOssPdfreporterEngineJasperReportsContext:(id<OrgOssPdfreporterEngineJasperReportsContext>)param0
                                                                       withOrgOssPdfreporterEngineJRCommonText:(id<OrgOssPdfreporterEngineJRCommonText>)param1;
- (id)init;
@end

#endif // _OrgOssPdfreporterEngineUtilAbstractTextMeasurerFactory_H_
