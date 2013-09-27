//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: pdfreporter-core/src/org/oss/pdfreporter/engine/JRVirtualizationHelper.java
//
//  Created by kendra on 9/27/13.
//

#ifndef _OrgOssPdfreporterEngineJRVirtualizationHelper_H_
#define _OrgOssPdfreporterEngineJRVirtualizationHelper_H_

@protocol OrgOssPdfreporterEngineJRVirtualizer;
@protocol OrgOssPdfreporterEngineJasperReportsContext;

#import "JreEmulation.h"

@interface OrgOssPdfreporterEngineJRVirtualizationHelper : NSObject {
}

+ (id<OrgOssPdfreporterEngineJRVirtualizer>)virtualizer;
+ (void)setVirtualizer:(id<OrgOssPdfreporterEngineJRVirtualizer>)virtualizer;
+ (id<OrgOssPdfreporterEngineJasperReportsContext>)jasperReportsContext;
+ (void)setJasperReportsContext:(id<OrgOssPdfreporterEngineJasperReportsContext>)jasperReportsContext;
+ (void)setThreadVirtualizerWithOrgOssPdfreporterEngineJRVirtualizer:(id<OrgOssPdfreporterEngineJRVirtualizer>)virtualizer;
+ (void)clearThreadVirtualizer;
+ (id<OrgOssPdfreporterEngineJRVirtualizer>)getThreadVirtualizer;
+ (void)setThreadJasperReportsContextWithOrgOssPdfreporterEngineJasperReportsContext:(id<OrgOssPdfreporterEngineJasperReportsContext>)jasperReportsContext;
+ (void)clearThreadJasperReportsContext;
+ (id<OrgOssPdfreporterEngineJasperReportsContext>)getThreadJasperReportsContext;
- (id)init;
@end

#endif // _OrgOssPdfreporterEngineJRVirtualizationHelper_H_
