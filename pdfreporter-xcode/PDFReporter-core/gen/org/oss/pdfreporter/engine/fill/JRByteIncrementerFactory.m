//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: pdfreporter-core/src/org/oss/pdfreporter/engine/fill/JRByteIncrementerFactory.java
//
//  Created by kendra on 9/27/13.
//

#include "java/lang/Byte.h"
#include "java/lang/Math.h"
#include "org/oss/pdfreporter/engine/fill/AbstractValueProvider.h"
#include "org/oss/pdfreporter/engine/fill/DistinctCountHolder.h"
#include "org/oss/pdfreporter/engine/fill/JRByteIncrementerFactory.h"
#include "org/oss/pdfreporter/engine/fill/JRCalculable.h"
#include "org/oss/pdfreporter/engine/fill/JRComparableIncrementerFactory.h"
#include "org/oss/pdfreporter/engine/fill/JRDefaultIncrementerFactory.h"
#include "org/oss/pdfreporter/engine/fill/JRExtendedIncrementer.h"
#include "org/oss/pdfreporter/engine/type/CalculationEnum.h"

@implementation OrgOssPdfreporterEngineFillJRByteIncrementerFactory

static JavaLangByte * OrgOssPdfreporterEngineFillJRByteIncrementerFactory_ZERO_;
static OrgOssPdfreporterEngineFillJRByteIncrementerFactory * OrgOssPdfreporterEngineFillJRByteIncrementerFactory_mainInstance_;

+ (JavaLangByte *)ZERO {
  return OrgOssPdfreporterEngineFillJRByteIncrementerFactory_ZERO_;
}

+ (OrgOssPdfreporterEngineFillJRByteIncrementerFactory *)mainInstance {
  return OrgOssPdfreporterEngineFillJRByteIncrementerFactory_mainInstance_;
}

+ (void)setMainInstance:(OrgOssPdfreporterEngineFillJRByteIncrementerFactory *)mainInstance {
  OrgOssPdfreporterEngineFillJRByteIncrementerFactory_mainInstance_ = mainInstance;
}

- (id)init {
  return [super init];
}

+ (OrgOssPdfreporterEngineFillJRByteIncrementerFactory *)getInstance {
  return OrgOssPdfreporterEngineFillJRByteIncrementerFactory_mainInstance_;
}

- (id<OrgOssPdfreporterEngineFillJRExtendedIncrementer>)getExtendedIncrementerWithOrgOssPdfreporterEngineTypeCalculationEnumEnum:(OrgOssPdfreporterEngineTypeCalculationEnumEnum *)calculation {
  id<OrgOssPdfreporterEngineFillJRExtendedIncrementer> incrementer = nil;
  switch ([calculation ordinal]) {
    case OrgOssPdfreporterEngineTypeCalculationEnum_COUNT:
    {
      incrementer = [OrgOssPdfreporterEngineFillJRByteCountIncrementer getInstance];
      break;
    }
    case OrgOssPdfreporterEngineTypeCalculationEnum_SUM:
    {
      incrementer = [OrgOssPdfreporterEngineFillJRByteSumIncrementer getInstance];
      break;
    }
    case OrgOssPdfreporterEngineTypeCalculationEnum_AVERAGE:
    {
      incrementer = [OrgOssPdfreporterEngineFillJRByteAverageIncrementer getInstance];
      break;
    }
    case OrgOssPdfreporterEngineTypeCalculationEnum_LOWEST:
    case OrgOssPdfreporterEngineTypeCalculationEnum_HIGHEST:
    {
      incrementer = [((OrgOssPdfreporterEngineFillJRComparableIncrementerFactory *) nil_chk([OrgOssPdfreporterEngineFillJRComparableIncrementerFactory getInstance])) getExtendedIncrementerWithOrgOssPdfreporterEngineTypeCalculationEnumEnum:calculation];
      break;
    }
    case OrgOssPdfreporterEngineTypeCalculationEnum_STANDARD_DEVIATION:
    {
      incrementer = [OrgOssPdfreporterEngineFillJRByteStandardDeviationIncrementer getInstance];
      break;
    }
    case OrgOssPdfreporterEngineTypeCalculationEnum_VARIANCE:
    {
      incrementer = [OrgOssPdfreporterEngineFillJRByteVarianceIncrementer getInstance];
      break;
    }
    case OrgOssPdfreporterEngineTypeCalculationEnum_DISTINCT_COUNT:
    {
      incrementer = [OrgOssPdfreporterEngineFillJRByteDistinctCountIncrementer getInstance];
      break;
    }
    case OrgOssPdfreporterEngineTypeCalculationEnum_SYSTEM:
    case OrgOssPdfreporterEngineTypeCalculationEnum_NOTHING:
    case OrgOssPdfreporterEngineTypeCalculationEnum_FIRST:
    default:
    {
      incrementer = [((OrgOssPdfreporterEngineFillJRDefaultIncrementerFactory *) nil_chk([OrgOssPdfreporterEngineFillJRDefaultIncrementerFactory getInstance])) getExtendedIncrementerWithOrgOssPdfreporterEngineTypeCalculationEnumEnum:calculation];
      break;
    }
  }
  return incrementer;
}

