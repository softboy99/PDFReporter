//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: pdfreporter-core/src/org/oss/pdfreporter/font/Base14Font.java
//
//  Created by kendra on 9/27/13.
//

#include "IOSClass.h"
#include "java/util/ArrayList.h"
#include "java/util/HashMap.h"
#include "java/util/List.h"
#include "java/util/Map.h"
#include "java/util/logging/Logger.h"
#include "org/oss/pdfreporter/font/AbstractFontManager.h"
#include "org/oss/pdfreporter/font/Base14Font.h"
#include "org/oss/pdfreporter/font/IFont.h"
#include "org/oss/pdfreporter/font/IFontManager.h"
#include "org/oss/pdfreporter/font/IFontMetric.h"
#include "org/oss/pdfreporter/font/IFontPeer.h"

@implementation OrgOssPdfreporterFontBase14Font

static JavaUtilLoggingLogger * OrgOssPdfreporterFontBase14Font_logger_;

@synthesize fontManager = fontManager_;
@synthesize pdfName = pdfName_;
@synthesize name = name_;
@synthesize style = style_;
@synthesize delegate = delegate_;

+ (JavaUtilLoggingLogger *)logger {
  return OrgOssPdfreporterFontBase14Font_logger_;
}

- (id)initWithOrgOssPdfreporterFontAbstractFontManager:(OrgOssPdfreporterFontAbstractFontManager *)fontManager
                                          withNSString:(NSString *)pdfName
                                          withNSString:(NSString *)name
          withOrgOssPdfreporterFontIFont_FontStyleEnum:(OrgOssPdfreporterFontIFont_FontStyleEnum *)style {
  if ((self = [super init])) {
    delegate_ = nil;
    self.fontManager = fontManager;
    self.pdfName = pdfName;
    self.name = name;
    self.style = style;
  }
  return self;
}

