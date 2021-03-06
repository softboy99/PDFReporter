//
//  UpdateHelper.m
//  PDFReporter
//
//  Created by Fr3e on 8/21/13.
//  Copyright (c) 2013 Fr3e. All rights reserved.
//

#import "UpdateHelper.h"
#import "ZipFile.h"
#import "FileInZipInfo.h"
#import "ZipReadStream.h"
#import "ReportExporter.h"
#include "java/net/URL.h"

#ifdef PDFREPORTERKIT
#	import <PDFReporterKit/PDFReporterKit.h>
#else
#	include "FileUrl.h"
#endif

#define BUFFER_SIZE 131072
#define DOWNLOAD_URL @"http://pdfreporting.com/update-samples/reports.zip"
#define REPORTS_PATH @"reports"

#define RESOURCES_KEY @"resources"
#define JRXML_KEY @"jrxml"
#define XML_KEY @"xml"
#define XPATH_KEY @"xpath"
#define SQLITE3_KEY @"sqlite3"
#define EXTRA_KEY @"extra"
#define LANGUAGE_KEY @"lang"

static NSArray *plistList = nil;

NSString * const __nonnull kDebugKey = @"debug";

@implementation UpdateHelper

+(NSString*) downloadUrl
{
    return DOWNLOAD_URL;
}

+(void)initializeReportsDirectory
{
    NSString *documentdir = [NSSearchPathForDirectoriesInDomains(NSDocumentDirectory, NSUserDomainMask, YES) lastObject];
    NSString *reportsDir = [documentdir stringByAppendingPathComponent:REPORTS_PATH];
    NSString *bundleReportsDir = [[[NSBundle mainBundle] bundlePath] stringByAppendingPathComponent:REPORTS_PATH];
    
    if(![[NSFileManager defaultManager] fileExistsAtPath:reportsDir])
    {
        [[NSFileManager defaultManager] copyItemAtPath:bundleReportsDir toPath:reportsDir error:nil];
    }
    [UpdateHelper getAllPLists];
}

+(void)runReportFromPListAtPosition:(int)pos
{
    NSString *documentdir = [NSSearchPathForDirectoriesInDomains(NSDocumentDirectory, NSUserDomainMask, YES) lastObject];
    NSString *reportsDir = [documentdir stringByAppendingPathComponent:REPORTS_PATH];
    
    
    NSString *plistFile = [reportsDir stringByAppendingPathComponent:[[UpdateHelper getAllPLists] objectAtIndex:pos]];
    plistFile = [plistFile stringByAppendingString:@".plist"];
    NSDictionary *plist = [NSDictionary dictionaryWithContentsOfFile:plistFile];
    
    NSString *resourcePath = [plist objectForKey:RESOURCES_KEY];
    resourcePath = [reportsDir stringByAppendingPathComponent:resourcePath];
    
    NSString *jrxmlPath = [plist objectForKey:JRXML_KEY];
    jrxmlPath = [reportsDir stringByAppendingPathComponent:jrxmlPath];
    
    NSString *extraPath = [plist objectForKey:EXTRA_KEY];
    if(extraPath) extraPath = [reportsDir stringByAppendingPathComponent:extraPath];

    NSString *xml = [plist objectForKey:XML_KEY];
    NSString *xpath = [plist objectForKey:XPATH_KEY];
    NSString *sqlite3 = [plist objectForKey:SQLITE3_KEY];
    NSString *language = [plist objectForKey:LANGUAGE_KEY];

    if (sqlite3)
    {
        sqlite3 = [reportsDir stringByAppendingPathComponent:sqlite3];
    }
    
    NSString *pdfPath = [documentdir stringByAppendingPathComponent:@"output.pdf"];
    
    
    NSArray *resourceArray = [NSArray arrayWithObjects:resourcePath, extraPath, nil];

    if(xml != nil)
    {
        [ReportExporter exportReportToPdf:pdfPath
                                withJrxml:jrxmlPath
                      withResourceFolders:resourceArray
                                  withXml:xml
                                 andXPath:xpath
                           withParameters:nil
                           withSubreports:nil
                                 language:language];
    }
    else if(sqlite3 != nil)
    {
        [ReportExporter exportReportToPdf:pdfPath
                                withJrxml:jrxmlPath
                      withResourceFolders:resourceArray
                               andSqlite3:sqlite3
                           withParameters:nil
                           withSubreports:nil
                                 language:language];
    }
    else
    {
        [ReportExporter exportReportToPdf:pdfPath
                                withJrxml:jrxmlPath
                      withResourceFolders:resourceArray
                           withParameters:nil
                           withSubreports:nil
                                 language:language];
    }
}

