//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: pdfreporter-core/src/org/oss/pdfreporter/engine/JRTextElement.java
//
//  Created by kendra on 9/27/13.
//

#ifndef _OrgOssPdfreporterEngineJRTextElement_H_
#define _OrgOssPdfreporterEngineJRTextElement_H_

#import "JreEmulation.h"
#include "org/oss/pdfreporter/engine/JRAlignment.h"
#include "org/oss/pdfreporter/engine/JRCommonText.h"
#include "org/oss/pdfreporter/engine/JRElement.h"
#include "org/oss/pdfreporter/engine/JRFont.h"

@protocol OrgOssPdfreporterEngineJRTextElement < OrgOssPdfreporterEngineJRElement, OrgOssPdfreporterEngineJRAlignment, OrgOssPdfreporterEngineJRFont, OrgOssPdfreporterEngineJRCommonText, NSObject, JavaObject >
- (id)copyWithZone:(NSZone *)zone;
@end

@interface OrgOssPdfreporterEngineJRTextElement : NSObject {
}
+ (NSString *)PROPERTY_PRINT_KEEP_FULL_TEXT;
+ (NSString *)PROPERTY_TRUNCATE_AT_CHAR;
+ (NSString *)PROPERTY_TRUNCATE_SUFFIX;
+ (NSString *)PROPERTY_SAVE_LINE_BREAKS;
@end

#endif // _OrgOssPdfreporterEngineJRTextElement_H_
