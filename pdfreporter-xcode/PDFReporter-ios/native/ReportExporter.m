#import "ReportExporter.h"
#include "org/oss/pdfreporter/registry/ApiRegistry.h"
#include "java/io/InputStream.h"
#include "org/oss/pdfreporter/sql/IConnection.h"
#import "SqlFactory.h"
#include "org/oss/pdfreporter/repo/RepositoryManager.h"
#include "org/oss/pdfreporter/repo/FileResourceLoader.h"
#include "org/oss/pdfreporter/engine/xml/JRXmlLoader.h"
#include "org/oss/pdfreporter/engine/data/JRXmlDataSource.h"
#include "org/oss/pdfreporter/engine/JREmptyDataSource.h"
#include "org/oss/pdfreporter/engine/design/JasperDesign.h"
#include "org/oss/pdfreporter/engine/JasperPrint.h"
#include "org/oss/pdfreporter/engine/JasperReport.h"
#include "org/oss/pdfreporter/engine/JasperFillManager.h"
#include "org/oss/pdfreporter/engine/JasperCompileManager.h"
#include "org/oss/pdfreporter/engine/JasperExportManager.h"
#include "org/oss/pdfreporter/net/IURL.h"
#import "NSDictionaryMap.h"
#include "org/oss/pdfreporter/repo/SubreportUtil.h"

#include "org/oss/pdfreporter/engine/JRParameter.h"
#include "org/oss/pdfreporter/text/bundle/StringLocale.h"

static OrgOssPdfreporterEngineJasperReport *phaseReport = nil;

@implementation ReportExporter

+(void)exportReportToPdf:(NSString*)pdfPath
               withJrxml:(NSString*)jrxmlPath
     withResourceFolders:(NSArray*)resourceFolders
          withParameters:(NSDictionary *)parameters
          withSubreports:(NSDictionary *)subreports
                language:(NSString *)language
{
    [OrgOssPdfreporterRegistryApiRegistry initSession];
    NSString *jrxmlFile = [ReportExporter setupJrxmlPath:jrxmlPath andResourceFolders:resourceFolders];
    
    OrgOssPdfreporterEngineJasperReport *report = [ReportExporter loadReport:jrxmlFile];


    NSDictionary *languageParams = [self parametersForLanguage:language];
    NSMutableDictionary *allParams = [languageParams mutableCopy];
    [allParams addEntriesFromDictionary:parameters];
    NSDictionaryMap *parameterMap = [[NSDictionaryMap alloc] initWithDictionary:allParams];
    
    if ([[subreports allKeys] count] > 0) {
        [subreports enumerateKeysAndObjectsUsingBlock:^(NSString *key, NSString *value, BOOL *stop) {
            OrgOssPdfreporterEngineJasperReport *subreport = OrgOssPdfreporterRepoSubreportUtil_loadSubreportWithNSString_(value);
            [parameterMap putWithId:key withId:subreport];
        }];
    }
    
    OrgOssPdfreporterEngineJasperPrint *printReport = [ReportExporter fillReport:report withParameters:parameterMap];
    
    [OrgOssPdfreporterEngineJasperExportManager exportReportToPdfFileWithOrgOssPdfreporterEngineJasperPrint:printReport withNSString:pdfPath];
    [OrgOssPdfreporterRegistryApiRegistry dispose];
}

+(void)exportReportToPdf:(NSString*)pdfPath
               withJrxml:(NSString*)jrxmlPath
     withResourceFolders:(NSArray*)resourceFolders
              andSqlite3:(NSString*)sqlite3
          withParameters:(NSDictionary *)parameters
          withSubreports:(NSDictionary *)subreports
                language:(NSString *)language
{
    [OrgOssPdfreporterRegistryApiRegistry initSession];
    NSString *jrxmlFile = [ReportExporter setupJrxmlPath:jrxmlPath andResourceFolders:resourceFolders];
    
    OrgOssPdfreporterEngineJasperReport *report = [ReportExporter loadReport:jrxmlFile];
    
    if (![[NSFileManager defaultManager] fileExistsAtPath:sqlite3]) {
        id<OrgOssPdfreporterNetIURL> sqlUrl = OrgOssPdfreporterRepoFileResourceLoader_getURLWithNSString_(sqlite3);
            sqlite3 = [sqlUrl getPath];
    }

    NSDictionary *languageParams = [self parametersForLanguage:language];
    NSMutableDictionary *allParams = [languageParams mutableCopy];
    [allParams addEntriesFromDictionary:parameters];
    NSDictionaryMap *parameterMap = [[NSDictionaryMap alloc] initWithDictionary:allParams];
    
    if ([[subreports allKeys] count] > 0) {
        [subreports enumerateKeysAndObjectsUsingBlock:^(NSString *key, NSString *value, BOOL *stop) {
            OrgOssPdfreporterEngineJasperReport *subreport = OrgOssPdfreporterRepoSubreportUtil_loadSubreportWithNSString_(value);
            [parameterMap putWithId:key withId:subreport];
        }];
    }
    
    OrgOssPdfreporterEngineJasperPrint *printReport = [ReportExporter fillReport:report withParameters:parameterMap withSqlite3:sqlite3];
    
    [OrgOssPdfreporterEngineJasperExportManager exportReportToPdfFileWithOrgOssPdfreporterEngineJasperPrint:printReport withNSString:pdfPath];
    [OrgOssPdfreporterRegistryApiRegistry dispose];
}

