//
//  FontManager.h
//  JasperReportiOS
//
//  Created by Fr3e on 6/5/13.
//  Copyright (c) 2013 Digireport. All rights reserved.
//

#import <Foundation/Foundation.h>
#include "org/oss/pdfreporter/font/AbstractFontManager.h"

@interface OrgOssPdfreporterFontFontManager : OrgOssPdfreporterFontAbstractFontManager {
    @public
    NSMutableDictionary *fontDict;
}

#pragma mark Package-Private

- (instancetype)init;

@end

J2OBJC_EMPTY_STATIC_INIT(OrgOssPdfreporterFontFontManager)

FOUNDATION_EXPORT void OrgOssPdfreporterFontFontManager_init(OrgOssPdfreporterFontFontManager *self);

FOUNDATION_EXPORT OrgOssPdfreporterFontFontManager *new_OrgOssPdfreporterFontFontManager_init() NS_RETURNS_RETAINED;

FOUNDATION_EXPORT OrgOssPdfreporterFontFontManager *create_OrgOssPdfreporterFontFontManager_init();

J2OBJC_TYPE_LITERAL_HEADER(OrgOssPdfreporterFontFontManager)