+ (void)initialize {
  if (self == [OrgOssPdfreporterEngineFillJRByteIncrementerFactory class]) {
    OrgOssPdfreporterEngineFillJRByteIncrementerFactory_ZERO_ = [[JavaLangByte alloc] initWithChar:(char) 0];
    OrgOssPdfreporterEngineFillJRByteIncrementerFactory_mainInstance_ = [[OrgOssPdfreporterEngineFillJRByteIncrementerFactory alloc] init];
  }
}

@end
@implementation OrgOssPdfreporterEngineFillJRByteCountIncrementer

static OrgOssPdfreporterEngineFillJRByteCountIncrementer * OrgOssPdfreporterEngineFillJRByteCountIncrementer_mainInstance_;

+ (OrgOssPdfreporterEngineFillJRByteCountIncrementer *)mainInstance {
  return OrgOssPdfreporterEngineFillJRByteCountIncrementer_mainInstance_;
}

+ (void)setMainInstance:(OrgOssPdfreporterEngineFillJRByteCountIncrementer *)mainInstance {
  OrgOssPdfreporterEngineFillJRByteCountIncrementer_mainInstance_ = mainInstance;
}

- (id)init {
  return [super init];
}

+ (OrgOssPdfreporterEngineFillJRByteCountIncrementer *)getInstance {
  return OrgOssPdfreporterEngineFillJRByteCountIncrementer_mainInstance_;
}

- (id)incrementWithOrgOssPdfreporterEngineFillJRCalculable:(id<OrgOssPdfreporterEngineFillJRCalculable>)variable
                                                    withId:(id)expressionValue
      withOrgOssPdfreporterEngineFillAbstractValueProvider:(OrgOssPdfreporterEngineFillAbstractValueProvider *)valueProvider {
  NSNumber *value = (NSNumber *) [((id<OrgOssPdfreporterEngineFillJRCalculable>) nil_chk(variable)) getIncrementedValue];
  if (value == nil || [((id<OrgOssPdfreporterEngineFillJRCalculable>) nil_chk(variable)) isInitialized]) {
    value = [OrgOssPdfreporterEngineFillJRByteIncrementerFactory ZERO];
  }
  if (expressionValue == nil) {
    return value;
  }
  return [[JavaLangByte alloc] initWithChar:(char) ([((NSNumber *) nil_chk(value)) charValue] + 1)];
}

- (id)combineWithOrgOssPdfreporterEngineFillJRCalculable:(id<OrgOssPdfreporterEngineFillJRCalculable>)calculable
             withOrgOssPdfreporterEngineFillJRCalculable:(id<OrgOssPdfreporterEngineFillJRCalculable>)calculableValue
    withOrgOssPdfreporterEngineFillAbstractValueProvider:(OrgOssPdfreporterEngineFillAbstractValueProvider *)valueProvider {
  NSNumber *value = (NSNumber *) [((id<OrgOssPdfreporterEngineFillJRCalculable>) nil_chk(calculable)) getIncrementedValue];
  NSNumber *combineValue = (NSNumber *) [((id<OrgOssPdfreporterEngineFillJRCalculable>) nil_chk(calculableValue)) getValue];
  if (value == nil || [((id<OrgOssPdfreporterEngineFillJRCalculable>) nil_chk(calculable)) isInitialized]) {
    value = [OrgOssPdfreporterEngineFillJRByteIncrementerFactory ZERO];
  }
  if (combineValue == nil) {
    return value;
  }
  return [[JavaLangByte alloc] initWithChar:(char) ([((NSNumber *) nil_chk(value)) charValue] + [((NSNumber *) nil_chk(combineValue)) charValue])];
}

