//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: pdfreporter-core/src/org/oss/pdfreporter/engine/fill/JRFillGroup.java
//
//  Created by kendra on 9/27/13.
//

#include "java/lang/UnsupportedOperationException.h"
#include "org/oss/pdfreporter/engine/JRExpression.h"
#include "org/oss/pdfreporter/engine/JRGroup.h"
#include "org/oss/pdfreporter/engine/JROrigin.h"
#include "org/oss/pdfreporter/engine/JRSection.h"
#include "org/oss/pdfreporter/engine/JRVariable.h"
#include "org/oss/pdfreporter/engine/JasperReport.h"
#include "org/oss/pdfreporter/engine/fill/JRBaseFiller.h"
#include "org/oss/pdfreporter/engine/fill/JRFillGroup.h"
#include "org/oss/pdfreporter/engine/fill/JRFillObjectFactory.h"
#include "org/oss/pdfreporter/engine/fill/JRFillSection.h"
#include "org/oss/pdfreporter/engine/fill/JRFillVariable.h"
#include "org/oss/pdfreporter/engine/type/BandTypeEnum.h"
#include "org/oss/pdfreporter/engine/type/FooterPositionEnum.h"

@implementation OrgOssPdfreporterEngineFillJRFillGroup

@synthesize parent = parent_;
@synthesize groupHeaderSection = groupHeaderSection_;
@synthesize groupFooterSection = groupFooterSection_;
@synthesize countVariable = countVariable_;
@synthesize startNewColumn = startNewColumn_;
@synthesize startNewPage = startNewPage_;
@synthesize resetPageNumber = resetPageNumber_;
@synthesize hasChanged_ = hasChanged__;
@synthesize isTopLevelChange_ = isTopLevelChange__;
@synthesize isHeaderPrinted_ = isHeaderPrinted__;
@synthesize isFooterPrinted_ = isFooterPrinted__;

- (id)initWithOrgOssPdfreporterEngineJRGroup:(id<OrgOssPdfreporterEngineJRGroup>)group
withOrgOssPdfreporterEngineFillJRFillObjectFactory:(OrgOssPdfreporterEngineFillJRFillObjectFactory *)factory {
  if ((self = [super init])) {
    hasChanged__ = YES;
    isFooterPrinted__ = YES;
    [((OrgOssPdfreporterEngineFillJRFillObjectFactory *) nil_chk(factory)) putWithId:group withId:self];
    parent_ = group;
    NSString *reportName = [((OrgOssPdfreporterEngineFillJRBaseFiller *) nil_chk([((OrgOssPdfreporterEngineFillJRFillObjectFactory *) nil_chk(factory)) getFiller])) isSubreport] ? [((OrgOssPdfreporterEngineJasperReport *) nil_chk([((OrgOssPdfreporterEngineFillJRBaseFiller *) nil_chk([((OrgOssPdfreporterEngineFillJRFillObjectFactory *) nil_chk(factory)) getFiller])) getJasperReport])) getName] : nil;
    groupHeaderSection_ = [((OrgOssPdfreporterEngineFillJRFillObjectFactory *) nil_chk(factory)) getSectionWithOrgOssPdfreporterEngineJRSection:[((id<OrgOssPdfreporterEngineJRGroup>) nil_chk(group)) getGroupHeaderSection]];
    if (groupHeaderSection_ != ((OrgOssPdfreporterEngineFillJRBaseFiller *) nil_chk([((OrgOssPdfreporterEngineFillJRFillObjectFactory *) nil_chk(factory)) getFiller])).missingFillSection) {
      [((OrgOssPdfreporterEngineFillJRFillSection *) nil_chk(groupHeaderSection_)) setOriginWithOrgOssPdfreporterEngineJROrigin:[[OrgOssPdfreporterEngineJROrigin alloc] initWithNSString:reportName withNSString:[((id<OrgOssPdfreporterEngineJRGroup>) nil_chk(group)) getName] withOrgOssPdfreporterEngineTypeBandTypeEnumEnum:[OrgOssPdfreporterEngineTypeBandTypeEnumEnum GROUP_HEADER]]];
    }
    groupFooterSection_ = [((OrgOssPdfreporterEngineFillJRFillObjectFactory *) nil_chk(factory)) getSectionWithOrgOssPdfreporterEngineJRSection:[((id<OrgOssPdfreporterEngineJRGroup>) nil_chk(group)) getGroupFooterSection]];
    if (groupFooterSection_ != ((OrgOssPdfreporterEngineFillJRBaseFiller *) nil_chk([((OrgOssPdfreporterEngineFillJRFillObjectFactory *) nil_chk(factory)) getFiller])).missingFillSection) {
      [((OrgOssPdfreporterEngineFillJRFillSection *) nil_chk(groupFooterSection_)) setOriginWithOrgOssPdfreporterEngineJROrigin:[[OrgOssPdfreporterEngineJROrigin alloc] initWithNSString:reportName withNSString:[((id<OrgOssPdfreporterEngineJRGroup>) nil_chk(group)) getName] withOrgOssPdfreporterEngineTypeBandTypeEnumEnum:[OrgOssPdfreporterEngineTypeBandTypeEnumEnum GROUP_FOOTER]]];
    }
    countVariable_ = [((OrgOssPdfreporterEngineFillJRFillObjectFactory *) nil_chk(factory)) getVariableWithOrgOssPdfreporterEngineJRVariable:[((id<OrgOssPdfreporterEngineJRGroup>) nil_chk(group)) getCountVariable]];
    startNewColumn_ = [((id<OrgOssPdfreporterEngineJRGroup>) nil_chk(parent_)) isStartNewColumn];
    startNewPage_ = [((id<OrgOssPdfreporterEngineJRGroup>) nil_chk(parent_)) isStartNewPage];
    resetPageNumber_ = [((id<OrgOssPdfreporterEngineJRGroup>) nil_chk(parent_)) isResetPageNumber];
  }
  return self;
}

