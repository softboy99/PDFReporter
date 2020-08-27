//
//  ImageManager.h
//  JasperReportiOS
//
//  Created by Fr3e on 5/31/13.
//  Copyright (c) 2013 Digireport. All rights reserved.
//

#import <Foundation/Foundation.h>
#include "org/oss/pdfreporter/image/AbstractImageManager.h"
#include "J2ObjC_header.h"

@interface OrgOssPdfreporterImageImageManager : OrgOssPdfreporterImageAbstractImageManager

#pragma mark Package-Private

- (instancetype)init;

@end

J2OBJC_EMPTY_STATIC_INIT(OrgOssPdfreporterImageImageManager)

FOUNDATION_EXPORT void OrgOssPdfreporterImageImageManager_init(OrgOssPdfreporterImageImageManager *self);

FOUNDATION_EXPORT OrgOssPdfreporterImageImageManager *new_OrgOssPdfreporterImageImageManager_init() NS_RETURNS_RETAINED;

FOUNDATION_EXPORT OrgOssPdfreporterImageImageManager *create_OrgOssPdfreporterImageImageManager_init();

J2OBJC_TYPE_LITERAL_HEADER(OrgOssPdfreporterImageImageManager)