+ (id<JavaUtilList>)getListWithOrgOssPdfreporterFontAbstractFontManager:(OrgOssPdfreporterFontAbstractFontManager *)fontManager {
  id<JavaUtilList> builtInFonts = [[JavaUtilArrayList alloc] init];
  [((id<JavaUtilList>) nil_chk(builtInFonts)) addWithId:[[OrgOssPdfreporterFontBase14Font alloc] initWithOrgOssPdfreporterFontAbstractFontManager:fontManager withNSString:[OrgOssPdfreporterFontIFont COURIER] withNSString:[OrgOssPdfreporterFontIFont COURIER] withOrgOssPdfreporterFontIFont_FontStyleEnum:[OrgOssPdfreporterFontIFont_FontStyleEnum PLAIN]]];
  [((id<JavaUtilList>) nil_chk(builtInFonts)) addWithId:[[OrgOssPdfreporterFontBase14Font alloc] initWithOrgOssPdfreporterFontAbstractFontManager:fontManager withNSString:@"Courier-Bold" withNSString:[OrgOssPdfreporterFontIFont COURIER] withOrgOssPdfreporterFontIFont_FontStyleEnum:[OrgOssPdfreporterFontIFont_FontStyleEnum BOLD]]];
  [((id<JavaUtilList>) nil_chk(builtInFonts)) addWithId:[[OrgOssPdfreporterFontBase14Font alloc] initWithOrgOssPdfreporterFontAbstractFontManager:fontManager withNSString:@"Courier-Oblique" withNSString:[OrgOssPdfreporterFontIFont COURIER] withOrgOssPdfreporterFontIFont_FontStyleEnum:[OrgOssPdfreporterFontIFont_FontStyleEnum OBLIQUE]]];
  [((id<JavaUtilList>) nil_chk(builtInFonts)) addWithId:[[OrgOssPdfreporterFontBase14Font alloc] initWithOrgOssPdfreporterFontAbstractFontManager:fontManager withNSString:@"Courier-BoldOblique" withNSString:[OrgOssPdfreporterFontIFont COURIER] withOrgOssPdfreporterFontIFont_FontStyleEnum:[OrgOssPdfreporterFontIFont_FontStyleEnum BOLD_OBLIQUE]]];
  [((id<JavaUtilList>) nil_chk(builtInFonts)) addWithId:[[OrgOssPdfreporterFontBase14Font alloc] initWithOrgOssPdfreporterFontAbstractFontManager:fontManager withNSString:[OrgOssPdfreporterFontIFont HELVETICA] withNSString:[OrgOssPdfreporterFontIFont HELVETICA] withOrgOssPdfreporterFontIFont_FontStyleEnum:[OrgOssPdfreporterFontIFont_FontStyleEnum PLAIN]]];
  [((id<JavaUtilList>) nil_chk(builtInFonts)) addWithId:[[OrgOssPdfreporterFontBase14Font alloc] initWithOrgOssPdfreporterFontAbstractFontManager:fontManager withNSString:@"Helvetica-Bold" withNSString:[OrgOssPdfreporterFontIFont HELVETICA] withOrgOssPdfreporterFontIFont_FontStyleEnum:[OrgOssPdfreporterFontIFont_FontStyleEnum BOLD]]];
  [((id<JavaUtilList>) nil_chk(builtInFonts)) addWithId:[[OrgOssPdfreporterFontBase14Font alloc] initWithOrgOssPdfreporterFontAbstractFontManager:fontManager withNSString:@"Helvetica-Oblique" withNSString:[OrgOssPdfreporterFontIFont HELVETICA] withOrgOssPdfreporterFontIFont_FontStyleEnum:[OrgOssPdfreporterFontIFont_FontStyleEnum OBLIQUE]]];
  [((id<JavaUtilList>) nil_chk(builtInFonts)) addWithId:[[OrgOssPdfreporterFontBase14Font alloc] initWithOrgOssPdfreporterFontAbstractFontManager:fontManager withNSString:@"Helvetica-BoldOblique" withNSString:[OrgOssPdfreporterFontIFont HELVETICA] withOrgOssPdfreporterFontIFont_FontStyleEnum:[OrgOssPdfreporterFontIFont_FontStyleEnum BOLD_OBLIQUE]]];
  [((id<JavaUtilList>) nil_chk(builtInFonts)) addWithId:[[OrgOssPdfreporterFontBase14Font alloc] initWithOrgOssPdfreporterFontAbstractFontManager:fontManager withNSString:[OrgOssPdfreporterFontIFont TIMES_ROMAN] withNSString:[OrgOssPdfreporterFontIFont TIMES_ROMAN] withOrgOssPdfreporterFontIFont_FontStyleEnum:[OrgOssPdfreporterFontIFont_FontStyleEnum PLAIN]]];
  [((id<JavaUtilList>) nil_chk(builtInFonts)) addWithId:[[OrgOssPdfreporterFontBase14Font alloc] initWithOrgOssPdfreporterFontAbstractFontManager:fontManager withNSString:@"Times-Bold" withNSString:[OrgOssPdfreporterFontIFont TIMES_ROMAN] withOrgOssPdfreporterFontIFont_FontStyleEnum:[OrgOssPdfreporterFontIFont_FontStyleEnum BOLD]]];
  [((id<JavaUtilList>) nil_chk(builtInFonts)) addWithId:[[OrgOssPdfreporterFontBase14Font alloc] initWithOrgOssPdfreporterFontAbstractFontManager:fontManager withNSString:@"Times-Italic" withNSString:[OrgOssPdfreporterFontIFont TIMES_ROMAN] withOrgOssPdfreporterFontIFont_FontStyleEnum:[OrgOssPdfreporterFontIFont_FontStyleEnum OBLIQUE]]];
  [((id<JavaUtilList>) nil_chk(builtInFonts)) addWithId:[[OrgOssPdfreporterFontBase14Font alloc] initWithOrgOssPdfreporterFontAbstractFontManager:fontManager withNSString:@"Times-BoldItalic" withNSString:[OrgOssPdfreporterFontIFont TIMES_ROMAN] withOrgOssPdfreporterFontIFont_FontStyleEnum:[OrgOssPdfreporterFontIFont_FontStyleEnum BOLD_OBLIQUE]]];
  [((id<JavaUtilList>) nil_chk(builtInFonts)) addWithId:[[OrgOssPdfreporterFontBase14Font alloc] initWithOrgOssPdfreporterFontAbstractFontManager:fontManager withNSString:[OrgOssPdfreporterFontIFont SYMBOL] withNSString:[OrgOssPdfreporterFontIFont SYMBOL] withOrgOssPdfreporterFontIFont_FontStyleEnum:[OrgOssPdfreporterFontIFont_FontStyleEnum PLAIN]]];
  [((id<JavaUtilList>) nil_chk(builtInFonts)) addWithId:[[OrgOssPdfreporterFontBase14Font alloc] initWithOrgOssPdfreporterFontAbstractFontManager:fontManager withNSString:[OrgOssPdfreporterFontIFont ZAPF_DINGBATS] withNSString:[OrgOssPdfreporterFontIFont ZAPF_DINGBATS] withOrgOssPdfreporterFontIFont_FontStyleEnum:[OrgOssPdfreporterFontIFont_FontStyleEnum PLAIN]]];
  return builtInFonts;
}

