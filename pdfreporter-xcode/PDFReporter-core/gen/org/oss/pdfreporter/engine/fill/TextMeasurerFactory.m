//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: pdfreporter-core/src/org/oss/pdfreporter/engine/fill/TextMeasurerFactory.java
//
//  Created by kendra on 9/27/13.
//

#include "org/oss/pdfreporter/engine/JRCommonText.h"
#include "org/oss/pdfreporter/engine/JasperReportsContext.h"
#include "org/oss/pdfreporter/engine/fill/JRTextMeasurer.h"
#include "org/oss/pdfreporter/engine/fill/TextMeasurer.h"
#include "org/oss/pdfreporter/engine/fill/TextMeasurerFactory.h"

@implementation OrgOssPdfreporterEngineFillTextMeasurerFactory

- (id<OrgOssPdfreporterEngineFillJRTextMeasurer>)createMeasurerWithOrgOssPdfreporterEngineJasperReportsContext:(id<OrgOssPdfreporterEngineJasperReportsContext>)jasperReportsContext
                                                                       withOrgOssPdfreporterEngineJRCommonText:(id<OrgOssPdfreporterEngineJRCommonText>)text {
  return [[OrgOssPdfreporterEngineFillTextMeasurer alloc] initWithOrgOssPdfreporterEngineJasperReportsContext:jasperReportsContext withOrgOssPdfreporterEngineJRCommonText:text];
}

- (id)init {
  return [super init];
}

@end
