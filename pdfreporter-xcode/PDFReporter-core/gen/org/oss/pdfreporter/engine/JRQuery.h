//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: pdfreporter-core/src/org/oss/pdfreporter/engine/JRQuery.java
//
//  Created by kendra on 9/27/13.
//

#ifndef _OrgOssPdfreporterEngineJRQuery_H_
#define _OrgOssPdfreporterEngineJRQuery_H_

@class IOSObjectArray;

#import "JreEmulation.h"
#include "org/oss/pdfreporter/engine/JRCloneable.h"

@protocol OrgOssPdfreporterEngineJRQuery < OrgOssPdfreporterEngineJRCloneable, NSObject, JavaObject >
- (IOSObjectArray *)getChunks;
- (NSString *)getText;
- (NSString *)getLanguage;
- (id)copyWithZone:(NSZone *)zone;
@end

#endif // _OrgOssPdfreporterEngineJRQuery_H_
