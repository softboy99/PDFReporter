//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/krasnocka/Downloads/j2objc-master/guava/sources/com/google/common/collect/ForwardingMultiset.java
//

#include "J2ObjC_header.h"

#if !ComGoogleCommonCollectForwardingMultiset_RESTRICT
#define ComGoogleCommonCollectForwardingMultiset_INCLUDE_ALL 1
#endif
#undef ComGoogleCommonCollectForwardingMultiset_RESTRICT
#if !defined (_ComGoogleCommonCollectForwardingMultiset_) && (ComGoogleCommonCollectForwardingMultiset_INCLUDE_ALL || ComGoogleCommonCollectForwardingMultiset_INCLUDE)
#define _ComGoogleCommonCollectForwardingMultiset_

@protocol JavaUtilCollection;
@protocol JavaUtilIterator;
@protocol JavaUtilSet;

#define ComGoogleCommonCollectForwardingCollection_RESTRICT 1
#define ComGoogleCommonCollectForwardingCollection_INCLUDE 1
#include "com/google/common/collect/ForwardingCollection.h"

#define ComGoogleCommonCollectMultiset_RESTRICT 1
#define ComGoogleCommonCollectMultiset_INCLUDE 1
#include "com/google/common/collect/Multiset.h"


@interface ComGoogleCommonCollectForwardingMultiset : ComGoogleCommonCollectForwardingCollection < ComGoogleCommonCollectMultiset > {
}

- (instancetype)init;

- (id<ComGoogleCommonCollectMultiset>)delegate;

- (jint)countWithId:(id)element;

- (jint)addWithId:(id)element
          withInt:(jint)occurrences;

- (jint)removeWithId:(id)element
             withInt:(jint)occurrences;

- (id<JavaUtilSet>)elementSet;

- (id<JavaUtilSet>)entrySet;

- (jboolean)isEqual:(id)object;

- (NSUInteger)hash;

- (jint)setCountWithId:(id)element
               withInt:(jint)count;

- (jboolean)setCountWithId:(id)element
                   withInt:(jint)oldCount
                   withInt:(jint)newCount;

- (jboolean)standardContainsWithId:(id)object;

- (void)standardClear;

- (jint)standardCountWithId:(id)object;

- (jboolean)standardAddWithId:(id)element;

- (jboolean)standardAddAllWithJavaUtilCollection:(id<JavaUtilCollection>)elementsToAdd;

- (jboolean)standardRemoveWithId:(id)element;

- (jboolean)standardRemoveAllWithJavaUtilCollection:(id<JavaUtilCollection>)elementsToRemove;

- (jboolean)standardRetainAllWithJavaUtilCollection:(id<JavaUtilCollection>)elementsToRetain;

- (jint)standardSetCountWithId:(id)element
                       withInt:(jint)count;

- (jboolean)standardSetCountWithId:(id)element
                           withInt:(jint)oldCount
                           withInt:(jint)newCount;

- (id<JavaUtilIterator>)standardIterator;

- (jint)standardSize;

- (jboolean)standardEqualsWithId:(id)object;

- (jint)standardHashCode;

- (NSString *)standardToString;


@end

J2OBJC_EMPTY_STATIC_INIT(ComGoogleCommonCollectForwardingMultiset)

CF_EXTERN_C_BEGIN
CF_EXTERN_C_END
#endif

J2OBJC_TYPE_LITERAL_HEADER(ComGoogleCommonCollectForwardingMultiset)
#if !defined (_ComGoogleCommonCollectForwardingMultiset_StandardElementSet_) && (ComGoogleCommonCollectForwardingMultiset_INCLUDE_ALL || ComGoogleCommonCollectForwardingMultiset_StandardElementSet_INCLUDE)
#define _ComGoogleCommonCollectForwardingMultiset_StandardElementSet_

@class ComGoogleCommonCollectForwardingMultiset;
@protocol ComGoogleCommonCollectMultiset;

#define ComGoogleCommonCollectMultisets_RESTRICT 1
#define ComGoogleCommonCollectMultisets_ElementSet_INCLUDE 1
#include "com/google/common/collect/Multisets.h"


@interface ComGoogleCommonCollectForwardingMultiset_StandardElementSet : ComGoogleCommonCollectMultisets_ElementSet {
}

- (instancetype)initWithComGoogleCommonCollectForwardingMultiset:(ComGoogleCommonCollectForwardingMultiset *)outer$;

- (id<ComGoogleCommonCollectMultiset>)multiset;


@end

J2OBJC_EMPTY_STATIC_INIT(ComGoogleCommonCollectForwardingMultiset_StandardElementSet)

CF_EXTERN_C_BEGIN
CF_EXTERN_C_END
#endif

J2OBJC_TYPE_LITERAL_HEADER(ComGoogleCommonCollectForwardingMultiset_StandardElementSet)
