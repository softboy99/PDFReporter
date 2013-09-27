//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: pdfreporter-core/src/org/oss/pdfreporter/engine/base/JRBaseSortField.java
//
//  Created by kendra on 9/27/13.
//

#include "java/lang/CloneNotSupportedException.h"
#include "org/oss/pdfreporter/engine/JRRuntimeException.h"
#include "org/oss/pdfreporter/engine/JRSortField.h"
#include "org/oss/pdfreporter/engine/base/JRBaseObjectFactory.h"
#include "org/oss/pdfreporter/engine/base/JRBaseSortField.h"
#include "org/oss/pdfreporter/engine/design/events/JRPropertyChangeSupport.h"
#include "org/oss/pdfreporter/engine/type/SortFieldTypeEnum.h"
#include "org/oss/pdfreporter/engine/type/SortOrderEnum.h"

@implementation OrgOssPdfreporterEngineBaseJRBaseSortField

static NSString * OrgOssPdfreporterEngineBaseJRBaseSortField_PROPERTY_ORDER_ = @"order";

@synthesize name = name_;
@synthesize orderValue = orderValue_;
@synthesize type = type_;
@synthesize eventSupport = eventSupport_;

+ (NSString *)PROPERTY_ORDER {
  return OrgOssPdfreporterEngineBaseJRBaseSortField_PROPERTY_ORDER_;
}

- (id)init {
  if ((self = [super init])) {
    orderValue_ = [OrgOssPdfreporterEngineTypeSortOrderEnumEnum ASCENDING];
    type_ = [OrgOssPdfreporterEngineTypeSortFieldTypeEnumEnum FIELD];
  }
  return self;
}

- (id)initWithOrgOssPdfreporterEngineJRSortField:(id<OrgOssPdfreporterEngineJRSortField>)sortField
withOrgOssPdfreporterEngineBaseJRBaseObjectFactory:(OrgOssPdfreporterEngineBaseJRBaseObjectFactory *)factory {
  if ((self = [super init])) {
    orderValue_ = [OrgOssPdfreporterEngineTypeSortOrderEnumEnum ASCENDING];
    type_ = [OrgOssPdfreporterEngineTypeSortFieldTypeEnumEnum FIELD];
    [((OrgOssPdfreporterEngineBaseJRBaseObjectFactory *) nil_chk(factory)) putWithId:sortField withId:self];
    name_ = [((id<OrgOssPdfreporterEngineJRSortField>) nil_chk(sortField)) getName];
    orderValue_ = [((id<OrgOssPdfreporterEngineJRSortField>) nil_chk(sortField)) getOrderValue];
    type_ = [((id<OrgOssPdfreporterEngineJRSortField>) nil_chk(sortField)) getType];
  }
  return self;
}

- (NSString *)getName {
  return name_;
}

- (OrgOssPdfreporterEngineTypeSortOrderEnumEnum *)getOrderValue {
  return orderValue_;
}

- (void)setOrderWithOrgOssPdfreporterEngineTypeSortOrderEnumEnum:(OrgOssPdfreporterEngineTypeSortOrderEnumEnum *)orderValue {
  id old = self.orderValue;
  self.orderValue = orderValue;
  [((OrgOssPdfreporterEngineDesignEventsJRPropertyChangeSupport *) nil_chk([self getEventSupport])) firePropertyChangeWithNSString:OrgOssPdfreporterEngineBaseJRBaseSortField_PROPERTY_ORDER_ withId:old withId:self.orderValue];
}

- (OrgOssPdfreporterEngineTypeSortFieldTypeEnumEnum *)getType {
  return type_;
}

- (id)clone {
  @try {
    OrgOssPdfreporterEngineBaseJRBaseSortField *clone = (OrgOssPdfreporterEngineBaseJRBaseSortField *) [super clone];
    ((OrgOssPdfreporterEngineBaseJRBaseSortField *) nil_chk(clone)).eventSupport = nil;
    return clone;
  }
  @catch (JavaLangCloneNotSupportedException *e) {
    @throw [[OrgOssPdfreporterEngineJRRuntimeException alloc] initWithJavaLangThrowable:e];
  }
}

- (OrgOssPdfreporterEngineDesignEventsJRPropertyChangeSupport *)getEventSupport {
  @synchronized (self) {
    if (eventSupport_ == nil) {
      eventSupport_ = [[OrgOssPdfreporterEngineDesignEventsJRPropertyChangeSupport alloc] initWithId:self];
    }
  }
  return eventSupport_;
}

- (id)copyWithZone:(NSZone *)zone {
  return [self clone];
}

- (void)copyAllPropertiesTo:(id)copy {
  [super copyAllPropertiesTo:copy];
  OrgOssPdfreporterEngineBaseJRBaseSortField *typedCopy = (OrgOssPdfreporterEngineBaseJRBaseSortField *) copy;
  typedCopy.name = name_;
  typedCopy.orderValue = orderValue_;
  typedCopy.type = type_;
  typedCopy.eventSupport = eventSupport_;
}

@end
