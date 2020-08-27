//
//  ResultSet.m
//  JasperReportiOS
//
//  Created by Fr3e on 6/19/13.
//  Copyright (c) 2013 Digireport. All rights reserved.
//

#import "ResultSet.h"
#include "org/oss/pdfreporter/sql/SQLException.h"
#include "org/oss/pdfreporter/sql/factory/DateTimeImpl.h"
#include "org/oss/pdfreporter/sql/factory/DateImpl.h"
#include "org/oss/pdfreporter/sql/factory/TimestampImpl.h"
#include "org/oss/pdfreporter/sql/factory/TimeImpl.h"
#include "org/oss/pdfreporter/sql/factory/BlobImpl.h"
#include "java/math/BigDecimal.h"
#include "java/lang/Double.h"
#include "java/lang/Integer.h"
#include "java/util/Date.h"
#include "java/util/Calendar.h"
#include "java/util/TimeZone.h"
#include "IOSPrimitiveArray.h"

#define FORMAT_STRING @"yyyy-MM-dd HH:mm:ss"

static NSCalendarUnit calendarUnitFlags = (
      NSCalendarUnitSecond
    | NSCalendarUnitMinute
    | NSCalendarUnitHour
    | NSCalendarUnitDay
    | NSCalendarUnitMonth
    | NSCalendarUnitYear
);

@implementation ResultSet

- (id)initWithStmt:(sqlite3_stmt*)stmt sqlite3:(sqlite3*)sqlite3
{
    self = [super init];
    if(self)
    {
        mStmt = stmt;
        next = true;
        db = sqlite3;
        metaData = [[ResultMetaData alloc] initWithStmt:mStmt sqlite3:db];
    }
    return self;
}

- (void)close
{
    int result = sqlite3_reset(mStmt);
    if(result != SQLITE_OK)
    {
        NSString *message = [NSString stringWithUTF8String:sqlite3_errmsg(db)];
        @throw [[OrgOssPdfreporterSqlSQLException alloc] initWithNSString:message];
    }
}

- (jboolean)next
{
    if(!next) return false;
    
    int result = sqlite3_step(mStmt);
    switch (result) {
        case SQLITE_ROW:
        {
            break;
        }
        case SQLITE_DONE:
        {
            next = false;
            break;
        }
        default:
        {
            next = false;
            NSString *message = [NSString stringWithUTF8String:sqlite3_errmsg(db)];
            @throw [[OrgOssPdfreporterSqlSQLException alloc] initWithNSString:message];
            break;
        }
    }
    
    return next;
}

- (jboolean)getBooleanWithInt:(int)columnIndex
{
    lastColumnIndex = columnIndex;
    return sqlite3_column_int(mStmt, columnIndex-1) != 0;
}

- (jbyte)getByteWithInt:(int)columnIndex
{
    lastColumnIndex = columnIndex;
    return sqlite3_column_int(mStmt, columnIndex-1);
}

- (double)getDoubleWithInt:(int)columnIndex
{
    lastColumnIndex = columnIndex;
    return sqlite3_column_double(mStmt, columnIndex-1);
}

- (float)getFloatWithInt:(int)columnIndex
{
    lastColumnIndex = columnIndex;
    return sqlite3_column_double(mStmt, columnIndex-1);
}

- (int)getIntWithInt:(int)columnIndex
{
    lastColumnIndex = columnIndex;
    return sqlite3_column_int(mStmt, columnIndex-1);
}

- (long long int)getLongWithInt:(int)columnIndex
{
    lastColumnIndex = columnIndex;
    return sqlite3_column_int64(mStmt, columnIndex-1);
}

- (short int)getShortWithInt:(int)columnIndex
{
    lastColumnIndex = columnIndex;
    return sqlite3_column_int(mStmt, columnIndex-1);
}

- (NSString *)getStringWithInt:(int)columnIndex
{
    lastColumnIndex = columnIndex;
    const char* text = (const char*)sqlite3_column_text(mStmt, columnIndex-1);
    if(text != NULL) return [NSString stringWithUTF8String:text];
    else return NULL;
}

- (JavaMathBigDecimal *)getDecimalWithInt:(int)columnIndex
{
    lastColumnIndex = columnIndex;
    return [[JavaMathBigDecimal alloc] initWithDouble:sqlite3_column_double(mStmt, columnIndex-1)];
}

- (id<OrgOssPdfreporterSqlIDate>)getDateWithInt:(int)columnIndex
{
    lastColumnIndex = columnIndex;
    const char* text = (const char*)sqlite3_column_text(mStmt, columnIndex-1);
    if(text == NULL) return NULL;
    char *dot = strrchr(text, '.');
    if(dot!=NULL) *dot = 0;
    NSDateFormatter *df = [[NSDateFormatter alloc] init];
    //[df setTimeZone:[NSTimeZone timeZoneWithName:@"GMT"]];
    [df setDateFormat:FORMAT_STRING];
    NSDateComponents *comp = [[NSCalendar currentCalendar] components:calendarUnitFlags fromDate:[df dateFromString:[NSString stringWithUTF8String:text]]];
    
    return [[OrgOssPdfreporterSqlFactoryDateImpl alloc] initWithInt:(jint)[comp year] withInt:(jint)[comp month] withInt:(jint)[comp day]];
}

