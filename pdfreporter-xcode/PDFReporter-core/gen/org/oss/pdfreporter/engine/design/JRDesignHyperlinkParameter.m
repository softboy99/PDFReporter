//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: pdfreporter-core/src/org/oss/pdfreporter/engine/design/JRDesignHyperlinkParameter.java
//
//  Created by kendra on 9/27/13.
//

#include "org/oss/pdfreporter/engine/JRExpression.h"
#include "org/oss/pdfreporter/engine/design/JRDesignHyperlinkParameter.h"
#include "org/oss/pdfreporter/engine/design/events/JRPropertyChangeSupport.h"

@implementation OrgOssPdfreporterEngineDesignJRDesignHyperlinkParameter

static NSString * OrgOssPdfreporterEngineDesignJRDesignHyperlinkParameter_PROPERTY_NAME_ = @"name";
static NSString * OrgOssPdfreporterEngineDesignJRDesignHyperlinkParameter_PROPERTY_VALUE_EXPRESSION_ = @"valueExpression";

@synthesize eventSupport = eventSupport_;

+ (NSString *)PROPERTY_NAME {
  return OrgOssPdfreporterEngineDesignJRDesignHyperlinkParameter_PROPERTY_NAME_;
}

+ (NSString *)PROPERTY_VALUE_EXPRESSION {
  return OrgOssPdfreporterEngineDesignJRDesignHyperlinkParameter_PROPERTY_VALUE_EXPRESSION_;
}

- (id)init {
  return [super init];
}

- (void)setNameWithNSString:(NSString *)name {
  id old = self.name;
  self.name = name;
  [((OrgOssPdfreporterEngineDesignEventsJRPropertyChangeSupport *) nil_chk([self getEventSupport])) firePropertyChangeWithNSString:OrgOssPdfreporterEngineDesignJRDesignHyperlinkParameter_PROPERTY_NAME_ withId:old withId:self.name];
}

- (void)setValueExpressionWithOrgOssPdfreporterEngineJRExpression:(id<OrgOssPdfreporterEngineJRExpression>)valueExpression {
  id old = self.valueExpression;
  self.valueExpression = valueExpression;
  [((OrgOssPdfreporterEngineDesignEventsJRPropertyChangeSupport *) nil_chk([self getEventSupport])) firePropertyChangeWithNSString:OrgOssPdfreporterEngineDesignJRDesignHyperlinkParameter_PROPERTY_VALUE_EXPRESSION_ withId:old withId:self.valueExpression];
}

- (id)clone {
  OrgOssPdfreporterEngineDesignJRDesignHyperlinkParameter *clone = (OrgOssPdfreporterEngineDesignJRDesignHyperlinkParameter *) [super clone];
  ((OrgOssPdfreporterEngineDesignJRDesignHyperlinkParameter *) nil_chk(clone)).eventSupport = nil;
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
  OrgOssPdfreporterEngineDesignJRDesignHyperlinkParameter *typedCopy = (OrgOssPdfreporterEngineDesignJRDesignHyperlinkParameter *) copy;
  typedCopy.eventSupport = eventSupport_;
}

@end
