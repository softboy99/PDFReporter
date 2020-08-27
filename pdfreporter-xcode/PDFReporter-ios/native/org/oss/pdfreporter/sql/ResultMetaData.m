//
//  ResultMetaData.m
//  JasperReportiOS
//
//  Created by Fr3e on 6/19/13.
//  Copyright (c) 2013 Digireport. All rights reserved.
//

#import "ResultMetaData.h"
#include "org/oss/pdfreporter/sql/SqlType.h"

@implementation ResultMetaData

- (id)initWithStmt:(sqlite3_stmt*)stmt sqlite3:(sqlite3*)sqlite3
{
    self = [super init];
    if(self)
    {
        mStmt = stmt;
        db = sqlite3;
    }
    return self;
}

- (int)getColumnCount
{
    return sqlite3_column_count(mStmt);
}

- (NSString *)getColumnNameWithInt:(int)columnIndex
{
    return [NSString stringWithUTF8String: sqlite3_column_name(mStmt, columnIndex-1)];
}

- (NSString *)getColumnLabelWithInt:(int)columnIndex
{
    return [self getColumnNameWithInt:columnIndex];
}

- (NSString *)getColumnClassNameWithInt:(int)columnIndex
{
    int type = sqlite3_column_type(mStmt, columnIndex-1);
    switch (type) {
        case SQLITE_INTEGER: return @"INTEGER";
        case SQLITE_FLOAT: return @"FLOAT";
        case SQLITE_TEXT: return @"TEXT";
        case SQLITE_BLOB: return @"BLOB";
        case SQLITE_NULL: return @"NULL";
        default:
            return @"not defined";
    }
}

- (OrgOssPdfreporterSqlSqlType *)getColumnTypeWithInt:(int)columnIndex
{
    int type = sqlite3_column_type(mStmt, columnIndex-1);
    switch (type) {
        case SQLITE_INTEGER: return OrgOssPdfreporterSqlSqlType_get_INTEGER();
        case SQLITE_FLOAT: return OrgOssPdfreporterSqlSqlType_get_FLOAT();
        case SQLITE_TEXT: return OrgOssPdfreporterSqlSqlType_get_VARCHAR();
        case SQLITE_BLOB: return OrgOssPdfreporterSqlSqlType_get_BLOB();
        case SQLITE_NULL: return NULL;
        default:
            return NULL;
    }
}

@end
