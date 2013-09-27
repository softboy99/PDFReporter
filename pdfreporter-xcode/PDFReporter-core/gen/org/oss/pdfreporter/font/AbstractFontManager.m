//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: pdfreporter-core/src/org/oss/pdfreporter/font/AbstractFontManager.java
//
//  Created by kendra on 9/27/13.
//

#include "IOSClass.h"
#include "java/util/ArrayList.h"
#include "java/util/Collection.h"
#include "java/util/HashMap.h"
#include "java/util/Iterator.h"
#include "java/util/List.h"
#include "java/util/Map.h"
#include "java/util/Set.h"
#include "java/util/logging/Logger.h"
#include "org/oss/pdfreporter/font/AbstractFontManager.h"
#include "org/oss/pdfreporter/font/Base14Font.h"
#include "org/oss/pdfreporter/font/DecoratedFont.h"
#include "org/oss/pdfreporter/font/FontProxy.h"
#include "org/oss/pdfreporter/font/IFont.h"
#include "org/oss/pdfreporter/font/IFontPeer.h"
#include "org/oss/pdfreporter/registry/ISessionObject.h"

@implementation OrgOssPdfreporterFontAbstractFontManager

static JavaUtilLoggingLogger * OrgOssPdfreporterFontAbstractFontManager_logger_;

@synthesize fontCache = fontCache_;
@synthesize familyNames = familyNames_;

+ (JavaUtilLoggingLogger *)logger {
  return OrgOssPdfreporterFontAbstractFontManager_logger_;
}

- (id)init {
  if ((self = [super init])) {
    fontCache_ = [[JavaUtilHashMap alloc] init];
    familyNames_ = [[JavaUtilArrayList alloc] init];
    [self registerPdfInternalFonts];
  }
  return self;
}

- (void)registerPdfInternalFonts {
  {
    id<JavaUtilIterator> iter__ = [((id<JavaUtilList>) nil_chk([OrgOssPdfreporterFontBase14Font getListWithOrgOssPdfreporterFontAbstractFontManager:self])) iterator];
    while ([((id<JavaUtilIterator>) nil_chk(iter__)) hasNext]) {
      id<OrgOssPdfreporterFontIFont> font = [((id<JavaUtilIterator>) nil_chk(iter__)) next];
      [self addFontWithOrgOssPdfreporterFontAbstractFontManager_FontKey:[[OrgOssPdfreporterFontAbstractFontManager_FontKey alloc] initWithOrgOssPdfreporterFontIFont:font] withOrgOssPdfreporterFontIFont:font];
    }
  }
  {
    id<JavaUtilIterator> iter__ = [((id<JavaUtilSet>) nil_chk([((id<JavaUtilMap>) nil_chk([OrgOssPdfreporterFontBase14Font getLogicalFontNames])) entrySet])) iterator];
    while ([((id<JavaUtilIterator>) nil_chk(iter__)) hasNext]) {
      id<JavaUtilMap_Entry> logicalFontEntry = [((id<JavaUtilIterator>) nil_chk(iter__)) next];
      NSString *fontName = [((id<JavaUtilMap_Entry>) nil_chk(logicalFontEntry)) getValue];
      NSString *alias = [((id<JavaUtilMap_Entry>) nil_chk(logicalFontEntry)) getKey];
      [self addFontAliasWithNSString:fontName withNSString:alias withOrgOssPdfreporterFontIFont_FontStyleEnum:[OrgOssPdfreporterFontIFont_FontStyleEnum PLAIN]];
      [self addFontAliasWithNSString:fontName withNSString:alias withOrgOssPdfreporterFontIFont_FontStyleEnum:[OrgOssPdfreporterFontIFont_FontStyleEnum BOLD]];
      [self addFontAliasWithNSString:fontName withNSString:alias withOrgOssPdfreporterFontIFont_FontStyleEnum:[OrgOssPdfreporterFontIFont_FontStyleEnum OBLIQUE]];
      [self addFontAliasWithNSString:fontName withNSString:alias withOrgOssPdfreporterFontIFont_FontStyleEnum:[OrgOssPdfreporterFontIFont_FontStyleEnum BOLD_OBLIQUE]];
    }
  }
}

- (void)addFontAliasWithNSString:(NSString *)fontName
                    withNSString:(NSString *)alias
withOrgOssPdfreporterFontIFont_FontStyleEnum:(OrgOssPdfreporterFontIFont_FontStyleEnum *)style {
  id<OrgOssPdfreporterFontIFont> font = [self getFontWithNSString:fontName withOrgOssPdfreporterFontIFont_FontStyleEnum:style];
  [self addFontWithOrgOssPdfreporterFontAbstractFontManager_FontKey:[[OrgOssPdfreporterFontAbstractFontManager_FontKey alloc] initWithNSString:alias withOrgOssPdfreporterFontIFont_FontStyleEnum:style] withOrgOssPdfreporterFontIFont:font];
}

