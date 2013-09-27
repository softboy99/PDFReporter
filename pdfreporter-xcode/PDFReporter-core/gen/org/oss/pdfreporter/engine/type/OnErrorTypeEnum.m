//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: pdfreporter-core/src/org/oss/pdfreporter/engine/type/OnErrorTypeEnum.java
//
//  Created by kendra on 9/27/13.
//

#include "IOSClass.h"
#include "IOSObjectArray.h"
#include "java/lang/Byte.h"
#include "java/lang/IllegalArgumentException.h"
#include "org/oss/pdfreporter/engine/type/EnumUtil.h"
#include "org/oss/pdfreporter/engine/type/JREnum.h"
#include "org/oss/pdfreporter/engine/type/OnErrorTypeEnum.h"


static OrgOssPdfreporterEngineTypeOnErrorTypeEnumEnum *OrgOssPdfreporterEngineTypeOnErrorTypeEnumEnum_ERROR;
static OrgOssPdfreporterEngineTypeOnErrorTypeEnumEnum *OrgOssPdfreporterEngineTypeOnErrorTypeEnumEnum_BLANK;
static OrgOssPdfreporterEngineTypeOnErrorTypeEnumEnum *OrgOssPdfreporterEngineTypeOnErrorTypeEnumEnum_ICON;
IOSObjectArray *OrgOssPdfreporterEngineTypeOnErrorTypeEnumEnum_values;

@implementation OrgOssPdfreporterEngineTypeOnErrorTypeEnumEnum

+ (OrgOssPdfreporterEngineTypeOnErrorTypeEnumEnum *)ERROR {
  return OrgOssPdfreporterEngineTypeOnErrorTypeEnumEnum_ERROR;
}
+ (OrgOssPdfreporterEngineTypeOnErrorTypeEnumEnum *)BLANK {
  return OrgOssPdfreporterEngineTypeOnErrorTypeEnumEnum_BLANK;
}
+ (OrgOssPdfreporterEngineTypeOnErrorTypeEnumEnum *)ICON {
  return OrgOssPdfreporterEngineTypeOnErrorTypeEnumEnum_ICON;
}

- (id)copyWithZone:(NSZone *)zone {
  return self;
}

@synthesize value = value_;
@synthesize name_OnErrorTypeEnum = name_OnErrorTypeEnum_;

- (id)initWithChar:(char)value
      withNSString:(NSString *)enumName
      withNSString:(NSString *)name
           withInt:(int)ordinal {
  if ((self = [super initWithNSString:name withInt:ordinal])) {
    self.value = value;
    self.name_OnErrorTypeEnum = enumName;
  }
  return self;
}

- (JavaLangByte *)getValueByte {
  return [[JavaLangByte alloc] initWithChar:value_];
}

- (char)getValue {
  return value_;
}

- (NSString *)getName {
  return name_OnErrorTypeEnum_;
}

+ (OrgOssPdfreporterEngineTypeOnErrorTypeEnumEnum *)getByNameWithNSString:(NSString *)enumName {
  return (OrgOssPdfreporterEngineTypeOnErrorTypeEnumEnum *) [OrgOssPdfreporterEngineTypeEnumUtil getByNameWithOrgOssPdfreporterEngineTypeJREnumArray:[OrgOssPdfreporterEngineTypeOnErrorTypeEnumEnum values] withNSString:enumName];
}

+ (OrgOssPdfreporterEngineTypeOnErrorTypeEnumEnum *)getByValueWithJavaLangByte:(JavaLangByte *)value {
  return (OrgOssPdfreporterEngineTypeOnErrorTypeEnumEnum *) [OrgOssPdfreporterEngineTypeEnumUtil getByValueWithOrgOssPdfreporterEngineTypeJREnumArray:[OrgOssPdfreporterEngineTypeOnErrorTypeEnumEnum values] withJavaLangByte:value];
}

+ (OrgOssPdfreporterEngineTypeOnErrorTypeEnumEnum *)getByValueWithChar:(char)value {
  return [OrgOssPdfreporterEngineTypeOnErrorTypeEnumEnum getByValueWithJavaLangByte:[[JavaLangByte alloc] initWithChar:value]];
}

+ (void)initialize {
  if (self == [OrgOssPdfreporterEngineTypeOnErrorTypeEnumEnum class]) {
    OrgOssPdfreporterEngineTypeOnErrorTypeEnumEnum_ERROR = [[OrgOssPdfreporterEngineTypeOnErrorTypeEnumEnum alloc] initWithChar:(char) 1 withNSString:@"Error" withNSString:@"OrgOssPdfreporterEngineTypeOnErrorType_ERROR" withInt:0];
    OrgOssPdfreporterEngineTypeOnErrorTypeEnumEnum_BLANK = [[OrgOssPdfreporterEngineTypeOnErrorTypeEnumEnum alloc] initWithChar:(char) 2 withNSString:@"Blank" withNSString:@"OrgOssPdfreporterEngineTypeOnErrorType_BLANK" withInt:1];
    OrgOssPdfreporterEngineTypeOnErrorTypeEnumEnum_ICON = [[OrgOssPdfreporterEngineTypeOnErrorTypeEnumEnum alloc] initWithChar:(char) 3 withNSString:@"Icon" withNSString:@"OrgOssPdfreporterEngineTypeOnErrorType_ICON" withInt:2];
    OrgOssPdfreporterEngineTypeOnErrorTypeEnumEnum_values = [[IOSObjectArray alloc] initWithObjects:(id[]){ OrgOssPdfreporterEngineTypeOnErrorTypeEnumEnum_ERROR, OrgOssPdfreporterEngineTypeOnErrorTypeEnumEnum_BLANK, OrgOssPdfreporterEngineTypeOnErrorTypeEnumEnum_ICON, nil } count:3 type:[IOSClass classWithClass:[OrgOssPdfreporterEngineTypeOnErrorTypeEnumEnum class]]];
  }
}

+ (IOSObjectArray *)values {
  return [IOSObjectArray arrayWithArray:OrgOssPdfreporterEngineTypeOnErrorTypeEnumEnum_values];
}

+ (OrgOssPdfreporterEngineTypeOnErrorTypeEnumEnum *)valueOfWithNSString:(NSString *)name {
  for (int i = 0; i < [OrgOssPdfreporterEngineTypeOnErrorTypeEnumEnum_values count]; i++) {
    OrgOssPdfreporterEngineTypeOnErrorTypeEnumEnum *e = [OrgOssPdfreporterEngineTypeOnErrorTypeEnumEnum_values objectAtIndex:i];
    if ([name isEqual:[e name]]) {
      return e;
    }
  }
  @throw [[JavaLangIllegalArgumentException alloc] initWithNSString:name];
  return nil;
}

@end