+(void)exportReportToPdf:(NSString*)pdfPath
               withJrxml:(NSString*)jrxmlPath
     withResourceFolders:(NSArray*)resourceFolders
                 withXml:(NSString*)xmlFile
                andXPath:(NSString*)xPath
          withParameters:(NSDictionary *)parameters
          withSubreports:(NSDictionary *)subreports
                language:(NSString *)language
{
    [OrgOssPdfreporterRegistryApiRegistry initSession];
    NSString *jrxmlFile = [ReportExporter setupJrxmlPath:jrxmlPath andResourceFolders:resourceFolders];
    
    OrgOssPdfreporterEngineJasperReport *report = [ReportExporter loadReport:jrxmlFile];
    NSDictionary *languageParams = [self parametersForLanguage:language];
    NSMutableDictionary *allParams = [languageParams mutableCopy];
    [allParams addEntriesFromDictionary:parameters];

    NSDictionaryMap *parameterMap = [[NSDictionaryMap alloc] initWithDictionary:allParams];
    
    if ([[subreports allKeys] count] > 0) {
        [subreports enumerateKeysAndObjectsUsingBlock:^(NSString *key, NSString *value, BOOL *stop) {
            OrgOssPdfreporterEngineJasperReport *subreport = OrgOssPdfreporterRepoSubreportUtil_loadSubreportWithNSString_(value);
            [parameterMap putWithId:key withId:subreport];
        }];
    }
    
    OrgOssPdfreporterEngineJasperPrint *printReport = [ReportExporter fillReport:report withParameters:parameterMap withXml:xmlFile andXPath:xPath];
    
    [OrgOssPdfreporterEngineJasperExportManager exportReportToPdfFileWithOrgOssPdfreporterEngineJasperPrint:printReport withNSString:pdfPath];
    [OrgOssPdfreporterRegistryApiRegistry dispose];
}


#pragma mark - phased export

+(void)phaseLoadReportWithJrxml:(NSString *)jrxmlPath
            withResourceFolders:(NSArray *)resourceFolders
{
    if(phaseReport) [OrgOssPdfreporterRegistryApiRegistry dispose];
    [OrgOssPdfreporterRegistryApiRegistry initSession];
    NSString *jrxmlFile = [ReportExporter setupJrxmlPath:jrxmlPath andResourceFolders:resourceFolders];
    phaseReport = [ReportExporter loadReport:jrxmlFile];
}

+(void)phaseExportReportToPdf:(NSString *)pdfPath
                     language:(NSString *)language
{
    [self phaseExportReportToPdf:pdfPath fillWithParameters:nil language:language];
}

+(void)phaseExportReportToPdf:(NSString *)pdfPath
           fillWithParameters:(NSDictionary *)parameters
                     language:(NSString *)language
{
    NSDictionary *languageParameters = [self parametersForLanguage:language];
    NSMutableDictionary *params = [@{} mutableCopy];
    [params addEntriesFromDictionary:languageParameters];
    [params addEntriesFromDictionary:parameters];

    NSDictionaryMap *parameterMap = [[NSDictionaryMap alloc] initWithDictionary:params];

    OrgOssPdfreporterEngineJasperPrint *printReport = [ReportExporter fillReport:phaseReport withParameters:parameterMap];
    [OrgOssPdfreporterEngineJasperExportManager exportReportToPdfFileWithOrgOssPdfreporterEngineJasperPrint:printReport withNSString:pdfPath];
    [OrgOssPdfreporterRegistryApiRegistry dispose];
    phaseReport = nil;
}

+(void)phaseExportReportToPdf:(NSString *)pdfPath
                      withXml:(NSString *)xmlFile
                     andXPath:(NSString *)xPath
                     language:(NSString *)language
{
    NSDictionaryMap *parameterMap = [[NSDictionaryMap alloc] initWithDictionary:[self parametersForLanguage:language]];
    OrgOssPdfreporterEngineJasperPrint *printReport = [ReportExporter fillReport:phaseReport withParameters:parameterMap withXml:xmlFile andXPath:xPath];
    [OrgOssPdfreporterEngineJasperExportManager exportReportToPdfFileWithOrgOssPdfreporterEngineJasperPrint:printReport withNSString:pdfPath];
    [OrgOssPdfreporterRegistryApiRegistry dispose];
    phaseReport = nil;
}

