//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: pdfreporter-core/src/org/oss/pdfreporter/engine/util/DelegatePropertiesHolder.java
//
//  Created by kendra on 9/27/13.
//

#ifndef _OrgOssPdfreporterEngineUtilDelegatePropertiesHolder_H_
#define _OrgOssPdfreporterEngineUtilDelegatePropertiesHolder_H_

@class OrgOssPdfreporterEngineJRPropertiesMap;

#import "JreEmulation.h"
#include "org/oss/pdfreporter/engine/JRPropertiesHolder.h"

@interface OrgOssPdfreporterEngineUtilDelegatePropertiesHolder : NSObject < OrgOssPdfreporterEngineJRPropertiesHolder > {
 @public
  id<OrgOssPdfreporterEngineJRPropertiesHolder> propertiesHolder_;
  id<OrgOssPdfreporterEngineJRPropertiesHolder> parentProperties_;
}

@property (nonatomic, strong) id<OrgOssPdfreporterEngineJRPropertiesHolder> propertiesHolder;
@property (nonatomic, strong) id<OrgOssPdfreporterEngineJRPropertiesHolder> parentProperties;

- (id)initWithOrgOssPdfreporterEngineJRPropertiesHolder:(id<OrgOssPdfreporterEngineJRPropertiesHolder>)propertiesHolder
          withOrgOssPdfreporterEngineJRPropertiesHolder:(id<OrgOssPdfreporterEngineJRPropertiesHolder>)parentProperties;
- (BOOL)hasProperties;
- (OrgOssPdfreporterEngineJRPropertiesMap *)getPropertiesMap;
- (id<OrgOssPdfreporterEngineJRPropertiesHolder>)getParentProperties;
@end

#endif // _OrgOssPdfreporterEngineUtilDelegatePropertiesHolder_H_
