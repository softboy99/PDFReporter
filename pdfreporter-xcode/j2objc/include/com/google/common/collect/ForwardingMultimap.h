//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/krasnocka/Downloads/j2objc-master/guava/sources/com/google/common/collect/ForwardingMultimap.java
//

#include "J2ObjC_header.h"

#if !ComGoogleCommonCollectForwardingMultimap_RESTRICT
#define ComGoogleCommonCollectForwardingMultimap_INCLUDE_ALL 1
#endif
#undef ComGoogleCommonCollectForwardingMultimap_RESTRICT
#if !defined (_ComGoogleCommonCollectForwardingMultimap_) && (ComGoogleCommonCollectForwardingMultimap_INCLUDE_ALL || ComGoogleCommonCollectForwardingMultimap_INCLUDE)
#define _ComGoogleCommonCollectForwardingMultimap_

@protocol ComGoogleCommonCollectMultiset;
@protocol JavaLangIterable;
@protocol JavaUtilCollection;
@protocol JavaUtilMap;
@protocol JavaUtilSet;

#define ComGoogleCommonCollectForwardingObject_RESTRICT 1
#define ComGoogleCommonCollectForwardingObject_INCLUDE 1
#include "com/google/common/collect/ForwardingObject.h"

#define ComGoogleCommonCollectMultimap_RESTRICT 1
#define ComGoogleCommonCollectMultimap_INCLUDE 1
#include "com/google/common/collect/Multimap.h"


@interface ComGoogleCommonCollectForwardingMultimap : ComGoogleCommonCollectForwardingObject < ComGoogleCommonCollectMultimap > {
}

- (instancetype)init;

- (id<ComGoogleCommonCollectMultimap>)delegate;

- (id<JavaUtilMap>)asMap;

- (void)clear;

- (jboolean)containsEntryWithId:(id)key
                         withId:(id)value;

- (jboolean)containsKeyWithId:(id)key;

- (jboolean)containsValueWithId:(id)value;

- (id<JavaUtilCollection>)entries;

- (id<JavaUtilCollection>)getWithId:(id)key;

- (jboolean)isEmpty;

- (id<ComGoogleCommonCollectMultiset>)keys;

- (id<JavaUtilSet>)keySet;

- (jboolean)putWithId:(id)key
               withId:(id)value;

- (jboolean)putAllWithId:(id)key
    withJavaLangIterable:(id<JavaLangIterable>)values;

- (jboolean)putAllWithComGoogleCommonCollectMultimap:(id<ComGoogleCommonCollectMultimap>)multimap;

- (jboolean)removeWithId:(id)key
                  withId:(id)value;

- (id<JavaUtilCollection>)removeAllWithId:(id)key;

- (id<JavaUtilCollection>)replaceValuesWithId:(id)key
                         withJavaLangIterable:(id<JavaLangIterable>)values;

- (jint)size;

- (id<JavaUtilCollection>)values;

- (jboolean)isEqual:(id)object;

- (NSUInteger)hash;

@end

J2OBJC_EMPTY_STATIC_INIT(ComGoogleCommonCollectForwardingMultimap)

CF_EXTERN_C_BEGIN
CF_EXTERN_C_END
#endif

J2OBJC_TYPE_LITERAL_HEADER(ComGoogleCommonCollectForwardingMultimap)
