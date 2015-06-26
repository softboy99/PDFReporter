//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/krasnocka/Downloads/j2objc-master/guava/sources/com/google/common/collect/EmptyImmutableTable.java
//

#include "J2ObjC_header.h"

#if !ComGoogleCommonCollectEmptyImmutableTable_RESTRICT
#define ComGoogleCommonCollectEmptyImmutableTable_INCLUDE_ALL 1
#endif
#undef ComGoogleCommonCollectEmptyImmutableTable_RESTRICT
#if !defined (_ComGoogleCommonCollectEmptyImmutableTable_) && (ComGoogleCommonCollectEmptyImmutableTable_INCLUDE_ALL || ComGoogleCommonCollectEmptyImmutableTable_INCLUDE)
#define _ComGoogleCommonCollectEmptyImmutableTable_

@class ComGoogleCommonCollectImmutableCollection;
@class ComGoogleCommonCollectImmutableMap;
@class ComGoogleCommonCollectImmutableSet;

#define ComGoogleCommonCollectImmutableTable_RESTRICT 1
#define ComGoogleCommonCollectImmutableTable_INCLUDE 1
#include "com/google/common/collect/ImmutableTable.h"


#define ComGoogleCommonCollectEmptyImmutableTable_serialVersionUID 0LL

@interface ComGoogleCommonCollectEmptyImmutableTable : ComGoogleCommonCollectImmutableTable {
}

- (jint)size;

- (id)getWithId:(id)rowKey
         withId:(id)columnKey;

- (jboolean)isEmpty;

- (jboolean)isEqual:(id)obj;

- (NSUInteger)hash;

- (ComGoogleCommonCollectImmutableSet *)cellSet;

- (ComGoogleCommonCollectImmutableMap *)columnWithId:(id)columnKey;

- (ComGoogleCommonCollectImmutableSet *)columnKeySet;

- (ComGoogleCommonCollectImmutableMap *)columnMap;

- (jboolean)containsWithId:(id)rowKey
                    withId:(id)columnKey;

- (jboolean)containsColumnWithId:(id)columnKey;

- (jboolean)containsRowWithId:(id)rowKey;

- (jboolean)containsValueWithId:(id)value;

- (ComGoogleCommonCollectImmutableMap *)rowWithId:(id)rowKey;

- (ComGoogleCommonCollectImmutableSet *)rowKeySet;

- (ComGoogleCommonCollectImmutableMap *)rowMap;

- (NSString *)description;

- (ComGoogleCommonCollectImmutableCollection *)values;

- (id)readResolve;

@end

FOUNDATION_EXPORT BOOL ComGoogleCommonCollectEmptyImmutableTable_initialized;
J2OBJC_STATIC_INIT(ComGoogleCommonCollectEmptyImmutableTable)

CF_EXTERN_C_BEGIN

FOUNDATION_EXPORT ComGoogleCommonCollectEmptyImmutableTable *ComGoogleCommonCollectEmptyImmutableTable_INSTANCE_;
J2OBJC_STATIC_FIELD_GETTER(ComGoogleCommonCollectEmptyImmutableTable, INSTANCE_, ComGoogleCommonCollectEmptyImmutableTable *)

J2OBJC_STATIC_FIELD_GETTER(ComGoogleCommonCollectEmptyImmutableTable, serialVersionUID, jlong)
CF_EXTERN_C_END
#endif

J2OBJC_TYPE_LITERAL_HEADER(ComGoogleCommonCollectEmptyImmutableTable)