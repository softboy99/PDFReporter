//
//  URL.h
//  JasperReportiOS
//
//  Created by Martin Krasnočka on 5/10/13.
//  Copyright (c) 2013 Digireport. All rights reserved.
//

#import <Foundation/Foundation.h>
#include "org/oss/pdfreporter/net/IURL.h"

@interface OrgOssPdfreporterNetURL : NSObject <OrgOssPdfreporterNetIURL>

#pragma mark Package-Private

-(id)initWithNSString:(NSString *)urlString;

@end

J2OBJC_EMPTY_STATIC_INIT(OrgOssPdfreporterNetURL)

FOUNDATION_EXPORT void OrgOssPdfreporterNetURL_initWithNSString_(OrgOssPdfreporterNetURL *self, NSString *url);

FOUNDATION_EXPORT OrgOssPdfreporterNetURL *new_OrgOssPdfreporterNetURL_initWithNSString_(NSString *url) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT OrgOssPdfreporterNetURL *create_OrgOssPdfreporterNetURL_initWithNSString_(NSString *url);

J2OBJC_TYPE_LITERAL_HEADER(OrgOssPdfreporterNetURL)
