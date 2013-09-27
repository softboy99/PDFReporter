//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: pdfreporter-core/src/org/oss/pdfreporter/engine/fill/JRDoubleIncrementerFactory.java
//
//  Created by kendra on 9/27/13.
//

#ifndef _OrgOssPdfreporterEngineFillJRDoubleIncrementerFactory_H_
#define _OrgOssPdfreporterEngineFillJRDoubleIncrementerFactory_H_

@class JavaLangDouble;
@class OrgOssPdfreporterEngineFillAbstractValueProvider;
@class OrgOssPdfreporterEngineTypeCalculationEnumEnum;
@protocol OrgOssPdfreporterEngineFillJRCalculable;
@protocol OrgOssPdfreporterEngineFillJRExtendedIncrementer;

#import "JreEmulation.h"
#include "org/oss/pdfreporter/engine/fill/JRAbstractExtendedIncrementer.h"
#include "org/oss/pdfreporter/engine/fill/JRAbstractExtendedIncrementerFactory.h"

@interface OrgOssPdfreporterEngineFillJRDoubleIncrementerFactory : OrgOssPdfreporterEngineFillJRAbstractExtendedIncrementerFactory {
}

+ (JavaLangDouble *)ZERO;
+ (OrgOssPdfreporterEngineFillJRDoubleIncrementerFactory *)mainInstance;
+ (void)setMainInstance:(OrgOssPdfreporterEngineFillJRDoubleIncrementerFactory *)mainInstance;
- (id)init;
+ (OrgOssPdfreporterEngineFillJRDoubleIncrementerFactory *)getInstance;
- (id<OrgOssPdfreporterEngineFillJRExtendedIncrementer>)getExtendedIncrementerWithOrgOssPdfreporterEngineTypeCalculationEnumEnum:(OrgOssPdfreporterEngineTypeCalculationEnumEnum *)calculation;
@end

@interface OrgOssPdfreporterEngineFillJRDoubleCountIncrementer : OrgOssPdfreporterEngineFillJRAbstractExtendedIncrementer {
}

+ (OrgOssPdfreporterEngineFillJRDoubleCountIncrementer *)mainInstance;
+ (void)setMainInstance:(OrgOssPdfreporterEngineFillJRDoubleCountIncrementer *)mainInstance;
- (id)init;
+ (OrgOssPdfreporterEngineFillJRDoubleCountIncrementer *)getInstance;
- (id)incrementWithOrgOssPdfreporterEngineFillJRCalculable:(id<OrgOssPdfreporterEngineFillJRCalculable>)variable
                                                    withId:(id)expressionValue
      withOrgOssPdfreporterEngineFillAbstractValueProvider:(OrgOssPdfreporterEngineFillAbstractValueProvider *)valueProvider;
- (id)combineWithOrgOssPdfreporterEngineFillJRCalculable:(id<OrgOssPdfreporterEngineFillJRCalculable>)calculable
             withOrgOssPdfreporterEngineFillJRCalculable:(id<OrgOssPdfreporterEngineFillJRCalculable>)calculableValue
    withOrgOssPdfreporterEngineFillAbstractValueProvider:(OrgOssPdfreporterEngineFillAbstractValueProvider *)valueProvider;
- (id)initialValue OBJC_METHOD_FAMILY_NONE;
@end

@interface OrgOssPdfreporterEngineFillJRDoubleDistinctCountIncrementer : OrgOssPdfreporterEngineFillJRAbstractExtendedIncrementer {
}

+ (OrgOssPdfreporterEngineFillJRDoubleDistinctCountIncrementer *)mainInstance;
+ (void)setMainInstance:(OrgOssPdfreporterEngineFillJRDoubleDistinctCountIncrementer *)mainInstance;
- (id)init;
+ (OrgOssPdfreporterEngineFillJRDoubleDistinctCountIncrementer *)getInstance;
- (id)incrementWithOrgOssPdfreporterEngineFillJRCalculable:(id<OrgOssPdfreporterEngineFillJRCalculable>)variable
                                                    withId:(id)expressionValue
      withOrgOssPdfreporterEngineFillAbstractValueProvider:(OrgOssPdfreporterEngineFillAbstractValueProvider *)valueProvider;
- (id)combineWithOrgOssPdfreporterEngineFillJRCalculable:(id<OrgOssPdfreporterEngineFillJRCalculable>)calculable
             withOrgOssPdfreporterEngineFillJRCalculable:(id<OrgOssPdfreporterEngineFillJRCalculable>)calculableValue
    withOrgOssPdfreporterEngineFillAbstractValueProvider:(OrgOssPdfreporterEngineFillAbstractValueProvider *)valueProvider;
