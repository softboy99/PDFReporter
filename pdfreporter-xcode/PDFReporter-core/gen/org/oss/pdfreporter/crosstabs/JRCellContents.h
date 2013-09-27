//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: pdfreporter-core/src/org/oss/pdfreporter/crosstabs/JRCellContents.java
//
//  Created by kendra on 9/27/13.
//

#ifndef _OrgOssPdfreporterCrosstabsJRCellContents_H_
#define _OrgOssPdfreporterCrosstabsJRCellContents_H_

@class OrgOssPdfreporterEngineTypeModeEnumEnum;
@protocol OrgOssPdfreporterGeometryIColor;

#import "JreEmulation.h"
#include "org/oss/pdfreporter/engine/JRBoxContainer.h"
#include "org/oss/pdfreporter/engine/JRElementGroup.h"
#include "org/oss/pdfreporter/engine/JRPropertiesHolder.h"
#include "org/oss/pdfreporter/engine/JRStyleContainer.h"

#define OrgOssPdfreporterCrosstabsJRCellContents_NOT_CALCULATED ((int) 0x80000000)

@protocol OrgOssPdfreporterCrosstabsJRCellContents < OrgOssPdfreporterEngineJRElementGroup, OrgOssPdfreporterEngineJRStyleContainer, OrgOssPdfreporterEngineJRBoxContainer, OrgOssPdfreporterEngineJRPropertiesHolder, NSObject, JavaObject >
- (id<OrgOssPdfreporterGeometryIColor>)getBackcolor;
- (int)getWidth;
- (int)getHeight;
- (OrgOssPdfreporterEngineTypeModeEnumEnum *)getModeValue;
- (id)copyWithZone:(NSZone *)zone;
@end

@interface OrgOssPdfreporterCrosstabsJRCellContents : NSObject {
}
+ (int)NOT_CALCULATED;
+ (NSString *)PROPERTIES_PREFIX;
+ (NSString *)PROPERTY_TYPE;
+ (NSString *)PROPERTY_ROW_SPAN;
+ (NSString *)PROPERTY_COLUMN_SPAN;
+ (NSString *)TYPE_CROSSTAB_HEADER;
+ (NSString *)TYPE_ROW_HEADER;
+ (NSString *)TYPE_COLUMN_HEADER;
+ (NSString *)TYPE_DATA;
+ (NSString *)TYPE_NO_DATA_CELL;
@end

#endif // _OrgOssPdfreporterCrosstabsJRCellContents_H_
