//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: pdfreporter-core/src/org/oss/pdfreporter/engine/xml/JRPrintImageFactory.java
//
//  Created by kendra on 9/27/13.
//

#include "java/lang/Boolean.h"
#include "java/lang/Integer.h"
#include "org/oss/pdfreporter/engine/JRDefaultStyleProvider.h"
#include "org/oss/pdfreporter/engine/JasperPrint.h"
#include "org/oss/pdfreporter/engine/base/JRBasePrintImage.h"
#include "org/oss/pdfreporter/engine/type/HorizontalAlignEnum.h"
#include "org/oss/pdfreporter/engine/type/OnErrorTypeEnum.h"
#include "org/oss/pdfreporter/engine/type/ScaleImageEnum.h"
#include "org/oss/pdfreporter/engine/type/VerticalAlignEnum.h"
#include "org/oss/pdfreporter/engine/xml/JRPrintImageFactory.h"
#include "org/oss/pdfreporter/engine/xml/JRXmlConstants.h"
#include "org/oss/pdfreporter/uses/org/apache/digester/IDigester.h"
#include "org/oss/pdfreporter/xml/parsers/IAttributes.h"

@implementation OrgOssPdfreporterEngineXmlJRPrintImageFactory

- (id)createObjectWithOrgOssPdfreporterXmlParsersIAttributes:(id<OrgOssPdfreporterXmlParsersIAttributes>)atts {
  OrgOssPdfreporterEngineJasperPrint *jasperPrint = (OrgOssPdfreporterEngineJasperPrint *) [((id<OrgOssPdfreporterUsesOrgApacheDigesterIDigester>) nil_chk(digester_)) peekWithInt:[((id<OrgOssPdfreporterUsesOrgApacheDigesterIDigester>) nil_chk(digester_)) getCount] - 2];
  OrgOssPdfreporterEngineBaseJRBasePrintImage *image = [[OrgOssPdfreporterEngineBaseJRBasePrintImage alloc] initWithOrgOssPdfreporterEngineJRDefaultStyleProvider:[((OrgOssPdfreporterEngineJasperPrint *) nil_chk(jasperPrint)) getDefaultStyleProvider]];
  OrgOssPdfreporterEngineTypeScaleImageEnumEnum *scaleImage = [OrgOssPdfreporterEngineTypeScaleImageEnumEnum getByNameWithNSString:[((id<OrgOssPdfreporterXmlParsersIAttributes>) nil_chk(atts)) getValueWithNSString:[OrgOssPdfreporterEngineXmlJRXmlConstants ATTRIBUTE_scaleImage]]];
  if (scaleImage != nil) {
    [((OrgOssPdfreporterEngineBaseJRBasePrintImage *) nil_chk(image)) setScaleImageWithOrgOssPdfreporterEngineTypeScaleImageEnumEnum:scaleImage];
  }
  OrgOssPdfreporterEngineTypeHorizontalAlignEnumEnum *horizontalAlignment = [OrgOssPdfreporterEngineTypeHorizontalAlignEnumEnum getByNameWithNSString:[((id<OrgOssPdfreporterXmlParsersIAttributes>) nil_chk(atts)) getValueWithNSString:[OrgOssPdfreporterEngineXmlJRXmlConstants ATTRIBUTE_hAlign]]];
  if (horizontalAlignment != nil) {
    [((OrgOssPdfreporterEngineBaseJRBasePrintImage *) nil_chk(image)) setHorizontalAlignmentWithOrgOssPdfreporterEngineTypeHorizontalAlignEnumEnum:horizontalAlignment];
  }
  OrgOssPdfreporterEngineTypeVerticalAlignEnumEnum *verticalAlignment = [OrgOssPdfreporterEngineTypeVerticalAlignEnumEnum getByNameWithNSString:[((id<OrgOssPdfreporterXmlParsersIAttributes>) nil_chk(atts)) getValueWithNSString:[OrgOssPdfreporterEngineXmlJRXmlConstants ATTRIBUTE_vAlign]]];
  if (verticalAlignment != nil) {
    [((OrgOssPdfreporterEngineBaseJRBasePrintImage *) nil_chk(image)) setVerticalAlignmentWithOrgOssPdfreporterEngineTypeVerticalAlignEnumEnum:verticalAlignment];
  }
  NSString *isLazy = [((id<OrgOssPdfreporterXmlParsersIAttributes>) nil_chk(atts)) getValueWithNSString:[OrgOssPdfreporterEngineXmlJRXmlConstants ATTRIBUTE_isLazy]];
  if (isLazy != nil && [((NSString *) nil_chk(isLazy)) length] > 0) {
    [((OrgOssPdfreporterEngineBaseJRBasePrintImage *) nil_chk(image)) setLazyWithBOOL:[[JavaLangBoolean valueOfWithNSString:isLazy] booleanValue]];
  }
  OrgOssPdfreporterEngineTypeOnErrorTypeEnumEnum *onErrorType = [OrgOssPdfreporterEngineTypeOnErrorTypeEnumEnum getByNameWithNSString:[((id<OrgOssPdfreporterXmlParsersIAttributes>) nil_chk(atts)) getValueWithNSString:[OrgOssPdfreporterEngineXmlJRXmlConstants ATTRIBUTE_onErrorType]]];
  if (onErrorType != nil) {
    [((OrgOssPdfreporterEngineBaseJRBasePrintImage *) nil_chk(image)) setOnErrorTypeWithOrgOssPdfreporterEngineTypeOnErrorTypeEnumEnum:onErrorType];
  }
  [((OrgOssPdfreporterEngineBaseJRBasePrintImage *) nil_chk(image)) setLinkTypeWithNSString:[((id<OrgOssPdfreporterXmlParsersIAttributes>) nil_chk(atts)) getValueWithNSString:[OrgOssPdfreporterEngineXmlJRXmlConstants ATTRIBUTE_hyperlinkType]]];
  [((OrgOssPdfreporterEngineBaseJRBasePrintImage *) nil_chk(image)) setLinkTargetWithNSString:[((id<OrgOssPdfreporterXmlParsersIAttributes>) nil_chk(atts)) getValueWithNSString:[OrgOssPdfreporterEngineXmlJRXmlConstants ATTRIBUTE_hyperlinkTarget]]];
  [((OrgOssPdfreporterEngineBaseJRBasePrintImage *) nil_chk(image)) setAnchorNameWithNSString:[((id<OrgOssPdfreporterXmlParsersIAttributes>) nil_chk(atts)) getValueWithNSString:[OrgOssPdfreporterEngineXmlJRXmlConstants ATTRIBUTE_anchorName]]];
  [((OrgOssPdfreporterEngineBaseJRBasePrintImage *) nil_chk(image)) setHyperlinkReferenceWithNSString:[((id<OrgOssPdfreporterXmlParsersIAttributes>) nil_chk(atts)) getValueWithNSString:[OrgOssPdfreporterEngineXmlJRXmlConstants ATTRIBUTE_hyperlinkReference]]];
  [((OrgOssPdfreporterEngineBaseJRBasePrintImage *) nil_chk(image)) setHyperlinkAnchorWithNSString:[((id<OrgOssPdfreporterXmlParsersIAttributes>) nil_chk(atts)) getValueWithNSString:[OrgOssPdfreporterEngineXmlJRXmlConstants ATTRIBUTE_hyperlinkAnchor]]];
  NSString *hyperlinkPage = [((id<OrgOssPdfreporterXmlParsersIAttributes>) nil_chk(atts)) getValueWithNSString:[OrgOssPdfreporterEngineXmlJRXmlConstants ATTRIBUTE_hyperlinkPage]];
  if (hyperlinkPage != nil) {
    [((OrgOssPdfreporterEngineBaseJRBasePrintImage *) nil_chk(image)) setHyperlinkPageWithJavaLangInteger:[JavaLangInteger valueOfWithNSString:hyperlinkPage]];
  }
  [((OrgOssPdfreporterEngineBaseJRBasePrintImage *) nil_chk(image)) setHyperlinkTooltipWithNSString:[((id<OrgOssPdfreporterXmlParsersIAttributes>) nil_chk(atts)) getValueWithNSString:[OrgOssPdfreporterEngineXmlJRXmlConstants ATTRIBUTE_hyperlinkTooltip]]];
  NSString *bookmarkLevelAttr = [((id<OrgOssPdfreporterXmlParsersIAttributes>) nil_chk(atts)) getValueWithNSString:[OrgOssPdfreporterEngineXmlJRXmlConstants ATTRIBUTE_bookmarkLevel]];
  if (bookmarkLevelAttr != nil) {
    [((OrgOssPdfreporterEngineBaseJRBasePrintImage *) nil_chk(image)) setBookmarkLevelWithInt:[JavaLangInteger parseIntWithNSString:bookmarkLevelAttr]];
  }
  return image;
}

- (id)init {
  return [super init];
}

@end