- (id)initialValue OBJC_METHOD_FAMILY_NONE {
  return [OrgOssPdfreporterEngineFillJRByteIncrementerFactory ZERO];
}

+ (void)initialize {
  if (self == [OrgOssPdfreporterEngineFillJRByteCountIncrementer class]) {
    OrgOssPdfreporterEngineFillJRByteCountIncrementer_mainInstance_ = [[OrgOssPdfreporterEngineFillJRByteCountIncrementer alloc] init];
  }
}

@end
@implementation OrgOssPdfreporterEngineFillJRByteDistinctCountIncrementer

static OrgOssPdfreporterEngineFillJRByteDistinctCountIncrementer * OrgOssPdfreporterEngineFillJRByteDistinctCountIncrementer_mainInstance_;

+ (OrgOssPdfreporterEngineFillJRByteDistinctCountIncrementer *)mainInstance {
  return OrgOssPdfreporterEngineFillJRByteDistinctCountIncrementer_mainInstance_;
}

+ (void)setMainInstance:(OrgOssPdfreporterEngineFillJRByteDistinctCountIncrementer *)mainInstance {
  OrgOssPdfreporterEngineFillJRByteDistinctCountIncrementer_mainInstance_ = mainInstance;
}

- (id)init {
  return [super init];
}

+ (OrgOssPdfreporterEngineFillJRByteDistinctCountIncrementer *)getInstance {
  return OrgOssPdfreporterEngineFillJRByteDistinctCountIncrementer_mainInstance_;
}

- (id)incrementWithOrgOssPdfreporterEngineFillJRCalculable:(id<OrgOssPdfreporterEngineFillJRCalculable>)variable
                                                    withId:(id)expressionValue
      withOrgOssPdfreporterEngineFillAbstractValueProvider:(OrgOssPdfreporterEngineFillAbstractValueProvider *)valueProvider {
  OrgOssPdfreporterEngineFillDistinctCountHolder *holder = (OrgOssPdfreporterEngineFillDistinctCountHolder *) [((OrgOssPdfreporterEngineFillAbstractValueProvider *) nil_chk(valueProvider)) getValueWithOrgOssPdfreporterEngineFillJRCalculable:[((id<OrgOssPdfreporterEngineFillJRCalculable>) nil_chk(variable)) getHelperVariableWithChar:OrgOssPdfreporterEngineFillJRCalculable_HELPER_COUNT]];
  if ([((id<OrgOssPdfreporterEngineFillJRCalculable>) nil_chk(variable)) isInitialized]) {
    [((OrgOssPdfreporterEngineFillDistinctCountHolder *) nil_chk(holder)) init__];
  }
  return [[JavaLangByte alloc] initWithChar:(char) [((OrgOssPdfreporterEngineFillDistinctCountHolder *) nil_chk(holder)) getCount]];
}

- (id)combineWithOrgOssPdfreporterEngineFillJRCalculable:(id<OrgOssPdfreporterEngineFillJRCalculable>)calculable
             withOrgOssPdfreporterEngineFillJRCalculable:(id<OrgOssPdfreporterEngineFillJRCalculable>)calculableValue
    withOrgOssPdfreporterEngineFillAbstractValueProvider:(OrgOssPdfreporterEngineFillAbstractValueProvider *)valueProvider {
  OrgOssPdfreporterEngineFillDistinctCountHolder *holder = (OrgOssPdfreporterEngineFillDistinctCountHolder *) [((OrgOssPdfreporterEngineFillAbstractValueProvider *) nil_chk(valueProvider)) getValueWithOrgOssPdfreporterEngineFillJRCalculable:[((id<OrgOssPdfreporterEngineFillJRCalculable>) nil_chk(calculable)) getHelperVariableWithChar:OrgOssPdfreporterEngineFillJRCalculable_HELPER_COUNT]];
  return [[JavaLangByte alloc] initWithChar:(char) [((OrgOssPdfreporterEngineFillDistinctCountHolder *) nil_chk(holder)) getCount]];
}

