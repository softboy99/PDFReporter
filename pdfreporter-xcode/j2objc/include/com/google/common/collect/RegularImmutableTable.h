//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/krasnocka/Downloads/j2objc-master/guava/sources/com/google/common/collect/RegularImmutableTable.java
//

#include "J2ObjC_header.h"

#if !ComGoogleCommonCollectRegularImmutableTable_RESTRICT
#define ComGoogleCommonCollectRegularImmutableTable_INCLUDE_ALL 1
#endif
#undef ComGoogleCommonCollectRegularImmutableTable_RESTRICT
#if ComGoogleCommonCollectRegularImmutableTable_DenseImmutableTable_DenseCellSet_INCLUDE
#define ComGoogleCommonCollectRegularImmutableTable_CellSet_INCLUDE 1
#endif
#if ComGoogleCommonCollectRegularImmutableTable_DenseImmutableTable_ColumnMap_INCLUDE
#define ComGoogleCommonCollectRegularImmutableTable_ImmutableArrayMap_INCLUDE 1
#endif
#if ComGoogleCommonCollectRegularImmutableTable_DenseImmutableTable_RowMap_INCLUDE
#define ComGoogleCommonCollectRegularImmutableTable_ImmutableArrayMap_INCLUDE 1
#endif
#if ComGoogleCommonCollectRegularImmutableTable_DenseImmutableTable_Column_INCLUDE
#define ComGoogleCommonCollectRegularImmutableTable_ImmutableArrayMap_INCLUDE 1
#endif
#if ComGoogleCommonCollectRegularImmutableTable_DenseImmutableTable_Row_INCLUDE
#define ComGoogleCommonCollectRegularImmutableTable_ImmutableArrayMap_INCLUDE 1
#endif
#if ComGoogleCommonCollectRegularImmutableTable_DenseImmutableTable_INCLUDE
#define ComGoogleCommonCollectRegularImmutableTable_INCLUDE 1
#endif
#if ComGoogleCommonCollectRegularImmutableTable_SparseImmutableTable_SparseCellSet_INCLUDE
#define ComGoogleCommonCollectRegularImmutableTable_CellSet_INCLUDE 1
#endif
#if ComGoogleCommonCollectRegularImmutableTable_SparseImmutableTable_INCLUDE
#define ComGoogleCommonCollectRegularImmutableTable_INCLUDE 1
#endif
#if !defined (_ComGoogleCommonCollectRegularImmutableTable_) && (ComGoogleCommonCollectRegularImmutableTable_INCLUDE_ALL || ComGoogleCommonCollectRegularImmutableTable_INCLUDE)
#define _ComGoogleCommonCollectRegularImmutableTable_

@class ComGoogleCommonCollectImmutableCollection;
@class ComGoogleCommonCollectImmutableSet;
@protocol JavaLangIterable;
@protocol JavaUtilComparator;
@protocol JavaUtilList;

#define ComGoogleCommonCollectImmutableTable_RESTRICT 1
#define ComGoogleCommonCollectImmutableTable_INCLUDE 1
#include "com/google/common/collect/ImmutableTable.h"


@interface ComGoogleCommonCollectRegularImmutableTable : ComGoogleCommonCollectImmutableTable {
}

- (ComGoogleCommonCollectImmutableCollection *)values;

- (ComGoogleCommonCollectImmutableCollection *)createValues;

- (jint)size;

- (jboolean)containsValueWithId:(id)value;

- (ComGoogleCommonCollectImmutableSet *)cellSet;

- (ComGoogleCommonCollectImmutableSet *)createCellSet;

- (jboolean)isEmpty;

+ (ComGoogleCommonCollectRegularImmutableTable *)forCellsWithJavaUtilList:(id<JavaUtilList>)cells
                                                   withJavaUtilComparator:(id<JavaUtilComparator>)rowComparator
                                                   withJavaUtilComparator:(id<JavaUtilComparator>)columnComparator;

+ (ComGoogleCommonCollectRegularImmutableTable *)forCellsWithJavaLangIterable:(id<JavaLangIterable>)cells;

@end

J2OBJC_EMPTY_STATIC_INIT(ComGoogleCommonCollectRegularImmutableTable)

CF_EXTERN_C_BEGIN

FOUNDATION_EXPORT ComGoogleCommonCollectRegularImmutableTable *ComGoogleCommonCollectRegularImmutableTable_forCellsWithJavaUtilList_withJavaUtilComparator_withJavaUtilComparator_(id<JavaUtilList> cells, id<JavaUtilComparator> rowComparator, id<JavaUtilComparator> columnComparator);

FOUNDATION_EXPORT ComGoogleCommonCollectRegularImmutableTable *ComGoogleCommonCollectRegularImmutableTable_forCellsWithJavaLangIterable_(id<JavaLangIterable> cells);
CF_EXTERN_C_END
#endif

