//
//  Document.m
//  JasperReportiOS
//
//  Created by Fr3e on 5/27/13.
//  Copyright (c) 2013 Digireport. All rights reserved.
//

#import "Page.h"
#import "HpdfDocBox.h"
#include "J2ObjC_source.h"
#import "Document.h"
#include "org/oss/pdfreporter/pdf/IEncryption.h"
#include "org/oss/pdfreporter/registry/ApiRegistry.h"
#include "org/oss/pdfreporter/pdf/PdfFactory.h"
#include "org/oss/pdfreporter/pdf/IDocument.h"

@interface OrgOssPdfreporterPdfDocument () {
@public
    NSString *filename;
    float document_width;
    float document_height;
    bool closed;
}
@end

@implementation OrgOssPdfreporterPdfDocument

J2OBJC_IGNORE_DESIGNATED_BEGIN
- (instancetype)initWithNSString:(NSString *)_filename {
    OrgOssPdfreporterPdfDocument_initWithNSString_(self, _filename);
    return self;
}

- (instancetype)initWithFileName:(NSString *)_filename width:(float)_widht height:(float)_height {
    OrgOssPdfreporterPdfDocument_initWithNSString_withFloat_withFloat_(self, _filename, _widht, _height);
    return self;
}
J2OBJC_IGNORE_DESIGNATED_END

- (HPDF_Doc)hpdfHelper {
    return [[HpdfDocBox GetDocBoxFromSession: [[OrgOssPdfreporterRegistryApiRegistry getPdfFactory] getSession]] getHpdfDoc];
}

- (void)setAuthorWithNSString:(NSString *)author {
    const char* cstring =  [author UTF8String];
    HPDF_SetInfoAttr([self hpdfHelper], HPDF_INFO_AUTHOR, cstring);
}

- (void)setCreatorWithNSString:(NSString *)creator {
    const char* cstring =  [creator UTF8String];
    HPDF_SetInfoAttr([self hpdfHelper], HPDF_INFO_CREATOR, cstring);
}

- (void)setTitleWithNSString:(NSString *)title {
    const char* cstring =  [title UTF8String];
    HPDF_SetInfoAttr([self hpdfHelper], HPDF_INFO_TITLE, cstring);
}

- (void)setSubjectWithNSString:(NSString *)subject {
    const char* cstring =  [subject UTF8String];
    HPDF_SetInfoAttr([self hpdfHelper], HPDF_INFO_SUBJECT, cstring);
}

- (void)setKeywordsWithNSString:(NSString *)keywords {
    const char* cstring =  [keywords UTF8String];
    HPDF_SetInfoAttr([self hpdfHelper], HPDF_INFO_KEYWORDS, cstring);
}

- (void)setCompressionWithBoolean:(jboolean)compress {
    HPDF_UINT mode = HPDF_COMP_NONE;
    if(compress) mode = HPDF_COMP_ALL;
    HPDF_SetCompressionMode([self hpdfHelper], mode);
}

- (void)setPdfVersionWithUnichar:(unichar)version_ {
    
}


- (void)setEncryptionWithOrgOssPdfreporterPdfIEncryption_KeyLength:(OrgOssPdfreporterPdfIEncryption_KeyLength *)keyLength
                                                     withNSString:(NSString *)userPassword withNSString:(NSString *)ownerPasswrod withInt:(int)permission {
    
    const char* cOwnerPass =  [ownerPasswrod UTF8String];
    const char* cUserPass =  [userPassword UTF8String];
    
    HPDF_EncryptMode mode = HPDF_ENCRYPT_R2;
    if(keyLength == OrgOssPdfreporterPdfIEncryption_KeyLength_get_ENCRYPTION_128()) mode = HPDF_ENCRYPT_R3;
    
    HPDF_SetPassword([self hpdfHelper], cOwnerPass, cUserPass);
    HPDF_SetEncryptionMode([self hpdfHelper], mode, 16);
    HPDF_SetPermission([self hpdfHelper], [self convertPermissions:permission]);
    
}

