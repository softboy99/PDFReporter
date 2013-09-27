//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: pdfreporter-core/src/org/oss/pdfreporter/extensions/DefaultExtensionsRegistry.java
//
//  Created by kendra on 9/27/13.
//

#include "IOSClass.h"
#include "java/lang/Exception.h"
#include "java/util/ArrayList.h"
#include "java/util/HashMap.h"
#include "java/util/Iterator.h"
#include "java/util/List.h"
#include "java/util/Map.h"
#include "java/util/logging/Level.h"
#include "java/util/logging/Logger.h"
#include "org/oss/pdfreporter/engine/JRPropertiesMap.h"
#include "org/oss/pdfreporter/engine/JRPropertiesUtil.h"
#include "org/oss/pdfreporter/engine/util/ClassUtils.h"
#include "org/oss/pdfreporter/engine/util/JRLoader.h"
#include "org/oss/pdfreporter/extensions/DefaultExtensionsRegistry.h"
#include "org/oss/pdfreporter/extensions/ExtensionsEnvironment.h"
#include "org/oss/pdfreporter/extensions/ExtensionsRegistry.h"
#include "org/oss/pdfreporter/extensions/ExtensionsRegistryFactory.h"
#include "org/oss/pdfreporter/net/IURL.h"
#include "org/oss/pdfreporter/repo/FileSystemResource.h"

@implementation OrgOssPdfreporterExtensionsDefaultExtensionsRegistry

static JavaUtilLoggingLogger * OrgOssPdfreporterExtensionsDefaultExtensionsRegistry_logger_;
static NSString * OrgOssPdfreporterExtensionsDefaultExtensionsRegistry_EXTENSION_RESOURCE_NAME_ = @"jasperreports_extension.properties";
static NSString * OrgOssPdfreporterExtensionsDefaultExtensionsRegistry_PROPERTY_REGISTRY_FACTORY_PREFIX_ = @"net.sf.jasperreports.extension.registry.factory.";
static NSString * OrgOssPdfreporterExtensionsDefaultExtensionsRegistry_PROPERTY_REGISTRY_PREFIX_ = @"net.sf.jasperreports.extension.";

@synthesize registrySetCache = registrySetCache_;
@synthesize registryCache = registryCache_;

+ (JavaUtilLoggingLogger *)logger {
  return OrgOssPdfreporterExtensionsDefaultExtensionsRegistry_logger_;
}

+ (NSString *)EXTENSION_RESOURCE_NAME {
  return OrgOssPdfreporterExtensionsDefaultExtensionsRegistry_EXTENSION_RESOURCE_NAME_;
}

+ (NSString *)PROPERTY_REGISTRY_FACTORY_PREFIX {
  return OrgOssPdfreporterExtensionsDefaultExtensionsRegistry_PROPERTY_REGISTRY_FACTORY_PREFIX_;
}

+ (NSString *)PROPERTY_REGISTRY_PREFIX {
  return OrgOssPdfreporterExtensionsDefaultExtensionsRegistry_PROPERTY_REGISTRY_PREFIX_;
}

- (id<JavaUtilList>)getExtensionsWithIOSClass:(IOSClass *)extensionType {
  id<JavaUtilList> registries = [self getRegistries];
  id<JavaUtilList> extensions = [[JavaUtilArrayList alloc] initWithInt:[((id<JavaUtilList>) nil_chk(registries)) size]];
  for (id<JavaUtilIterator> it = [((id<JavaUtilList>) nil_chk(registries)) iterator]; [((id<JavaUtilIterator>) nil_chk(it)) hasNext]; ) {
    id<OrgOssPdfreporterExtensionsExtensionsRegistry> registry = [((id<JavaUtilIterator>) nil_chk(it)) next];
    id<JavaUtilList> registryExtensions = [((id<OrgOssPdfreporterExtensionsExtensionsRegistry>) nil_chk(registry)) getExtensionsWithIOSClass:extensionType];
    if (registryExtensions != nil && ![((id<JavaUtilList>) nil_chk(registryExtensions)) isEmpty]) {
      [((id<JavaUtilList>) nil_chk(extensions)) addAllWithJavaUtilCollection:registryExtensions];
    }
  }
  return extensions;
}

