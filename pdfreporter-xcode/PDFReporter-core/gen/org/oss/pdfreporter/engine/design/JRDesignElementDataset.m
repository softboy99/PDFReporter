//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: pdfreporter-core/src/org/oss/pdfreporter/engine/design/JRDesignElementDataset.java
//
//  Created by kendra on 9/27/13.
//

#include "org/oss/pdfreporter/engine/JRDatasetRun.h"
#include "org/oss/pdfreporter/engine/JRElementDataset.h"
#include "org/oss/pdfreporter/engine/JRExpression.h"
#include "org/oss/pdfreporter/engine/JRGroup.h"
#include "org/oss/pdfreporter/engine/base/JRBaseObjectFactory.h"
#include "org/oss/pdfreporter/engine/design/JRDesignElementDataset.h"
#include "org/oss/pdfreporter/engine/design/events/JRPropertyChangeSupport.h"
#include "org/oss/pdfreporter/engine/type/IncrementTypeEnum.h"
#include "org/oss/pdfreporter/engine/type/ResetTypeEnum.h"

@implementation OrgOssPdfreporterEngineDesignJRDesignElementDataset

static NSString * OrgOssPdfreporterEngineDesignJRDesignElementDataset_PROPERTY_DATASET_RUN_ = @"datasetRun";
static NSString * OrgOssPdfreporterEngineDesignJRDesignElementDataset_PROPERTY_INCREMENT_GROUP_ = @"incrementGroup";
static NSString * OrgOssPdfreporterEngineDesignJRDesignElementDataset_PROPERTY_INCREMENT_TYPE_ = @"incrementType";
static NSString * OrgOssPdfreporterEngineDesignJRDesignElementDataset_PROPERTY_INCREMENT_WHEN_EXPRESSION_ = @"incrementWhenExpression";
static NSString * OrgOssPdfreporterEngineDesignJRDesignElementDataset_PROPERTY_RESET_GROUP_ = @"resetGroup";
static NSString * OrgOssPdfreporterEngineDesignJRDesignElementDataset_PROPERTY_RESET_TYPE_ = @"resetType";

@synthesize eventSupport = eventSupport_;

+ (NSString *)PROPERTY_DATASET_RUN {
  return OrgOssPdfreporterEngineDesignJRDesignElementDataset_PROPERTY_DATASET_RUN_;
}

+ (NSString *)PROPERTY_INCREMENT_GROUP {
  return OrgOssPdfreporterEngineDesignJRDesignElementDataset_PROPERTY_INCREMENT_GROUP_;
}

+ (NSString *)PROPERTY_INCREMENT_TYPE {
  return OrgOssPdfreporterEngineDesignJRDesignElementDataset_PROPERTY_INCREMENT_TYPE_;
}

+ (NSString *)PROPERTY_INCREMENT_WHEN_EXPRESSION {
  return OrgOssPdfreporterEngineDesignJRDesignElementDataset_PROPERTY_INCREMENT_WHEN_EXPRESSION_;
}

+ (NSString *)PROPERTY_RESET_GROUP {
  return OrgOssPdfreporterEngineDesignJRDesignElementDataset_PROPERTY_RESET_GROUP_;
}

+ (NSString *)PROPERTY_RESET_TYPE {
  return OrgOssPdfreporterEngineDesignJRDesignElementDataset_PROPERTY_RESET_TYPE_;
}

- (id)init {
  return [super init];
}

- (id)initWithOrgOssPdfreporterEngineJRElementDataset:(id<OrgOssPdfreporterEngineJRElementDataset>)dataset {
  return [super initWithOrgOssPdfreporterEngineJRElementDataset:dataset];
}

- (id)initWithOrgOssPdfreporterEngineJRElementDataset:(id<OrgOssPdfreporterEngineJRElementDataset>)dataset
   withOrgOssPdfreporterEngineBaseJRBaseObjectFactory:(OrgOssPdfreporterEngineBaseJRBaseObjectFactory *)factory {
  return [super initWithOrgOssPdfreporterEngineJRElementDataset:dataset withOrgOssPdfreporterEngineBaseJRBaseObjectFactory:factory];
}

