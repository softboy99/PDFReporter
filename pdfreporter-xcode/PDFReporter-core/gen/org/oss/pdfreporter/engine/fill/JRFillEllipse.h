//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: pdfreporter-core/src/org/oss/pdfreporter/engine/fill/JRFillEllipse.java
//
//  Created by kendra on 9/27/13.
//

#ifndef _OrgOssPdfreporterEngineFillJRFillEllipse_H_
#define _OrgOssPdfreporterEngineFillJRFillEllipse_H_

@class OrgOssPdfreporterEngineFillJRBaseFiller;
@class OrgOssPdfreporterEngineFillJRFillCloneFactory;
@class OrgOssPdfreporterEngineFillJRFillObjectFactory;
@class OrgOssPdfreporterEngineFillJRTemplateElement;
@class OrgOssPdfreporterEngineFillJRTemplateEllipse;
@class OrgOssPdfreporterEngineJRExpressionCollector;
@protocol OrgOssPdfreporterEngineFillJRFillCloneable;
@protocol OrgOssPdfreporterEngineJRPrintElement;
@protocol OrgOssPdfreporterEngineJRVisitor;

#import "JreEmulation.h"
#include "org/oss/pdfreporter/engine/JREllipse.h"
#include "org/oss/pdfreporter/engine/fill/JRFillGraphicElement.h"

@interface OrgOssPdfreporterEngineFillJRFillEllipse : OrgOssPdfreporterEngineFillJRFillGraphicElement < OrgOssPdfreporterEngineJREllipse > {
}

- (id)initWithOrgOssPdfreporterEngineFillJRBaseFiller:(OrgOssPdfreporterEngineFillJRBaseFiller *)filler
                 withOrgOssPdfreporterEngineJREllipse:(id<OrgOssPdfreporterEngineJREllipse>)ellipse
   withOrgOssPdfreporterEngineFillJRFillObjectFactory:(OrgOssPdfreporterEngineFillJRFillObjectFactory *)factory;
- (id)initWithOrgOssPdfreporterEngineFillJRFillEllipse:(OrgOssPdfreporterEngineFillJRFillEllipse *)ellipse
     withOrgOssPdfreporterEngineFillJRFillCloneFactory:(OrgOssPdfreporterEngineFillJRFillCloneFactory *)factory;
- (OrgOssPdfreporterEngineFillJRTemplateEllipse *)getJRTemplateEllipse;
- (OrgOssPdfreporterEngineFillJRTemplateElement *)createElementTemplate;
- (void)evaluateWithChar:(char)evaluation;
- (id<OrgOssPdfreporterEngineJRPrintElement>)fill;
- (void)collectExpressionsWithOrgOssPdfreporterEngineJRExpressionCollector:(OrgOssPdfreporterEngineJRExpressionCollector *)collector;
- (void)visitWithOrgOssPdfreporterEngineJRVisitor:(id<OrgOssPdfreporterEngineJRVisitor>)visitor;
- (void)resolveElementWithOrgOssPdfreporterEngineJRPrintElement:(id<OrgOssPdfreporterEngineJRPrintElement>)element
                                                       withChar:(char)evaluation;
- (id<OrgOssPdfreporterEngineFillJRFillCloneable>)createCloneWithOrgOssPdfreporterEngineFillJRFillCloneFactory:(OrgOssPdfreporterEngineFillJRFillCloneFactory *)factory;
@end

#endif // _OrgOssPdfreporterEngineFillJRFillEllipse_H_
