//
//  Font.h
//  JasperReportiOS
//
//  Created by Fr3e on 6/5/13.
//  Copyright (c) 2013 Digireport. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <libHaru/libHaru.h>
#include "org/oss/pdfreporter/font/IFont.h"

@class OrgOssPdfreporterFontFontManager;

@interface Font : NSObject <OrgOssPdfreporterFontIFont> {
    OrgOssPdfreporterFontIFont_FontStyle *mStyle;
    NSString *mName;
    NSString *mEncoding;
    float mSize;
    OrgOssPdfreporterFontFontManager *mManager;
}

- (id)initWithFontName:(NSString*)name style:(OrgOssPdfreporterFontIFont_FontStyle*)style size:(float)size encoding:(NSString*)encoding manager:(OrgOssPdfreporterFontFontManager*)manager;

@end