J2OBJC_TYPE_LITERAL_HEADER(ComGoogleCommonCollectRegularImmutableTable)
#if !defined (_ComGoogleCommonCollectRegularImmutableTable_SparseImmutableTable_) && (ComGoogleCommonCollectRegularImmutableTable_INCLUDE_ALL || ComGoogleCommonCollectRegularImmutableTable_SparseImmutableTable_INCLUDE)
#define _ComGoogleCommonCollectRegularImmutableTable_SparseImmutableTable_

@class ComGoogleCommonCollectImmutableCollection;
@class ComGoogleCommonCollectImmutableList;
@class ComGoogleCommonCollectImmutableMap;
@class ComGoogleCommonCollectImmutableSet;
@class IOSIntArray;


@interface ComGoogleCommonCollectRegularImmutableTable_SparseImmutableTable : ComGoogleCommonCollectRegularImmutableTable {
}

- (instancetype)initWithComGoogleCommonCollectImmutableList:(ComGoogleCommonCollectImmutableList *)cellList
                     withComGoogleCommonCollectImmutableSet:(ComGoogleCommonCollectImmutableSet *)rowSpace
                     withComGoogleCommonCollectImmutableSet:(ComGoogleCommonCollectImmutableSet *)columnSpace;

- (ComGoogleCommonCollectImmutableMap *)columnWithId:(id)columnKey;

- (ComGoogleCommonCollectImmutableSet *)columnKeySet;

- (ComGoogleCommonCollectImmutableMap *)columnMap;

- (ComGoogleCommonCollectImmutableMap *)rowWithId:(id)rowKey;

- (ComGoogleCommonCollectImmutableSet *)rowKeySet;

- (ComGoogleCommonCollectImmutableMap *)rowMap;

- (jboolean)containsWithId:(id)rowKey
                    withId:(id)columnKey;

- (jboolean)containsColumnWithId:(id)columnKey;

- (jboolean)containsRowWithId:(id)rowKey;

- (id)getWithId:(id)rowKey
         withId:(id)columnKey;

- (ComGoogleCommonCollectImmutableCollection *)createValues;

- (jint)size;

- (ComGoogleCommonCollectImmutableSet *)createCellSet;

@end

J2OBJC_EMPTY_STATIC_INIT(ComGoogleCommonCollectRegularImmutableTable_SparseImmutableTable)

CF_EXTERN_C_BEGIN
CF_EXTERN_C_END
#endif

J2OBJC_TYPE_LITERAL_HEADER(ComGoogleCommonCollectRegularImmutableTable_SparseImmutableTable)
#if !defined (_ComGoogleCommonCollectRegularImmutableTable_SparseImmutableTable_createValues_SparseImmutableTableValues_) && (ComGoogleCommonCollectRegularImmutableTable_INCLUDE_ALL || ComGoogleCommonCollectRegularImmutableTable_SparseImmutableTable_createValues_SparseImmutableTableValues_INCLUDE)
#define _ComGoogleCommonCollectRegularImmutableTable_SparseImmutableTable_createValues_SparseImmutableTableValues_

@class ComGoogleCommonCollectRegularImmutableTable_SparseImmutableTable;

#define ComGoogleCommonCollectImmutableList_RESTRICT 1
#define ComGoogleCommonCollectImmutableList_INCLUDE 1
#include "com/google/common/collect/ImmutableList.h"


@interface ComGoogleCommonCollectRegularImmutableTable_SparseImmutableTable_createValues_SparseImmutableTableValues : ComGoogleCommonCollectImmutableList {
}

- (jint)size;

- (id)getWithInt:(jint)index;

- (jboolean)isPartialView;

- (instancetype)initWithComGoogleCommonCollectRegularImmutableTable_SparseImmutableTable:(ComGoogleCommonCollectRegularImmutableTable_SparseImmutableTable *)outer$;


@end

J2OBJC_EMPTY_STATIC_INIT(ComGoogleCommonCollectRegularImmutableTable_SparseImmutableTable_createValues_SparseImmutableTableValues)

CF_EXTERN_C_BEGIN
CF_EXTERN_C_END
#endif

J2OBJC_TYPE_LITERAL_HEADER(ComGoogleCommonCollectRegularImmutableTable_SparseImmutableTable_createValues_SparseImmutableTableValues)
#if !defined (_ComGoogleCommonCollectRegularImmutableTable_CellSet_) && (ComGoogleCommonCollectRegularImmutableTable_INCLUDE_ALL || ComGoogleCommonCollectRegularImmutableTable_CellSet_INCLUDE)
#define _ComGoogleCommonCollectRegularImmutableTable_CellSet_

@class ComGoogleCommonCollectRegularImmutableTable;

#define ComGoogleCommonCollectImmutableSet_RESTRICT 1
#define ComGoogleCommonCollectImmutableSet_INCLUDE 1
#include "com/google/common/collect/ImmutableSet.h"


