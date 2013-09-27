//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: pdfreporter-core/src/org/oss/pdfreporter/engine/JRVirtualizationHelper.java
//
//  Created by kendra on 9/27/13.
//

#include "org/oss/pdfreporter/engine/JRVirtualizationHelper.h"
#include "org/oss/pdfreporter/engine/JRVirtualizer.h"
#include "org/oss/pdfreporter/engine/JasperReportsContext.h"

@implementation OrgOssPdfreporterEngineJRVirtualizationHelper

static id<OrgOssPdfreporterEngineJRVirtualizer> OrgOssPdfreporterEngineJRVirtualizationHelper_virtualizer_;
static id<OrgOssPdfreporterEngineJasperReportsContext> OrgOssPdfreporterEngineJRVirtualizationHelper_jasperReportsContext_;

+ (id<OrgOssPdfreporterEngineJRVirtualizer>)virtualizer {
  return OrgOssPdfreporterEngineJRVirtualizationHelper_virtualizer_;
}

+ (void)setVirtualizer:(id<OrgOssPdfreporterEngineJRVirtualizer>)virtualizer {
  OrgOssPdfreporterEngineJRVirtualizationHelper_virtualizer_ = virtualizer;
}

+ (id<OrgOssPdfreporterEngineJasperReportsContext>)jasperReportsContext {
  return OrgOssPdfreporterEngineJRVirtualizationHelper_jasperReportsContext_;
}

+ (void)setJasperReportsContext:(id<OrgOssPdfreporterEngineJasperReportsContext>)jasperReportsContext {
  OrgOssPdfreporterEngineJRVirtualizationHelper_jasperReportsContext_ = jasperReportsContext;
}

+ (void)setThreadVirtualizerWithOrgOssPdfreporterEngineJRVirtualizer:(id<OrgOssPdfreporterEngineJRVirtualizer>)virtualizer {
  OrgOssPdfreporterEngineJRVirtualizationHelper_virtualizer_ = virtualizer;
}

+ (void)clearThreadVirtualizer {
  OrgOssPdfreporterEngineJRVirtualizationHelper_virtualizer_ = nil;
}

+ (id<OrgOssPdfreporterEngineJRVirtualizer>)getThreadVirtualizer {
  return OrgOssPdfreporterEngineJRVirtualizationHelper_virtualizer_;
}

+ (void)setThreadJasperReportsContextWithOrgOssPdfreporterEngineJasperReportsContext:(id<OrgOssPdfreporterEngineJasperReportsContext>)jasperReportsContext {
  OrgOssPdfreporterEngineJRVirtualizationHelper_jasperReportsContext_ = jasperReportsContext;
}

+ (void)clearThreadJasperReportsContext {
  OrgOssPdfreporterEngineJRVirtualizationHelper_jasperReportsContext_ = nil;
}

+ (id<OrgOssPdfreporterEngineJasperReportsContext>)getThreadJasperReportsContext {
  return OrgOssPdfreporterEngineJRVirtualizationHelper_jasperReportsContext_;
}

- (id)init {
  return [super init];
}

+ (void)initialize {
  if (self == [OrgOssPdfreporterEngineJRVirtualizationHelper class]) {
    OrgOssPdfreporterEngineJRVirtualizationHelper_virtualizer_ = nil;
    OrgOssPdfreporterEngineJRVirtualizationHelper_jasperReportsContext_ = nil;
  }
}

@end