- (void)setResetTypeWithOrgOssPdfreporterEngineTypeResetTypeEnumEnum:(OrgOssPdfreporterEngineTypeResetTypeEnumEnum *)resetTypeValue {
  id old = self.resetTypeValue;
  self.resetTypeValue = resetTypeValue;
  [((OrgOssPdfreporterEngineDesignEventsJRPropertyChangeSupport *) nil_chk([self getEventSupport])) firePropertyChangeWithNSString:OrgOssPdfreporterEngineDesignJRDesignElementDataset_PROPERTY_RESET_TYPE_ withId:old withId:self.resetTypeValue];
}

- (void)setIncrementTypeWithOrgOssPdfreporterEngineTypeIncrementTypeEnumEnum:(OrgOssPdfreporterEngineTypeIncrementTypeEnumEnum *)incrementTypeValue {
  id old = self.incrementTypeValue;
  self.incrementTypeValue = incrementTypeValue;
  [((OrgOssPdfreporterEngineDesignEventsJRPropertyChangeSupport *) nil_chk([self getEventSupport])) firePropertyChangeWithNSString:OrgOssPdfreporterEngineDesignJRDesignElementDataset_PROPERTY_INCREMENT_TYPE_ withId:old withId:self.incrementTypeValue];
}

- (void)setResetGroupWithOrgOssPdfreporterEngineJRGroup:(id<OrgOssPdfreporterEngineJRGroup>)group {
  id old = self.resetGroup;
  self.resetGroup = group;
  [((OrgOssPdfreporterEngineDesignEventsJRPropertyChangeSupport *) nil_chk([self getEventSupport])) firePropertyChangeWithNSString:OrgOssPdfreporterEngineDesignJRDesignElementDataset_PROPERTY_RESET_GROUP_ withId:old withId:self.resetGroup];
}

- (void)setIncrementGroupWithOrgOssPdfreporterEngineJRGroup:(id<OrgOssPdfreporterEngineJRGroup>)group {
  id old = self.incrementGroup;
  self.incrementGroup = group;
  [((OrgOssPdfreporterEngineDesignEventsJRPropertyChangeSupport *) nil_chk([self getEventSupport])) firePropertyChangeWithNSString:OrgOssPdfreporterEngineDesignJRDesignElementDataset_PROPERTY_INCREMENT_GROUP_ withId:old withId:self.incrementGroup];
}

- (void)setDatasetRunWithOrgOssPdfreporterEngineJRDatasetRun:(id<OrgOssPdfreporterEngineJRDatasetRun>)datasetRun {
  id old = self.datasetRun;
  self.datasetRun = datasetRun;
  [((OrgOssPdfreporterEngineDesignEventsJRPropertyChangeSupport *) nil_chk([self getEventSupport])) firePropertyChangeWithNSString:OrgOssPdfreporterEngineDesignJRDesignElementDataset_PROPERTY_DATASET_RUN_ withId:old withId:self.datasetRun];
}

- (void)setIncrementWhenExpressionWithOrgOssPdfreporterEngineJRExpression:(id<OrgOssPdfreporterEngineJRExpression>)expression {
  id old = self.incrementWhenExpression;
  self.incrementWhenExpression = expression;
  [((OrgOssPdfreporterEngineDesignEventsJRPropertyChangeSupport *) nil_chk([self getEventSupport])) firePropertyChangeWithNSString:OrgOssPdfreporterEngineDesignJRDesignElementDataset_PROPERTY_INCREMENT_WHEN_EXPRESSION_ withId:old withId:self.incrementWhenExpression];
}

- (id)clone {
  OrgOssPdfreporterEngineDesignJRDesignElementDataset *clone = (OrgOssPdfreporterEngineDesignJRDesignElementDataset *) [super clone];
  ((OrgOssPdfreporterEngineDesignJRDesignElementDataset *) nil_chk(clone)).eventSupport = nil;
  return clone;
}

- (OrgOssPdfreporterEngineDesignEventsJRPropertyChangeSupport *)getEventSupport {
  @synchronized (self) {
    if (eventSupport_ == nil) {
      eventSupport_ = [[OrgOssPdfreporterEngineDesignEventsJRPropertyChangeSupport alloc] initWithId:self];
    }
  }
  return eventSupport_;
}

- (void)copyAllPropertiesTo:(id)copy {
  [super copyAllPropertiesTo:copy];
  OrgOssPdfreporterEngineDesignJRDesignElementDataset *typedCopy = (OrgOssPdfreporterEngineDesignJRDesignElementDataset *) copy;
  typedCopy.eventSupport = eventSupport_;
}

@end