@interface ComGoogleCommonCollectRegularImmutableTable_CellSet : ComGoogleCommonCollectImmutableSet {
}

- (jint)size;

- (jboolean)containsWithId:(id)object;

- (jboolean)isPartialView;

- (instancetype)initWithComGoogleCommonCollectRegularImmutableTable:(ComGoogleCommonCollectRegularImmutableTable *)outer$;


@end

J2OBJC_EMPTY_STATIC_INIT(ComGoogleCommonCollectRegularImmutableTable_CellSet)

CF_EXTERN_C_BEGIN
CF_EXTERN_C_END
#endif

J2OBJC_TYPE_LITERAL_HEADER(ComGoogleCommonCollectRegularImmutableTable_CellSet)
#if !defined (_ComGoogleCommonCollectRegularImmutableTable_SparseImmutableTable_SparseCellSet_) && (ComGoogleCommonCollectRegularImmutableTable_INCLUDE_ALL || ComGoogleCommonCollectRegularImmutableTable_SparseImmutableTable_SparseCellSet_INCLUDE)
#define _ComGoogleCommonCollectRegularImmutableTable_SparseImmutableTable_SparseCellSet_

@class ComGoogleCommonCollectImmutableList;
@class ComGoogleCommonCollectRegularImmutableTable_SparseImmutableTable;
@class ComGoogleCommonCollectUnmodifiableIterator;


@interface ComGoogleCommonCollectRegularImmutableTable_SparseImmutableTable_SparseCellSet : ComGoogleCommonCollectRegularImmutableTable_CellSet {
}

- (ComGoogleCommonCollectUnmodifiableIterator *)iterator;

- (ComGoogleCommonCollectImmutableList *)createAsList;

- (instancetype)initWithComGoogleCommonCollectRegularImmutableTable_SparseImmutableTable:(ComGoogleCommonCollectRegularImmutableTable_SparseImmutableTable *)outer$;


@end

J2OBJC_EMPTY_STATIC_INIT(ComGoogleCommonCollectRegularImmutableTable_SparseImmutableTable_SparseCellSet)

CF_EXTERN_C_BEGIN
CF_EXTERN_C_END
#endif

J2OBJC_TYPE_LITERAL_HEADER(ComGoogleCommonCollectRegularImmutableTable_SparseImmutableTable_SparseCellSet)
#if !defined (_ComGoogleCommonCollectRegularImmutableTable_SparseImmutableTable_SparseCellSet_$1_) && (ComGoogleCommonCollectRegularImmutableTable_INCLUDE_ALL || ComGoogleCommonCollectRegularImmutableTable_SparseImmutableTable_SparseCellSet_$1_INCLUDE)
#define _ComGoogleCommonCollectRegularImmutableTable_SparseImmutableTable_SparseCellSet_$1_

@class ComGoogleCommonCollectImmutableCollection;
@class ComGoogleCommonCollectRegularImmutableTable_SparseImmutableTable_SparseCellSet;
@protocol ComGoogleCommonCollectTable_Cell;

#define ComGoogleCommonCollectImmutableAsList_RESTRICT 1
#define ComGoogleCommonCollectImmutableAsList_INCLUDE 1
#include "com/google/common/collect/ImmutableAsList.h"


@interface ComGoogleCommonCollectRegularImmutableTable_SparseImmutableTable_SparseCellSet_$1 : ComGoogleCommonCollectImmutableAsList {
}

- (id<ComGoogleCommonCollectTable_Cell>)getWithInt:(jint)index;

- (ComGoogleCommonCollectImmutableCollection *)delegateCollection;

- (instancetype)initWithComGoogleCommonCollectRegularImmutableTable_SparseImmutableTable_SparseCellSet:(ComGoogleCommonCollectRegularImmutableTable_SparseImmutableTable_SparseCellSet *)outer$;


@end

J2OBJC_EMPTY_STATIC_INIT(ComGoogleCommonCollectRegularImmutableTable_SparseImmutableTable_SparseCellSet_$1)

CF_EXTERN_C_BEGIN
CF_EXTERN_C_END
#endif

J2OBJC_TYPE_LITERAL_HEADER(ComGoogleCommonCollectRegularImmutableTable_SparseImmutableTable_SparseCellSet_$1)
#if !defined (_ComGoogleCommonCollectRegularImmutableTable_ImmutableArrayMap_createEntrySet_ImmutableArrayMapEntrySetFull_) && (ComGoogleCommonCollectRegularImmutableTable_INCLUDE_ALL || ComGoogleCommonCollectRegularImmutableTable_ImmutableArrayMap_createEntrySet_ImmutableArrayMapEntrySetFull_INCLUDE)
#define _ComGoogleCommonCollectRegularImmutableTable_ImmutableArrayMap_createEntrySet_ImmutableArrayMapEntrySetFull_

@class ComGoogleCommonCollectImmutableMap;
@class ComGoogleCommonCollectRegularImmutableTable_ImmutableArrayMap;
@class ComGoogleCommonCollectUnmodifiableIterator;

