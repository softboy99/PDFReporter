//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/krasnocka/Downloads/j2objc-master/guava/sources/com/google/common/collect/StandardRowSortedTable.java
//

#include "J2ObjC_header.h"

#if !ComGoogleCommonCollectStandardRowSortedTable_RESTRICT
#define ComGoogleCommonCollectStandardRowSortedTable_INCLUDE_ALL 1
#endif
#undef ComGoogleCommonCollectStandardRowSortedTable_RESTRICT
#if !defined (_ComGoogleCommonCollectStandardRowSortedTable_) && (ComGoogleCommonCollectStandardRowSortedTable_INCLUDE_ALL || ComGoogleCommonCollectStandardRowSortedTable_INCLUDE)
#define _ComGoogleCommonCollectStandardRowSortedTable_

@class ComGoogleCommonCollectStandardRowSortedTable_RowSortedMap;
@protocol ComGoogleCommonBaseSupplier;
@protocol JavaUtilSortedMap;
@protocol JavaUtilSortedSet;

#define ComGoogleCommonCollectStandardTable_RESTRICT 1
#define ComGoogleCommonCollectStandardTable_INCLUDE 1
#include "com/google/common/collect/StandardTable.h"

#define ComGoogleCommonCollectRowSortedTable_RESTRICT 1
#define ComGoogleCommonCollectRowSortedTable_INCLUDE 1
#include "com/google/common/collect/RowSortedTable.h"


#define ComGoogleCommonCollectStandardRowSortedTable_serialVersionUID 0LL

@interface ComGoogleCommonCollectStandardRowSortedTable : ComGoogleCommonCollectStandardTable < ComGoogleCommonCollectRowSortedTable > {
}

- (instancetype)initWithJavaUtilSortedMap:(id<JavaUtilSortedMap>)backingMap
          withComGoogleCommonBaseSupplier:(id<ComGoogleCommonBaseSupplier>)factory;

- (id<JavaUtilSortedSet>)rowKeySet;

- (id<JavaUtilSortedMap>)rowMap;

@end

J2OBJC_EMPTY_STATIC_INIT(ComGoogleCommonCollectStandardRowSortedTable)

CF_EXTERN_C_BEGIN

J2OBJC_STATIC_FIELD_GETTER(ComGoogleCommonCollectStandardRowSortedTable, serialVersionUID, jlong)
CF_EXTERN_C_END
#endif

J2OBJC_TYPE_LITERAL_HEADER(ComGoogleCommonCollectStandardRowSortedTable)
#if !defined (_ComGoogleCommonCollectStandardRowSortedTable_RowKeySortedSet_) && (ComGoogleCommonCollectStandardRowSortedTable_INCLUDE_ALL || ComGoogleCommonCollectStandardRowSortedTable_RowKeySortedSet_INCLUDE)
#define _ComGoogleCommonCollectStandardRowSortedTable_RowKeySortedSet_

@class ComGoogleCommonCollectStandardRowSortedTable;
@protocol JavaUtilComparator;

#define ComGoogleCommonCollectStandardTable_RESTRICT 1
#define ComGoogleCommonCollectStandardTable_RowKeySet_INCLUDE 1
#include "com/google/common/collect/StandardTable.h"

#define JavaUtilSortedSet_RESTRICT 1
#define JavaUtilSortedSet_INCLUDE 1
#include "java/util/SortedSet.h"


@interface ComGoogleCommonCollectStandardRowSortedTable_RowKeySortedSet : ComGoogleCommonCollectStandardTable_RowKeySet < JavaUtilSortedSet > {
}

- (id<JavaUtilComparator>)comparator;

- (id)first;

- (id)last;

- (id<JavaUtilSortedSet>)headSetWithId:(id)toElement;

- (id<JavaUtilSortedSet>)subSetWithId:(id)fromElement
                               withId:(id)toElement;

- (id<JavaUtilSortedSet>)tailSetWithId:(id)fromElement;

- (instancetype)initWithComGoogleCommonCollectStandardRowSortedTable:(ComGoogleCommonCollectStandardRowSortedTable *)outer$;


@end

J2OBJC_EMPTY_STATIC_INIT(ComGoogleCommonCollectStandardRowSortedTable_RowKeySortedSet)

CF_EXTERN_C_BEGIN
CF_EXTERN_C_END
#endif

J2OBJC_TYPE_LITERAL_HEADER(ComGoogleCommonCollectStandardRowSortedTable_RowKeySortedSet)
#if !defined (_ComGoogleCommonCollectStandardRowSortedTable_RowSortedMap_) && (ComGoogleCommonCollectStandardRowSortedTable_INCLUDE_ALL || ComGoogleCommonCollectStandardRowSortedTable_RowSortedMap_INCLUDE)
#define _ComGoogleCommonCollectStandardRowSortedTable_RowSortedMap_

@class ComGoogleCommonCollectStandardRowSortedTable;
@protocol JavaUtilComparator;

#define ComGoogleCommonCollectStandardTable_RESTRICT 1
#define ComGoogleCommonCollectStandardTable_RowMap_INCLUDE 1
#include "com/google/common/collect/StandardTable.h"

#define JavaUtilSortedMap_RESTRICT 1
#define JavaUtilSortedMap_INCLUDE 1
#include "java/util/SortedMap.h"


@interface ComGoogleCommonCollectStandardRowSortedTable_RowSortedMap : ComGoogleCommonCollectStandardTable_RowMap < JavaUtilSortedMap > {
}

- (id<JavaUtilComparator>)comparator;

- (id)firstKey;

- (id)lastKey;

- (id<JavaUtilSortedMap>)headMapWithId:(id)toKey;

- (id<JavaUtilSortedMap>)subMapWithId:(id)fromKey
                               withId:(id)toKey;

- (id<JavaUtilSortedMap>)tailMapWithId:(id)fromKey;

- (instancetype)initWithComGoogleCommonCollectStandardRowSortedTable:(ComGoogleCommonCollectStandardRowSortedTable *)outer$;

@end

J2OBJC_EMPTY_STATIC_INIT(ComGoogleCommonCollectStandardRowSortedTable_RowSortedMap)

CF_EXTERN_C_BEGIN
CF_EXTERN_C_END
#endif

J2OBJC_TYPE_LITERAL_HEADER(ComGoogleCommonCollectStandardRowSortedTable_RowSortedMap)
