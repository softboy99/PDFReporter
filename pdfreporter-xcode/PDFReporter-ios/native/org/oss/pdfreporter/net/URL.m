//
//  URL.m
//  JasperReportiOS
//
//  Created by Martin Krasnočka on 5/10/13.
//  Copyright (c) 2013 Digireport. All rights reserved.
//

#import "URL.h"
#include "J2ObjC_source.h"

@interface OrgOssPdfreporterNetURL () {
    @public
    NSString *urlString;
}
@end

@implementation OrgOssPdfreporterNetURL

J2OBJC_IGNORE_DESIGNATED_BEGIN
-(instancetype)initWithNSString:(NSString *)_urlString
{
    OrgOssPdfreporterNetURL_initWithNSString_(self, _urlString);
    return self;
}
J2OBJC_IGNORE_DESIGNATED_END

- (JavaIoInputStream *)openStream
{
    return nil;
}

-(NSString *)description
{
    return self->urlString;
}

- (NSString *)getPath
{
    return self->urlString;
}

@end

void OrgOssPdfreporterNetURL_initWithNSString_(OrgOssPdfreporterNetURL *self, NSString *url)
{
    NSObject_init(self);
    self->urlString = url;
}

OrgOssPdfreporterNetURL *new_OrgOssPdfreporterNetURL_initWithNSString_(NSString *url)
{
    OrgOssPdfreporterNetURL *self = [OrgOssPdfreporterNetURL alloc];
    OrgOssPdfreporterNetURL_initWithNSString_(self, url);
    return self;
}

OrgOssPdfreporterNetURL *create_OrgOssPdfreporterNetURL_initWithNSString_(NSString *url)
{
    return new_OrgOssPdfreporterNetURL_initWithNSString_(url);
}
