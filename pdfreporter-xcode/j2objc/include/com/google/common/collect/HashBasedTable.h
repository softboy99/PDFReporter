//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/krasnocka/Downloads/j2objc-master/guava/sources/com/google/common/collect/HashBasedTable.java
//

#include "J2ObjC_header.h"

#if !ComGoogleCommonCollectHashBasedTable_RESTRICT
#define ComGoogleCommonCollectHashBasedTable_INCLUDE_ALL 1
#endif
#undef ComGoogleCommonCollectHashBasedTable_RESTRICT
#if !defined (_ComGoogleCommonCollectHashBasedTable_) && (ComGoogleCommonCollectHashBasedTable_INCLUDE_ALL || ComGoogleCommonCollectHashBasedTable_INCLUDE)
#define _ComGoogleCommonCollectHashBasedTable_

@class ComGoogleCommonCollectHashBasedTable_Factory;
@protocol ComGoogleCommonCollectTable;
@protocol JavaUtilMap;

#define ComGoogleCommonCollectStandardTable_RESTRICT 1
#define ComGoogleCommonCollectStandardTable_INCLUDE 1
#include "com/google/common/collect/StandardTable.h"


#define ComGoogleCommonCollectHashBasedTable_serialVersionUID 0LL

@interface ComGoogleCommonCollectHashBasedTable : ComGoogleCommonCollectStandardTable {
}

+ (ComGoogleCommonCollectHashBasedTable *)create;

+ (ComGoogleCommonCollectHashBasedTable *)createWithInt:(jint)expectedRows
                                                withInt:(jint)expectedCellsPerRow;

+ (ComGoogleCommonCollectHashBasedTable *)createWithComGoogleCommonCollectTable:(id<ComGoogleCommonCollectTable>)table;

- (instancetype)initWithJavaUtilMap:(id<JavaUtilMap>)backingMap
withComGoogleCommonCollectHashBasedTable_Factory:(ComGoogleCommonCollectHashBasedTable_Factory *)factory;

- (jboolean)containsWithId:(id)rowKey
                    withId:(id)columnKey;

- (jboolean)containsColumnWithId:(id)columnKey;

- (jboolean)containsRowWithId:(id)rowKey;

- (jboolean)containsValueWithId:(id)value;

- (id)getWithId:(id)rowKey
         withId:(id)columnKey;

- (jboolean)isEqual:(id)obj;

- (id)removeWithId:(id)rowKey
            withId:(id)columnKey;

@end

J2OBJC_EMPTY_STATIC_INIT(ComGoogleCommonCollectHashBasedTable)

CF_EXTERN_C_BEGIN

FOUNDATION_EXPORT ComGoogleCommonCollectHashBasedTable *ComGoogleCommonCollectHashBasedTable_create();

FOUNDATION_EXPORT ComGoogleCommonCollectHashBasedTable *ComGoogleCommonCollectHashBasedTable_createWithInt_withInt_(jint expectedRows, jint expectedCellsPerRow);

FOUNDATION_EXPORT ComGoogleCommonCollectHashBasedTable *ComGoogleCommonCollectHashBasedTable_createWithComGoogleCommonCollectTable_(id<ComGoogleCommonCollectTable> table);

J2OBJC_STATIC_FIELD_GETTER(ComGoogleCommonCollectHashBasedTable, serialVersionUID, jlong)
CF_EXTERN_C_END
#endif

J2OBJC_TYPE_LITERAL_HEADER(ComGoogleCommonCollectHashBasedTable)
#if !defined (_ComGoogleCommonCollectHashBasedTable_Factory_) && (ComGoogleCommonCollectHashBasedTable_INCLUDE_ALL || ComGoogleCommonCollectHashBasedTable_Factory_INCLUDE)
#define _ComGoogleCommonCollectHashBasedTable_Factory_

@protocol JavaUtilMap;

#define ComGoogleCommonBaseSupplier_RESTRICT 1
#define ComGoogleCommonBaseSupplier_INCLUDE 1
#include "com/google/common/base/Supplier.h"

#define JavaIoSerializable_RESTRICT 1
#define JavaIoSerializable_INCLUDE 1
#include "java/io/Serializable.h"


#define ComGoogleCommonCollectHashBasedTable_Factory_serialVersionUID 0LL

@interface ComGoogleCommonCollectHashBasedTable_Factory : NSObject < ComGoogleCommonBaseSupplier, JavaIoSerializable > {
 @public
  jint expectedSize_;
}

- (instancetype)initWithInt:(jint)expectedSize;

- (id<JavaUtilMap>)get;

@end

J2OBJC_EMPTY_STATIC_INIT(ComGoogleCommonCollectHashBasedTable_Factory)

CF_EXTERN_C_BEGIN

J2OBJC_STATIC_FIELD_GETTER(ComGoogleCommonCollectHashBasedTable_Factory, serialVersionUID, jlong)
CF_EXTERN_C_END
#endif

J2OBJC_TYPE_LITERAL_HEADER(ComGoogleCommonCollectHashBasedTable_Factory)
