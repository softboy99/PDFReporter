//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: pdfreporter-core/src/org/oss/pdfreporter/engine/design/JRDesignHyperlinkParameter.java
//
//  Created by kendra on 9/27/13.
//

#ifndef _OrgOssPdfreporterEngineDesignJRDesignHyperlinkParameter_H_
#define _OrgOssPdfreporterEngineDesignJRDesignHyperlinkParameter_H_

@class OrgOssPdfreporterEngineDesignEventsJRPropertyChangeSupport;
@protocol OrgOssPdfreporterEngineJRExpression;

#import "JreEmulation.h"
#include "org/oss/pdfreporter/engine/base/JRBaseHyperlinkParameter.h"
#include "org/oss/pdfreporter/engine/design/events/JRChangeEventsSupport.h"

#define OrgOssPdfreporterEngineDesignJRDesignHyperlinkParameter_serialVersionUID 10200

@interface OrgOssPdfreporterEngineDesignJRDesignHyperlinkParameter : OrgOssPdfreporterEngineBaseJRBaseHyperlinkParameter < OrgOssPdfreporterEngineDesignEventsJRChangeEventsSupport > {
 @public
  OrgOssPdfreporterEngineDesignEventsJRPropertyChangeSupport *eventSupport_;
}

@property (nonatomic, strong) OrgOssPdfreporterEngineDesignEventsJRPropertyChangeSupport *eventSupport;

+ (NSString *)PROPERTY_NAME;
+ (NSString *)PROPERTY_VALUE_EXPRESSION;
- (id)init;
- (void)setNameWithNSString:(NSString *)name;
- (void)setValueExpressionWithOrgOssPdfreporterEngineJRExpression:(id<OrgOssPdfreporterEngineJRExpression>)valueExpression;
- (id)clone;
- (OrgOssPdfreporterEngineDesignEventsJRPropertyChangeSupport *)getEventSupport;
@end

#endif // _OrgOssPdfreporterEngineDesignJRDesignHyperlinkParameter_H_