- (id<JavaUtilList>)getRegistries {
  id<JavaUtilList> registries;
  id cacheKey = [OrgOssPdfreporterExtensionsExtensionsEnvironment getExtensionsCacheKey];
  @synchronized (registrySetCache_) {
    registries = (id<JavaUtilList>) [((id<JavaUtilMap>) nil_chk(registrySetCache_)) getWithId:cacheKey];
    if (registries == nil) {
      registries = [self loadRegistries];
      (void) [((id<JavaUtilMap>) nil_chk(registrySetCache_)) putWithId:cacheKey withId:registries];
    }
  }
  return registries;
}

- (id<JavaUtilList>)loadRegistries {
  id<JavaUtilList> allRegistries = [[JavaUtilArrayList alloc] init];
  id<JavaUtilList> extensionResources = [self loadExtensionPropertyResources];
  {
    id<JavaUtilIterator> iter__ = [((id<JavaUtilList>) nil_chk(extensionResources)) iterator];
    while ([((id<JavaUtilIterator>) nil_chk(iter__)) hasNext]) {
      OrgOssPdfreporterRepoFileSystemResource *extensionResource = [((id<JavaUtilIterator>) nil_chk(iter__)) next];
      NSString *folderPath = [((OrgOssPdfreporterRepoFileSystemResource *) nil_chk(extensionResource)) getFolderPath];
      id<JavaUtilMap> classLoaderRegistries = [self getFileFolderRegistriesWithNSString:folderPath];
      id<OrgOssPdfreporterNetIURL> url = [((OrgOssPdfreporterRepoFileSystemResource *) nil_chk(extensionResource)) getUrl];
      id<JavaUtilList> registries;
      @synchronized (classLoaderRegistries) {
        registries = [((id<JavaUtilMap>) nil_chk(classLoaderRegistries)) getWithId:url];
        if (registries == nil) {
          registries = [self loadRegistriesWithOrgOssPdfreporterNetIURL:url];
          (void) [((id<JavaUtilMap>) nil_chk(classLoaderRegistries)) putWithId:url withId:registries];
        }
      }
      [((id<JavaUtilList>) nil_chk(allRegistries)) addAllWithJavaUtilCollection:registries];
    }
  }
  return allRegistries;
}

- (id<JavaUtilList>)loadExtensionPropertyResources {
  return [OrgOssPdfreporterEngineUtilJRLoader getFileSystemResourcesWithNSString:OrgOssPdfreporterExtensionsDefaultExtensionsRegistry_EXTENSION_RESOURCE_NAME_];
}

- (id<JavaUtilMap>)getFileFolderRegistriesWithNSString:(NSString *)folderPath {
  @synchronized (registryCache_) {
    id<JavaUtilMap> registries = (id<JavaUtilMap>) [((id<JavaUtilMap>) nil_chk(registryCache_)) getWithId:folderPath];
    if (registries == nil) {
      registries = [[JavaUtilHashMap alloc] init];
      (void) [((id<JavaUtilMap>) nil_chk(registryCache_)) putWithId:folderPath withId:registries];
    }
    return registries;
  }
}