#define ComGoogleCommonCollectImmutableMapEntrySet_RESTRICT 1
#define ComGoogleCommonCollectImmutableMapEntrySet_INCLUDE 1
#include "com/google/common/collect/ImmutableMapEntrySet.h"


@interface ComGoogleCommonCollectRegularImmutableTable_ImmutableArrayMap_createEntrySet_ImmutableArrayMapEntrySetFull : ComGoogleCommonCollectImmutableMapEntrySet {
}

- (ComGoogleCommonCollectImmutableMap *)map;

- (ComGoogleCommonCollectUnmodifiableIterator *)iterator;

- (instancetype)initWithComGoogleCommonCollectRegularImmutableTable_ImmutableArrayMap:(ComGoogleCommonCollectRegularImmutableTable_ImmutableArrayMap *)outer$;


@end

J2OBJC_EMPTY_STATIC_INIT(ComGoogleCommonCollectRegularImmutableTable_ImmutableArrayMap_createEntrySet_ImmutableArrayMapEntrySetFull)

CF_EXTERN_C_BEGIN
CF_EXTERN_C_END
#endif

J2OBJC_TYPE_LITERAL_HEADER(ComGoogleCommonCollectRegularImmutableTable_ImmutableArrayMap_createEntrySet_ImmutableArrayMapEntrySetFull)
#if !defined (_ComGoogleCommonCollectRegularImmutableTable_ImmutableArrayMap_createEntrySet_ImmutableArrayMapEntrySetFull_$1_) && (ComGoogleCommonCollectRegularImmutableTable_INCLUDE_ALL || ComGoogleCommonCollectRegularImmutableTable_ImmutableArrayMap_createEntrySet_ImmutableArrayMapEntrySetFull_$1_INCLUDE)
#define _ComGoogleCommonCollectRegularImmutableTable_ImmutableArrayMap_createEntrySet_ImmutableArrayMapEntrySetFull_$1_

@class ComGoogleCommonCollectRegularImmutableTable_ImmutableArrayMap_createEntrySet_ImmutableArrayMapEntrySetFull;
@protocol JavaUtilMap_Entry;

#define ComGoogleCommonCollectAbstractIndexedListIterator_RESTRICT 1
#define ComGoogleCommonCollectAbstractIndexedListIterator_INCLUDE 1
#include "com/google/common/collect/AbstractIndexedListIterator.h"


@interface ComGoogleCommonCollectRegularImmutableTable_ImmutableArrayMap_createEntrySet_ImmutableArrayMapEntrySetFull_$1 : ComGoogleCommonCollectAbstractIndexedListIterator {
}

- (id<JavaUtilMap_Entry>)getWithInt:(jint)index;

- (instancetype)initWithComGoogleCommonCollectRegularImmutableTable_ImmutableArrayMap_createEntrySet_ImmutableArrayMapEntrySetFull:(ComGoogleCommonCollectRegularImmutableTable_ImmutableArrayMap_createEntrySet_ImmutableArrayMapEntrySetFull *)outer$
                                                                                                                           withInt:(jint)arg$0;

@end

J2OBJC_EMPTY_STATIC_INIT(ComGoogleCommonCollectRegularImmutableTable_ImmutableArrayMap_createEntrySet_ImmutableArrayMapEntrySetFull_$1)

CF_EXTERN_C_BEGIN
CF_EXTERN_C_END
#endif

J2OBJC_TYPE_LITERAL_HEADER(ComGoogleCommonCollectRegularImmutableTable_ImmutableArrayMap_createEntrySet_ImmutableArrayMapEntrySetFull_$1)
#if !defined (_ComGoogleCommonCollectRegularImmutableTable_ImmutableArrayMap_createEntrySet_ImmutableArrayMapEntrySetNotFull_) && (ComGoogleCommonCollectRegularImmutableTable_INCLUDE_ALL || ComGoogleCommonCollectRegularImmutableTable_ImmutableArrayMap_createEntrySet_ImmutableArrayMapEntrySetNotFull_INCLUDE)
#define _ComGoogleCommonCollectRegularImmutableTable_ImmutableArrayMap_createEntrySet_ImmutableArrayMapEntrySetNotFull_

@class ComGoogleCommonCollectImmutableMap;
@class ComGoogleCommonCollectRegularImmutableTable_ImmutableArrayMap;
@class ComGoogleCommonCollectUnmodifiableIterator;

#define ComGoogleCommonCollectImmutableMapEntrySet_RESTRICT 1
#define ComGoogleCommonCollectImmutableMapEntrySet_INCLUDE 1
#include "com/google/common/collect/ImmutableMapEntrySet.h"


@interface ComGoogleCommonCollectRegularImmutableTable_ImmutableArrayMap_createEntrySet_ImmutableArrayMapEntrySetNotFull : ComGoogleCommonCollectImmutableMapEntrySet {
}

