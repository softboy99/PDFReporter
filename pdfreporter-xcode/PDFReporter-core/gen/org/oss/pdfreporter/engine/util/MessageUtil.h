//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: pdfreporter-core/src/org/oss/pdfreporter/engine/util/MessageUtil.java
//
//  Created by kendra on 9/27/13.
//

#ifndef _OrgOssPdfreporterEngineUtilMessageUtil_H_
#define _OrgOssPdfreporterEngineUtilMessageUtil_H_

@class JavaUtilLocale;
@class OrgOssPdfreporterEngineUtilLocalizedMessageProvider;
@protocol OrgOssPdfreporterEngineJasperReportsContext;
@protocol OrgOssPdfreporterEngineUtilMessageProvider;

#import "JreEmulation.h"

@interface OrgOssPdfreporterEngineUtilMessageUtil : NSObject {
 @public
  id<OrgOssPdfreporterEngineJasperReportsContext> jasperReportsContext_;
}

@property (nonatomic, strong) id<OrgOssPdfreporterEngineJasperReportsContext> jasperReportsContext;

- (id)initWithOrgOssPdfreporterEngineJasperReportsContext:(id<OrgOssPdfreporterEngineJasperReportsContext>)jasperReportsContext;
+ (OrgOssPdfreporterEngineUtilMessageUtil *)getInstanceWithOrgOssPdfreporterEngineJasperReportsContext:(id<OrgOssPdfreporterEngineJasperReportsContext>)jasperReportsContext;
- (id<OrgOssPdfreporterEngineUtilMessageProvider>)getMessageProviderWithNSString:(NSString *)name;
- (OrgOssPdfreporterEngineUtilLocalizedMessageProvider *)getLocalizedMessageProviderWithNSString:(NSString *)name
                                                                              withJavaUtilLocale:(JavaUtilLocale *)locale;
@end

#endif // _OrgOssPdfreporterEngineUtilMessageUtil_H_
