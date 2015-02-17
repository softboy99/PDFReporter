//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/krasnocka/Downloads/j2objc-master/guava/sources/com/google/common/collect/SetMultimap.java
//

#include "J2ObjC_header.h"

#if !ComGoogleCommonCollectSetMultimap_RESTRICT
#define ComGoogleCommonCollectSetMultimap_INCLUDE_ALL 1
#endif
#undef ComGoogleCommonCollectSetMultimap_RESTRICT
#if !defined (_ComGoogleCommonCollectSetMultimap_) && (ComGoogleCommonCollectSetMultimap_INCLUDE_ALL || ComGoogleCommonCollectSetMultimap_INCLUDE)
#define _ComGoogleCommonCollectSetMultimap_

@protocol JavaLangIterable;
@protocol JavaUtilMap;
@protocol JavaUtilSet;

#define ComGoogleCommonCollectMultimap_RESTRICT 1
#define ComGoogleCommonCollectMultimap_INCLUDE 1
#include "com/google/common/collect/Multimap.h"


@protocol ComGoogleCommonCollectSetMultimap < ComGoogleCommonCollectMultimap, NSObject, JavaObject >
- (id<JavaUtilSet>)getWithId:(id)key;

- (id<JavaUtilSet>)removeAllWithId:(id)key;

- (id<JavaUtilSet>)replaceValuesWithId:(id)key
                  withJavaLangIterable:(id<JavaLangIterable>)values;

- (id<JavaUtilSet>)entries;

- (id<JavaUtilMap>)asMap;

- (jboolean)isEqual:(id)obj;

@end

J2OBJC_EMPTY_STATIC_INIT(ComGoogleCommonCollectSetMultimap)
#endif

J2OBJC_TYPE_LITERAL_HEADER(ComGoogleCommonCollectSetMultimap)
