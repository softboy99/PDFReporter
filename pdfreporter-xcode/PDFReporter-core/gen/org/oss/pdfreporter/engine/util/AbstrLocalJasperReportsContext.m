//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: pdfreporter-core/src/org/oss/pdfreporter/engine/util/AbstrLocalJasperReportsContext.java
//
//  Created by kendra on 9/27/13.
//

#include "IOSClass.h"
#include "java/util/ArrayList.h"
#include "java/util/Iterator.h"
#include "java/util/List.h"
#include "org/oss/pdfreporter/engine/JasperReportsContext.h"
#include "org/oss/pdfreporter/engine/util/AbstrLocalJasperReportsContext.h"
#include "org/oss/pdfreporter/repo/RepositoryService.h"

@implementation OrgOssPdfreporterEngineUtilAbstrLocalJasperReportsContext

@synthesize localRepositoryServices = localRepositoryServices_;

- (id)initWithOrgOssPdfreporterEngineJasperReportsContext:(id<OrgOssPdfreporterEngineJasperReportsContext>)parent {
  return [super initWithOrgOssPdfreporterEngineJasperReportsContext:parent];
}

- (id<JavaUtilList>)getExtensionsWithIOSClass:(IOSClass *)extensionType {
  if ([[IOSClass classWithProtocol:@protocol(OrgOssPdfreporterRepoRepositoryService)] isEqual:extensionType]) {
    if (localRepositoryServices_ == nil) {
      id<JavaUtilList> repoServices = [super getExtensionsWithIOSClass:[IOSClass classWithProtocol:@protocol(OrgOssPdfreporterRepoRepositoryService)]];
      if (repoServices != nil && [((id<JavaUtilList>) nil_chk(repoServices)) size] > 0) {
        localRepositoryServices_ = [[JavaUtilArrayList alloc] init];
        {
          id<JavaUtilIterator> iter__ = [((id<JavaUtilList>) nil_chk(repoServices)) iterator];
          while ([((id<JavaUtilIterator>) nil_chk(iter__)) hasNext]) {
            id<OrgOssPdfreporterRepoRepositoryService> repoService = [((id<JavaUtilIterator>) nil_chk(iter__)) next];
            [localRepositoryServices_ addWithId:repoService];
          }
        }
      }
    }
    return (id<JavaUtilList>) localRepositoryServices_;
  }
  return [super getExtensionsWithIOSClass:extensionType];
}

- (void)copyAllPropertiesTo:(id)copy {
  [super copyAllPropertiesTo:copy];
  OrgOssPdfreporterEngineUtilAbstrLocalJasperReportsContext *typedCopy = (OrgOssPdfreporterEngineUtilAbstrLocalJasperReportsContext *) copy;
  typedCopy.localRepositoryServices = localRepositoryServices_;
}

@end
