//
//  ReportExporter.h
//  JasperReportLib
//
//  Created by Fr3e on 8/22/13.
//  Copyright (c) 2013 Fr3e. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface ReportExporter : NSObject

+(void)exportReportToPdf:(NSString *)reportPath
               withJrxml:(NSString *)jrxmlPath
     withResourceFolders:(NSArray *)resourceFolders
          withParameters:(NSDictionary *)parameters
          withSubreports:(NSDictionary *)subreports
                language:(NSString *)language;

+(void)exportReportToPdf:(NSString *)pdfPath
               withJrxml:(NSString *)jrxmlPath
     withResourceFolders:(NSArray *)resourceFolders
                 withXml:(NSString *)xmlFile
                andXPath:(NSString *)xPath
          withParameters:(NSDictionary *)parameters
          withSubreports:(NSDictionary *)subreports
                language:(NSString *)language;


+(void)exportReportToPdf:(NSString *)pdfPath
               withJrxml:(NSString *)jrxmlPath
     withResourceFolders:(NSArray *)resourceFolders
              andSqlite3:(NSString *)sqlite3
          withParameters:(NSDictionary *)parameters
          withSubreports:(NSDictionary *)subreports
                language:(NSString *)language;

+(void)phaseLoadReportWithJrxml:(NSString *)jrxmlPath
            withResourceFolders:(NSArray *)resourceFolders;

+(void)phaseExportReportToPdf:(NSString *)pdfPath
                     language:(NSString *)language;

+(void)phaseExportReportToPdf:(NSString *)pdfPath
           fillWithParameters:(NSDictionary *)parameters
                     language:(NSString *)language;

+(void)phaseExportReportToPdf:(NSString *)pdfPath
                      withXml:(NSString *)xmlFile
                     andXPath:(NSString *)xPath
                     language:(NSString *)language;

+(void)phaseExportReportToPdf:(NSString *)pdfPath
                   andSqlite3:(NSString *)sqlite3
                     language:(NSString *)language;
@end