+(void)runPhase1ReportFromPListAtPosition:(int)pos
{
    NSString *documentdir = [NSSearchPathForDirectoriesInDomains(NSDocumentDirectory, NSUserDomainMask, YES) lastObject];
    NSString *reportsDir = [documentdir stringByAppendingPathComponent:REPORTS_PATH];
    
    NSString *plistFile = [reportsDir stringByAppendingPathComponent:[[UpdateHelper getAllPLists] objectAtIndex:pos]];
    plistFile = [plistFile stringByAppendingString:@".plist"];
    NSDictionary *plist = [NSDictionary dictionaryWithContentsOfFile:plistFile];
    
    NSString *resourcePath = [plist objectForKey:RESOURCES_KEY];
    resourcePath = [reportsDir stringByAppendingPathComponent:resourcePath];
    
    NSString *jrxmlPath = [plist objectForKey:JRXML_KEY];
    jrxmlPath = [reportsDir stringByAppendingPathComponent:jrxmlPath];
    
    NSString *extraPath = [plist objectForKey:EXTRA_KEY];
    if(extraPath) extraPath = [reportsDir stringByAppendingPathComponent:extraPath];
       
    
    NSArray *resourceArray = [NSArray arrayWithObjects:resourcePath, extraPath, nil];
    
    [ReportExporter phaseLoadReportWithJrxml:jrxmlPath withResourceFolders:resourceArray];
}

+(void)runPhase2ReportFromPListAtPosition:(int)pos
{
    NSString *documentdir = [NSSearchPathForDirectoriesInDomains(NSDocumentDirectory, NSUserDomainMask, YES) lastObject];
    NSString *reportsDir = [documentdir stringByAppendingPathComponent:REPORTS_PATH];
    
    NSString *plistFile = [reportsDir stringByAppendingPathComponent:[[UpdateHelper getAllPLists] objectAtIndex:pos]];
    plistFile = [plistFile stringByAppendingString:@".plist"];
    NSDictionary *plist = [NSDictionary dictionaryWithContentsOfFile:plistFile];
    
    NSString *pdfPath = [documentdir stringByAppendingPathComponent:@"output.pdf"];
    
    NSString *xml = [plist objectForKey:XML_KEY];
    NSString *xpath = [plist objectForKey:XPATH_KEY];
    NSString *sqlite3 = [plist objectForKey:SQLITE3_KEY];

    BOOL isDebug = [[plist objectForKey:kDebugKey] boolValue];
    NSString *language = [plist objectForKey:LANGUAGE_KEY];

    if(sqlite3) sqlite3 = [reportsDir stringByAppendingPathComponent:sqlite3];

    if (isDebug)
    {
        NSString *parametersName = [plist objectForKey:@"parameters"];
        SEL paramsSelector = NSSelectorFromString(parametersName);
        IMP paramsImplementation = [self methodForSelector:paramsSelector];
        NSDictionary *parameters = paramsImplementation(self, paramsSelector);
        [ReportExporter phaseExportReportToPdf:pdfPath fillWithParameters:parameters language:language];
        return;
    }
    if(xml != nil)
    {
        [ReportExporter phaseExportReportToPdf:pdfPath
                                       withXml:xml
                                      andXPath:xpath
                                      language:language];
    }
    else if(sqlite3 != nil)
    {
        [ReportExporter phaseExportReportToPdf:pdfPath
                                    andSqlite3:sqlite3
                                      language:language];
    }
    else
    {
        [ReportExporter phaseExportReportToPdf:pdfPath
                                      language:language];
    }
    
    
}

+(NSArray*)getAllPLists
{
    if(plistList == nil)
    {
        NSString *documentdir = [NSSearchPathForDirectoriesInDomains(NSDocumentDirectory, NSUserDomainMask, YES) lastObject];
        NSString *reportsPath = [documentdir stringByAppendingPathComponent:REPORTS_PATH];
        NSMutableArray *fileList = [NSMutableArray array];
        
        NSArray *rawFileList = [[NSFileManager defaultManager] contentsOfDirectoryAtPath:reportsPath error:nil];
        for(NSString *file in rawFileList)
        {
            if ([[file pathExtension] isEqualToString:@"plist"])
            {
                [fileList addObject:[[file lastPathComponent] stringByDeletingPathExtension]];
            }
        }
        plistList = [NSArray arrayWithArray:fileList];
    }
    return plistList;
}

+(BOOL)updateReportsWithZip:(NSString*)zipPath
{
    plistList = nil;
    NSString *documentdir = [NSSearchPathForDirectoriesInDomains(NSDocumentDirectory, NSUserDomainMask, YES) lastObject];
    NSString *reportsPath = [documentdir stringByAppendingPathComponent:REPORTS_PATH];
    NSString *unzipPath = [documentdir stringByAppendingPathComponent:@"reports-temp"];

    [[NSFileManager defaultManager] removeItemAtPath:unzipPath error:nil];
        
    if(![UpdateHelper unzipFile:zipPath toDirectory:unzipPath]) return NO;
    [[NSFileManager defaultManager] removeItemAtPath:reportsPath error:nil];
    if(![[NSFileManager defaultManager] moveItemAtPath:unzipPath toPath:reportsPath error:nil]) return NO;;
    
    return YES;
}

