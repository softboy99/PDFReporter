//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: pdfreporter-core/src/org/oss/pdfreporter/engine/JRLineBox.java
//
//  Created by kendra on 9/27/13.
//

#ifndef _OrgOssPdfreporterEngineJRLineBox_H_
#define _OrgOssPdfreporterEngineJRLineBox_H_

@class JavaLangInteger;
@protocol OrgOssPdfreporterEngineBaseJRBoxPen;
@protocol OrgOssPdfreporterEngineJRBoxContainer;

#import "JreEmulation.h"
#include "org/oss/pdfreporter/engine/JRPenContainer.h"

@protocol OrgOssPdfreporterEngineJRLineBox < OrgOssPdfreporterEngineJRPenContainer, NSObject, JavaObject >
- (id<OrgOssPdfreporterEngineJRBoxContainer>)getBoxContainer;
- (id<OrgOssPdfreporterEngineJRLineBox>)cloneWithOrgOssPdfreporterEngineJRBoxContainer:(id<OrgOssPdfreporterEngineJRBoxContainer>)boxContainer;
- (id<OrgOssPdfreporterEngineBaseJRBoxPen>)getPen;
- (void)copyPenWithOrgOssPdfreporterEngineBaseJRBoxPen:(id<OrgOssPdfreporterEngineBaseJRBoxPen>)pen OBJC_METHOD_FAMILY_NONE;
- (id<OrgOssPdfreporterEngineBaseJRBoxPen>)getTopPen;
- (void)copyTopPenWithOrgOssPdfreporterEngineBaseJRBoxPen:(id<OrgOssPdfreporterEngineBaseJRBoxPen>)topPen OBJC_METHOD_FAMILY_NONE;
- (id<OrgOssPdfreporterEngineBaseJRBoxPen>)getLeftPen;
- (void)copyLeftPenWithOrgOssPdfreporterEngineBaseJRBoxPen:(id<OrgOssPdfreporterEngineBaseJRBoxPen>)leftPen OBJC_METHOD_FAMILY_NONE;
- (id<OrgOssPdfreporterEngineBaseJRBoxPen>)getBottomPen;
- (void)copyBottomPenWithOrgOssPdfreporterEngineBaseJRBoxPen:(id<OrgOssPdfreporterEngineBaseJRBoxPen>)bottomPen OBJC_METHOD_FAMILY_NONE;
- (id<OrgOssPdfreporterEngineBaseJRBoxPen>)getRightPen;
- (void)copyRightPenWithOrgOssPdfreporterEngineBaseJRBoxPen:(id<OrgOssPdfreporterEngineBaseJRBoxPen>)rightPen OBJC_METHOD_FAMILY_NONE;
- (JavaLangInteger *)getPadding;
- (JavaLangInteger *)getOwnPadding;
- (void)setPaddingWithInt:(int)padding;
- (void)setPaddingWithJavaLangInteger:(JavaLangInteger *)padding;
- (JavaLangInteger *)getTopPadding;
- (JavaLangInteger *)getOwnTopPadding;
- (void)setTopPaddingWithInt:(int)padding;
- (void)setTopPaddingWithJavaLangInteger:(JavaLangInteger *)padding;
- (JavaLangInteger *)getLeftPadding;
- (JavaLangInteger *)getOwnLeftPadding;
- (void)setLeftPaddingWithInt:(int)padding;
- (void)setLeftPaddingWithJavaLangInteger:(JavaLangInteger *)padding;
- (JavaLangInteger *)getBottomPadding;
- (JavaLangInteger *)getOwnBottomPadding;
- (void)setBottomPaddingWithInt:(int)padding;
- (void)setBottomPaddingWithJavaLangInteger:(JavaLangInteger *)padding;
- (JavaLangInteger *)getRightPadding;
- (JavaLangInteger *)getOwnRightPadding;
- (void)setRightPaddingWithInt:(int)padding;
- (void)setRightPaddingWithJavaLangInteger:(JavaLangInteger *)padding;
@end

#endif // _OrgOssPdfreporterEngineJRLineBox_H_