- (id)initialValue OBJC_METHOD_FAMILY_NONE {
  return [OrgOssPdfreporterEngineFillJRByteIncrementerFactory ZERO];
}

+ (void)initialize {
  if (self == [OrgOssPdfreporterEngineFillJRByteDistinctCountIncrementer class]) {
    OrgOssPdfreporterEngineFillJRByteDistinctCountIncrementer_mainInstance_ = [[OrgOssPdfreporterEngineFillJRByteDistinctCountIncrementer alloc] init];
  }
}

@end
@implementation OrgOssPdfreporterEngineFillJRByteSumIncrementer

static OrgOssPdfreporterEngineFillJRByteSumIncrementer * OrgOssPdfreporterEngineFillJRByteSumIncrementer_mainInstance_;

+ (OrgOssPdfreporterEngineFillJRByteSumIncrementer *)mainInstance {
  return OrgOssPdfreporterEngineFillJRByteSumIncrementer_mainInstance_;
}

+ (void)setMainInstance:(OrgOssPdfreporterEngineFillJRByteSumIncrementer *)mainInstance {
  OrgOssPdfreporterEngineFillJRByteSumIncrementer_mainInstance_ = mainInstance;
}

- (id)init {
  return [super init];
}

+ (OrgOssPdfreporterEngineFillJRByteSumIncrementer *)getInstance {
  return OrgOssPdfreporterEngineFillJRByteSumIncrementer_mainInstance_;
}

- (id)incrementWithOrgOssPdfreporterEngineFillJRCalculable:(id<OrgOssPdfreporterEngineFillJRCalculable>)variable
                                                    withId:(id)expressionValue
      withOrgOssPdfreporterEngineFillAbstractValueProvider:(OrgOssPdfreporterEngineFillAbstractValueProvider *)valueProvider {
  NSNumber *value = (NSNumber *) [((id<OrgOssPdfreporterEngineFillJRCalculable>) nil_chk(variable)) getIncrementedValue];
  NSNumber *newValue = (NSNumber *) expressionValue;
  if (newValue == nil) {
    if ([((id<OrgOssPdfreporterEngineFillJRCalculable>) nil_chk(variable)) isInitialized]) {
      return nil;
    }
    return value;
  }
  if (value == nil || [((id<OrgOssPdfreporterEngineFillJRCalculable>) nil_chk(variable)) isInitialized]) {
    value = [OrgOssPdfreporterEngineFillJRByteIncrementerFactory ZERO];
  }
  return [[JavaLangByte alloc] initWithChar:(char) ([((NSNumber *) nil_chk(value)) charValue] + [((NSNumber *) nil_chk(newValue)) charValue])];
}

- (id)initialValue OBJC_METHOD_FAMILY_NONE {
  return [OrgOssPdfreporterEngineFillJRByteIncrementerFactory ZERO];
}

+ (void)initialize {
  if (self == [OrgOssPdfreporterEngineFillJRByteSumIncrementer class]) {
    OrgOssPdfreporterEngineFillJRByteSumIncrementer_mainInstance_ = [[OrgOssPdfreporterEngineFillJRByteSumIncrementer alloc] init];
  }
}

@end
@implementation OrgOssPdfreporterEngineFillJRByteAverageIncrementer

static OrgOssPdfreporterEngineFillJRByteAverageIncrementer * OrgOssPdfreporterEngineFillJRByteAverageIncrementer_mainInstance_;

+ (OrgOssPdfreporterEngineFillJRByteAverageIncrementer *)mainInstance {
  return OrgOssPdfreporterEngineFillJRByteAverageIncrementer_mainInstance_;
}

+ (void)setMainInstance:(OrgOssPdfreporterEngineFillJRByteAverageIncrementer *)mainInstance {
  OrgOssPdfreporterEngineFillJRByteAverageIncrementer_mainInstance_ = mainInstance;
}

- (id)init {
  return [super init];
}

+ (OrgOssPdfreporterEngineFillJRByteAverageIncrementer *)getInstance {
  return OrgOssPdfreporterEngineFillJRByteAverageIncrementer_mainInstance_;
}

