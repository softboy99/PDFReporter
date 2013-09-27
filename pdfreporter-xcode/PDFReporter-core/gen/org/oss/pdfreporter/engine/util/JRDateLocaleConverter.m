//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: pdfreporter-core/src/org/oss/pdfreporter/engine/util/JRDateLocaleConverter.java
//
//  Created by kendra on 9/27/13.
//

#include "IOSClass.h"
#include "java/util/Calendar.h"
#include "java/util/Date.h"
#include "java/util/TimeZone.h"
#include "org/oss/pdfreporter/engine/util/JRDateLocaleConverter.h"
#include "org/oss/pdfreporter/registry/ApiRegistry.h"
#include "org/oss/pdfreporter/text/format/IDateFormat.h"
#include "org/oss/pdfreporter/text/format/factory/IFormatFactory.h"

@implementation OrgOssPdfreporterEngineUtilJRDateLocaleConverter

@synthesize timeZone = timeZone_;

- (id)initWithJavaUtilTimeZone:(JavaUtilTimeZone *)timeZone {
  if ((self = [super init])) {
    self.timeZone = timeZone;
  }
  return self;
}

- (id)parseWithId:(id)value
     withNSString:(NSString *)pattern {
  if ([value isKindOfClass:[JavaUtilDate class]]) {
    return value;
  }
  if ([value isKindOfClass:[JavaUtilCalendar class]]) {
    return [((JavaUtilCalendar *) value) getTime];
  }
  return [((id<OrgOssPdfreporterTextFormatIDateFormat>) nil_chk([((id<OrgOssPdfreporterTextFormatFactoryIFormatFactory>) nil_chk([OrgOssPdfreporterRegistryApiRegistry getIFormatFactoryWithOrgOssPdfreporterTextFormatFactoryIFormatFactory_FormatTypeEnum:[OrgOssPdfreporterTextFormatFactoryIFormatFactory_FormatTypeEnum SIMPLE]])) newDateFormatWithNSString:nil withJavaUtilLocale:nil withJavaUtilTimeZone:timeZone_])) parseWithNSString:(NSString *) value];
}

- (void)copyAllPropertiesTo:(id)copy {
  [super copyAllPropertiesTo:copy];
  OrgOssPdfreporterEngineUtilJRDateLocaleConverter *typedCopy = (OrgOssPdfreporterEngineUtilJRDateLocaleConverter *) copy;
  typedCopy.timeZone = timeZone_;
}

@end