+(void)phaseExportReportToPdf:(NSString *)pdfPath
                   andSqlite3:(NSString *)sqlite3
                     language:(NSString *)language
{
    NSDictionaryMap *parameterMap = [[NSDictionaryMap alloc] initWithDictionary:[self parametersForLanguage:language]];
    OrgOssPdfreporterEngineJasperPrint *printReport = [ReportExporter fillReport:phaseReport withParameters:parameterMap withSqlite3:sqlite3];
    [OrgOssPdfreporterEngineJasperExportManager exportReportToPdfFileWithOrgOssPdfreporterEngineJasperPrint:printReport withNSString:pdfPath];
    [OrgOssPdfreporterRegistryApiRegistry dispose];
    phaseReport = nil;
}

+(OrgOssPdfreporterEngineJasperReport *)loadReport:(NSString *)jrxmlFile
{
    JavaIoInputStream *isReport = [OrgOssPdfreporterRepoFileResourceLoader getInputStreamWithNSString:jrxmlFile];
    OrgOssPdfreporterEngineDesignJasperDesign *design = [OrgOssPdfreporterEngineXmlJRXmlLoader load__WithJavaIoInputStream:isReport];
    [isReport close];
    return [OrgOssPdfreporterEngineJasperCompileManager compileReportWithOrgOssPdfreporterEngineDesignJasperDesign:design];
}

+(OrgOssPdfreporterEngineJasperPrint *)fillReport:(OrgOssPdfreporterEngineJasperReport*)report withParameters:(id<JavaUtilMap>)parameters
{
    return [OrgOssPdfreporterEngineJasperFillManager fillReportWithOrgOssPdfreporterEngineJasperReport:report withJavaUtilMap:parameters withOrgOssPdfreporterEngineJRDataSource:[[OrgOssPdfreporterEngineJREmptyDataSource alloc] init]];
}

+(OrgOssPdfreporterEngineJasperPrint*)fillReport:(OrgOssPdfreporterEngineJasperReport*)report withParameters:(id<JavaUtilMap>)parameters withXml:(NSString*)xmlFile andXPath:(NSString*)xPath
{
    JavaIoInputStream *isXmlData = [OrgOssPdfreporterRepoFileResourceLoader getInputStreamWithNSString:xmlFile];
    OrgOssPdfreporterEngineDataJRXmlDataSource *xmlDataSource = [[OrgOssPdfreporterEngineDataJRXmlDataSource alloc] initWithJavaIoInputStream:isXmlData withNSString:xPath];
    [xmlDataSource setDatePatternWithNSString:@"yyyy-MM-dd"];
    OrgOssPdfreporterEngineJasperPrint *print = [OrgOssPdfreporterEngineJasperFillManager fillReportWithOrgOssPdfreporterEngineJasperReport:report withJavaUtilMap:parameters withOrgOssPdfreporterEngineJRDataSource:xmlDataSource];
    [isXmlData close];
    return print;
}

+(OrgOssPdfreporterEngineJasperPrint*)fillReport:(OrgOssPdfreporterEngineJasperReport*)report withParameters:(id<JavaUtilMap>)parameters withSqlite3:(NSString*)sqlite3
{
    id<OrgOssPdfreporterSqlIConnection> sqlDataSource = [[OrgOssPdfreporterRegistryApiRegistry getSqlFactory] newConnectionWithNSString:sqlite3 withNSString:nil withNSString:nil];
    
    OrgOssPdfreporterEngineJasperPrint *print = [OrgOssPdfreporterEngineJasperFillManager fillReportWithOrgOssPdfreporterEngineJasperReport:report withJavaUtilMap:parameters withOrgOssPdfreporterSqlIConnection:sqlDataSource];
    return print;
}

+(NSString*)setupJrxmlPath:(NSString*)jrxmlPath andResourceFolders:(NSArray*)resourceFolders
{
    OrgOssPdfreporterRepoRepositoryManager *repositoryManager = [OrgOssPdfreporterRepoRepositoryManager getInstance];
    [repositoryManager reset];
    
    NSString *jrxmlFolder = [NSString string];
    
    NSArray *jrxmlPathComponents = [jrxmlPath pathComponents];
    for(int i=0; i<jrxmlPathComponents.count-1; i++)
    {
        jrxmlFolder = [jrxmlFolder stringByAppendingPathComponent:[jrxmlPathComponents objectAtIndex:i]];
    }
    
    [repositoryManager setDefaulReportFolderWithNSString:jrxmlFolder];
    
    BOOL first = YES;
    for(NSString* resourceFolder in resourceFolders)
    {
        if(first)
        {
            first = NO;
            [repositoryManager setDefaultResourceFolderWithNSString:resourceFolder];
        }
        else
        {
            [repositoryManager addExtraReportFolderWithNSString:resourceFolder];
        }
    }
    return [jrxmlPath lastPathComponent];
}

+ (NSDictionary *)parametersForLanguage:(NSString *)language
{
    if (!language || language.length < 2)
    {
        return nil;
    }

    NSMutableDictionary *params = [NSMutableDictionary dictionary];
    id locale = OrgOssPdfreporterTextBundleStringLocale_fromLocaleStringWithNSString_(language);
    params[OrgOssPdfreporterEngineJRParameter_get_REPORT_LOCALE()] = locale;
    return params;
}

@end
