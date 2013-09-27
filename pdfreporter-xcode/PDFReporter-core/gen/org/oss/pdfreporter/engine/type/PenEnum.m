//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: pdfreporter-core/src/org/oss/pdfreporter/engine/type/PenEnum.java
//
//  Created by kendra on 9/27/13.
//

#include "IOSClass.h"
#include "IOSObjectArray.h"
#include "java/lang/Byte.h"
#include "java/lang/IllegalArgumentException.h"
#include "org/oss/pdfreporter/engine/type/EnumUtil.h"
#include "org/oss/pdfreporter/engine/type/JREnum.h"
#include "org/oss/pdfreporter/engine/type/PenEnum.h"


static OrgOssPdfreporterEngineTypePenEnumEnum *OrgOssPdfreporterEngineTypePenEnumEnum_NONE;
static OrgOssPdfreporterEngineTypePenEnumEnum *OrgOssPdfreporterEngineTypePenEnumEnum_ONE_POINT;
static OrgOssPdfreporterEngineTypePenEnumEnum *OrgOssPdfreporterEngineTypePenEnumEnum_TWO_POINT;
static OrgOssPdfreporterEngineTypePenEnumEnum *OrgOssPdfreporterEngineTypePenEnumEnum_FOUR_POINT;
static OrgOssPdfreporterEngineTypePenEnumEnum *OrgOssPdfreporterEngineTypePenEnumEnum_DOTTED;
static OrgOssPdfreporterEngineTypePenEnumEnum *OrgOssPdfreporterEngineTypePenEnumEnum_THIN;
IOSObjectArray *OrgOssPdfreporterEngineTypePenEnumEnum_values;

@implementation OrgOssPdfreporterEngineTypePenEnumEnum

+ (OrgOssPdfreporterEngineTypePenEnumEnum *)NONE {
  return OrgOssPdfreporterEngineTypePenEnumEnum_NONE;
}
+ (OrgOssPdfreporterEngineTypePenEnumEnum *)ONE_POINT {
  return OrgOssPdfreporterEngineTypePenEnumEnum_ONE_POINT;
}
+ (OrgOssPdfreporterEngineTypePenEnumEnum *)TWO_POINT {
  return OrgOssPdfreporterEngineTypePenEnumEnum_TWO_POINT;
}
+ (OrgOssPdfreporterEngineTypePenEnumEnum *)FOUR_POINT {
  return OrgOssPdfreporterEngineTypePenEnumEnum_FOUR_POINT;
}
+ (OrgOssPdfreporterEngineTypePenEnumEnum *)DOTTED {
  return OrgOssPdfreporterEngineTypePenEnumEnum_DOTTED;
}
+ (OrgOssPdfreporterEngineTypePenEnumEnum *)THIN {
  return OrgOssPdfreporterEngineTypePenEnumEnum_THIN;
}

- (id)copyWithZone:(NSZone *)zone {
  return self;
}

@synthesize value = value_;
@synthesize name_PenEnum = name_PenEnum_;

