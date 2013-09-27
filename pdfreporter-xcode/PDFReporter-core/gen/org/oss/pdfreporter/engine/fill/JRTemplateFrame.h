//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: pdfreporter-core/src/org/oss/pdfreporter/engine/fill/JRTemplateFrame.java
//
//  Created by kendra on 9/27/13.
//

#ifndef _OrgOssPdfreporterEngineFillJRTemplateFrame_H_
#define _OrgOssPdfreporterEngineFillJRTemplateFrame_H_

@class JavaLangByte;
@class JavaLangInteger;
@class OrgOssPdfreporterEngineFillJRFillCellContents;
@class OrgOssPdfreporterEngineFillJRFillFrame;
@class OrgOssPdfreporterEngineJROrigin;
@class OrgOssPdfreporterEngineTypeModeEnumEnum;
@protocol OrgOssPdfreporterEngineJRDefaultStyleProvider;
@protocol OrgOssPdfreporterEngineJRLineBox;
@protocol OrgOssPdfreporterGeometryIColor;

#import "JreEmulation.h"
#include "org/oss/pdfreporter/engine/JRBoxContainer.h"
#include "org/oss/pdfreporter/engine/fill/JRTemplateElement.h"

#define OrgOssPdfreporterEngineFillJRTemplateFrame_serialVersionUID 10200

@interface OrgOssPdfreporterEngineFillJRTemplateFrame : OrgOssPdfreporterEngineFillJRTemplateElement < OrgOssPdfreporterEngineJRBoxContainer > {
 @public
  id<OrgOssPdfreporterEngineJRLineBox> lineBox_;
  JavaLangByte *border_;
  JavaLangByte *topBorder_;
  JavaLangByte *leftBorder_;
  JavaLangByte *bottomBorder_;
  JavaLangByte *rightBorder_;
  id<OrgOssPdfreporterGeometryIColor> borderColor_;
  id<OrgOssPdfreporterGeometryIColor> topBorderColor_;
  id<OrgOssPdfreporterGeometryIColor> leftBorderColor_;
  id<OrgOssPdfreporterGeometryIColor> bottomBorderColor_;
  id<OrgOssPdfreporterGeometryIColor> rightBorderColor_;
  JavaLangInteger *padding_;
  JavaLangInteger *topPadding_;
  JavaLangInteger *leftPadding_;
  JavaLangInteger *bottomPadding_;
  JavaLangInteger *rightPadding_;
}

@property (nonatomic, strong) id<OrgOssPdfreporterEngineJRLineBox> lineBox;
@property (nonatomic, strong) JavaLangByte *border;
@property (nonatomic, strong) JavaLangByte *topBorder;
@property (nonatomic, strong) JavaLangByte *leftBorder;
@property (nonatomic, strong) JavaLangByte *bottomBorder;
@property (nonatomic, strong) JavaLangByte *rightBorder;
@property (nonatomic, strong) id<OrgOssPdfreporterGeometryIColor> borderColor;
@property (nonatomic, strong) id<OrgOssPdfreporterGeometryIColor> topBorderColor;
@property (nonatomic, strong) id<OrgOssPdfreporterGeometryIColor> leftBorderColor;
@property (nonatomic, strong) id<OrgOssPdfreporterGeometryIColor> bottomBorderColor;
@property (nonatomic, strong) id<OrgOssPdfreporterGeometryIColor> rightBorderColor;
@property (nonatomic, strong) JavaLangInteger *padding;
@property (nonatomic, strong) JavaLangInteger *topPadding;
@property (nonatomic, strong) JavaLangInteger *leftPadding;
@property (nonatomic, strong) JavaLangInteger *bottomPadding;
@property (nonatomic, strong) JavaLangInteger *rightPadding;

- (id)initWithOrgOssPdfreporterEngineJROrigin:(OrgOssPdfreporterEngineJROrigin *)origin
withOrgOssPdfreporterEngineJRDefaultStyleProvider:(id<OrgOssPdfreporterEngineJRDefaultStyleProvider>)defaultStyleProvider
withOrgOssPdfreporterEngineFillJRFillCellContents:(OrgOssPdfreporterEngineFillJRFillCellContents *)cell;
- (id)initWithOrgOssPdfreporterEngineJROrigin:(OrgOssPdfreporterEngineJROrigin *)origin
withOrgOssPdfreporterEngineJRDefaultStyleProvider:(id<OrgOssPdfreporterEngineJRDefaultStyleProvider>)defaultStyleProvider
   withOrgOssPdfreporterEngineFillJRFillFrame:(OrgOssPdfreporterEngineFillJRFillFrame *)frame;
- (id)initWithOrgOssPdfreporterEngineJROrigin:(OrgOssPdfreporterEngineJROrigin *)origin
withOrgOssPdfreporterEngineJRDefaultStyleProvider:(id<OrgOssPdfreporterEngineJRDefaultStyleProvider>)defaultStyleProvider;
- (id<OrgOssPdfreporterEngineJRLineBox>)getLineBox;
- (void)copyBoxWithOrgOssPdfreporterEngineJRLineBox:(id<OrgOssPdfreporterEngineJRLineBox>)lineBox OBJC_METHOD_FAMILY_NONE;
- (OrgOssPdfreporterEngineTypeModeEnumEnum *)getModeValue;
- (id<OrgOssPdfreporterGeometryIColor>)getDefaultLineColor;
- (int)getHashCode;
- (BOOL)isIdenticalWithId:(id)object;
@end

#endif // _OrgOssPdfreporterEngineFillJRTemplateFrame_H_
