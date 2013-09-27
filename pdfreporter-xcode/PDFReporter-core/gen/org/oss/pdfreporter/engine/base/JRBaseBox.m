//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: pdfreporter-core/src/org/oss/pdfreporter/engine/base/JRBaseBox.java
//
//  Created by kendra on 9/27/13.
//

#include "java/lang/Byte.h"
#include "java/lang/Integer.h"
#include "org/oss/pdfreporter/engine/JRDefaultStyleProvider.h"
#include "org/oss/pdfreporter/engine/JRLineBox.h"
#include "org/oss/pdfreporter/engine/JRStyle.h"
#include "org/oss/pdfreporter/engine/base/JRBaseBox.h"
#include "org/oss/pdfreporter/engine/base/JRBoxPen.h"
#include "org/oss/pdfreporter/engine/util/JRPenUtil.h"
#include "org/oss/pdfreporter/geometry/IColor.h"

@implementation OrgOssPdfreporterEngineBaseJRBaseBox

@synthesize lineBox = lineBox_;

- (id<OrgOssPdfreporterEngineJRDefaultStyleProvider>)getDefaultStyleProvider {
  return [((id<OrgOssPdfreporterEngineJRLineBox>) nil_chk(lineBox_)) getDefaultStyleProvider];
}

- (id<OrgOssPdfreporterEngineJRStyle>)getStyle {
  return [((id<OrgOssPdfreporterEngineJRLineBox>) nil_chk(lineBox_)) getStyle];
}

- (NSString *)getStyleNameReference {
  return [((id<OrgOssPdfreporterEngineJRLineBox>) nil_chk(lineBox_)) getStyleNameReference];
}

- (JavaLangByte *)getOwnBorder {
  return [OrgOssPdfreporterEngineUtilJRPenUtil getOwnPenFromLinePenWithOrgOssPdfreporterEngineJRPen:[((id<OrgOssPdfreporterEngineJRLineBox>) nil_chk(lineBox_)) getPen]];
}

- (id<OrgOssPdfreporterGeometryIColor>)getOwnBorderColor {
  return [((id<OrgOssPdfreporterEngineBaseJRBoxPen>) nil_chk([((id<OrgOssPdfreporterEngineJRLineBox>) nil_chk(lineBox_)) getPen])) getOwnLineColor];
}

- (JavaLangInteger *)getOwnPadding {
  return [((id<OrgOssPdfreporterEngineJRLineBox>) nil_chk(lineBox_)) getOwnPadding];
}

- (JavaLangByte *)getOwnTopBorder {
  return [OrgOssPdfreporterEngineUtilJRPenUtil getOwnPenFromLinePenWithOrgOssPdfreporterEngineJRPen:[((id<OrgOssPdfreporterEngineJRLineBox>) nil_chk(lineBox_)) getTopPen]];
}

- (id<OrgOssPdfreporterGeometryIColor>)getOwnTopBorderColor {
  return [((id<OrgOssPdfreporterEngineBaseJRBoxPen>) nil_chk([((id<OrgOssPdfreporterEngineJRLineBox>) nil_chk(lineBox_)) getTopPen])) getOwnLineColor];
}

- (JavaLangInteger *)getOwnTopPadding {
  return [((id<OrgOssPdfreporterEngineJRLineBox>) nil_chk(lineBox_)) getOwnTopPadding];
}

- (JavaLangByte *)getOwnLeftBorder {
  return [OrgOssPdfreporterEngineUtilJRPenUtil getOwnPenFromLinePenWithOrgOssPdfreporterEngineJRPen:[((id<OrgOssPdfreporterEngineJRLineBox>) nil_chk(lineBox_)) getLeftPen]];
}

- (id<OrgOssPdfreporterGeometryIColor>)getOwnLeftBorderColor {
  return [((id<OrgOssPdfreporterEngineBaseJRBoxPen>) nil_chk([((id<OrgOssPdfreporterEngineJRLineBox>) nil_chk(lineBox_)) getLeftPen])) getOwnLineColor];
}

- (JavaLangInteger *)getOwnLeftPadding {
  return [((id<OrgOssPdfreporterEngineJRLineBox>) nil_chk(lineBox_)) getOwnLeftPadding];
}

- (JavaLangByte *)getOwnBottomBorder {
  return [OrgOssPdfreporterEngineUtilJRPenUtil getOwnPenFromLinePenWithOrgOssPdfreporterEngineJRPen:[((id<OrgOssPdfreporterEngineJRLineBox>) nil_chk(lineBox_)) getBottomPen]];
}

- (id<OrgOssPdfreporterGeometryIColor>)getOwnBottomBorderColor {
  return [((id<OrgOssPdfreporterEngineBaseJRBoxPen>) nil_chk([((id<OrgOssPdfreporterEngineJRLineBox>) nil_chk(lineBox_)) getBottomPen])) getOwnLineColor];
}

- (JavaLangInteger *)getOwnBottomPadding {
  return [((id<OrgOssPdfreporterEngineJRLineBox>) nil_chk(lineBox_)) getOwnBottomPadding];
}

- (JavaLangByte *)getOwnRightBorder {
  return [OrgOssPdfreporterEngineUtilJRPenUtil getOwnPenFromLinePenWithOrgOssPdfreporterEngineJRPen:[((id<OrgOssPdfreporterEngineJRLineBox>) nil_chk(lineBox_)) getRightPen]];
}

- (id<OrgOssPdfreporterGeometryIColor>)getOwnRightBorderColor {
  return [((id<OrgOssPdfreporterEngineBaseJRBoxPen>) nil_chk([((id<OrgOssPdfreporterEngineJRLineBox>) nil_chk(lineBox_)) getRightPen])) getOwnLineColor];
}

- (JavaLangInteger *)getOwnRightPadding {
  return [((id<OrgOssPdfreporterEngineJRLineBox>) nil_chk(lineBox_)) getOwnRightPadding];
}

- (id)init {
  return [super init];
}

- (void)copyAllPropertiesTo:(id)copy {
  [super copyAllPropertiesTo:copy];
  OrgOssPdfreporterEngineBaseJRBaseBox *typedCopy = (OrgOssPdfreporterEngineBaseJRBaseBox *) copy;
  typedCopy.lineBox = lineBox_;
}

@end
