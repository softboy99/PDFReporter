//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: pdfreporter-core/src/org/oss/pdfreporter/crosstabs/fill/calculation/BucketDefinition.java
//
//  Created by kendra on 9/27/13.
//

#ifndef _OrgOssPdfreporterCrosstabsFillCalculationBucketDefinition_H_
#define _OrgOssPdfreporterCrosstabsFillCalculationBucketDefinition_H_

@class IOSClass;
@class OrgOssPdfreporterCrosstabsFillCalculationBucketDefinition_Bucket;
@class OrgOssPdfreporterCrosstabsTypeCrosstabTotalPositionEnumEnum;
@class OrgOssPdfreporterEngineTypeSortOrderEnumEnum;
@protocol JavaUtilComparator;
@protocol OrgOssPdfreporterEngineJRExpression;

#import "JreEmulation.h"
#include "java/lang/Comparable.h"

#define OrgOssPdfreporterCrosstabsFillCalculationBucketDefinition_VALUE_TYPE_NULL 1
#define OrgOssPdfreporterCrosstabsFillCalculationBucketDefinition_VALUE_TYPE_TOTAL 2
#define OrgOssPdfreporterCrosstabsFillCalculationBucketDefinition_VALUE_TYPE_VALUE 0

@interface OrgOssPdfreporterCrosstabsFillCalculationBucketDefinition : NSObject {
 @public
  OrgOssPdfreporterCrosstabsFillCalculationBucketDefinition_Bucket *VALUE_TOTAL_;
  OrgOssPdfreporterCrosstabsFillCalculationBucketDefinition_Bucket *VALUE_NULL_;
  id<JavaUtilComparator> bucketValueComparator_;
  id<OrgOssPdfreporterEngineJRExpression> orderByExpression_;
  id<JavaUtilComparator> orderValueComparator_;
  OrgOssPdfreporterCrosstabsTypeCrosstabTotalPositionEnumEnum *totalPosition_;
  BOOL computeTotal__;
}

@property (nonatomic, strong) OrgOssPdfreporterCrosstabsFillCalculationBucketDefinition_Bucket *VALUE_TOTAL;
@property (nonatomic, strong) OrgOssPdfreporterCrosstabsFillCalculationBucketDefinition_Bucket *VALUE_NULL;
@property (nonatomic, strong) id<JavaUtilComparator> bucketValueComparator;
@property (nonatomic, strong) id<OrgOssPdfreporterEngineJRExpression> orderByExpression;
@property (nonatomic, strong) id<JavaUtilComparator> orderValueComparator;
@property (nonatomic, strong) OrgOssPdfreporterCrosstabsTypeCrosstabTotalPositionEnumEnum *totalPosition;
@property (nonatomic, assign) BOOL computeTotal_;

+ (char)VALUE_TYPE_VALUE;
+ (char)VALUE_TYPE_NULL;
+ (char)VALUE_TYPE_TOTAL;
- (id)initWithIOSClass:(IOSClass *)valueClass
withOrgOssPdfreporterEngineJRExpression:(id<OrgOssPdfreporterEngineJRExpression>)orderByExpression
withJavaUtilComparator:(id<JavaUtilComparator>)comparator
withOrgOssPdfreporterEngineTypeSortOrderEnumEnum:(OrgOssPdfreporterEngineTypeSortOrderEnumEnum *)order
withOrgOssPdfreporterCrosstabsTypeCrosstabTotalPositionEnumEnum:(OrgOssPdfreporterCrosstabsTypeCrosstabTotalPositionEnumEnum *)totalPosition;
+ (id<JavaUtilComparator>)createOrderComparatorWithJavaUtilComparator:(id<JavaUtilComparator>)comparator
                     withOrgOssPdfreporterEngineTypeSortOrderEnumEnum:(OrgOssPdfreporterEngineTypeSortOrderEnumEnum *)order;
- (BOOL)computeTotal;
- (void)setComputeTotal;
- (OrgOssPdfreporterCrosstabsTypeCrosstabTotalPositionEnumEnum *)getTotalPosition;
- (id<OrgOssPdfreporterEngineJRExpression>)getOrderByExpression;
- (BOOL)hasOrderValues;
- (int)compareOrderValuesWithId:(id)v1
                         withId:(id)v2;
- (OrgOssPdfreporterCrosstabsFillCalculationBucketDefinition_Bucket *)createWithId:(id)value;
@end

@interface OrgOssPdfreporterCrosstabsFillCalculationBucketDefinition_Bucket : NSObject < JavaLangComparable > {
 @public
  OrgOssPdfreporterCrosstabsFillCalculationBucketDefinition *this$0_;
  id value_;
  char type_;
}

@property (nonatomic, strong) OrgOssPdfreporterCrosstabsFillCalculationBucketDefinition *this$0;
@property (nonatomic, strong) id value;
@property (nonatomic, assign) char type;

- (id)initWithOrgOssPdfreporterCrosstabsFillCalculationBucketDefinition:(OrgOssPdfreporterCrosstabsFillCalculationBucketDefinition *)outer$
                                                               withChar:(char)type;
- (id)initWithOrgOssPdfreporterCrosstabsFillCalculationBucketDefinition:(OrgOssPdfreporterCrosstabsFillCalculationBucketDefinition *)outer$
                                                                 withId:(id)value;
- (id)initWithOrgOssPdfreporterCrosstabsFillCalculationBucketDefinition:(OrgOssPdfreporterCrosstabsFillCalculationBucketDefinition *)outer$
                                                                 withId:(id)value
                                                               withChar:(char)type;
- (id)getValue;
- (BOOL)isEqual:(id)o;
- (NSUInteger)hash;
- (NSString *)description;
- (int)compareToWithId:(id)o;
- (BOOL)isTotal;
@end

#endif // _OrgOssPdfreporterCrosstabsFillCalculationBucketDefinition_H_