- (id)incrementWithOrgOssPdfreporterEngineFillJRCalculable:(id<OrgOssPdfreporterEngineFillJRCalculable>)variable
                                                    withId:(id)expressionValue
      withOrgOssPdfreporterEngineFillAbstractValueProvider:(OrgOssPdfreporterEngineFillAbstractValueProvider *)valueProvider {
  if (expressionValue == nil) {
    if ([((id<OrgOssPdfreporterEngineFillJRCalculable>) nil_chk(variable)) isInitialized]) {
      return nil;
    }
    return [((id<OrgOssPdfreporterEngineFillJRCalculable>) nil_chk(variable)) getValue];
  }
  NSNumber *countValue = (NSNumber *) [((OrgOssPdfreporterEngineFillAbstractValueProvider *) nil_chk(valueProvider)) getValueWithOrgOssPdfreporterEngineFillJRCalculable:[((id<OrgOssPdfreporterEngineFillJRCalculable>) nil_chk(variable)) getHelperVariableWithChar:OrgOssPdfreporterEngineFillJRCalculable_HELPER_COUNT]];
  NSNumber *sumValue = (NSNumber *) [((OrgOssPdfreporterEngineFillAbstractValueProvider *) nil_chk(valueProvider)) getValueWithOrgOssPdfreporterEngineFillJRCalculable:[((id<OrgOssPdfreporterEngineFillJRCalculable>) nil_chk(variable)) getHelperVariableWithChar:OrgOssPdfreporterEngineFillJRCalculable_HELPER_SUM]];
  return [[JavaLangByte alloc] initWithChar:(char) ([((NSNumber *) nil_chk(sumValue)) charValue] / [((NSNumber *) nil_chk(countValue)) charValue])];
}

- (id)initialValue OBJC_METHOD_FAMILY_NONE {
  return [OrgOssPdfreporterEngineFillJRByteIncrementerFactory ZERO];
}

+ (void)initialize {
  if (self == [OrgOssPdfreporterEngineFillJRByteAverageIncrementer class]) {
    OrgOssPdfreporterEngineFillJRByteAverageIncrementer_mainInstance_ = [[OrgOssPdfreporterEngineFillJRByteAverageIncrementer alloc] init];
  }
}

@end
@implementation OrgOssPdfreporterEngineFillJRByteStandardDeviationIncrementer

static OrgOssPdfreporterEngineFillJRByteStandardDeviationIncrementer * OrgOssPdfreporterEngineFillJRByteStandardDeviationIncrementer_mainInstance_;

+ (OrgOssPdfreporterEngineFillJRByteStandardDeviationIncrementer *)mainInstance {
  return OrgOssPdfreporterEngineFillJRByteStandardDeviationIncrementer_mainInstance_;
}

+ (void)setMainInstance:(OrgOssPdfreporterEngineFillJRByteStandardDeviationIncrementer *)mainInstance {
  OrgOssPdfreporterEngineFillJRByteStandardDeviationIncrementer_mainInstance_ = mainInstance;
}

- (id)init {
  return [super init];
}

+ (OrgOssPdfreporterEngineFillJRByteStandardDeviationIncrementer *)getInstance {
  return OrgOssPdfreporterEngineFillJRByteStandardDeviationIncrementer_mainInstance_;
}

- (id)incrementWithOrgOssPdfreporterEngineFillJRCalculable:(id<OrgOssPdfreporterEngineFillJRCalculable>)variable
                                                    withId:(id)expressionValue
      withOrgOssPdfreporterEngineFillAbstractValueProvider:(OrgOssPdfreporterEngineFillAbstractValueProvider *)valueProvider {
  if (expressionValue == nil) {
    if ([((id<OrgOssPdfreporterEngineFillJRCalculable>) nil_chk(variable)) isInitialized]) {
      return nil;
    }
    return [((id<OrgOssPdfreporterEngineFillJRCalculable>) nil_chk(variable)) getValue];
  }
  NSNumber *varianceValue = (NSNumber *) [((OrgOssPdfreporterEngineFillAbstractValueProvider *) nil_chk(valueProvider)) getValueWithOrgOssPdfreporterEngineFillJRCalculable:[((id<OrgOssPdfreporterEngineFillJRCalculable>) nil_chk(variable)) getHelperVariableWithChar:OrgOssPdfreporterEngineFillJRCalculable_HELPER_VARIANCE]];
  return [[JavaLangByte alloc] initWithChar:(char) [JavaLangMath sqrtWithDouble:[((NSNumber *) nil_chk(varianceValue)) doubleValue]]];
}