- (id<OrgOssPdfreporterSqlITimestamp>)getTimestampWithInt:(int)columnIndex
{
    lastColumnIndex = columnIndex;
    int type = sqlite3_column_type(mStmt, lastColumnIndex-1);
    switch (type) {
        case SQLITE_INTEGER: {
            long long milliseconds = sqlite3_column_int64(mStmt, columnIndex-1);
            return [[OrgOssPdfreporterSqlFactoryTimestampImpl alloc] initWithLong:milliseconds];
        }
        case SQLITE_TEXT: {
            id<OrgOssPdfreporterSqlIDateTime> dateTime = [self getDateTimeWithInt:columnIndex];
            
            JavaUtilCalendar *calendar = [JavaUtilCalendar getInstance];
            [calendar clear];
            [calendar setWithInt:JavaUtilCalendar_YEAR withInt:[dateTime getYear]];
            [calendar setWithInt:JavaUtilCalendar_MONTH withInt:[dateTime getMonth]-1];
            [calendar setWithInt:JavaUtilCalendar_DAY_OF_MONTH withInt:[dateTime getDay]];
            [calendar setWithInt:JavaUtilCalendar_HOUR_OF_DAY withInt:[dateTime getHours]];
            [calendar setWithInt:JavaUtilCalendar_MINUTE withInt:[dateTime getMinutes]];
            [calendar setWithInt:JavaUtilCalendar_SECOND withInt:[dateTime getSeconds]];
            JavaUtilDate *date = [calendar getTime];
            return [[OrgOssPdfreporterSqlFactoryTimestampImpl alloc] initWithJavaUtilDate:date];
        }
        case SQLITE_NULL: return NULL;
        default:
            @throw [NSException exceptionWithName:@"Sqlite TimeStamp" reason:@"Column is not a number or string" userInfo:nil];
    }
}

- (id<OrgOssPdfreporterSqlITime>)getTimeWithInt:(int)columnIndex
{
    lastColumnIndex = columnIndex;
    const char* text = (const char*)sqlite3_column_text(mStmt, columnIndex-1);
    if(text == NULL) return NULL;
    char *dot = strrchr(text, '.');
    if(dot!=NULL) *dot = 0;
    NSDateFormatter *df = [[NSDateFormatter alloc] init];
    //[df setTimeZone:[NSTimeZone timeZoneWithName:@"GMT"]];
    [df setDateFormat:FORMAT_STRING];
    NSDateComponents *comp = [[NSCalendar currentCalendar] components:calendarUnitFlags fromDate:[df dateFromString:[NSString stringWithUTF8String:text]]];
    
    return [[OrgOssPdfreporterSqlFactoryTimeImpl alloc] initWithInt:(jint)[comp hour] withInt:(jint)[comp minute] withInt:(jint)[comp second]];
}

- (id<OrgOssPdfreporterSqlIDateTime>)getDateTimeWithInt:(int)columnIndex
{
    lastColumnIndex = columnIndex;
    const char* text = (const char*)sqlite3_column_text(mStmt, columnIndex-1);
    if(text == NULL) return NULL;
    
    char *dot = strrchr(text, '.');
    if(dot!=NULL) *dot = 0;
    NSDateFormatter *df = [[NSDateFormatter alloc] init];
    [df setDateFormat:FORMAT_STRING];
    //[df setTimeZone:[NSTimeZone timeZoneWithName:@"GMT"]];
    NSDateComponents *comp = [[NSCalendar currentCalendar] components:calendarUnitFlags fromDate:[df dateFromString:[NSString stringWithUTF8String:text] ]];
    
    return [[OrgOssPdfreporterSqlFactoryDateTimeImpl alloc] initWithInt:(jint)[comp year] withInt:(jint)[comp month] withInt:(jint)[comp day] withInt:(jint)[comp hour] withInt:(jint)[comp minute] withInt:(jint)[comp second]];
}

- (id<OrgOssPdfreporterSqlIBlob>)getBlobWithInt:(int)columnIndex
{
    lastColumnIndex = columnIndex;
    const void *data = sqlite3_column_blob(mStmt, columnIndex-1);
    int size = sqlite3_column_bytes(mStmt, columnIndex-1);
    if(data == NULL) return NULL;
    IOSByteArray *byteArray = [IOSByteArray newArrayWithBytes:data count:size];
    return [[OrgOssPdfreporterSqlFactoryBlobImpl alloc] initWithByteArray:byteArray];
}

- (id)getObjectWithInt:(int)columnIndex
{
    lastColumnIndex = columnIndex;
    int type = sqlite3_column_type(mStmt, lastColumnIndex-1);
    switch (type) {
        case SQLITE_INTEGER: {
            return [[JavaLangInteger alloc] initWithInt:sqlite3_column_int(mStmt, columnIndex-1)];
        }
        case SQLITE_FLOAT: {
            return [[JavaLangDouble alloc] initWithDouble:sqlite3_column_double(mStmt, columnIndex-1)];
        }
        case SQLITE_TEXT: {
            const char* text = (const char*)sqlite3_column_text(mStmt, columnIndex-1);
            return [NSString stringWithUTF8String:text];
        }
        case SQLITE_BLOB: {
            const void *data = sqlite3_column_blob(mStmt, columnIndex-1);
            int size = sqlite3_column_bytes(mStmt, columnIndex-1);
            if(data == NULL) return NULL;
            IOSByteArray *byteArray = [IOSByteArray newArrayWithBytes:data count:size];
            return [[OrgOssPdfreporterSqlFactoryBlobImpl alloc] initWithByteArray:byteArray];
        }
        case SQLITE_NULL: return NULL;
        default:
            return NULL;
    }
}

- (id<OrgOssPdfreporterSqlIResultMetaData>)getMetaData
{
    return metaData;
}

- (jboolean)wasNull
{
    int type = sqlite3_column_type(mStmt, lastColumnIndex-1);
    return type == SQLITE_NULL;
}

@end