+(BOOL)unzipFile:(NSString*)zipPath toDirectory:(NSString*)dirPath
{
    if (![[NSFileManager defaultManager] fileExistsAtPath:zipPath]) {
        return NO;
    }
    
    if(![[NSFileManager defaultManager] fileExistsAtPath:dirPath]) {
        if(![[NSFileManager defaultManager] createDirectoryAtPath:dirPath withIntermediateDirectories:YES attributes:nil error:nil]) return NO;
    }
    
    NSMutableData *buffer= [[NSMutableData alloc]
                            initWithLength:BUFFER_SIZE];
    
    ZipFile *unzipFile= [[ZipFile alloc] initWithFileName:zipPath mode:ZipFileModeUnzip];
    NSArray *infos= [unzipFile listFileInZipInfos];
    
    for (FileInZipInfo *info in infos) {
        if(info.length == 0) continue;
        NSString *filePath = [dirPath stringByAppendingPathComponent:info.name];
        
        NSString *fileDirectoryPath = [NSString string];
        NSArray *components = [filePath pathComponents];
        for(int i=0;i<components.count-1;i++) fileDirectoryPath = [fileDirectoryPath stringByAppendingPathComponent:[components objectAtIndex:i]];
                
        if(![[NSFileManager defaultManager] createDirectoryAtPath:fileDirectoryPath withIntermediateDirectories:YES attributes:nil error:nil]) return NO;
        if(![[NSFileManager defaultManager] createFileAtPath:filePath contents:nil attributes:nil]) return NO;
        NSFileHandle *file= [NSFileHandle fileHandleForWritingAtPath:filePath];
        if(!file) return NO;
        
        [unzipFile locateFileInZip:info.name];
        ZipReadStream *read= [unzipFile readCurrentFileInZip];
        for(;;)
        {
            [buffer setLength:BUFFER_SIZE];
            int bytesRead= (int)[read readDataWithBuffer:buffer];
            if (bytesRead > 0)
            {
                [buffer setLength:bytesRead];
                [file writeData:buffer];
            }
            else break;
        }
        
        [file closeFile];
        [read finishedReading];
    }
        
    return YES;
}

+ (NSDictionary *)URLParameter
{
    NSString *documentdir = [NSSearchPathForDirectoriesInDomains(NSDocumentDirectory, NSUserDomainMask, YES) lastObject];
    NSString *dukesignPath = [documentdir stringByAppendingPathComponent:@"reports/jrxml/images/dukesign.jpg"];

    OrgOssPdfreporterNetFileUrl *url = new_OrgOssPdfreporterNetFileUrl_initWithNSString_(dukesignPath);

    return @{ @"DukesignUrl" : url };
}

+ (NSDictionary *)streamedImages
{
    NSString *documentdir = [NSSearchPathForDirectoriesInDomains(NSDocumentDirectory, NSUserDomainMask, YES) lastObject];
    NSString *imagePath = [documentdir stringByAppendingPathComponent:@"reports/jrxml/images/dukesign.jpg"];

	OrgOssPdfreporterNetFileUrl *url = new_OrgOssPdfreporterNetFileUrl_initWithNSString_(imagePath);

    return @{
        @"Dukesign"  : [url openStream],
        @"Dukesign1" : [url openStream],
        @"Dukesign2" : [url openStream],
        @"Dukesign3" : url,
        @"Dukesign4" : [url openStream],
        @"Dukesign5" : [url openStream],
        @"Dukesign6" : [url openStream],
        @"Dukesign7" : [url openStream],
        @"Dukesign8" : [url openStream],
        @"Dukesing9" : [url openStream],
        @"Dukesing10": [url openStream],
        @"Dukesing11": [url openStream],
        @"Dukesing12": [url openStream],
        @"Dukesing13": [url openStream]
    };
}

+ (NSDictionary *)rawImages
{
    NSString *documentdir = [NSSearchPathForDirectoriesInDomains(NSDocumentDirectory, NSUserDomainMask, YES) lastObject];
    NSString *imagePath = [documentdir stringByAppendingPathComponent:@"reports/jrxml/raw_images/dukesign.jpg"];

    UIImage *image = [UIImage imageWithContentsOfFile:imagePath];
    NSData *imageData = UIImagePNGRepresentation(image);
    NSData *base64Data = [imageData base64EncodedDataWithOptions:0];

    return @{
     @"duke_bytes" :  [IOSByteArray arrayWithNSData: imageData],
     @"duke_base64Bytes": [IOSByteArray arrayWithNSData: base64Data]
   };
}

@end
