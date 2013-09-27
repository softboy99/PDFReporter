//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: pdfreporter-core/src/org/oss/pdfreporter/sql/factory/AbstractSqlFactory.java
//
//  Created by kendra on 9/27/13.
//

#ifndef _OrgOssPdfreporterSqlFactoryAbstractSqlFactory_H_
#define _OrgOssPdfreporterSqlFactoryAbstractSqlFactory_H_

@class IOSByteArray;
@class JavaIoInputStream;
@class JavaUtilDate;
@protocol OrgOssPdfreporterSqlIBlob;
@protocol OrgOssPdfreporterSqlIConnection;
@protocol OrgOssPdfreporterSqlIDate;
@protocol OrgOssPdfreporterSqlIDateTime;
@protocol OrgOssPdfreporterSqlITime;
@protocol OrgOssPdfreporterSqlITimestamp;

#import "JreEmulation.h"
#include "org/oss/pdfreporter/sql/factory/ISqlFactory.h"

@interface OrgOssPdfreporterSqlFactoryAbstractSqlFactory : NSObject < OrgOssPdfreporterSqlFactoryISqlFactory > {
}

- (id<OrgOssPdfreporterSqlIDate>)newDateWithJavaUtilDate:(JavaUtilDate *)date OBJC_METHOD_FAMILY_NONE;
- (id<OrgOssPdfreporterSqlITime>)newTimeWithJavaUtilDate:(JavaUtilDate *)time OBJC_METHOD_FAMILY_NONE;
- (id<OrgOssPdfreporterSqlITimestamp>)newTimestampWithLongInt:(long long int)milliseconds OBJC_METHOD_FAMILY_NONE;
- (id<OrgOssPdfreporterSqlIDateTime>)newDateTimeWithJavaUtilDate:(JavaUtilDate *)datetime OBJC_METHOD_FAMILY_NONE;
- (id<OrgOssPdfreporterSqlIBlob>)newBlobWithJavaIoInputStream:(JavaIoInputStream *)is OBJC_METHOD_FAMILY_NONE;
- (id<OrgOssPdfreporterSqlIBlob>)newBlobWithByteArray:(IOSByteArray *)bytes OBJC_METHOD_FAMILY_NONE;
- (id<OrgOssPdfreporterSqlIConnection>)newConnectionWithNSString:(NSString *)param0
                                                    withNSString:(NSString *)param1
                                                    withNSString:(NSString *)param2 OBJC_METHOD_FAMILY_NONE;
- (id)init;
@end

#endif // _OrgOssPdfreporterSqlFactoryAbstractSqlFactory_H_
