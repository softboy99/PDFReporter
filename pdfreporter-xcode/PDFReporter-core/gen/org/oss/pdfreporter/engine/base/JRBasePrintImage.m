//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: pdfreporter-core/src/org/oss/pdfreporter/engine/base/JRBasePrintImage.java
//
//  Created by kendra on 9/27/13.
//

#include "java/lang/Boolean.h"
#include "java/lang/Float.h"
#include "java/lang/Integer.h"
#include "org/oss/pdfreporter/engine/JRAnchor.h"
#include "org/oss/pdfreporter/engine/JRDefaultStyleProvider.h"
#include "org/oss/pdfreporter/engine/JRHyperlinkHelper.h"
#include "org/oss/pdfreporter/engine/JRLineBox.h"
#include "org/oss/pdfreporter/engine/JRPen.h"
#include "org/oss/pdfreporter/engine/JRPrintHyperlinkParameter.h"
#include "org/oss/pdfreporter/engine/JRPrintHyperlinkParameters.h"
#include "org/oss/pdfreporter/engine/PrintElementVisitor.h"
#include "org/oss/pdfreporter/engine/Renderable.h"
#include "org/oss/pdfreporter/engine/base/JRBaseLineBox.h"
#include "org/oss/pdfreporter/engine/base/JRBasePrintImage.h"
#include "org/oss/pdfreporter/engine/type/HorizontalAlignEnum.h"
#include "org/oss/pdfreporter/engine/type/HyperlinkTargetEnum.h"
#include "org/oss/pdfreporter/engine/type/HyperlinkTypeEnum.h"
#include "org/oss/pdfreporter/engine/type/ModeEnum.h"
#include "org/oss/pdfreporter/engine/type/OnErrorTypeEnum.h"
#include "org/oss/pdfreporter/engine/type/ScaleImageEnum.h"
#include "org/oss/pdfreporter/engine/type/VerticalAlignEnum.h"
#include "org/oss/pdfreporter/engine/util/JRStyleResolver.h"

@implementation OrgOssPdfreporterEngineBaseJRBasePrintImage

@synthesize renderable = renderable_;
@synthesize scaleImageValue = scaleImageValue_;
@synthesize isUsingCache_ = isUsingCache__;
@synthesize horizontalAlignmentValue = horizontalAlignmentValue_;
@synthesize verticalAlignmentValue = verticalAlignmentValue_;
@synthesize isLazy_ = isLazy__;
@synthesize onErrorTypeValue = onErrorTypeValue_;
@synthesize lineBox = lineBox_;
@synthesize anchorName = anchorName_;
@synthesize linkType = linkType_;
@synthesize linkTarget = linkTarget_;
@synthesize hyperlinkReference = hyperlinkReference_;
@synthesize hyperlinkAnchor = hyperlinkAnchor_;
@synthesize hyperlinkPage = hyperlinkPage_;
@synthesize hyperlinkTooltip = hyperlinkTooltip_;
@synthesize hyperlinkParameters = hyperlinkParameters_;
@synthesize bookmarkLevel = bookmarkLevel_;

- (id)initWithOrgOssPdfreporterEngineJRDefaultStyleProvider:(id<OrgOssPdfreporterEngineJRDefaultStyleProvider>)defaultStyleProvider {
  if ((self = [super initWithOrgOssPdfreporterEngineJRDefaultStyleProvider:defaultStyleProvider])) {
    isUsingCache__ = [JavaLangBoolean getTRUE];
    onErrorTypeValue_ = [OrgOssPdfreporterEngineTypeOnErrorTypeEnumEnum ERROR];
    bookmarkLevel_ = OrgOssPdfreporterEngineJRAnchor_NO_BOOKMARK;
    lineBox_ = [[OrgOssPdfreporterEngineBaseJRBaseLineBox alloc] initWithOrgOssPdfreporterEngineJRBoxContainer:self];
  }
  return self;
}

- (OrgOssPdfreporterEngineTypeModeEnumEnum *)getModeValue {
  return [OrgOssPdfreporterEngineUtilJRStyleResolver getModeWithOrgOssPdfreporterEngineJRCommonElement:self withOrgOssPdfreporterEngineTypeModeEnumEnum:[OrgOssPdfreporterEngineTypeModeEnumEnum TRANSPARENT]];
}

- (id<OrgOssPdfreporterEngineRenderable>)getRenderable {
  return renderable_;
}

- (void)setRenderableWithOrgOssPdfreporterEngineRenderable:(id<OrgOssPdfreporterEngineRenderable>)renderable {
  self.renderable = renderable;
}

- (OrgOssPdfreporterEngineTypeScaleImageEnumEnum *)getScaleImageValue {
  return [OrgOssPdfreporterEngineUtilJRStyleResolver getScaleImageValueWithOrgOssPdfreporterEngineJRCommonImage:self];
}

- (OrgOssPdfreporterEngineTypeScaleImageEnumEnum *)getOwnScaleImageValue {
  return self.scaleImageValue;
}

