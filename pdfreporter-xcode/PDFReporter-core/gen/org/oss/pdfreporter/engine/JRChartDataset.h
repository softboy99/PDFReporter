//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: pdfreporter-core/src/org/oss/pdfreporter/engine/JRChartDataset.java
//
//  Created by kendra on 9/27/13.
//

#ifndef _OrgOssPdfreporterEngineJRChartDataset_H_
#define _OrgOssPdfreporterEngineJRChartDataset_H_

@class OrgOssPdfreporterEngineDesignJRVerifier;

#import "JreEmulation.h"
#include "org/oss/pdfreporter/engine/JRElementDataset.h"

#define OrgOssPdfreporterEngineJRChartDataset_CATEGORY_DATASET 2
#define OrgOssPdfreporterEngineJRChartDataset_GANTT_DATASET 9
#define OrgOssPdfreporterEngineJRChartDataset_HIGHLOW_DATASET 7
#define OrgOssPdfreporterEngineJRChartDataset_PIE_DATASET 1
#define OrgOssPdfreporterEngineJRChartDataset_TIMEPERIOD_DATASET 5
#define OrgOssPdfreporterEngineJRChartDataset_TIMESERIES_DATASET 6
#define OrgOssPdfreporterEngineJRChartDataset_VALUE_DATASET 8
#define OrgOssPdfreporterEngineJRChartDataset_XYZ_DATASET 4
#define OrgOssPdfreporterEngineJRChartDataset_XY_DATASET 3

@protocol OrgOssPdfreporterEngineJRChartDataset < OrgOssPdfreporterEngineJRElementDataset, NSObject, JavaObject >
- (char)getDatasetType;
- (void)validateWithOrgOssPdfreporterEngineDesignJRVerifier:(OrgOssPdfreporterEngineDesignJRVerifier *)verifier;
- (id)copyWithZone:(NSZone *)zone;
@end

@interface OrgOssPdfreporterEngineJRChartDataset : NSObject {
}
+ (char)PIE_DATASET;
+ (char)CATEGORY_DATASET;
+ (char)XY_DATASET;
+ (char)XYZ_DATASET;
+ (char)TIMEPERIOD_DATASET;
+ (char)TIMESERIES_DATASET;
+ (char)HIGHLOW_DATASET;
+ (char)VALUE_DATASET;
+ (char)GANTT_DATASET;
@end

#endif // _OrgOssPdfreporterEngineJRChartDataset_H_
