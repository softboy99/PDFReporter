//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: pdfreporter-core/src/org/oss/pdfreporter/crosstabs/design/JRDesignCrosstabDataset.java
//
//  Created by kendra on 9/27/13.
//

#ifndef _OrgOssPdfreporterCrosstabsDesignJRDesignCrosstabDataset_H_
#define _OrgOssPdfreporterCrosstabsDesignJRDesignCrosstabDataset_H_

@class OrgOssPdfreporterEngineJRExpressionCollector;

#import "JreEmulation.h"
#include "org/oss/pdfreporter/crosstabs/JRCrosstabDataset.h"
#include "org/oss/pdfreporter/engine/design/JRDesignElementDataset.h"

#define OrgOssPdfreporterCrosstabsDesignJRDesignCrosstabDataset_serialVersionUID 10200

@interface OrgOssPdfreporterCrosstabsDesignJRDesignCrosstabDataset : OrgOssPdfreporterEngineDesignJRDesignElementDataset < OrgOssPdfreporterCrosstabsJRCrosstabDataset > {
 @public
  BOOL dataPreSorted_;
}

@property (nonatomic, assign) BOOL dataPreSorted;

+ (NSString *)PROPERTY_DATA_PRE_SORTED;
- (id)init;
- (void)collectExpressionsWithOrgOssPdfreporterEngineJRExpressionCollector:(OrgOssPdfreporterEngineJRExpressionCollector *)collector;
- (BOOL)isDataPreSorted;
- (void)setDataPreSortedWithBOOL:(BOOL)dataPreSorted;
@end

#endif // _OrgOssPdfreporterCrosstabsDesignJRDesignCrosstabDataset_H_
