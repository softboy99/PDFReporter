//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: pdfreporter-core/src/org/oss/pdfreporter/engine/base/JRBaseSection.java
//
//  Created by kendra on 9/27/13.
//

#include "IOSClass.h"
#include "IOSObjectArray.h"
#include "java/lang/CloneNotSupportedException.h"
#include "org/oss/pdfreporter/engine/JRBand.h"
#include "org/oss/pdfreporter/engine/JRRuntimeException.h"
#include "org/oss/pdfreporter/engine/JRSection.h"
#include "org/oss/pdfreporter/engine/base/JRBaseBand.h"
#include "org/oss/pdfreporter/engine/base/JRBaseObjectFactory.h"
#include "org/oss/pdfreporter/engine/base/JRBaseSection.h"
#include "org/oss/pdfreporter/engine/design/events/JRPropertyChangeSupport.h"
#include "org/oss/pdfreporter/engine/util/JRCloneUtils.h"

@implementation OrgOssPdfreporterEngineBaseJRBaseSection

@synthesize bands = bands_;
@synthesize eventSupport = eventSupport_;

- (id)init {
  return [super init];
}

- (id)initWithOrgOssPdfreporterEngineJRBand:(id<OrgOssPdfreporterEngineJRBand>)band {
  if ((self = [super init])) {
    bands_ = [IOSObjectArray arrayWithObjects:(id[]){ band } count:1 type:[IOSClass classWithProtocol:@protocol(OrgOssPdfreporterEngineJRBand)]];
  }
  return self;
}

- (id)initWithOrgOssPdfreporterEngineJRSection:(id<OrgOssPdfreporterEngineJRSection>)section
withOrgOssPdfreporterEngineBaseJRBaseObjectFactory:(OrgOssPdfreporterEngineBaseJRBaseObjectFactory *)factory {
  if ((self = [super init])) {
    [((OrgOssPdfreporterEngineBaseJRBaseObjectFactory *) nil_chk(factory)) putWithId:section withId:self];
    IOSObjectArray *jrBands = [((id<OrgOssPdfreporterEngineJRSection>) nil_chk(section)) getBands];
    if (jrBands != nil && (int) [((IOSObjectArray *) nil_chk(jrBands)) count] > 0) {
      bands_ = [IOSObjectArray arrayWithLength:(int) [((IOSObjectArray *) nil_chk(jrBands)) count] type:[IOSClass classWithProtocol:@protocol(OrgOssPdfreporterEngineJRBand)]];
      for (int i = 0; i < (int) [((IOSObjectArray *) nil_chk(jrBands)) count]; i++) {
        (void) [((IOSObjectArray *) nil_chk(bands_)) replaceObjectAtIndex:i withObject:[((OrgOssPdfreporterEngineBaseJRBaseObjectFactory *) nil_chk(factory)) getBandWithOrgOssPdfreporterEngineJRBand:[((IOSObjectArray *) nil_chk(jrBands)) objectAtIndex:i]]];
      }
    }
  }
  return self;
}

- (IOSObjectArray *)getBands {
  return bands_;
}

- (id)clone {
  OrgOssPdfreporterEngineBaseJRBaseSection *clone = nil;
  @try {
    clone = (OrgOssPdfreporterEngineBaseJRBaseSection *) [super clone];
  }
  @catch (JavaLangCloneNotSupportedException *e) {
    @throw [[OrgOssPdfreporterEngineJRRuntimeException alloc] initWithJavaLangThrowable:e];
  }
  ((OrgOssPdfreporterEngineBaseJRBaseSection *) nil_chk(clone)).bands = [OrgOssPdfreporterEngineUtilJRCloneUtils cloneArrayWithOrgOssPdfreporterEngineJRCloneableArray:bands_];
  ((OrgOssPdfreporterEngineBaseJRBaseSection *) nil_chk(clone)).eventSupport = nil;
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

- (id)copyWithZone:(NSZone *)zone {
  return [self clone];
}

- (void)copyAllPropertiesTo:(id)copy {
  [super copyAllPropertiesTo:copy];
  OrgOssPdfreporterEngineBaseJRBaseSection *typedCopy = (OrgOssPdfreporterEngineBaseJRBaseSection *) copy;
  typedCopy.bands = bands_;
  typedCopy.eventSupport = eventSupport_;
}

@end
