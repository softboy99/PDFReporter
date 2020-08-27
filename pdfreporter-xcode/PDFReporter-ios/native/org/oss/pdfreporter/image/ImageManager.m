//
//  ImageManager.m
//  JasperReportiOS
//
//  Created by Fr3e on 5/31/13.
//  Copyright (c) 2013 Digireport. All rights reserved.
//

#import "ImageManager.h"
#import "Image.h"
#include "J2ObjC_source.h"
#include "org/oss/pdfreporter/net/IURL.h"

@implementation OrgOssPdfreporterImageImageManager

J2OBJC_IGNORE_DESIGNATED_BEGIN
- (instancetype)init {
    OrgOssPdfreporterImageImageManager_init(self);
    return self;
}
J2OBJC_IGNORE_DESIGNATED_END

- (id<OrgOssPdfreporterImageIImage>)loadImageInternalWithNSString:(NSString *)filePath
                                                   withFloat:(float)quality
                                                   withFloat:(float)scale_ {  
    id<OrgOssPdfreporterImageIImage> image = nil;
    if(quality>0 && scale_>0) {
        image = [[Image alloc] initWithRecompressedFile:filePath quality:quality scale:scale_ manager:self];
    }
    else {
        image = [[Image alloc] initWithFile:filePath manager:self];
    }
    return image;
}

- (id<OrgOssPdfreporterImageIImage>)loadImageWithJavaIoInputStream:(JavaIoInputStream *)imageStream {
  	return [[InputStreamImage alloc] initWithJavaIoInputStream:imageStream manager:self];
}

- (id<OrgOssPdfreporterImageIImage>)loadImageWithOrgOssPdfreporterNetIURL:(id<OrgOssPdfreporterNetIURL>)fileURL {
    JavaIoInputStream *is = [fileURL openStream];
    return [self loadImageWithJavaIoInputStream:is];
}

- (void)disposeInternal {
}

@end

void OrgOssPdfreporterImageImageManager_init(OrgOssPdfreporterImageImageManager *self) {
    OrgOssPdfreporterImageAbstractImageManager_init(self);
}

OrgOssPdfreporterImageImageManager *new_OrgOssPdfreporterImageImageManager_init() {
    OrgOssPdfreporterImageImageManager *self = [OrgOssPdfreporterImageImageManager alloc];
    OrgOssPdfreporterImageImageManager_init(self);
    return self;
}

OrgOssPdfreporterImageImageManager *create_OrgOssPdfreporterImageImageManager_init() {
    return new_OrgOssPdfreporterImageImageManager_init();
}

J2OBJC_CLASS_TYPE_LITERAL_SOURCE(OrgOssPdfreporterImageImageManager)