- (void)addFontWithOrgOssPdfreporterFontAbstractFontManager_FontKey:(OrgOssPdfreporterFontAbstractFontManager_FontKey *)key
                                     withOrgOssPdfreporterFontIFont:(id<OrgOssPdfreporterFontIFont>)font {
  (void) [((id<JavaUtilMap>) nil_chk(fontCache_)) putWithId:key withId:font];
  if (![((id<JavaUtilList>) nil_chk(familyNames_)) containsWithId:[((OrgOssPdfreporterFontAbstractFontManager_FontKey *) nil_chk(key)) getName]]) {
    [((id<JavaUtilList>) nil_chk(familyNames_)) addWithId:[((OrgOssPdfreporterFontAbstractFontManager_FontKey *) nil_chk(key)) getName]];
  }
}

- (id<JavaUtilList>)getFontFamilyNames {
  return familyNames_;
}

- (id<JavaUtilCollection>)getLoadedFonts {
  return [((id<JavaUtilMap>) nil_chk(fontCache_)) values];
}

- (id<OrgOssPdfreporterFontIFont>)loadFontWithNSString:(NSString *)filePath
                                          withNSString:(NSString *)encoding
                                              withBOOL:(BOOL)embed
                                          withNSString:(NSString *)asName
          withOrgOssPdfreporterFontIFont_FontStyleEnum:(OrgOssPdfreporterFontIFont_FontStyleEnum *)asStyle {
  OrgOssPdfreporterFontAbstractFontManager_FontKey *key = [[OrgOssPdfreporterFontAbstractFontManager_FontKey alloc] initWithNSString:asName withOrgOssPdfreporterFontIFont_FontStyleEnum:asStyle];
  if (![((id<JavaUtilMap>) nil_chk(fontCache_)) containsKeyWithId:key]) {
    [self addFontWithOrgOssPdfreporterFontAbstractFontManager_FontKey:key withOrgOssPdfreporterFontIFont:[[OrgOssPdfreporterFontFontProxy alloc] initWithOrgOssPdfreporterFontAbstractFontManager:self withNSString:filePath withNSString:encoding withBOOL:embed withNSString:asName withOrgOssPdfreporterFontIFont_FontStyleEnum:asStyle]];
    [((JavaUtilLoggingLogger *) nil_chk(OrgOssPdfreporterFontAbstractFontManager_logger_)) finestWithNSString:[NSString stringWithFormat:@"Caching font: %@, Style: %@", filePath, asStyle]];
  }
  else {
    [((JavaUtilLoggingLogger *) nil_chk(OrgOssPdfreporterFontAbstractFontManager_logger_)) finestWithNSString:[NSString stringWithFormat:@"Loading font from cache: %@, Style: %@", filePath, asStyle]];
  }
  return [((id<JavaUtilMap>) nil_chk(fontCache_)) getWithId:key];
}

- (id<OrgOssPdfreporterFontIFont>)getFontWithNSString:(NSString *)name
         withOrgOssPdfreporterFontIFont_FontStyleEnum:(OrgOssPdfreporterFontIFont_FontStyleEnum *)style {
  OrgOssPdfreporterFontAbstractFontManager_FontKey *key = [[OrgOssPdfreporterFontAbstractFontManager_FontKey alloc] initWithNSString:name withOrgOssPdfreporterFontIFont_FontStyleEnum:style];
  return [((id<JavaUtilMap>) nil_chk(fontCache_)) getWithId:key];
}

- (id<OrgOssPdfreporterFontIFont>)findFontWithNSString:(NSString *)name
          withOrgOssPdfreporterFontIFont_FontStyleEnum:(OrgOssPdfreporterFontIFont_FontStyleEnum *)style {
  id<OrgOssPdfreporterFontIFont> found = [self getFontWithNSString:name withOrgOssPdfreporterFontIFont_FontStyleEnum:style];
  if (found == nil) {
    found = [OrgOssPdfreporterFontBase14Font findFontWithOrgOssPdfreporterFontAbstractFontManager:self withNSString:name withOrgOssPdfreporterFontIFont_FontStyleEnum:style];
  }
  return found;
}

- (id<OrgOssPdfreporterFontIFont>)getModifiedFontWithOrgOssPdfreporterFontIFont:(id<OrgOssPdfreporterFontIFont>)baseFont
                                                                      withFloat:(float)size
                              withOrgOssPdfreporterFontIFont_FontDecorationEnum:(OrgOssPdfreporterFontIFont_FontDecorationEnum *)decoration {
  return [[OrgOssPdfreporterFontDecoratedFont alloc] initWithOrgOssPdfreporterFontIFont:baseFont withFloat:size withOrgOssPdfreporterFontIFont_FontDecorationEnum:decoration];
}

