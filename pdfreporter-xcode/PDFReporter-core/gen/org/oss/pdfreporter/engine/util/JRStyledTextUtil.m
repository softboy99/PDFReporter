//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: pdfreporter-core/src/org/oss/pdfreporter/engine/util/JRStyledTextUtil.java
//
//  Created by kendra on 9/27/13.
//

#include "java/lang/Integer.h"
#include "java/util/Locale.h"
#include "java/util/Map.h"
#include "org/oss/pdfreporter/engine/JRCommonText.h"
#include "org/oss/pdfreporter/engine/JRPrintText.h"
#include "org/oss/pdfreporter/engine/JRStyledTextAttributeSelector.h"
#include "org/oss/pdfreporter/engine/JasperReportsContext.h"
#include "org/oss/pdfreporter/engine/util/JRStyledText.h"
#include "org/oss/pdfreporter/engine/util/JRStyledTextParser.h"
#include "org/oss/pdfreporter/engine/util/JRStyledTextUtil.h"

@implementation OrgOssPdfreporterEngineUtilJRStyledTextUtil

@synthesize allSelector = allSelector_;

- (id)initWithOrgOssPdfreporterEngineJasperReportsContext:(id<OrgOssPdfreporterEngineJasperReportsContext>)jasperReportsContext {
  if ((self = [super init])) {
    self.allSelector = [OrgOssPdfreporterEngineJRStyledTextAttributeSelector getAllSelectorWithOrgOssPdfreporterEngineJasperReportsContext:jasperReportsContext];
  }
  return self;
}

+ (OrgOssPdfreporterEngineUtilJRStyledTextUtil *)getInstanceWithOrgOssPdfreporterEngineJasperReportsContext:(id<OrgOssPdfreporterEngineJasperReportsContext>)jasperReportsContext {
  return [[OrgOssPdfreporterEngineUtilJRStyledTextUtil alloc] initWithOrgOssPdfreporterEngineJasperReportsContext:jasperReportsContext];
}

- (NSString *)getTruncatedTextWithOrgOssPdfreporterEngineJRPrintText:(id<OrgOssPdfreporterEngineJRPrintText>)printText {
  NSString *truncatedText = nil;
  NSString *originalText = [((id<OrgOssPdfreporterEngineJRPrintText>) nil_chk(printText)) getOriginalText];
  if (originalText != nil) {
    if ([((id<OrgOssPdfreporterEngineJRPrintText>) nil_chk(printText)) getTextTruncateIndex] == nil) {
      truncatedText = originalText;
    }
    else {
      if (![((NSString *) nil_chk([OrgOssPdfreporterEngineJRCommonText MARKUP_NONE])) isEqual:[((id<OrgOssPdfreporterEngineJRPrintText>) nil_chk(printText)) getMarkup]]) {
        truncatedText = [((OrgOssPdfreporterEngineUtilJRStyledTextParser *) nil_chk([OrgOssPdfreporterEngineUtilJRStyledTextParser getInstance])) writeWithOrgOssPdfreporterEngineUtilJRStyledText:[((id<OrgOssPdfreporterEngineJRPrintText>) nil_chk(printText)) getFullStyledTextWithOrgOssPdfreporterEngineJRStyledTextAttributeSelector:allSelector_] withInt:0 withInt:[((JavaLangInteger *) nil_chk([((id<OrgOssPdfreporterEngineJRPrintText>) nil_chk(printText)) getTextTruncateIndex])) intValue]];
      }
      else {
        truncatedText = [((NSString *) nil_chk(originalText)) substring:0 endIndex:[((JavaLangInteger *) nil_chk([((id<OrgOssPdfreporterEngineJRPrintText>) nil_chk(printText)) getTextTruncateIndex])) intValue]];
      }
    }
    NSString *textTruncateSuffix = [((id<OrgOssPdfreporterEngineJRPrintText>) nil_chk(printText)) getTextTruncateSuffix];
    if (textTruncateSuffix != nil) {
      truncatedText = [NSString stringWithFormat:@"%@%@", truncatedText, textTruncateSuffix];
    }
  }
  return truncatedText;
}

- (OrgOssPdfreporterEngineUtilJRStyledText *)getStyledTextWithOrgOssPdfreporterEngineJRPrintText:(id<OrgOssPdfreporterEngineJRPrintText>)printText
                                        withOrgOssPdfreporterEngineJRStyledTextAttributeSelector:(OrgOssPdfreporterEngineJRStyledTextAttributeSelector *)attributeSelector {
  NSString *truncatedText = [self getTruncatedTextWithOrgOssPdfreporterEngineJRPrintText:printText];
  if (truncatedText == nil) {
    return nil;
  }
  return [((OrgOssPdfreporterEngineUtilJRStyledTextParser *) nil_chk([OrgOssPdfreporterEngineUtilJRStyledTextParser getInstance])) getStyledTextWithJavaUtilMap:[((OrgOssPdfreporterEngineJRStyledTextAttributeSelector *) nil_chk(attributeSelector)) getStyledTextAttributesWithOrgOssPdfreporterEngineJRPrintText:printText] withNSString:truncatedText withBOOL:![((NSString *) nil_chk([OrgOssPdfreporterEngineJRCommonText MARKUP_NONE])) isEqual:[((id<OrgOssPdfreporterEngineJRPrintText>) nil_chk(printText)) getMarkup]] withJavaUtilLocale:[OrgOssPdfreporterEngineJRStyledTextAttributeSelector getTextLocaleWithOrgOssPdfreporterEngineJRPrintText:printText]];
}

- (void)copyAllPropertiesTo:(id)copy {
  [super copyAllPropertiesTo:copy];
  OrgOssPdfreporterEngineUtilJRStyledTextUtil *typedCopy = (OrgOssPdfreporterEngineUtilJRStyledTextUtil *) copy;
  typedCopy.allSelector = allSelector_;
}

@end
