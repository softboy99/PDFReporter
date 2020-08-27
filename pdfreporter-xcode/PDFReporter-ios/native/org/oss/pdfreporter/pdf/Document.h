//
//  Document.h
//  JasperReportiOS
//
//  Created by Fr3e on 5/27/13.
//  Copyright (c) 2013 Digireport. All rights reserved.
//

#import <Foundation/Foundation.h>
#include "org/oss/pdfreporter/pdf/AbstractDocument.h"
#import <libHaru/libHaru.h>


@interface OrgOssPdfreporterPdfDocument : OrgOssPdfreporterPdfAbstractDocument 

- (int)convertPermissions:(int)permission;

#pragma mark Package-Private

- (instancetype)initWithNSString:(NSString *)_filename;
- (instancetype)initWithFileName:(NSString *)_filename width:(float)_widht height:(float)_height;
@end

J2OBJC_EMPTY_STATIC_INIT(OrgOssPdfreporterPdfDocument)

FOUNDATION_EXPORT void OrgOssPdfreporterPdfDocument_initWithNSString_(OrgOssPdfreporterPdfDocument *self, NSString *_filename);
FOUNDATION_EXPORT void OrgOssPdfreporterPdfDocument_initWithNSString_withFloat_withFloat_(OrgOssPdfreporterPdfDocument *self, NSString *_filename, float _width, float _height);

FOUNDATION_EXPORT OrgOssPdfreporterPdfDocument *new_OrgOssPdfreporterPdfDocument_initWithNSString_(NSString *_filename) NS_RETURNS_RETAINED;
FOUNDATION_EXPORT OrgOssPdfreporterPdfDocument *new_OrgOssPdfreporterPdfDocument_initWithNSString_withFloat_withFloat_(NSString *_filename, float _width, float _height) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT OrgOssPdfreporterPdfDocument *create_OrgOssPdfreporterPdfDocument_initWithNSString_(NSString *_filename);
FOUNDATION_EXPORT OrgOssPdfreporterPdfDocument *create_OrgOssPdfreporterPdfDocument_initWithNSString_withFloat_withFloat_(NSString *_filename, float _width, float _height);

J2OBJC_TYPE_LITERAL_HEADER(OrgOssPdfreporterPdfDocument)
