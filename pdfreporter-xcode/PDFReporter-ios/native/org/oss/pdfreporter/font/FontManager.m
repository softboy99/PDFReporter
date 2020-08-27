//
//  FontManager.m
//  JasperReportiOS
//
//  Created by Fr3e on 6/5/13.
//  Copyright (c) 2013 Digireport. All rights reserved.
//

#import "FontManager.h"
#import <libHaru/libHaru.h>
#import "HpdfDocBox.h"
#import "Font.h"
#include "org/oss/pdfreporter/registry/ApiRegistry.h"
#include "org/oss/pdfreporter/font/FontFactory.h"
#include "J2ObjC_source.h"

@implementation OrgOssPdfreporterFontFontManager

J2OBJC_IGNORE_DESIGNATED_BEGIN
- (instancetype)init {
    OrgOssPdfreporterFontFontManager_init(self);
    return self;
}
J2OBJC_IGNORE_DESIGNATED_END

- (NSString *)loadFontInternalWithNSString:(NSString *)filePath withNSString:(NSString *)encoding withBoolean:(jboolean)embed {
    if(filePath == nil) return nil;
    
    HpdfDocBox *docBox = [HpdfDocBox GetDocBoxFromSession:[[OrgOssPdfreporterRegistryApiRegistry getFontFactory] getSession]];
    HPDF_Doc hpdf_doc = [docBox getHpdfDoc];
    
    const char *cPath = [filePath UTF8String];
    const char *cName = HPDF_LoadTTFontFromFile(hpdf_doc, cPath, embed);
    if(cName == nil) return nil;
    NSString *fontName = [NSString stringWithCString:cName encoding:NSUTF8StringEncoding];
    // @"UTF-8" encoding @"FontSpecific"
    Font *font = [[Font alloc] initWithFontName:fontName style:OrgOssPdfreporterFontIFont_FontStyle_get_PLAIN() size:1 encoding: @"UTF-8" manager:self];
    
    [fontDict setObject:font forKey:fontName];
    
    return fontName;
}

- (id<OrgOssPdfreporterFontIFont>)getFontInternalWithNSString:(NSString *)fontname {
    if(fontname == nil) return nil;
    id<OrgOssPdfreporterFontIFont> font = [fontDict objectForKey:fontname];
    if(font == nil) {
        font = [[Font alloc] initWithFontName:fontname style:OrgOssPdfreporterFontIFont_FontStyle_get_PLAIN() size:1 encoding:@"FontSpecific" manager:self];
        [fontDict setObject:font forKey:fontname];
    }
    return font;
}

- (void)disposeInternal {
    
}

@end

void OrgOssPdfreporterFontFontManager_init(OrgOssPdfreporterFontFontManager *self) {
    OrgOssPdfreporterFontAbstractFontManager_init(self);
    self->fontDict = [NSMutableDictionary dictionary];
}

OrgOssPdfreporterFontFontManager *new_OrgOssPdfreporterFontFontManager_init() {
    OrgOssPdfreporterFontFontManager *self = [OrgOssPdfreporterFontFontManager alloc];
    OrgOssPdfreporterFontFontManager_init(self);
    return self;
}

OrgOssPdfreporterFontFontManager *create_OrgOssPdfreporterFontFontManager_init() {
    return new_OrgOssPdfreporterFontFontManager_init();
}

J2OBJC_CLASS_TYPE_LITERAL_SOURCE(OrgOssPdfreporterFontFontManager)
