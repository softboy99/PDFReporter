//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/krasnocka/Downloads/j2objc-master/guava/sources/com/google/common/collect/TreeMultimap.java
//

#include "J2ObjC_header.h"

#if !ComGoogleCommonCollectTreeMultimap_RESTRICT
#define ComGoogleCommonCollectTreeMultimap_INCLUDE_ALL 1
#endif
#undef ComGoogleCommonCollectTreeMultimap_RESTRICT
#if !defined (_ComGoogleCommonCollectTreeMultimap_) && (ComGoogleCommonCollectTreeMultimap_INCLUDE_ALL || ComGoogleCommonCollectTreeMultimap_INCLUDE)
#define _ComGoogleCommonCollectTreeMultimap_

@class JavaIoObjectInputStream;
@class JavaIoObjectOutputStream;
@protocol ComGoogleCommonCollectMultimap;
@protocol JavaUtilCollection;
@protocol JavaUtilComparator;
@protocol JavaUtilNavigableMap;
@protocol JavaUtilNavigableSet;
@protocol JavaUtilSortedSet;

#define ComGoogleCommonCollectAbstractSortedKeySortedSetMultimap_RESTRICT 1
#define ComGoogleCommonCollectAbstractSortedKeySortedSetMultimap_INCLUDE 1
#include "com/google/common/collect/AbstractSortedKeySortedSetMultimap.h"


#define ComGoogleCommonCollectTreeMultimap_serialVersionUID 0LL

@interface ComGoogleCommonCollectTreeMultimap : ComGoogleCommonCollectAbstractSortedKeySortedSetMultimap {
}

+ (ComGoogleCommonCollectTreeMultimap *)create;

+ (ComGoogleCommonCollectTreeMultimap *)createWithJavaUtilComparator:(id<JavaUtilComparator>)keyComparator
                                              withJavaUtilComparator:(id<JavaUtilComparator>)valueComparator;

+ (ComGoogleCommonCollectTreeMultimap *)createWithComGoogleCommonCollectMultimap:(id<ComGoogleCommonCollectMultimap>)multimap;

- (instancetype)initWithJavaUtilComparator:(id<JavaUtilComparator>)keyComparator
                    withJavaUtilComparator:(id<JavaUtilComparator>)valueComparator;

- (id<JavaUtilSortedSet>)createCollection;

- (id<JavaUtilCollection>)createCollectionWithId:(id)key;

- (id<JavaUtilComparator>)keyComparator;

- (id<JavaUtilComparator>)valueComparator;

- (id<JavaUtilNavigableMap>)backingMap;

- (id<JavaUtilNavigableSet>)getWithId:(id)key;

- (id<JavaUtilCollection>)unmodifiableCollectionSubclassWithJavaUtilCollection:(id<JavaUtilCollection>)collection;

- (id<JavaUtilCollection>)wrapCollectionWithId:(id)key
                        withJavaUtilCollection:(id<JavaUtilCollection>)collection;

- (id<JavaUtilNavigableSet>)keySet;

- (id<JavaUtilNavigableSet>)createKeySet;

- (id<JavaUtilNavigableMap>)asMap;

- (id<JavaUtilNavigableMap>)createAsMap;

@end

J2OBJC_EMPTY_STATIC_INIT(ComGoogleCommonCollectTreeMultimap)

CF_EXTERN_C_BEGIN

FOUNDATION_EXPORT ComGoogleCommonCollectTreeMultimap *ComGoogleCommonCollectTreeMultimap_create();

FOUNDATION_EXPORT ComGoogleCommonCollectTreeMultimap *ComGoogleCommonCollectTreeMultimap_createWithJavaUtilComparator_withJavaUtilComparator_(id<JavaUtilComparator> keyComparator, id<JavaUtilComparator> valueComparator);

FOUNDATION_EXPORT ComGoogleCommonCollectTreeMultimap *ComGoogleCommonCollectTreeMultimap_createWithComGoogleCommonCollectMultimap_(id<ComGoogleCommonCollectMultimap> multimap);

J2OBJC_STATIC_FIELD_GETTER(ComGoogleCommonCollectTreeMultimap, serialVersionUID, jlong)
CF_EXTERN_C_END
#endif

J2OBJC_TYPE_LITERAL_HEADER(ComGoogleCommonCollectTreeMultimap)
