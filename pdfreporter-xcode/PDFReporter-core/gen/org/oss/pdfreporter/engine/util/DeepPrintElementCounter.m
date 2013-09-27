//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: pdfreporter-core/src/org/oss/pdfreporter/engine/util/DeepPrintElementCounter.java
//
//  Created by kendra on 9/27/13.
//

#include "java/util/concurrent/atomic/AtomicInteger.h"
#include "org/oss/pdfreporter/engine/JRPrintElement.h"
#include "org/oss/pdfreporter/engine/util/DeepPrintElementCounter.h"

@implementation OrgOssPdfreporterEngineUtilDeepPrintElementCounter

static OrgOssPdfreporterEngineUtilDeepPrintElementCounter * OrgOssPdfreporterEngineUtilDeepPrintElementCounter_INSTANCE_;

+ (OrgOssPdfreporterEngineUtilDeepPrintElementCounter *)INSTANCE {
  return OrgOssPdfreporterEngineUtilDeepPrintElementCounter_INSTANCE_;
}

+ (int)countWithOrgOssPdfreporterEngineJRPrintElement:(id<OrgOssPdfreporterEngineJRPrintElement>)element {
  if (element == nil) {
    return 0;
  }
  JavaUtilConcurrentAtomicAtomicInteger *count = [[JavaUtilConcurrentAtomicAtomicInteger alloc] initWithInt:0];
  [((id<OrgOssPdfreporterEngineJRPrintElement>) nil_chk(element)) acceptWithOrgOssPdfreporterEnginePrintElementVisitor:OrgOssPdfreporterEngineUtilDeepPrintElementCounter_INSTANCE_ withId:count];
  return [((JavaUtilConcurrentAtomicAtomicInteger *) nil_chk(count)) get];
}

- (id)init {
  return [super initWithBOOL:YES];
}

- (void)visitElementWithOrgOssPdfreporterEngineJRPrintElement:(id<OrgOssPdfreporterEngineJRPrintElement>)element
                                                       withId:(JavaUtilConcurrentAtomicAtomicInteger *)count {
  [((JavaUtilConcurrentAtomicAtomicInteger *) nil_chk(count)) incrementAndGet];
}

+ (void)initialize {
  if (self == [OrgOssPdfreporterEngineUtilDeepPrintElementCounter class]) {
    OrgOssPdfreporterEngineUtilDeepPrintElementCounter_INSTANCE_ = [[OrgOssPdfreporterEngineUtilDeepPrintElementCounter alloc] init];
  }
}

@end
