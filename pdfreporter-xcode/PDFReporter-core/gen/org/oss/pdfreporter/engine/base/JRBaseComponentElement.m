//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: pdfreporter-core/src/org/oss/pdfreporter/engine/base/JRBaseComponentElement.java
//
//  Created by kendra on 9/27/13.
//

#include "org/oss/pdfreporter/engine/DefaultJasperReportsContext.h"
#include "org/oss/pdfreporter/engine/JRComponentElement.h"
#include "org/oss/pdfreporter/engine/JRExpressionCollector.h"
#include "org/oss/pdfreporter/engine/JRVisitor.h"
#include "org/oss/pdfreporter/engine/base/JRBaseComponentElement.h"
#include "org/oss/pdfreporter/engine/base/JRBaseObjectFactory.h"
#include "org/oss/pdfreporter/engine/component/Component.h"
#include "org/oss/pdfreporter/engine/component/ComponentCompiler.h"
#include "org/oss/pdfreporter/engine/component/ComponentKey.h"
#include "org/oss/pdfreporter/engine/component/ComponentsEnvironment.h"
#include "org/oss/pdfreporter/engine/component/IComponentManager.h"

@implementation OrgOssPdfreporterEngineBaseJRBaseComponentElement

@synthesize componentKey = componentKey_;
@synthesize component = component_;

- (id)initWithOrgOssPdfreporterEngineJRComponentElement:(id<OrgOssPdfreporterEngineJRComponentElement>)element
     withOrgOssPdfreporterEngineBaseJRBaseObjectFactory:(OrgOssPdfreporterEngineBaseJRBaseObjectFactory *)factory {
  if ((self = [super initWithOrgOssPdfreporterEngineJRElement:element withOrgOssPdfreporterEngineBaseJRBaseObjectFactory:factory])) {
    componentKey_ = [((id<OrgOssPdfreporterEngineJRComponentElement>) nil_chk(element)) getComponentKey];
    id<OrgOssPdfreporterEngineComponentIComponentManager> manager = [((OrgOssPdfreporterEngineComponentComponentsEnvironment *) nil_chk([OrgOssPdfreporterEngineComponentComponentsEnvironment getInstanceWithOrgOssPdfreporterEngineJasperReportsContext:[OrgOssPdfreporterEngineDefaultJasperReportsContext getInstance]])) getManagerWithOrgOssPdfreporterEngineComponentComponentKey:componentKey_];
    component_ = [((id<OrgOssPdfreporterEngineComponentComponentCompiler>) nil_chk([((id<OrgOssPdfreporterEngineComponentIComponentManager>) nil_chk(manager)) getComponentCompilerWithOrgOssPdfreporterEngineJasperReportsContext:[OrgOssPdfreporterEngineDefaultJasperReportsContext getInstance]])) toCompiledComponentWithOrgOssPdfreporterEngineComponentComponent:[((id<OrgOssPdfreporterEngineJRComponentElement>) nil_chk(element)) getComponent] withOrgOssPdfreporterEngineBaseJRBaseObjectFactory:factory];
  }
  return self;
}

- (id<OrgOssPdfreporterEngineComponentComponent>)getComponent {
  return component_;
}

- (OrgOssPdfreporterEngineComponentComponentKey *)getComponentKey {
  return componentKey_;
}

- (void)collectExpressionsWithOrgOssPdfreporterEngineJRExpressionCollector:(OrgOssPdfreporterEngineJRExpressionCollector *)collector {
  id<OrgOssPdfreporterEngineComponentIComponentManager> manager = [((OrgOssPdfreporterEngineComponentComponentsEnvironment *) nil_chk([OrgOssPdfreporterEngineComponentComponentsEnvironment getInstanceWithOrgOssPdfreporterEngineJasperReportsContext:[OrgOssPdfreporterEngineDefaultJasperReportsContext getInstance]])) getManagerWithOrgOssPdfreporterEngineComponentComponentKey:componentKey_];
  [((id<OrgOssPdfreporterEngineComponentComponentCompiler>) nil_chk([((id<OrgOssPdfreporterEngineComponentIComponentManager>) nil_chk(manager)) getComponentCompilerWithOrgOssPdfreporterEngineJasperReportsContext:[OrgOssPdfreporterEngineDefaultJasperReportsContext getInstance]])) collectExpressionsWithOrgOssPdfreporterEngineComponentComponent:component_ withOrgOssPdfreporterEngineJRExpressionCollector:collector];
}

- (void)visitWithOrgOssPdfreporterEngineJRVisitor:(id<OrgOssPdfreporterEngineJRVisitor>)visitor {
  [((id<OrgOssPdfreporterEngineJRVisitor>) nil_chk(visitor)) visitComponentElementWithOrgOssPdfreporterEngineJRComponentElement:self];
}

- (void)copyAllPropertiesTo:(id)copy {
  [super copyAllPropertiesTo:copy];
  OrgOssPdfreporterEngineBaseJRBaseComponentElement *typedCopy = (OrgOssPdfreporterEngineBaseJRBaseComponentElement *) copy;
  typedCopy.componentKey = componentKey_;
  typedCopy.component = component_;
}

@end
