//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: pdfreporter-core/src/org/oss/pdfreporter/engine/component/ComponentsEnvironment.java
//
//  Created by kendra on 9/27/13.
//

#include "IOSClass.h"
#include "java/util/Collection.h"
#include "java/util/HashMap.h"
#include "java/util/Iterator.h"
#include "java/util/List.h"
#include "java/util/Map.h"
#include "org/oss/pdfreporter/engine/DefaultJasperReportsContext.h"
#include "org/oss/pdfreporter/engine/JRRuntimeException.h"
#include "org/oss/pdfreporter/engine/JasperReportsContext.h"
#include "org/oss/pdfreporter/engine/component/ComponentKey.h"
#include "org/oss/pdfreporter/engine/component/ComponentsBundle.h"
#include "org/oss/pdfreporter/engine/component/ComponentsEnvironment.h"
#include "org/oss/pdfreporter/engine/component/ComponentsXmlParser.h"
#include "org/oss/pdfreporter/engine/component/IComponentManager.h"
#include "org/oss/pdfreporter/extensions/ExtensionsEnvironment.h"
#include "org/oss/pdfreporter/uses/org/apache/commons/collections/ReferenceMap.h"

@implementation OrgOssPdfreporterEngineComponentComponentsEnvironment

@synthesize cache = cache_;
@synthesize jasperReportsContext = jasperReportsContext_;

- (id)initWithOrgOssPdfreporterEngineJasperReportsContext:(id<OrgOssPdfreporterEngineJasperReportsContext>)jasperReportsContext {
  if ((self = [super init])) {
    cache_ = [[OrgOssPdfreporterUsesOrgApacheCommonsCollectionsReferenceMap alloc] initWithInt:OrgOssPdfreporterUsesOrgApacheCommonsCollectionsReferenceMap_WEAK withInt:OrgOssPdfreporterUsesOrgApacheCommonsCollectionsReferenceMap_HARD];
    self.jasperReportsContext = jasperReportsContext;
  }
  return self;
}

+ (OrgOssPdfreporterEngineComponentComponentsEnvironment *)getDefaultInstance {
  return [[OrgOssPdfreporterEngineComponentComponentsEnvironment alloc] initWithOrgOssPdfreporterEngineJasperReportsContext:[OrgOssPdfreporterEngineDefaultJasperReportsContext getInstance]];
}

+ (OrgOssPdfreporterEngineComponentComponentsEnvironment *)getInstanceWithOrgOssPdfreporterEngineJasperReportsContext:(id<OrgOssPdfreporterEngineJasperReportsContext>)jasperReportsContext {
  return [[OrgOssPdfreporterEngineComponentComponentsEnvironment alloc] initWithOrgOssPdfreporterEngineJasperReportsContext:jasperReportsContext];
}

- (id<JavaUtilCollection>)getBundles {
  id<JavaUtilMap> components = [self getCachedBundles];
  return [((id<JavaUtilMap>) nil_chk(components)) values];
}

- (id<JavaUtilMap>)getCachedBundles {
  id cacheKey = [OrgOssPdfreporterExtensionsExtensionsEnvironment getExtensionsCacheKey];
  @synchronized (cache_) {
    id<JavaUtilMap> components = (id<JavaUtilMap>) [((OrgOssPdfreporterUsesOrgApacheCommonsCollectionsReferenceMap *) nil_chk(cache_)) getWithId:cacheKey];
    if (components == nil) {
      components = [self findBundles];
      (void) [((OrgOssPdfreporterUsesOrgApacheCommonsCollectionsReferenceMap *) nil_chk(cache_)) putWithId:cacheKey withId:components];
    }
    return components;
  }
}