- (id)initialValue OBJC_METHOD_FAMILY_NONE;
@end

@interface OrgOssPdfreporterEngineFillJRDoubleSumIncrementer : OrgOssPdfreporterEngineFillJRAbstractExtendedIncrementer {
}

+ (OrgOssPdfreporterEngineFillJRDoubleSumIncrementer *)mainInstance;
+ (void)setMainInstance:(OrgOssPdfreporterEngineFillJRDoubleSumIncrementer *)mainInstance;
- (id)init;
+ (OrgOssPdfreporterEngineFillJRDoubleSumIncrementer *)getInstance;
- (id)incrementWithOrgOssPdfreporterEngineFillJRCalculable:(id<OrgOssPdfreporterEngineFillJRCalculable>)variable
                                                    withId:(id)expressionValue
      withOrgOssPdfreporterEngineFillAbstractValueProvider:(OrgOssPdfreporterEngineFillAbstractValueProvider *)valueProvider;
- (id)initialValue OBJC_METHOD_FAMILY_NONE;
@end

@interface OrgOssPdfreporterEngineFillJRDoubleAverageIncrementer : OrgOssPdfreporterEngineFillJRAbstractExtendedIncrementer {
}

+ (OrgOssPdfreporterEngineFillJRDoubleAverageIncrementer *)mainInstance;
+ (void)setMainInstance:(OrgOssPdfreporterEngineFillJRDoubleAverageIncrementer *)mainInstance;
- (id)init;
+ (OrgOssPdfreporterEngineFillJRDoubleAverageIncrementer *)getInstance;
- (id)incrementWithOrgOssPdfreporterEngineFillJRCalculable:(id<OrgOssPdfreporterEngineFillJRCalculable>)variable
                                                    withId:(id)expressionValue
      withOrgOssPdfreporterEngineFillAbstractValueProvider:(OrgOssPdfreporterEngineFillAbstractValueProvider *)valueProvider;
- (id)initialValue OBJC_METHOD_FAMILY_NONE;
@end

@interface OrgOssPdfreporterEngineFillJRDoubleStandardDeviationIncrementer : OrgOssPdfreporterEngineFillJRAbstractExtendedIncrementer {
}

+ (OrgOssPdfreporterEngineFillJRDoubleStandardDeviationIncrementer *)mainInstance;
+ (void)setMainInstance:(OrgOssPdfreporterEngineFillJRDoubleStandardDeviationIncrementer *)mainInstance;
- (id)init;
+ (OrgOssPdfreporterEngineFillJRDoubleStandardDeviationIncrementer *)getInstance;
- (id)incrementWithOrgOssPdfreporterEngineFillJRCalculable:(id<OrgOssPdfreporterEngineFillJRCalculable>)variable
                                                    withId:(id)expressionValue
      withOrgOssPdfreporterEngineFillAbstractValueProvider:(OrgOssPdfreporterEngineFillAbstractValueProvider *)valueProvider;
- (id)initialValue OBJC_METHOD_FAMILY_NONE;
@end

@interface OrgOssPdfreporterEngineFillJRDoubleVarianceIncrementer : OrgOssPdfreporterEngineFillJRAbstractExtendedIncrementer {
}

+ (OrgOssPdfreporterEngineFillJRDoubleVarianceIncrementer *)mainInstance;
+ (void)setMainInstance:(OrgOssPdfreporterEngineFillJRDoubleVarianceIncrementer *)mainInstance;
- (id)init;
+ (OrgOssPdfreporterEngineFillJRDoubleVarianceIncrementer *)getInstance;
- (id)incrementWithOrgOssPdfreporterEngineFillJRCalculable:(id<OrgOssPdfreporterEngineFillJRCalculable>)variable
                                                    withId:(id)expressionValue
      withOrgOssPdfreporterEngineFillAbstractValueProvider:(OrgOssPdfreporterEngineFillAbstractValueProvider *)valueProvider;
- (id)combineWithOrgOssPdfreporterEngineFillJRCalculable:(id<OrgOssPdfreporterEngineFillJRCalculable>)calculable
             withOrgOssPdfreporterEngineFillJRCalculable:(id<OrgOssPdfreporterEngineFillJRCalculable>)calculableValue
    withOrgOssPdfreporterEngineFillAbstractValueProvider:(OrgOssPdfreporterEngineFillAbstractValueProvider *)valueProvider;
- (id)initialValue OBJC_METHOD_FAMILY_NONE;
@end

#endif // _OrgOssPdfreporterEngineFillJRDoubleIncrementerFactory_H_
