//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: pdfreporter-core/src/org/oss/pdfreporter/engine/type/PenEnum.java
//
//  Created by kendra on 9/27/13.
//

#ifndef _OrgOssPdfreporterEngineTypePenEnum_H_
#define _OrgOssPdfreporterEngineTypePenEnum_H_

@class JavaLangByte;

#import "JreEmulation.h"
#include "java/lang/Enum.h"
#include "org/oss/pdfreporter/engine/type/JREnum.h"

#define OrgOssPdfreporterEngineTypePenEnumEnum_serialVersionUID 10200

typedef enum {
  OrgOssPdfreporterEngineTypePenEnum_NONE = 0,
  OrgOssPdfreporterEngineTypePenEnum_ONE_POINT = 1,
  OrgOssPdfreporterEngineTypePenEnum_TWO_POINT = 2,
  OrgOssPdfreporterEngineTypePenEnum_FOUR_POINT = 3,
  OrgOssPdfreporterEngineTypePenEnum_DOTTED = 4,
  OrgOssPdfreporterEngineTypePenEnum_THIN = 5,
} OrgOssPdfreporterEngineTypePenEnum;

@interface OrgOssPdfreporterEngineTypePenEnumEnum : JavaLangEnum < NSCopying, OrgOssPdfreporterEngineTypeJREnum > {
 @public
  char value_;
  NSString *name_PenEnum_;
}
@property (nonatomic, assign) char value;
@property (nonatomic, copy) NSString *name_PenEnum;

+ (OrgOssPdfreporterEngineTypePenEnumEnum *)NONE;
+ (OrgOssPdfreporterEngineTypePenEnumEnum *)ONE_POINT;
+ (OrgOssPdfreporterEngineTypePenEnumEnum *)TWO_POINT;
+ (OrgOssPdfreporterEngineTypePenEnumEnum *)FOUR_POINT;
+ (OrgOssPdfreporterEngineTypePenEnumEnum *)DOTTED;
+ (OrgOssPdfreporterEngineTypePenEnumEnum *)THIN;
+ (IOSObjectArray *)values;
+ (OrgOssPdfreporterEngineTypePenEnumEnum *)valueOfWithNSString:(NSString *)name;
- (id)copyWithZone:(NSZone *)zone;
- (id)initWithChar:(char)value
      withNSString:(NSString *)enumName
      withNSString:(NSString *)name
           withInt:(int)ordinal;
- (JavaLangByte *)getValueByte;
- (char)getValue;
- (NSString *)getName;
+ (OrgOssPdfreporterEngineTypePenEnumEnum *)getByNameWithNSString:(NSString *)enumName;
+ (OrgOssPdfreporterEngineTypePenEnumEnum *)getByValueWithJavaLangByte:(JavaLangByte *)value;
+ (OrgOssPdfreporterEngineTypePenEnumEnum *)getByValueWithChar:(char)value;
@end

#endif // _OrgOssPdfreporterEngineTypePenEnum_H_