- (id<JavaUtilMap>)findBundles {
  id<JavaUtilMap> components = [[JavaUtilHashMap alloc] init];
  id<JavaUtilList> bundles = [((id<OrgOssPdfreporterEngineJasperReportsContext>) nil_chk(jasperReportsContext_)) getExtensionsWithIOSClass:[IOSClass classWithProtocol:@protocol(OrgOssPdfreporterEngineComponentComponentsBundle)]];
  for (id<JavaUtilIterator> it = [((id<JavaUtilList>) nil_chk(bundles)) iterator]; [((id<JavaUtilIterator>) nil_chk(it)) hasNext]; ) {
    id<OrgOssPdfreporterEngineComponentComponentsBundle> bundle = [((id<JavaUtilIterator>) nil_chk(it)) next];
    NSString *namespace_ = [((id<OrgOssPdfreporterEngineComponentComponentsXmlParser>) nil_chk([((id<OrgOssPdfreporterEngineComponentComponentsBundle>) nil_chk(bundle)) getXmlParser])) getNamespace];
    if ([((id<JavaUtilMap>) nil_chk(components)) containsKeyWithId:namespace_]) {
    }
    else {
      (void) [((id<JavaUtilMap>) nil_chk(components)) putWithId:namespace_ withId:bundle];
    }
  }
  return components;
}

- (id<OrgOssPdfreporterEngineComponentComponentsBundle>)getBundleWithNSString:(NSString *)namespace_ {
  id<JavaUtilMap> components = [self getCachedBundles];
  id<OrgOssPdfreporterEngineComponentComponentsBundle> componentsBundle = [((id<JavaUtilMap>) nil_chk(components)) getWithId:namespace_];
  if (componentsBundle == nil) {
    @throw [[OrgOssPdfreporterEngineJRRuntimeException alloc] initWithNSString:[NSString stringWithFormat:@"No components bundle registered for namespace %@", namespace_]];
  }
  return componentsBundle;
}

- (id<OrgOssPdfreporterEngineComponentIComponentManager>)getManagerWithOrgOssPdfreporterEngineComponentComponentKey:(OrgOssPdfreporterEngineComponentComponentKey *)componentKey {
  NSString *namespace_ = [((OrgOssPdfreporterEngineComponentComponentKey *) nil_chk(componentKey)) getNamespace];
  id<OrgOssPdfreporterEngineComponentComponentsBundle> componentsBundle = [self getBundleWithNSString:namespace_];
  NSString *name = [((OrgOssPdfreporterEngineComponentComponentKey *) nil_chk(componentKey)) getName];
  return [((id<OrgOssPdfreporterEngineComponentComponentsBundle>) nil_chk(componentsBundle)) getComponentManagerWithNSString:name];
}

+ (id<JavaUtilCollection>)getComponentBundles {
  return [((OrgOssPdfreporterEngineComponentComponentsEnvironment *) nil_chk([OrgOssPdfreporterEngineComponentComponentsEnvironment getDefaultInstance])) getBundles];
}

+ (id<JavaUtilMap>)getCachedComponentBundles {
  return [((OrgOssPdfreporterEngineComponentComponentsEnvironment *) nil_chk([OrgOssPdfreporterEngineComponentComponentsEnvironment getDefaultInstance])) getCachedBundles];
}

+ (id<JavaUtilMap>)findComponentBundles {
  return [((OrgOssPdfreporterEngineComponentComponentsEnvironment *) nil_chk([OrgOssPdfreporterEngineComponentComponentsEnvironment getDefaultInstance])) findBundles];
}

+ (id<OrgOssPdfreporterEngineComponentComponentsBundle>)getComponentsBundleWithNSString:(NSString *)namespace_ {
  return [((OrgOssPdfreporterEngineComponentComponentsEnvironment *) nil_chk([OrgOssPdfreporterEngineComponentComponentsEnvironment getDefaultInstance])) getBundleWithNSString:namespace_];
}

+ (id<OrgOssPdfreporterEngineComponentIComponentManager>)getComponentManagerWithOrgOssPdfreporterEngineComponentComponentKey:(OrgOssPdfreporterEngineComponentComponentKey *)componentKey {
  return [((OrgOssPdfreporterEngineComponentComponentsEnvironment *) nil_chk([OrgOssPdfreporterEngineComponentComponentsEnvironment getDefaultInstance])) getManagerWithOrgOssPdfreporterEngineComponentComponentKey:componentKey];
}

- (void)copyAllPropertiesTo:(id)copy {
  [super copyAllPropertiesTo:copy];
  OrgOssPdfreporterEngineComponentComponentsEnvironment *typedCopy = (OrgOssPdfreporterEngineComponentComponentsEnvironment *) copy;
  typedCopy.cache = cache_;
  typedCopy.jasperReportsContext = jasperReportsContext_;
}

@end
