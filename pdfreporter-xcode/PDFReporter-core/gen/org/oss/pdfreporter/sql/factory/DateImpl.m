//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: pdfreporter-core/src/org/oss/pdfreporter/sql/factory/DateImpl.java
//
//  Created by kendra on 9/27/13.
//

#include "java/util/Calendar.h"
#include "java/util/Date.h"
#include "org/oss/pdfreporter/sql/factory/DateImpl.h"
#include "org/oss/pdfreporter/sql/factory/DateUtil.h"

@implementation OrgOssPdfreporterSqlFactoryDateImpl

@synthesize year = year_;
@synthesize month = month_;
@synthesize day = day_;

- (id)initOrgOssPdfreporterSqlFactoryDateImplWithInt:(int)year
                                             withInt:(int)month
                                             withInt:(int)day {
  if ((self = [super init])) {
    self.year = year;
    self.month = month;
    self.day = day;
  }
  return self;
}

- (id)initWithInt:(int)year
          withInt:(int)month
          withInt:(int)day {
  return [self initOrgOssPdfreporterSqlFactoryDateImplWithInt:year withInt:month withInt:day];
}

- (id)initWithJavaUtilDate:(JavaUtilDate *)date {
  return [self initOrgOssPdfreporterSqlFactoryDateImplWithJavaUtilCalendar:[OrgOssPdfreporterSqlFactoryDateUtil getCalendarWithJavaUtilDate:date]];
}

- (id)initOrgOssPdfreporterSqlFactoryDateImplWithJavaUtilCalendar:(JavaUtilCalendar *)date {
  return [self initOrgOssPdfreporterSqlFactoryDateImplWithInt:[((JavaUtilCalendar *) nil_chk(date)) getWithInt:JavaUtilCalendar_YEAR] withInt:[((JavaUtilCalendar *) nil_chk(date)) getWithInt:JavaUtilCalendar_MONTH] + 1 withInt:[((JavaUtilCalendar *) nil_chk(date)) getWithInt:JavaUtilCalendar_DATE]];
}

- (id)initWithJavaUtilCalendar:(JavaUtilCalendar *)date {
  return [self initOrgOssPdfreporterSqlFactoryDateImplWithJavaUtilCalendar:date];
}

- (JavaUtilDate *)getDate {
  return [OrgOssPdfreporterSqlFactoryDateUtil getDateWithInt:[self getYear] withInt:[self getMonth] withInt:[self getDay]];
}

- (int)getYear {
  return year_;
}

- (int)getMonth {
  return month_;
}

- (int)getDay {
  return day_;
}

- (void)copyAllPropertiesTo:(id)copy {
  [super copyAllPropertiesTo:copy];
  OrgOssPdfreporterSqlFactoryDateImpl *typedCopy = (OrgOssPdfreporterSqlFactoryDateImpl *) copy;
  typedCopy.year = year_;
  typedCopy.month = month_;
  typedCopy.day = day_;
}

@end
