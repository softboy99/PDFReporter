//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: pdfreporter-core/src/org/oss/pdfreporter/engine/DefaultJasperReportsContext.java
//
//  Created by kendra on 9/27/13.
//

#ifndef _OrgOssPdfreporterEngineDefaultJasperReportsContext_H_
#define _OrgOssPdfreporterEngineDefaultJasperReportsContext_H_

@class IOSClass;
@class JavaUtilLoggingLogger;
@class OrgOssPdfreporterUsesJavaUtilProperties;
@protocol JavaUtilList;
@protocol JavaUtilMap;

#import "JreEmulation.h"
#include "org/oss/pdfreporter/engine/JasperReportsContext.h"

@interface OrgOssPdfreporterEngineDefaultJasperReportsContext : NSObject < OrgOssPdfreporterEngineJasperReportsContext > {
 @public
  id<JavaUtilMap> values_;
  id<JavaUtilMap> properties_;
}

@property (nonatomic, strong) id<JavaUtilMap> values;
@property (nonatomic, strong) id<JavaUtilMap> properties;

+ (JavaUtilLoggingLogger *)logger;
+ (NSString *)DEFAULT_PROPERTIES_FILE;
+ (NSString *)PROPERTIES_FILE;
+ (OrgOssPdfreporterEngineDefaultJasperReportsContext *)INSTANCE;
- (id)init;
+ (OrgOssPdfreporterEngineDefaultJasperReportsContext *)getInstance;
- (void)initProperties OBJC_METHOD_FAMILY_NONE;
- (void)loadSystemProperties;
+ (OrgOssPdfreporterUsesJavaUtilProperties *)getDefaultProperties;
+ (NSString *)getSystemPropertyWithNSString:(NSString *)propertyName;
- (void)loadSystemPropertyWithNSString:(NSString *)sysKey
                          withNSString:(NSString *)propKey;
- (id)getValueWithNSString:(NSString *)key;
- (void)setValueWithNSString:(NSString *)key
                      withId:(id)value;
- (id<JavaUtilList>)getExtensionsWithIOSClass:(IOSClass *)extensionType;
- (NSString *)getPropertyWithNSString:(NSString *)key;
- (void)setPropertyWithNSString:(NSString *)key
                   withNSString:(NSString *)value;
- (void)removePropertyWithNSString:(NSString *)key;
- (id<JavaUtilMap>)getProperties;
@end

#endif // _OrgOssPdfreporterEngineDefaultJasperReportsContext_H_