- (void)dispose {
  [((id<JavaUtilMap>) nil_chk(fontCache_)) clear];
  [self disposeInternal];
  [self registerPdfInternalFonts];
}

- (void)getWithNSString:(NSString *)key {
}

- (void)putWithNSString:(NSString *)key
withOrgOssPdfreporterRegistryISessionObject:(id<OrgOssPdfreporterRegistryISessionObject>)value {
}

- (void)removeWithNSString:(NSString *)key {
}

- (NSString *)loadFontInternalWithNSString:(NSString *)filePath
                              withNSString:(NSString *)encoding
                                  withBOOL:(BOOL)embed {
  // can't call an abstract method
  [self doesNotRecognizeSelector:_cmd];
  return 0;
}

- (id<OrgOssPdfreporterFontIFontPeer>)getFontInternalWithNSString:(NSString *)fontname {
  // can't call an abstract method
  [self doesNotRecognizeSelector:_cmd];
  return 0;
}

- (void)disposeInternal {
  // can't call an abstract method
  [self doesNotRecognizeSelector:_cmd];
}

+ (void)initialize {
  if (self == [OrgOssPdfreporterFontAbstractFontManager class]) {
    OrgOssPdfreporterFontAbstractFontManager_logger_ = [JavaUtilLoggingLogger getLoggerWithNSString:[[IOSClass classWithClass:[OrgOssPdfreporterFontAbstractFontManager class]] getName]];
  }
}

- (void)copyAllPropertiesTo:(id)copy {
  [super copyAllPropertiesTo:copy];
  OrgOssPdfreporterFontAbstractFontManager *typedCopy = (OrgOssPdfreporterFontAbstractFontManager *) copy;
  typedCopy.fontCache = fontCache_;
  typedCopy.familyNames = familyNames_;
}

@end
@implementation OrgOssPdfreporterFontAbstractFontManager_FontKey

@synthesize name = name_;
@synthesize style = style_;

- (id)initOrgOssPdfreporterFontAbstractFontManager_FontKeyWithNSString:(NSString *)name
                          withOrgOssPdfreporterFontIFont_FontStyleEnum:(OrgOssPdfreporterFontIFont_FontStyleEnum *)style {
  if ((self = [super init])) {
    self.name = [((NSString *) nil_chk(name)) lowercaseString];
    self.style = style;
  }
  return self;
}

- (id)initWithNSString:(NSString *)name
withOrgOssPdfreporterFontIFont_FontStyleEnum:(OrgOssPdfreporterFontIFont_FontStyleEnum *)style {
  return [self initOrgOssPdfreporterFontAbstractFontManager_FontKeyWithNSString:name withOrgOssPdfreporterFontIFont_FontStyleEnum:style];
}

- (id)initWithOrgOssPdfreporterFontIFont:(id<OrgOssPdfreporterFontIFont>)font {
  return [self initOrgOssPdfreporterFontAbstractFontManager_FontKeyWithNSString:[((id<OrgOssPdfreporterFontIFont>) nil_chk(font)) getName] withOrgOssPdfreporterFontIFont_FontStyleEnum:[((id<OrgOssPdfreporterFontIFont>) nil_chk(font)) getStyle]];
}

- (NSString *)getName {
  return name_;
}

- (NSUInteger)hash {
  int prime = 31;
  int result = 1;
  result = prime * result + ((name_ == nil) ? 0 : [((NSString *) nil_chk(name_)) hash]);
  result = prime * result + ((style_ == nil) ? 0 : [((OrgOssPdfreporterFontIFont_FontStyleEnum *) nil_chk(style_)) hash]);
  return result;
}

- (BOOL)isEqual:(id)obj {
  if (self == obj) return YES;
  if (obj == nil) return NO;
  if ([self getClass] != [nil_chk(obj) getClass]) return NO;
  OrgOssPdfreporterFontAbstractFontManager_FontKey *other = (OrgOssPdfreporterFontAbstractFontManager_FontKey *) obj;
  if (name_ == nil) {
    if (((OrgOssPdfreporterFontAbstractFontManager_FontKey *) nil_chk(other)).name != nil) return NO;
  }
  else if (![name_ isEqual:((OrgOssPdfreporterFontAbstractFontManager_FontKey *) nil_chk(other)).name]) return NO;
  if (style_ != ((OrgOssPdfreporterFontAbstractFontManager_FontKey *) nil_chk(other)).style) return NO;
  return YES;
}

- (void)copyAllPropertiesTo:(id)copy {
  [super copyAllPropertiesTo:copy];
  OrgOssPdfreporterFontAbstractFontManager_FontKey *typedCopy = (OrgOssPdfreporterFontAbstractFontManager_FontKey *) copy;
  typedCopy.name = name_;
  typedCopy.style = style_;
}

@end