- (ComGoogleCommonCollectImmutableMap *)map;

- (ComGoogleCommonCollectUnmodifiableIterator *)iterator;

- (instancetype)initWithComGoogleCommonCollectRegularImmutableTable_ImmutableArrayMap:(ComGoogleCommonCollectRegularImmutableTable_ImmutableArrayMap *)outer$;


@end

J2OBJC_EMPTY_STATIC_INIT(ComGoogleCommonCollectRegularImmutableTable_ImmutableArrayMap_createEntrySet_ImmutableArrayMapEntrySetNotFull)

CF_EXTERN_C_BEGIN
CF_EXTERN_C_END
#endif

J2OBJC_TYPE_LITERAL_HEADER(ComGoogleCommonCollectRegularImmutableTable_ImmutableArrayMap_createEntrySet_ImmutableArrayMapEntrySetNotFull)
#if !defined (_ComGoogleCommonCollectRegularImmutableTable_ImmutableArrayMap_createEntrySet_ImmutableArrayMapEntrySetNotFull_$1_) && (ComGoogleCommonCollectRegularImmutableTable_INCLUDE_ALL || ComGoogleCommonCollectRegularImmutableTable_ImmutableArrayMap_createEntrySet_ImmutableArrayMapEntrySetNotFull_$1_INCLUDE)
#define _ComGoogleCommonCollectRegularImmutableTable_ImmutableArrayMap_createEntrySet_ImmutableArrayMapEntrySetNotFull_$1_

@class ComGoogleCommonCollectRegularImmutableTable_ImmutableArrayMap_createEntrySet_ImmutableArrayMapEntrySetNotFull;
@protocol JavaUtilMap_Entry;

#define ComGoogleCommonCollectAbstractIterator_RESTRICT 1
#define ComGoogleCommonCollectAbstractIterator_INCLUDE 1
#include "com/google/common/collect/AbstractIterator.h"


@interface ComGoogleCommonCollectRegularImmutableTable_ImmutableArrayMap_createEntrySet_ImmutableArrayMapEntrySetNotFull_$1 : ComGoogleCommonCollectAbstractIterator {
}

- (id<JavaUtilMap_Entry>)computeNext;

- (instancetype)initWithComGoogleCommonCollectRegularImmutableTable_ImmutableArrayMap_createEntrySet_ImmutableArrayMapEntrySetNotFull:(ComGoogleCommonCollectRegularImmutableTable_ImmutableArrayMap_createEntrySet_ImmutableArrayMapEntrySetNotFull *)outer$;

@end

J2OBJC_EMPTY_STATIC_INIT(ComGoogleCommonCollectRegularImmutableTable_ImmutableArrayMap_createEntrySet_ImmutableArrayMapEntrySetNotFull_$1)

CF_EXTERN_C_BEGIN
CF_EXTERN_C_END
#endif

J2OBJC_TYPE_LITERAL_HEADER(ComGoogleCommonCollectRegularImmutableTable_ImmutableArrayMap_createEntrySet_ImmutableArrayMapEntrySetNotFull_$1)
#if !defined (_ComGoogleCommonCollectRegularImmutableTable_DenseImmutableTable_) && (ComGoogleCommonCollectRegularImmutableTable_INCLUDE_ALL || ComGoogleCommonCollectRegularImmutableTable_DenseImmutableTable_INCLUDE)
#define _ComGoogleCommonCollectRegularImmutableTable_DenseImmutableTable_

@class ComGoogleCommonCollectImmutableCollection;
@class ComGoogleCommonCollectImmutableList;
@class ComGoogleCommonCollectImmutableMap;
@class ComGoogleCommonCollectImmutableSet;
@class IOSIntArray;
@class IOSObjectArray;


@interface ComGoogleCommonCollectRegularImmutableTable_DenseImmutableTable : ComGoogleCommonCollectRegularImmutableTable {
}

- (instancetype)initWithComGoogleCommonCollectImmutableList:(ComGoogleCommonCollectImmutableList *)cellList
                     withComGoogleCommonCollectImmutableSet:(ComGoogleCommonCollectImmutableSet *)rowSpace
                     withComGoogleCommonCollectImmutableSet:(ComGoogleCommonCollectImmutableSet *)columnSpace;

- (ComGoogleCommonCollectImmutableMap *)columnWithId:(id)columnKey;

- (ComGoogleCommonCollectImmutableSet *)columnKeySet;

- (ComGoogleCommonCollectImmutableMap *)columnMap;

- (jboolean)containsWithId:(id)rowKey
                    withId:(id)columnKey;

- (jboolean)containsColumnWithId:(id)columnKey;

- (jboolean)containsRowWithId:(id)rowKey;

- (id)getWithId:(id)rowKey
         withId:(id)columnKey;

- (ComGoogleCommonCollectImmutableMap *)rowWithId:(id)rowKey;

