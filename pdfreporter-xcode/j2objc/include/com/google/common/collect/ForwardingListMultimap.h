//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/krasnocka/Downloads/j2objc-master/guava/sources/com/google/common/collect/ForwardingListMultimap.java
//

#include "J2ObjC_header.h"

#if !ComGoogleCommonCollectForwardingListMultimap_RESTRICT
#define ComGoogleCommonCollectForwardingListMultimap_INCLUDE_ALL 1
#endif
#undef ComGoogleCommonCollectForwardingListMultimap_RESTRICT
#if !defined (_ComGoogleCommonCollectForwardingListMultimap_) && (ComGoogleCommonCollectForwardingListMultimap_INCLUDE_ALL || ComGoogleCommonCollectForwardingListMultimap_INCLUDE)
#define _ComGoogleCommonCollectForwardingListMultimap_

@protocol JavaLangIterable;
@protocol JavaUtilList;

#define ComGoogleCommonCollectForwardingMultimap_RESTRICT 1
#define ComGoogleCommonCollectForwardingMultimap_INCLUDE 1
#include "com/google/common/collect/ForwardingMultimap.h"

#define ComGoogleCommonCollectListMultimap_RESTRICT 1
#define ComGoogleCommonCollectListMultimap_INCLUDE 1
#include "com/google/common/collect/ListMultimap.h"


@interface ComGoogleCommonCollectForwardingListMultimap : ComGoogleCommonCollectForwardingMultimap < ComGoogleCommonCollectListMultimap > {
}

- (instancetype)init;

- (id<ComGoogleCommonCollectListMultimap>)delegate;

- (id<JavaUtilList>)getWithId:(id)key;

- (id<JavaUtilList>)removeAllWithId:(id)key;

- (id<JavaUtilList>)replaceValuesWithId:(id)key
                   withJavaLangIterable:(id<JavaLangIterable>)values;

@end

J2OBJC_EMPTY_STATIC_INIT(ComGoogleCommonCollectForwardingListMultimap)

CF_EXTERN_C_BEGIN
CF_EXTERN_C_END
#endif

J2OBJC_TYPE_LITERAL_HEADER(ComGoogleCommonCollectForwardingListMultimap)