- (id)initialValue OBJC_METHOD_FAMILY_NONE {
  return [OrgOssPdfreporterEngineFillJRByteIncrementerFactory ZERO];
}

+ (void)initialize {
  if (self == [OrgOssPdfreporterEngineFillJRByteStandardDeviationIncrementer class]) {
    OrgOssPdfreporterEngineFillJRByteStandardDeviationIncrementer_mainInstance_ = [[OrgOssPdfreporterEngineFillJRByteStandardDeviationIncrementer alloc] init];
  }
}

@end
@implementation OrgOssPdfreporterEngineFillJRByteVarianceIncrementer

static OrgOssPdfreporterEngineFillJRByteVarianceIncrementer * OrgOssPdfreporterEngineFillJRByteVarianceIncrementer_mainInstance_;

+ (OrgOssPdfreporterEngineFillJRByteVarianceIncrementer *)mainInstance {
  return OrgOssPdfreporterEngineFillJRByteVarianceIncrementer_mainInstance_;
}

+ (void)setMainInstance:(OrgOssPdfreporterEngineFillJRByteVarianceIncrementer *)mainInstance {
  OrgOssPdfreporterEngineFillJRByteVarianceIncrementer_mainInstance_ = mainInstance;
}

- (id)init {
  return [super init];
}

+ (OrgOssPdfreporterEngineFillJRByteVarianceIncrementer *)getInstance {
  return OrgOssPdfreporterEngineFillJRByteVarianceIncrementer_mainInstance_;
}

- (id)incrementWithOrgOssPdfreporterEngineFillJRCalculable:(id<OrgOssPdfreporterEngineFillJRCalculable>)variable
                                                    withId:(id)expressionValue
      withOrgOssPdfreporterEngineFillAbstractValueProvider:(OrgOssPdfreporterEngineFillAbstractValueProvider *)valueProvider {
  NSNumber *value = (NSNumber *) [((id<OrgOssPdfreporterEngineFillJRCalculable>) nil_chk(variable)) getIncrementedValue];
  NSNumber *newValue = (NSNumber *) expressionValue;
  if (newValue == nil) {
    if ([((id<OrgOssPdfreporterEngineFillJRCalculable>) nil_chk(variable)) isInitialized]) {
      return nil;
    }
    return value;
  }
  else if (value == nil || [((id<OrgOssPdfreporterEngineFillJRCalculable>) nil_chk(variable)) isInitialized]) {
    return [OrgOssPdfreporterEngineFillJRByteIncrementerFactory ZERO];
  }
  else {
    NSNumber *countValue = (NSNumber *) [((OrgOssPdfreporterEngineFillAbstractValueProvider *) nil_chk(valueProvider)) getValueWithOrgOssPdfreporterEngineFillJRCalculable:[((id<OrgOssPdfreporterEngineFillJRCalculable>) nil_chk(variable)) getHelperVariableWithChar:OrgOssPdfreporterEngineFillJRCalculable_HELPER_COUNT]];
    NSNumber *sumValue = (NSNumber *) [((OrgOssPdfreporterEngineFillAbstractValueProvider *) nil_chk(valueProvider)) getValueWithOrgOssPdfreporterEngineFillJRCalculable:[((id<OrgOssPdfreporterEngineFillJRCalculable>) nil_chk(variable)) getHelperVariableWithChar:OrgOssPdfreporterEngineFillJRCalculable_HELPER_SUM]];
    return [[JavaLangByte alloc] initWithChar:(char) (([((NSNumber *) nil_chk(countValue)) charValue] - 1) * [((NSNumber *) nil_chk(value)) charValue] / [((NSNumber *) nil_chk(countValue)) charValue] + ([((NSNumber *) nil_chk(sumValue)) charValue] / [((NSNumber *) nil_chk(countValue)) charValue] - [newValue charValue]) * ([((NSNumber *) nil_chk(sumValue)) charValue] / [((NSNumber *) nil_chk(countValue)) charValue] - [newValue charValue]) / ([((NSNumber *) nil_chk(countValue)) charValue] - 1))];
  }
}