- (void)setScaleImageWithOrgOssPdfreporterEngineTypeScaleImageEnumEnum:(OrgOssPdfreporterEngineTypeScaleImageEnumEnum *)scaleImageValue {
  self.scaleImageValue = scaleImageValue;
}

- (BOOL)isUsingCache {
  return isUsingCache__ == nil ? YES : [((JavaLangBoolean *) nil_chk(isUsingCache__)) booleanValue];
}

- (void)setUsingCacheWithBOOL:(BOOL)isUsingCache {
  self.isUsingCache_ = (isUsingCache ? [JavaLangBoolean getTRUE] : [JavaLangBoolean getFALSE]);
}

- (OrgOssPdfreporterEngineTypeHorizontalAlignEnumEnum *)getHorizontalAlignmentValue {
  return [OrgOssPdfreporterEngineUtilJRStyleResolver getHorizontalAlignmentValueWithOrgOssPdfreporterEngineJRAlignment:self];
}

- (OrgOssPdfreporterEngineTypeHorizontalAlignEnumEnum *)getOwnHorizontalAlignmentValue {
  return horizontalAlignmentValue_;
}

- (void)setHorizontalAlignmentWithOrgOssPdfreporterEngineTypeHorizontalAlignEnumEnum:(OrgOssPdfreporterEngineTypeHorizontalAlignEnumEnum *)horizontalAlignmentValue {
  self.horizontalAlignmentValue = horizontalAlignmentValue;
}

- (OrgOssPdfreporterEngineTypeVerticalAlignEnumEnum *)getVerticalAlignmentValue {
  return [OrgOssPdfreporterEngineUtilJRStyleResolver getVerticalAlignmentValueWithOrgOssPdfreporterEngineJRAlignment:self];
}

- (OrgOssPdfreporterEngineTypeVerticalAlignEnumEnum *)getOwnVerticalAlignmentValue {
  return verticalAlignmentValue_;
}

- (void)setVerticalAlignmentWithOrgOssPdfreporterEngineTypeVerticalAlignEnumEnum:(OrgOssPdfreporterEngineTypeVerticalAlignEnumEnum *)verticalAlignmentValue {
  self.verticalAlignmentValue = verticalAlignmentValue;
}

- (BOOL)isLazy {
  return isLazy__;
}

- (void)setLazyWithBOOL:(BOOL)isLazy {
  self.isLazy_ = isLazy;
}

- (OrgOssPdfreporterEngineTypeOnErrorTypeEnumEnum *)getOnErrorTypeValue {
  return self.onErrorTypeValue;
}

- (void)setOnErrorTypeWithOrgOssPdfreporterEngineTypeOnErrorTypeEnumEnum:(OrgOssPdfreporterEngineTypeOnErrorTypeEnumEnum *)onErrorTypeValue {
  self.onErrorTypeValue = onErrorTypeValue;
}

- (id<OrgOssPdfreporterEngineJRLineBox>)getLineBox {
  return lineBox_;
}

- (void)copyBoxWithOrgOssPdfreporterEngineJRLineBox:(id<OrgOssPdfreporterEngineJRLineBox>)lineBox OBJC_METHOD_FAMILY_NONE {
  self.lineBox = [((id<OrgOssPdfreporterEngineJRLineBox>) nil_chk(lineBox)) cloneWithOrgOssPdfreporterEngineJRBoxContainer:self];
}

- (JavaLangFloat *)getDefaultLineWidth {
  return [OrgOssPdfreporterEngineJRPen LINE_WIDTH_0];
}

- (NSString *)getAnchorName {
  return anchorName_;
}

- (void)setAnchorNameWithNSString:(NSString *)anchorName {
  self.anchorName = anchorName;
}

- (OrgOssPdfreporterEngineTypeHyperlinkTypeEnumEnum *)getHyperlinkTypeValue {
  return [OrgOssPdfreporterEngineJRHyperlinkHelper getHyperlinkTypeValueWithNSString:[self getLinkType]];
}

- (void)setHyperlinkTypeWithOrgOssPdfreporterEngineTypeHyperlinkTypeEnumEnum:(OrgOssPdfreporterEngineTypeHyperlinkTypeEnumEnum *)hyperlinkType {
  [self setLinkTypeWithNSString:[OrgOssPdfreporterEngineJRHyperlinkHelper getLinkTypeWithOrgOssPdfreporterEngineTypeHyperlinkTypeEnumEnum:hyperlinkType]];
}

- (OrgOssPdfreporterEngineTypeHyperlinkTargetEnumEnum *)getHyperlinkTargetValue {
  return [OrgOssPdfreporterEngineJRHyperlinkHelper getHyperlinkTargetValueWithNSString:[self getLinkTarget]];
}