- (int)convertPermissions:(int)permission {
    int result = 0;
    if( permission & OrgOssPdfreporterPdfIDocument_PERMISSION_COPY) {
        result |= HPDF_ENABLE_COPY;
    }
    if( permission & OrgOssPdfreporterPdfIDocument_PERMISSION_EDIT) {
        result |= HPDF_ENABLE_EDIT;
    }
    if( permission & OrgOssPdfreporterPdfIDocument_PERMISSION_EDIT_ALL) {
        result |= HPDF_ENABLE_EDIT_ALL;
    }
    if( permission & OrgOssPdfreporterPdfIDocument_PERMISSION_PRINT) {
        result |= HPDF_ENABLE_PRINT;
    }
    if( permission & OrgOssPdfreporterPdfIDocument_PERMISSION_READ) {
        result |= HPDF_ENABLE_READ;
    }
    return result;
}

- (void)setPdfConformanceWithOrgOssPdfreporterPdfIDocument_ConformanceLevel:(OrgOssPdfreporterPdfIDocument_ConformanceLevel *)level {
    HPDF_PDFAType type = HPDF_PDFA_1A;
    if (level == OrgOssPdfreporterPdfIDocument_ConformanceLevel_get_PDF_1B()) type = HPDF_PDFA_1B;
    
    HPDF_PDFA_SetPDFAConformance([self hpdfHelper], type);
}

- (void)open {

    // set some metadata lock??
    // no need in haru
}

- (id<OrgOssPdfreporterPdfIPage>)newPage {
    Page *page = [[Page alloc] initWithWidth:document_width height:document_height document:self];
    return page;
}

- (id<OrgOssPdfreporterPdfIPage>)newPageWithOrgOssPdfreporterPdfIDocument_PageOrientation:(OrgOssPdfreporterPdfIDocument_PageOrientation *)orientation
                                                                            withInt:(int)width withInt:(int)height {
    Page *page = [[Page alloc] initWithWidth:width height:height orientation:orientation document:self];
    return page;
}

- (void)close {
    if(!closed)
    {
        closed= YES;
        const char* cFilename =  [filename UTF8String];
        HPDF_SaveToFile([self hpdfHelper], cFilename);
    }
}

- (void)registerTrueTypeFontWithNSString:(NSString *)font withBoolean:(jboolean)embed {
    
}

- (void)registerTrueTypeFontsWithNSString:(NSString *)directory withBoolean:(jboolean)embed {
}
@end

void OrgOssPdfreporterPdfDocument_initWithNSString_(OrgOssPdfreporterPdfDocument *self, NSString *_filename)
{
    OrgOssPdfreporterPdfDocument_initWithNSString_withFloat_withFloat_(self, _filename, -1.0f, -1.0f);
}

void OrgOssPdfreporterPdfDocument_initWithNSString_withFloat_withFloat_(OrgOssPdfreporterPdfDocument *self, NSString *_filename, float _width, float _height)
{
    OrgOssPdfreporterPdfAbstractDocument_init(self);
    self->filename = _filename;
    self->document_width = _width;
    self->document_height = _height;
}

OrgOssPdfreporterPdfDocument *new_OrgOssPdfreporterPdfDocument_initWithNSString_(NSString *_filename)
{
    OrgOssPdfreporterPdfDocument *self = [OrgOssPdfreporterPdfDocument alloc];
    OrgOssPdfreporterPdfDocument_initWithNSString_(self, _filename);
    return self;
}

OrgOssPdfreporterPdfDocument *new_OrgOssPdfreporterPdfDocument_initWithNSString_withFloat_withFloat_(NSString *_filename, float _width, float _height)
{
    OrgOssPdfreporterPdfDocument *self = [OrgOssPdfreporterPdfDocument alloc];
    OrgOssPdfreporterPdfDocument_initWithNSString_withFloat_withFloat_(self, _filename, _width, _height);
    return self;
}

OrgOssPdfreporterPdfDocument *create_OrgOssPdfreporterPdfDocument_initWithNSString_(NSString *_filename)
{
    return new_OrgOssPdfreporterPdfDocument_initWithNSString_(_filename);
}

OrgOssPdfreporterPdfDocument *create_OrgOssPdfreporterPdfDocument_initWithNSString_withFloat_withFloat_(NSString *_filename, float _width, float _height)
{
    return new_OrgOssPdfreporterPdfDocument_initWithNSString_withFloat_withFloat_(_filename, _width, _height);
}