- (ComGoogleCommonCollectImmutableSet *)rowKeySet;

- (ComGoogleCommonCollectImmutableMap *)rowMap;

- (ComGoogleCommonCollectImmutableCollection *)createValues;

- (jint)size;

- (ComGoogleCommonCollectImmutableSet *)createCellSet;

@end

J2OBJC_EMPTY_STATIC_INIT(ComGoogleCommonCollectRegularImmutableTable_DenseImmutableTable)

CF_EXTERN_C_BEGIN
CF_EXTERN_C_END
#endif

J2OBJC_TYPE_LITERAL_HEADER(ComGoogleCommonCollectRegularImmutableTable_DenseImmutableTable)
#if !defined (_ComGoogleCommonCollectRegularImmutableTable_ImmutableArrayMap_) && (ComGoogleCommonCollectRegularImmutableTable_INCLUDE_ALL || ComGoogleCommonCollectRegularImmutableTable_ImmutableArrayMap_INCLUDE)
#define _ComGoogleCommonCollectRegularImmutableTable_ImmutableArrayMap_

@class ComGoogleCommonCollectImmutableSet;

#define ComGoogleCommonCollectImmutableMap_RESTRICT 1
#define ComGoogleCommonCollectImmutableMap_INCLUDE 1
#include "com/google/common/collect/ImmutableMap.h"


@interface ComGoogleCommonCollectRegularImmutableTable_ImmutableArrayMap : ComGoogleCommonCollectImmutableMap {
}

- (instancetype)initWithInt:(jint)size;

- (ComGoogleCommonCollectImmutableMap *)keyToIndex;

- (id)getKeyWithInt:(jint)index;

- (id)getValueWithInt:(jint)keyIndex;

- (ComGoogleCommonCollectImmutableSet *)createKeySet;

- (jint)size;

- (id)getWithId:(id)key;

- (ComGoogleCommonCollectImmutableSet *)createEntrySet;

@end

J2OBJC_EMPTY_STATIC_INIT(ComGoogleCommonCollectRegularImmutableTable_ImmutableArrayMap)

CF_EXTERN_C_BEGIN
CF_EXTERN_C_END
#endif

J2OBJC_TYPE_LITERAL_HEADER(ComGoogleCommonCollectRegularImmutableTable_ImmutableArrayMap)
#if !defined (_ComGoogleCommonCollectRegularImmutableTable_DenseImmutableTable_Row_) && (ComGoogleCommonCollectRegularImmutableTable_INCLUDE_ALL || ComGoogleCommonCollectRegularImmutableTable_DenseImmutableTable_Row_INCLUDE)
#define _ComGoogleCommonCollectRegularImmutableTable_DenseImmutableTable_Row_

@class ComGoogleCommonCollectImmutableMap;
@class ComGoogleCommonCollectRegularImmutableTable_DenseImmutableTable;


@interface ComGoogleCommonCollectRegularImmutableTable_DenseImmutableTable_Row : ComGoogleCommonCollectRegularImmutableTable_ImmutableArrayMap {
}

- (instancetype)initWithComGoogleCommonCollectRegularImmutableTable_DenseImmutableTable:(ComGoogleCommonCollectRegularImmutableTable_DenseImmutableTable *)outer$
                                                                                withInt:(jint)rowIndex;

- (ComGoogleCommonCollectImmutableMap *)keyToIndex;

- (id)getValueWithInt:(jint)keyIndex;

- (jboolean)isPartialView;

@end

J2OBJC_EMPTY_STATIC_INIT(ComGoogleCommonCollectRegularImmutableTable_DenseImmutableTable_Row)

CF_EXTERN_C_BEGIN
CF_EXTERN_C_END
#endif

J2OBJC_TYPE_LITERAL_HEADER(ComGoogleCommonCollectRegularImmutableTable_DenseImmutableTable_Row)
#if !defined (_ComGoogleCommonCollectRegularImmutableTable_DenseImmutableTable_Column_) && (ComGoogleCommonCollectRegularImmutableTable_INCLUDE_ALL || ComGoogleCommonCollectRegularImmutableTable_DenseImmutableTable_Column_INCLUDE)
#define _ComGoogleCommonCollectRegularImmutableTable_DenseImmutableTable_Column_

@class ComGoogleCommonCollectImmutableMap;
@class ComGoogleCommonCollectRegularImmutableTable_DenseImmutableTable;


@interface ComGoogleCommonCollectRegularImmutableTable_DenseImmutableTable_Column : ComGoogleCommonCollectRegularImmutableTable_ImmutableArrayMap {
}

- (instancetype)initWithComGoogleCommonCollectRegularImmutableTable_DenseImmutableTable:(ComGoogleCommonCollectRegularImmutableTable_DenseImmutableTable *)outer$
                                                                                withInt:(jint)columnIndex;

- (ComGoogleCommonCollectImmutableMap *)keyToIndex;

- (id)getValueWithInt:(jint)keyIndex;

