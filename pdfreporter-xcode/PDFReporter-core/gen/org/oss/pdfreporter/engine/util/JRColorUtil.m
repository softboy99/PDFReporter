//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: pdfreporter-core/src/org/oss/pdfreporter/engine/util/JRColorUtil.java
//
//  Created by kendra on 9/27/13.
//

#include "java/lang/Integer.h"
#include "org/oss/pdfreporter/engine/type/ColorEnum.h"
#include "org/oss/pdfreporter/engine/util/JRColorUtil.h"
#include "org/oss/pdfreporter/geometry/IColor.h"
#include "org/oss/pdfreporter/geometry/factory/IGeometryFactory.h"
#include "org/oss/pdfreporter/registry/ApiRegistry.h"

@implementation OrgOssPdfreporterEngineUtilJRColorUtil

static int OrgOssPdfreporterEngineUtilJRColorUtil_COLOR_MASK_;

+ (int)COLOR_MASK {
  return OrgOssPdfreporterEngineUtilJRColorUtil_COLOR_MASK_;
}

+ (NSString *)getColorHexaWithOrgOssPdfreporterGeometryIColor:(id<OrgOssPdfreporterGeometryIColor>)color {
  NSString *hexa = [((NSString *) nil_chk([JavaLangInteger toHexStringWithInt:[((id<OrgOssPdfreporterGeometryIColor>) nil_chk(color)) getRGB] & OrgOssPdfreporterEngineUtilJRColorUtil_COLOR_MASK_])) uppercaseString];
  return [([NSString stringWithFormat:@"000000%@", hexa]) substring:[((NSString *) nil_chk(hexa)) length]];
}

+ (id<OrgOssPdfreporterGeometryIColor>)getColorWithNSString:(NSString *)strColor
                        withOrgOssPdfreporterGeometryIColor:(id<OrgOssPdfreporterGeometryIColor>)defaultColor {
  id<OrgOssPdfreporterGeometryIColor> color = nil;
  if (strColor != nil && [((NSString *) nil_chk(strColor)) length] > 0) {
    unichar firstChar = [((NSString *) nil_chk(strColor)) charAtWithInt:0];
    if (firstChar == '#') {
      color = [((id<OrgOssPdfreporterGeometryFactoryIGeometryFactory>) nil_chk([OrgOssPdfreporterRegistryApiRegistry getGeometryFactory])) newColorWithInt:[JavaLangInteger parseIntWithNSString:[((NSString *) nil_chk(strColor)) substring:1] withInt:16]];
    }
    else if ('0' <= firstChar && firstChar <= '9') {
      color = [((id<OrgOssPdfreporterGeometryFactoryIGeometryFactory>) nil_chk([OrgOssPdfreporterRegistryApiRegistry getGeometryFactory])) newColorWithInt:[JavaLangInteger parseIntWithNSString:strColor]];
    }
    else {
      OrgOssPdfreporterEngineTypeColorEnumEnum *colorEnum = [OrgOssPdfreporterEngineTypeColorEnumEnum getByNameWithNSString:strColor];
      if (colorEnum == nil) {
        color = defaultColor;
      }
      else {
        color = [colorEnum getColor];
      }
    }
  }
  return color;
}

- (id)init {
  return [super init];
}

+ (void)initialize {
  if (self == [OrgOssPdfreporterEngineUtilJRColorUtil class]) {
    OrgOssPdfreporterEngineUtilJRColorUtil_COLOR_MASK_ = [JavaLangInteger parseIntWithNSString:@"FFFFFF" withInt:16];
  }
}

@end