+ (id<OrgOssPdfreporterFontIFont>)findFontWithOrgOssPdfreporterFontAbstractFontManager:(OrgOssPdfreporterFontAbstractFontManager *)fontManager
                                                                          withNSString:(NSString *)name
                                          withOrgOssPdfreporterFontIFont_FontStyleEnum:(OrgOssPdfreporterFontIFont_FontStyleEnum *)style {
  if ([((NSString *) nil_chk(name)) equalsIgnoreCase:@"DialogInput"] || [((NSString *) nil_chk(name)) equalsIgnoreCase:@"Monospaced"] || [((NSString *) nil_chk(name)) equalsIgnoreCase:[OrgOssPdfreporterFontIFont COURIER]]) {
    return [((OrgOssPdfreporterFontAbstractFontManager *) nil_chk(fontManager)) getFontWithNSString:[OrgOssPdfreporterFontIFont COURIER] withOrgOssPdfreporterFontIFont_FontStyleEnum:style];
  }
  else if ([((NSString *) nil_chk(name)) equalsIgnoreCase:@"Serif"] || [((NSString *) nil_chk(name)) equalsIgnoreCase:@"TimesRoman"]) {
    return [((OrgOssPdfreporterFontAbstractFontManager *) nil_chk(fontManager)) getFontWithNSString:[OrgOssPdfreporterFontIFont TIMES_ROMAN] withOrgOssPdfreporterFontIFont_FontStyleEnum:style];
  }
  else {
    return [((OrgOssPdfreporterFontAbstractFontManager *) nil_chk(fontManager)) getFontWithNSString:[OrgOssPdfreporterFontIFont HELVETICA] withOrgOssPdfreporterFontIFont_FontStyleEnum:style];
  }
}

+ (id<JavaUtilMap>)getLogicalFontNames {
  id<JavaUtilMap> logicalFonts = [[JavaUtilHashMap alloc] init];
  (void) [((id<JavaUtilMap>) nil_chk(logicalFonts)) putWithId:@"DialogInput" withId:[OrgOssPdfreporterFontIFont COURIER]];
  (void) [((id<JavaUtilMap>) nil_chk(logicalFonts)) putWithId:@"Monospaced" withId:[OrgOssPdfreporterFontIFont COURIER]];
  (void) [((id<JavaUtilMap>) nil_chk(logicalFonts)) putWithId:@"Serif" withId:[OrgOssPdfreporterFontIFont TIMES_ROMAN]];
  (void) [((id<JavaUtilMap>) nil_chk(logicalFonts)) putWithId:@"TimesRoman" withId:[OrgOssPdfreporterFontIFont TIMES_ROMAN]];
  (void) [((id<JavaUtilMap>) nil_chk(logicalFonts)) putWithId:@"SansSerif" withId:[OrgOssPdfreporterFontIFont HELVETICA]];
  return logicalFonts;
}

- (NSString *)getName {
  return name_;
}

- (float)getSize {
  return 1.0f;
}

- (OrgOssPdfreporterFontIFont_FontStyleEnum *)getStyle {
  return style_;
}

- (OrgOssPdfreporterFontIFont_FontDecorationEnum *)getDecoration {
  return [OrgOssPdfreporterFontIFont_FontDecorationEnum NONE];
}

- (id<OrgOssPdfreporterFontIFontMetric>)getMetric {
  return [((id<OrgOssPdfreporterFontIFontPeer>) nil_chk([self getDelegate])) getMetric];
}

- (NSString *)getResourcePath {
  return nil;
}

- (id)getPeer {
  return [((id<OrgOssPdfreporterFontIFontPeer>) nil_chk([self getDelegate])) getPeer];
}

- (id<OrgOssPdfreporterFontIFontPeer>)getDelegate {
  [self load__];
  return delegate_;
}

- (NSString *)getEncoding {
  return @"UTF-8";
}

- (void)load__ {
  if (delegate_ == nil) {
    [((JavaUtilLoggingLogger *) nil_chk(OrgOssPdfreporterFontBase14Font_logger_)) fineWithNSString:[NSString stringWithFormat:@"Load Base14 font: %@", pdfName_]];
    self.delegate = [((OrgOssPdfreporterFontAbstractFontManager *) nil_chk(fontManager_)) getFontInternalWithNSString:pdfName_];
  }
}

- (id<OrgOssPdfreporterFontIFontManager>)getFontManager {
  return fontManager_;
}

+ (void)initialize {
  if (self == [OrgOssPdfreporterFontBase14Font class]) {
    OrgOssPdfreporterFontBase14Font_logger_ = [JavaUtilLoggingLogger getLoggerWithNSString:[[IOSClass classWithClass:[OrgOssPdfreporterFontBase14Font class]] getName]];
  }
}

- (void)copyAllPropertiesTo:(id)copy {
  [super copyAllPropertiesTo:copy];
  OrgOssPdfreporterFontBase14Font *typedCopy = (OrgOssPdfreporterFontBase14Font *) copy;
  typedCopy.fontManager = fontManager_;
  typedCopy.pdfName = pdfName_;
  typedCopy.name = name_;
  typedCopy.style = style_;
  typedCopy.delegate = delegate_;
}

@end
