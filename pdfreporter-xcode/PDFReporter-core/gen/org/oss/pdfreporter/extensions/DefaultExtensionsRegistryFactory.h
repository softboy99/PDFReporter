//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: pdfreporter-core/src/org/oss/pdfreporter/extensions/DefaultExtensionsRegistryFactory.java
//
//  Created by kendra on 9/27/13.
//

#ifndef _OrgOssPdfreporterExtensionsDefaultExtensionsRegistryFactory_H_
#define _OrgOssPdfreporterExtensionsDefaultExtensionsRegistryFactory_H_

@class IOSClass;
@class OrgOssPdfreporterEngineJRPropertiesMap;
@protocol JavaUtilList;

#import "JreEmulation.h"
#include "org/oss/pdfreporter/extensions/ExtensionsRegistry.h"
#include "org/oss/pdfreporter/extensions/ExtensionsRegistryFactory.h"

@interface OrgOssPdfreporterExtensionsDefaultExtensionsRegistryFactory : NSObject < OrgOssPdfreporterExtensionsExtensionsRegistryFactory > {
}

+ (id<OrgOssPdfreporterExtensionsExtensionsRegistry>)defaultExtensionsRegistry;
- (id<OrgOssPdfreporterExtensionsExtensionsRegistry>)createRegistryWithNSString:(NSString *)registryId
                                     withOrgOssPdfreporterEngineJRPropertiesMap:(OrgOssPdfreporterEngineJRPropertiesMap *)properties;
- (id)init;
@end

@interface OrgOssPdfreporterExtensionsDefaultExtensionsRegistryFactory_$1 : NSObject < OrgOssPdfreporterExtensionsExtensionsRegistry > {
}

- (id<JavaUtilList>)getExtensionsWithIOSClass:(IOSClass *)extensionType;
- (id)init;
@end

#endif // _OrgOssPdfreporterExtensionsDefaultExtensionsRegistryFactory_H_
