//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: pdfreporter-core/src/org/oss/pdfreporter/engine/base/JRBaseBoxLeftPen.java
//
//  Created by kendra on 9/27/13.
//

#ifndef _OrgOssPdfreporterEngineBaseJRBaseBoxLeftPen_H_
#define _OrgOssPdfreporterEngineBaseJRBaseBoxLeftPen_H_

@protocol OrgOssPdfreporterEngineJRLineBox;
@protocol OrgOssPdfreporterEngineJRPen;

#import "JreEmulation.h"
#include "org/oss/pdfreporter/engine/base/JRBaseBoxPen.h"

#define OrgOssPdfreporterEngineBaseJRBaseBoxLeftPen_serialVersionUID 10200

@interface OrgOssPdfreporterEngineBaseJRBaseBoxLeftPen : OrgOssPdfreporterEngineBaseJRBaseBoxPen {
}

- (id)initWithOrgOssPdfreporterEngineJRLineBox:(id<OrgOssPdfreporterEngineJRLineBox>)box;
- (id<OrgOssPdfreporterEngineJRPen>)getPenWithOrgOssPdfreporterEngineJRLineBox:(id<OrgOssPdfreporterEngineJRLineBox>)box;
@end

#endif // _OrgOssPdfreporterEngineBaseJRBaseBoxLeftPen_H_