- (id<JavaUtilList>)loadRegistriesWithOrgOssPdfreporterNetIURL:(id<OrgOssPdfreporterNetIURL>)url {
  OrgOssPdfreporterEngineJRPropertiesMap *properties = [OrgOssPdfreporterEngineJRPropertiesMap loadPropertiesWithOrgOssPdfreporterNetIURL:url];
  id<JavaUtilList> registries = [[JavaUtilArrayList alloc] init];
  id<JavaUtilList> factoryProps = [OrgOssPdfreporterEngineJRPropertiesUtil getPropertiesWithOrgOssPdfreporterEngineJRPropertiesMap:properties withNSString:OrgOssPdfreporterExtensionsDefaultExtensionsRegistry_PROPERTY_REGISTRY_FACTORY_PREFIX_];
  for (id<JavaUtilIterator> it = [((id<JavaUtilList>) nil_chk(factoryProps)) iterator]; [((id<JavaUtilIterator>) nil_chk(it)) hasNext]; ) {
    OrgOssPdfreporterEngineJRPropertiesUtil_PropertySuffix *factoryProp = [((id<JavaUtilIterator>) nil_chk(it)) next];
    NSString *registryId = [((OrgOssPdfreporterEngineJRPropertiesUtil_PropertySuffix *) nil_chk(factoryProp)) getSuffix];
    NSString *factoryClass = [((OrgOssPdfreporterEngineJRPropertiesUtil_PropertySuffix *) nil_chk(factoryProp)) getValue];
    @try {
      id<OrgOssPdfreporterExtensionsExtensionsRegistry> registry = [self instantiateRegistryWithOrgOssPdfreporterEngineJRPropertiesMap:properties withNSString:registryId withNSString:factoryClass];
      [((id<JavaUtilList>) nil_chk(registries)) addWithId:registry];
    }
    @catch (JavaLangException *e) {
      [((JavaUtilLoggingLogger *) nil_chk(OrgOssPdfreporterExtensionsDefaultExtensionsRegistry_logger_)) logWithJavaUtilLoggingLevel:[JavaUtilLoggingLevel SEVERE] withNSString:[NSString stringWithFormat:@"Exception loading Registry %@", registryId] withJavaLangThrowable:e];
    }
  }
  return registries;
}

- (id<OrgOssPdfreporterExtensionsExtensionsRegistry>)instantiateRegistryWithOrgOssPdfreporterEngineJRPropertiesMap:(OrgOssPdfreporterEngineJRPropertiesMap *)props
                                                                                                      withNSString:(NSString *)registryId
                                                                                                      withNSString:(NSString *)factoryClass {
  [((JavaUtilLoggingLogger *) nil_chk(OrgOssPdfreporterExtensionsDefaultExtensionsRegistry_logger_)) infoWithNSString:[NSString stringWithFormat:@"Loading ExtensionsRegistry: %@", registryId]];
  id<OrgOssPdfreporterExtensionsExtensionsRegistryFactory> factory = (id<OrgOssPdfreporterExtensionsExtensionsRegistryFactory>) [OrgOssPdfreporterEngineUtilClassUtils instantiateClassWithNSString:factoryClass withIOSClass:[IOSClass classWithProtocol:@protocol(OrgOssPdfreporterExtensionsExtensionsRegistryFactory)]];
  return [((id<OrgOssPdfreporterExtensionsExtensionsRegistryFactory>) nil_chk(factory)) createRegistryWithNSString:registryId withOrgOssPdfreporterEngineJRPropertiesMap:props];
}

- (void)reset {
  [((id<JavaUtilMap>) nil_chk(registrySetCache_)) clear];
}

- (id)init {
  if ((self = [super init])) {
    registrySetCache_ = [[JavaUtilHashMap alloc] init];
    registryCache_ = [[JavaUtilHashMap alloc] init];
  }
  return self;
}

+ (void)initialize {
  if (self == [OrgOssPdfreporterExtensionsDefaultExtensionsRegistry class]) {
    OrgOssPdfreporterExtensionsDefaultExtensionsRegistry_logger_ = [JavaUtilLoggingLogger getLoggerWithNSString:[[IOSClass classWithClass:[OrgOssPdfreporterExtensionsDefaultExtensionsRegistry class]] getName]];
  }
}

- (void)copyAllPropertiesTo:(id)copy {
  [super copyAllPropertiesTo:copy];
  OrgOssPdfreporterExtensionsDefaultExtensionsRegistry *typedCopy = (OrgOssPdfreporterExtensionsDefaultExtensionsRegistry *) copy;
  typedCopy.registrySetCache = registrySetCache_;
  typedCopy.registryCache = registryCache_;
}

@end
