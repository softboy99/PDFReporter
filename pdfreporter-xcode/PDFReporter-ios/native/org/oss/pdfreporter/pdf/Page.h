//
//  Page.h
//  JasperReportiOS
//
//  Created by Fr3e on 5/27/13.
//  Copyright (c) 2013 Digireport. All rights reserved.
//

#import <Foundation/Foundation.h>
#include "org/oss/pdfreporter/pdf/IPage.h"
#import <libHaru/libHaru.h>
#import "Document.h"
#include "org/oss/pdfreporter/font/IFont.h"

@interface Page : NSObject < OrgOssPdfreporterPdfIPage > {
    HPDF_Page hpdf_page;
    HPDF_Doc hpdf_doc;
    int textPosX, textPosY;
}

- (id)initWithWidth:(int)width height:(int)height document:(OrgOssPdfreporterPdfDocument*)document;
- (id)initWithWidth:(int)width height:(int)height orientation:(OrgOssPdfreporterPdfIDocument_PageOrientation *)orientation document:(OrgOssPdfreporterPdfDocument*)document;
@end
