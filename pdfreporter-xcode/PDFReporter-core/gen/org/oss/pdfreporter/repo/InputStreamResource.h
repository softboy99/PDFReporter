//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: pdfreporter-core/src/org/oss/pdfreporter/repo/InputStreamResource.java
//
//  Created by kendra on 9/27/13.
//

#ifndef _OrgOssPdfreporterRepoInputStreamResource_H_
#define _OrgOssPdfreporterRepoInputStreamResource_H_

@class JavaIoInputStream;

#import "JreEmulation.h"
#include "org/oss/pdfreporter/repo/ObjectResource.h"

@interface OrgOssPdfreporterRepoInputStreamResource : OrgOssPdfreporterRepoObjectResource {
}

- (JavaIoInputStream *)getInputStream;
- (void)setInputStreamWithJavaIoInputStream:(JavaIoInputStream *)inputStream;
- (id)init;
@end

#endif // _OrgOssPdfreporterRepoInputStreamResource_H_
