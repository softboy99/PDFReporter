//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: pdfreporter-core/src/org/oss/pdfreporter/engine/fill/JRFillGroup.java
//
//  Created by kendra on 9/27/13.
//

#ifndef _OrgOssPdfreporterEngineFillJRFillGroup_H_
#define _OrgOssPdfreporterEngineFillJRFillGroup_H_

@class OrgOssPdfreporterEngineFillJRFillObjectFactory;
@class OrgOssPdfreporterEngineFillJRFillSection;
@class OrgOssPdfreporterEngineTypeFooterPositionEnumEnum;
@protocol OrgOssPdfreporterEngineJRExpression;
@protocol OrgOssPdfreporterEngineJRSection;
@protocol OrgOssPdfreporterEngineJRVariable;

#import "JreEmulation.h"
#include "org/oss/pdfreporter/engine/JRGroup.h"

@interface OrgOssPdfreporterEngineFillJRFillGroup : NSObject < OrgOssPdfreporterEngineJRGroup > {
 @public
  id<OrgOssPdfreporterEngineJRGroup> parent_;
  OrgOssPdfreporterEngineFillJRFillSection *groupHeaderSection_;
  OrgOssPdfreporterEngineFillJRFillSection *groupFooterSection_;
  id<OrgOssPdfreporterEngineJRVariable> countVariable_;
  BOOL startNewColumn_;
  BOOL startNewPage_;
  BOOL resetPageNumber_;
  BOOL hasChanged__;
  BOOL isTopLevelChange__;
  BOOL isHeaderPrinted__;
  BOOL isFooterPrinted__;
}

@property (nonatomic, strong) id<OrgOssPdfreporterEngineJRGroup> parent;
@property (nonatomic, strong) OrgOssPdfreporterEngineFillJRFillSection *groupHeaderSection;
@property (nonatomic, strong) OrgOssPdfreporterEngineFillJRFillSection *groupFooterSection;
@property (nonatomic, strong) id<OrgOssPdfreporterEngineJRVariable> countVariable;
@property (nonatomic, assign) BOOL startNewColumn;
@property (nonatomic, assign) BOOL startNewPage;
@property (nonatomic, assign) BOOL resetPageNumber;
@property (nonatomic, assign) BOOL hasChanged_;
@property (nonatomic, assign) BOOL isTopLevelChange_;
@property (nonatomic, assign) BOOL isHeaderPrinted_;
@property (nonatomic, assign) BOOL isFooterPrinted_;

- (id)initWithOrgOssPdfreporterEngineJRGroup:(id<OrgOssPdfreporterEngineJRGroup>)group
withOrgOssPdfreporterEngineFillJRFillObjectFactory:(OrgOssPdfreporterEngineFillJRFillObjectFactory *)factory;
- (NSString *)getName;
- (id<OrgOssPdfreporterEngineJRExpression>)getExpression;
- (BOOL)isStartNewColumn;
- (void)setStartNewColumnWithBOOL:(BOOL)isStart;
- (BOOL)isStartNewPage;
- (void)setStartNewPageWithBOOL:(BOOL)isStart;
- (BOOL)isResetPageNumber;
- (void)setResetPageNumberWithBOOL:(BOOL)isReset;
- (BOOL)isReprintHeaderOnEachPage;
- (void)setReprintHeaderOnEachPageWithBOOL:(BOOL)isReprint;
- (int)getMinHeightToStartNewPage;
- (void)setMinHeightToStartNewPageWithInt:(int)minHeight;
- (OrgOssPdfreporterEngineTypeFooterPositionEnumEnum *)getFooterPositionValue;
- (void)setFooterPositionWithOrgOssPdfreporterEngineTypeFooterPositionEnumEnum:(OrgOssPdfreporterEngineTypeFooterPositionEnumEnum *)footerPosition;
- (BOOL)isKeepTogether;
- (void)setKeepTogetherWithBOOL:(BOOL)keepTogether;
- (id<OrgOssPdfreporterEngineJRSection>)getGroupHeaderSection;
- (id<OrgOssPdfreporterEngineJRSection>)getGroupFooterSection;
- (id<OrgOssPdfreporterEngineJRVariable>)getCountVariable;
- (BOOL)hasChanged;
- (void)setHasChangedWithBOOL:(BOOL)hasChanged;
- (BOOL)isTopLevelChange;
- (void)setTopLevelChangeWithBOOL:(BOOL)isTopLevelChange;
- (BOOL)isHeaderPrinted;
- (void)setHeaderPrintedWithBOOL:(BOOL)isHeaderPrinted;
- (BOOL)isFooterPrinted;
- (void)setFooterPrintedWithBOOL:(BOOL)isFooterPrinted;
- (id)clone;
- (id)copyWithZone:(NSZone *)zone;
@end

#endif // _OrgOssPdfreporterEngineFillJRFillGroup_H_