- (NSString *)getName {
  return [((id<OrgOssPdfreporterEngineJRGroup>) nil_chk(parent_)) getName];
}

- (id<OrgOssPdfreporterEngineJRExpression>)getExpression {
  return [((id<OrgOssPdfreporterEngineJRGroup>) nil_chk(parent_)) getExpression];
}

- (BOOL)isStartNewColumn {
  return startNewColumn_;
}

- (void)setStartNewColumnWithBOOL:(BOOL)isStart {
  self.startNewColumn = isStart;
}

- (BOOL)isStartNewPage {
  return startNewPage_;
}

- (void)setStartNewPageWithBOOL:(BOOL)isStart {
  self.startNewPage = isStart;
}

- (BOOL)isResetPageNumber {
  return resetPageNumber_;
}

- (void)setResetPageNumberWithBOOL:(BOOL)isReset {
  self.resetPageNumber = isReset;
}

- (BOOL)isReprintHeaderOnEachPage {
  return [((id<OrgOssPdfreporterEngineJRGroup>) nil_chk(parent_)) isReprintHeaderOnEachPage];
}

- (void)setReprintHeaderOnEachPageWithBOOL:(BOOL)isReprint {
}

- (int)getMinHeightToStartNewPage {
  return [((id<OrgOssPdfreporterEngineJRGroup>) nil_chk(parent_)) getMinHeightToStartNewPage];
}

- (void)setMinHeightToStartNewPageWithInt:(int)minHeight {
}

- (OrgOssPdfreporterEngineTypeFooterPositionEnumEnum *)getFooterPositionValue {
  return [((id<OrgOssPdfreporterEngineJRGroup>) nil_chk(parent_)) getFooterPositionValue];
}

- (void)setFooterPositionWithOrgOssPdfreporterEngineTypeFooterPositionEnumEnum:(OrgOssPdfreporterEngineTypeFooterPositionEnumEnum *)footerPosition {
  @throw [[JavaLangUnsupportedOperationException alloc] init];
}

- (BOOL)isKeepTogether {
  return [((id<OrgOssPdfreporterEngineJRGroup>) nil_chk(parent_)) isKeepTogether];
}

- (void)setKeepTogetherWithBOOL:(BOOL)keepTogether {
}

- (id<OrgOssPdfreporterEngineJRSection>)getGroupHeaderSection {
  return groupHeaderSection_;
}

- (id<OrgOssPdfreporterEngineJRSection>)getGroupFooterSection {
  return groupFooterSection_;
}

- (id<OrgOssPdfreporterEngineJRVariable>)getCountVariable {
  return countVariable_;
}

- (BOOL)hasChanged {
  return hasChanged__;
}

- (void)setHasChangedWithBOOL:(BOOL)hasChanged {
  self.hasChanged_ = hasChanged;
}

- (BOOL)isTopLevelChange {
  return isTopLevelChange__;
}

- (void)setTopLevelChangeWithBOOL:(BOOL)isTopLevelChange {
  self.isTopLevelChange_ = isTopLevelChange;
}

- (BOOL)isHeaderPrinted {
  return isHeaderPrinted__;
}

- (void)setHeaderPrintedWithBOOL:(BOOL)isHeaderPrinted {
  self.isHeaderPrinted_ = isHeaderPrinted;
}

- (BOOL)isFooterPrinted {
  return isFooterPrinted__;
}

- (void)setFooterPrintedWithBOOL:(BOOL)isFooterPrinted {
  self.isFooterPrinted_ = isFooterPrinted;
}

- (id)clone {
  @throw [[JavaLangUnsupportedOperationException alloc] init];
}

- (id)copyWithZone:(NSZone *)zone {
  return [self clone];
}

- (void)copyAllPropertiesTo:(id)copy {
  [super copyAllPropertiesTo:copy];
  OrgOssPdfreporterEngineFillJRFillGroup *typedCopy = (OrgOssPdfreporterEngineFillJRFillGroup *) copy;
  typedCopy.parent = parent_;
  typedCopy.groupHeaderSection = groupHeaderSection_;
  typedCopy.groupFooterSection = groupFooterSection_;
  typedCopy.countVariable = countVariable_;
  typedCopy.startNewColumn = startNewColumn_;
  typedCopy.startNewPage = startNewPage_;
  typedCopy.resetPageNumber = resetPageNumber_;
  typedCopy.hasChanged_ = hasChanged__;
  typedCopy.isTopLevelChange_ = isTopLevelChange__;
  typedCopy.isHeaderPrinted_ = isHeaderPrinted__;
  typedCopy.isFooterPrinted_ = isFooterPrinted__;
}

@end