- (void)setHyperlinkTargetWithOrgOssPdfreporterEngineTypeHyperlinkTargetEnumEnum:(OrgOssPdfreporterEngineTypeHyperlinkTargetEnumEnum *)hyperlinkTarget {
  [self setLinkTargetWithNSString:[OrgOssPdfreporterEngineJRHyperlinkHelper getLinkTargetWithOrgOssPdfreporterEngineTypeHyperlinkTargetEnumEnum:hyperlinkTarget]];
}

- (NSString *)getHyperlinkReference {
  return hyperlinkReference_;
}

- (void)setHyperlinkReferenceWithNSString:(NSString *)hyperlinkReference {
  self.hyperlinkReference = hyperlinkReference;
}

- (NSString *)getHyperlinkAnchor {
  return hyperlinkAnchor_;
}

- (void)setHyperlinkAnchorWithNSString:(NSString *)hyperlinkAnchor {
  self.hyperlinkAnchor = hyperlinkAnchor;
}

- (JavaLangInteger *)getHyperlinkPage {
  return hyperlinkPage_;
}

- (void)setHyperlinkPageWithJavaLangInteger:(JavaLangInteger *)hyperlinkPage {
  self.hyperlinkPage = hyperlinkPage;
}

- (void)setHyperlinkPageWithNSString:(NSString *)hyperlinkPage {
  self.hyperlinkPage = [JavaLangInteger valueOfWithNSString:hyperlinkPage];
}

- (int)getBookmarkLevel {
  return bookmarkLevel_;
}

- (void)setBookmarkLevelWithInt:(int)bookmarkLevel {
  self.bookmarkLevel = bookmarkLevel;
}

- (OrgOssPdfreporterEngineJRPrintHyperlinkParameters *)getHyperlinkParameters {
  return hyperlinkParameters_;
}

- (void)setHyperlinkParametersWithOrgOssPdfreporterEngineJRPrintHyperlinkParameters:(OrgOssPdfreporterEngineJRPrintHyperlinkParameters *)hyperlinkParameters {
  self.hyperlinkParameters = hyperlinkParameters;
}

- (void)addHyperlinkParameterWithOrgOssPdfreporterEngineJRPrintHyperlinkParameter:(OrgOssPdfreporterEngineJRPrintHyperlinkParameter *)parameter {
  if (hyperlinkParameters_ == nil) {
    hyperlinkParameters_ = [[OrgOssPdfreporterEngineJRPrintHyperlinkParameters alloc] init];
  }
  [((OrgOssPdfreporterEngineJRPrintHyperlinkParameters *) nil_chk(hyperlinkParameters_)) addParameterWithOrgOssPdfreporterEngineJRPrintHyperlinkParameter:parameter];
}

- (NSString *)getLinkType {
  return linkType_;
}

- (void)setLinkTypeWithNSString:(NSString *)linkType {
  self.linkType = linkType;
}

- (NSString *)getLinkTarget {
  return linkTarget_;
}

- (void)setLinkTargetWithNSString:(NSString *)linkTarget {
  self.linkTarget = linkTarget;
}

- (NSString *)getHyperlinkTooltip {
  return hyperlinkTooltip_;
}

- (void)setHyperlinkTooltipWithNSString:(NSString *)hyperlinkTooltip {
  self.hyperlinkTooltip = hyperlinkTooltip;
}

- (void)acceptWithOrgOssPdfreporterEnginePrintElementVisitor:(id<OrgOssPdfreporterEnginePrintElementVisitor>)visitor
                                                      withId:(id)arg {
  [((id<OrgOssPdfreporterEnginePrintElementVisitor>) nil_chk(visitor)) visitWithOrgOssPdfreporterEngineJRPrintImage:self withId:arg];
}

- (void)copyAllPropertiesTo:(id)copy {
  [super copyAllPropertiesTo:copy];
  OrgOssPdfreporterEngineBaseJRBasePrintImage *typedCopy = (OrgOssPdfreporterEngineBaseJRBasePrintImage *) copy;
  typedCopy.renderable = renderable_;
  typedCopy.scaleImageValue = scaleImageValue_;
  typedCopy.isUsingCache_ = isUsingCache__;
  typedCopy.horizontalAlignmentValue = horizontalAlignmentValue_;
  typedCopy.verticalAlignmentValue = verticalAlignmentValue_;
  typedCopy.isLazy_ = isLazy__;
  typedCopy.onErrorTypeValue = onErrorTypeValue_;
  typedCopy.lineBox = lineBox_;
  typedCopy.anchorName = anchorName_;
  typedCopy.linkType = linkType_;
  typedCopy.linkTarget = linkTarget_;
  typedCopy.hyperlinkReference = hyperlinkReference_;
  typedCopy.hyperlinkAnchor = hyperlinkAnchor_;
  typedCopy.hyperlinkPage = hyperlinkPage_;
  typedCopy.hyperlinkTooltip = hyperlinkTooltip_;
  typedCopy.hyperlinkParameters = hyperlinkParameters_;
  typedCopy.bookmarkLevel = bookmarkLevel_;
}

@end