- (id)combineWithOrgOssPdfreporterEngineFillJRCalculable:(id<OrgOssPdfreporterEngineFillJRCalculable>)calculable
             withOrgOssPdfreporterEngineFillJRCalculable:(id<OrgOssPdfreporterEngineFillJRCalculable>)calculableValue
    withOrgOssPdfreporterEngineFillAbstractValueProvider:(OrgOssPdfreporterEngineFillAbstractValueProvider *)valueProvider {
  NSNumber *value = (NSNumber *) [((id<OrgOssPdfreporterEngineFillJRCalculable>) nil_chk(calculable)) getIncrementedValue];
  if ([((id<OrgOssPdfreporterEngineFillJRCalculable>) nil_chk(calculableValue)) getValue] == nil) {
    if ([((id<OrgOssPdfreporterEngineFillJRCalculable>) nil_chk(calculable)) isInitialized]) {
      return nil;
    }
    return value;
  }
  else if (value == nil || [((id<OrgOssPdfreporterEngineFillJRCalculable>) nil_chk(calculable)) isInitialized]) {
    return [[JavaLangByte alloc] initWithChar:[((NSNumber *) [((id<OrgOssPdfreporterEngineFillJRCalculable>) nil_chk(calculableValue)) getIncrementedValue]) charValue]];
  }
  float v1 = [((NSNumber *) nil_chk(value)) floatValue];
  float c1 = [((NSNumber *) [((OrgOssPdfreporterEngineFillAbstractValueProvider *) nil_chk(valueProvider)) getValueWithOrgOssPdfreporterEngineFillJRCalculable:[((id<OrgOssPdfreporterEngineFillJRCalculable>) nil_chk(calculable)) getHelperVariableWithChar:OrgOssPdfreporterEngineFillJRCalculable_HELPER_COUNT]]) floatValue];
  float s1 = [((NSNumber *) [((OrgOssPdfreporterEngineFillAbstractValueProvider *) nil_chk(valueProvider)) getValueWithOrgOssPdfreporterEngineFillJRCalculable:[((id<OrgOssPdfreporterEngineFillJRCalculable>) nil_chk(calculable)) getHelperVariableWithChar:OrgOssPdfreporterEngineFillJRCalculable_HELPER_SUM]]) floatValue];
  float v2 = [((NSNumber *) [((id<OrgOssPdfreporterEngineFillJRCalculable>) nil_chk(calculableValue)) getIncrementedValue]) floatValue];
  float c2 = [((NSNumber *) [((OrgOssPdfreporterEngineFillAbstractValueProvider *) nil_chk(valueProvider)) getValueWithOrgOssPdfreporterEngineFillJRCalculable:[((id<OrgOssPdfreporterEngineFillJRCalculable>) nil_chk(calculableValue)) getHelperVariableWithChar:OrgOssPdfreporterEngineFillJRCalculable_HELPER_COUNT]]) floatValue];
  float s2 = [((NSNumber *) [((OrgOssPdfreporterEngineFillAbstractValueProvider *) nil_chk(valueProvider)) getValueWithOrgOssPdfreporterEngineFillJRCalculable:[((id<OrgOssPdfreporterEngineFillJRCalculable>) nil_chk(calculableValue)) getHelperVariableWithChar:OrgOssPdfreporterEngineFillJRCalculable_HELPER_SUM]]) floatValue];
  c1 -= c2;
  s1 -= s2;
  float c = c1 + c2;
  return [[JavaLangByte alloc] initWithChar:(char) (c1 / c * v1 + c2 / c * v2 + c2 / c1 * s1 / c * s1 / c + c1 / c2 * s2 / c * s2 / c - 2 * s1 / c * s2 / c)];
}

- (id)initialValue OBJC_METHOD_FAMILY_NONE {
  return [OrgOssPdfreporterEngineFillJRByteIncrementerFactory ZERO];
}

+ (void)initialize {
  if (self == [OrgOssPdfreporterEngineFillJRByteVarianceIncrementer class]) {
    OrgOssPdfreporterEngineFillJRByteVarianceIncrementer_mainInstance_ = [[OrgOssPdfreporterEngineFillJRByteVarianceIncrementer alloc] init];
  }
}

@end