- (jboolean)isPartialView;

@end

J2OBJC_EMPTY_STATIC_INIT(ComGoogleCommonCollectRegularImmutableTable_DenseImmutableTable_Column)

CF_EXTERN_C_BEGIN
CF_EXTERN_C_END
#endif

J2OBJC_TYPE_LITERAL_HEADER(ComGoogleCommonCollectRegularImmutableTable_DenseImmutableTable_Column)
#if !defined (_ComGoogleCommonCollectRegularImmutableTable_DenseImmutableTable_RowMap_) && (ComGoogleCommonCollectRegularImmutableTable_INCLUDE_ALL || ComGoogleCommonCollectRegularImmutableTable_DenseImmutableTable_RowMap_INCLUDE)
#define _ComGoogleCommonCollectRegularImmutableTable_DenseImmutableTable_RowMap_

@class ComGoogleCommonCollectImmutableMap;
@class ComGoogleCommonCollectRegularImmutableTable_DenseImmutableTable;
@protocol JavaUtilMap;


@interface ComGoogleCommonCollectRegularImmutableTable_DenseImmutableTable_RowMap : ComGoogleCommonCollectRegularImmutableTable_ImmutableArrayMap {
}

- (ComGoogleCommonCollectImmutableMap *)keyToIndex;

- (id<JavaUtilMap>)getValueWithInt:(jint)keyIndex;

- (jboolean)isPartialView;

@end

J2OBJC_EMPTY_STATIC_INIT(ComGoogleCommonCollectRegularImmutableTable_DenseImmutableTable_RowMap)

CF_EXTERN_C_BEGIN
CF_EXTERN_C_END
#endif

J2OBJC_TYPE_LITERAL_HEADER(ComGoogleCommonCollectRegularImmutableTable_DenseImmutableTable_RowMap)
#if !defined (_ComGoogleCommonCollectRegularImmutableTable_DenseImmutableTable_ColumnMap_) && (ComGoogleCommonCollectRegularImmutableTable_INCLUDE_ALL || ComGoogleCommonCollectRegularImmutableTable_DenseImmutableTable_ColumnMap_INCLUDE)
#define _ComGoogleCommonCollectRegularImmutableTable_DenseImmutableTable_ColumnMap_

@class ComGoogleCommonCollectImmutableMap;
@class ComGoogleCommonCollectRegularImmutableTable_DenseImmutableTable;
@protocol JavaUtilMap;


@interface ComGoogleCommonCollectRegularImmutableTable_DenseImmutableTable_ColumnMap : ComGoogleCommonCollectRegularImmutableTable_ImmutableArrayMap {
}

- (ComGoogleCommonCollectImmutableMap *)keyToIndex;

- (id<JavaUtilMap>)getValueWithInt:(jint)keyIndex;

- (jboolean)isPartialView;

@end

J2OBJC_EMPTY_STATIC_INIT(ComGoogleCommonCollectRegularImmutableTable_DenseImmutableTable_ColumnMap)

CF_EXTERN_C_BEGIN
CF_EXTERN_C_END
#endif

J2OBJC_TYPE_LITERAL_HEADER(ComGoogleCommonCollectRegularImmutableTable_DenseImmutableTable_ColumnMap)
#if !defined (_ComGoogleCommonCollectRegularImmutableTable_DenseImmutableTable_createValues_DenseImmutableTableValues_) && (ComGoogleCommonCollectRegularImmutableTable_INCLUDE_ALL || ComGoogleCommonCollectRegularImmutableTable_DenseImmutableTable_createValues_DenseImmutableTableValues_INCLUDE)
#define _ComGoogleCommonCollectRegularImmutableTable_DenseImmutableTable_createValues_DenseImmutableTableValues_

@class ComGoogleCommonCollectRegularImmutableTable_DenseImmutableTable;

#define ComGoogleCommonCollectImmutableList_RESTRICT 1
#define ComGoogleCommonCollectImmutableList_INCLUDE 1
#include "com/google/common/collect/ImmutableList.h"


@interface ComGoogleCommonCollectRegularImmutableTable_DenseImmutableTable_createValues_DenseImmutableTableValues : ComGoogleCommonCollectImmutableList {
}

- (jint)size;

- (id)getWithInt:(jint)index;

- (jboolean)isPartialView;

- (instancetype)initWithComGoogleCommonCollectRegularImmutableTable_DenseImmutableTable:(ComGoogleCommonCollectRegularImmutableTable_DenseImmutableTable *)outer$;


@end

J2OBJC_EMPTY_STATIC_INIT(ComGoogleCommonCollectRegularImmutableTable_DenseImmutableTable_createValues_DenseImmutableTableValues)

CF_EXTERN_C_BEGIN
CF_EXTERN_C_END
#endif