- (id)initWithChar:(char)value
      withNSString:(NSString *)enumName
      withNSString:(NSString *)name
           withInt:(int)ordinal {
  if ((self = [super initWithNSString:name withInt:ordinal])) {
    self.value = value;
    self.name_PenEnum = enumName;
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
  return name_PenEnum_;
}

+ (OrgOssPdfreporterEngineTypePenEnumEnum *)getByNameWithNSString:(NSString *)enumName {
  return (OrgOssPdfreporterEngineTypePenEnumEnum *) [OrgOssPdfreporterEngineTypeEnumUtil getByNameWithOrgOssPdfreporterEngineTypeJREnumArray:[OrgOssPdfreporterEngineTypePenEnumEnum values] withNSString:enumName];
}

+ (OrgOssPdfreporterEngineTypePenEnumEnum *)getByValueWithJavaLangByte:(JavaLangByte *)value {
  return (OrgOssPdfreporterEngineTypePenEnumEnum *) [OrgOssPdfreporterEngineTypeEnumUtil getByValueWithOrgOssPdfreporterEngineTypeJREnumArray:[OrgOssPdfreporterEngineTypePenEnumEnum values] withJavaLangByte:value];
}

+ (OrgOssPdfreporterEngineTypePenEnumEnum *)getByValueWithChar:(char)value {
  return [OrgOssPdfreporterEngineTypePenEnumEnum getByValueWithJavaLangByte:[[JavaLangByte alloc] initWithChar:value]];
}

+ (void)initialize {
  if (self == [OrgOssPdfreporterEngineTypePenEnumEnum class]) {
    OrgOssPdfreporterEngineTypePenEnumEnum_NONE = [[OrgOssPdfreporterEngineTypePenEnumEnum alloc] initWithChar:(char) 0 withNSString:@"None" withNSString:@"OrgOssPdfreporterEngineTypePen_NONE" withInt:0];
    OrgOssPdfreporterEngineTypePenEnumEnum_ONE_POINT = [[OrgOssPdfreporterEngineTypePenEnumEnum alloc] initWithChar:(char) 1 withNSString:@"1Point" withNSString:@"OrgOssPdfreporterEngineTypePen_ONE_POINT" withInt:1];
    OrgOssPdfreporterEngineTypePenEnumEnum_TWO_POINT = [[OrgOssPdfreporterEngineTypePenEnumEnum alloc] initWithChar:(char) 2 withNSString:@"2Point" withNSString:@"OrgOssPdfreporterEngineTypePen_TWO_POINT" withInt:2];
    OrgOssPdfreporterEngineTypePenEnumEnum_FOUR_POINT = [[OrgOssPdfreporterEngineTypePenEnumEnum alloc] initWithChar:(char) 3 withNSString:@"4Point" withNSString:@"OrgOssPdfreporterEngineTypePen_FOUR_POINT" withInt:3];
    OrgOssPdfreporterEngineTypePenEnumEnum_DOTTED = [[OrgOssPdfreporterEngineTypePenEnumEnum alloc] initWithChar:(char) 4 withNSString:@"Dotted" withNSString:@"OrgOssPdfreporterEngineTypePen_DOTTED" withInt:4];
    OrgOssPdfreporterEngineTypePenEnumEnum_THIN = [[OrgOssPdfreporterEngineTypePenEnumEnum alloc] initWithChar:(char) 5 withNSString:@"Thin" withNSString:@"OrgOssPdfreporterEngineTypePen_THIN" withInt:5];
    OrgOssPdfreporterEngineTypePenEnumEnum_values = [[IOSObjectArray alloc] initWithObjects:(id[]){ OrgOssPdfreporterEngineTypePenEnumEnum_NONE, OrgOssPdfreporterEngineTypePenEnumEnum_ONE_POINT, OrgOssPdfreporterEngineTypePenEnumEnum_TWO_POINT, OrgOssPdfreporterEngineTypePenEnumEnum_FOUR_POINT, OrgOssPdfreporterEngineTypePenEnumEnum_DOTTED, OrgOssPdfreporterEngineTypePenEnumEnum_THIN, nil } count:6 type:[IOSClass classWithClass:[OrgOssPdfreporterEngineTypePenEnumEnum class]]];
  }
}

+ (IOSObjectArray *)values {
  return [IOSObjectArray arrayWithArray:OrgOssPdfreporterEngineTypePenEnumEnum_values];
}

+ (OrgOssPdfreporterEngineTypePenEnumEnum *)valueOfWithNSString:(NSString *)name {
  for (int i = 0; i < [OrgOssPdfreporterEngineTypePenEnumEnum_values count]; i++) {
    OrgOssPdfreporterEngineTypePenEnumEnum *e = [OrgOssPdfreporterEngineTypePenEnumEnum_values objectAtIndex:i];
    if ([name isEqual:[e name]]) {
      return e;
    }
  }
  @throw [[JavaLangIllegalArgumentException alloc] initWithNSString:name];
  return nil;
}

@end