J2OBJC_TYPE_LITERAL_HEADER(ComGoogleCommonCollectRegularImmutableTable_DenseImmutableTable_createValues_DenseImmutableTableValues)
#if !defined (_ComGoogleCommonCollectRegularImmutableTable_DenseImmutableTable_DenseCellSet_) && (ComGoogleCommonCollectRegularImmutableTable_INCLUDE_ALL || ComGoogleCommonCollectRegularImmutableTable_DenseImmutableTable_DenseCellSet_INCLUDE)
#define _ComGoogleCommonCollectRegularImmutableTable_DenseImmutableTable_DenseCellSet_

@class ComGoogleCommonCollectImmutableList;
@class ComGoogleCommonCollectRegularImmutableTable_DenseImmutableTable;
@class ComGoogleCommonCollectUnmodifiableIterator;


@interface ComGoogleCommonCollectRegularImmutableTable_DenseImmutableTable_DenseCellSet : ComGoogleCommonCollectRegularImmutableTable_CellSet {
}

- (ComGoogleCommonCollectUnmodifiableIterator *)iterator;

- (ComGoogleCommonCollectImmutableList *)createAsList;

- (instancetype)initWithComGoogleCommonCollectRegularImmutableTable_DenseImmutableTable:(ComGoogleCommonCollectRegularImmutableTable_DenseImmutableTable *)outer$;


@end

J2OBJC_EMPTY_STATIC_INIT(ComGoogleCommonCollectRegularImmutableTable_DenseImmutableTable_DenseCellSet)

CF_EXTERN_C_BEGIN
CF_EXTERN_C_END
#endif

J2OBJC_TYPE_LITERAL_HEADER(ComGoogleCommonCollectRegularImmutableTable_DenseImmutableTable_DenseCellSet)
#if !defined (_ComGoogleCommonCollectRegularImmutableTable_DenseImmutableTable_DenseCellSet_$1_) && (ComGoogleCommonCollectRegularImmutableTable_INCLUDE_ALL || ComGoogleCommonCollectRegularImmutableTable_DenseImmutableTable_DenseCellSet_$1_INCLUDE)
#define _ComGoogleCommonCollectRegularImmutableTable_DenseImmutableTable_DenseCellSet_$1_

@class ComGoogleCommonCollectImmutableCollection;
@class ComGoogleCommonCollectRegularImmutableTable_DenseImmutableTable_DenseCellSet;
@protocol ComGoogleCommonCollectTable_Cell;

#define ComGoogleCommonCollectImmutableAsList_RESTRICT 1
#define ComGoogleCommonCollectImmutableAsList_INCLUDE 1
#include "com/google/common/collect/ImmutableAsList.h"


@interface ComGoogleCommonCollectRegularImmutableTable_DenseImmutableTable_DenseCellSet_$1 : ComGoogleCommonCollectImmutableAsList {
}

- (id<ComGoogleCommonCollectTable_Cell>)getWithInt:(jint)index;

- (ComGoogleCommonCollectImmutableCollection *)delegateCollection;

- (instancetype)initWithComGoogleCommonCollectRegularImmutableTable_DenseImmutableTable_DenseCellSet:(ComGoogleCommonCollectRegularImmutableTable_DenseImmutableTable_DenseCellSet *)outer$;


@end

J2OBJC_EMPTY_STATIC_INIT(ComGoogleCommonCollectRegularImmutableTable_DenseImmutableTable_DenseCellSet_$1)

CF_EXTERN_C_BEGIN
CF_EXTERN_C_END
#endif

J2OBJC_TYPE_LITERAL_HEADER(ComGoogleCommonCollectRegularImmutableTable_DenseImmutableTable_DenseCellSet_$1)
#if !defined (_ComGoogleCommonCollectRegularImmutableTable_$1_) && (ComGoogleCommonCollectRegularImmutableTable_INCLUDE_ALL || ComGoogleCommonCollectRegularImmutableTable_$1_INCLUDE)
#define _ComGoogleCommonCollectRegularImmutableTable_$1_

@protocol ComGoogleCommonCollectTable_Cell;

#define JavaUtilComparator_RESTRICT 1
#define JavaUtilComparator_INCLUDE 1
#include "java/util/Comparator.h"


@interface ComGoogleCommonCollectRegularImmutableTable_$1 : NSObject < JavaUtilComparator > {
}

- (jint)compareWithId:(id<ComGoogleCommonCollectTable_Cell>)cell1
               withId:(id<ComGoogleCommonCollectTable_Cell>)cell2;

- (instancetype)initWithJavaUtilComparator:(id<JavaUtilComparator>)capture$0
                    withJavaUtilComparator:(id<JavaUtilComparator>)capture$1;

@end

J2OBJC_EMPTY_STATIC_INIT(ComGoogleCommonCollectRegularImmutableTable_$1)

CF_EXTERN_C_BEGIN
CF_EXTERN_C_END
#endif

J2OBJC_TYPE_LITERAL_HEADER(ComGoogleCommonCollectRegularImmutableTable_$1)
