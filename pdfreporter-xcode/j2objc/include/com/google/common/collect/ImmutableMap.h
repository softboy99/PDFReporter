//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/krasnocka/Downloads/j2objc-master/guava/sources/com/google/common/collect/ImmutableMap.java
//

#include "J2ObjC_header.h"

#if !ComGoogleCommonCollectImmutableMap_RESTRICT
#define ComGoogleCommonCollectImmutableMap_INCLUDE_ALL 1
#endif
#undef ComGoogleCommonCollectImmutableMap_RESTRICT
#if ComGoogleCommonCollectImmutableMap_viewMapValuesAsSingletonSets_MapViewOfValuesAsSingletonSets_INCLUDE
#define ComGoogleCommonCollectImmutableMap_INCLUDE 1
#endif
#if !defined (_ComGoogleCommonCollectImmutableMap_Builder_) && (ComGoogleCommonCollectImmutableMap_INCLUDE_ALL || ComGoogleCommonCollectImmutableMap_Builder_INCLUDE)
#define _ComGoogleCommonCollectImmutableMap_Builder_

@class ComGoogleCommonCollectImmutableMap;
@class JavaUtilArrayList;
@protocol JavaUtilList;
@protocol JavaUtilMap;
@protocol JavaUtilMap_Entry;


@interface ComGoogleCommonCollectImmutableMap_Builder : NSObject {
 @public
  JavaUtilArrayList *entries_;
}

- (instancetype)init;

- (ComGoogleCommonCollectImmutableMap_Builder *)putWithId:(id)key
                                                   withId:(id)value;

- (ComGoogleCommonCollectImmutableMap_Builder *)putWithJavaUtilMap_Entry:(id<JavaUtilMap_Entry>)entry_;

- (ComGoogleCommonCollectImmutableMap_Builder *)putAllWithJavaUtilMap:(id<JavaUtilMap>)map;

- (ComGoogleCommonCollectImmutableMap *)build;

@end

J2OBJC_EMPTY_STATIC_INIT(ComGoogleCommonCollectImmutableMap_Builder)

J2OBJC_FIELD_SETTER(ComGoogleCommonCollectImmutableMap_Builder, entries_, JavaUtilArrayList *)

CF_EXTERN_C_BEGIN
CF_EXTERN_C_END
#endif

J2OBJC_TYPE_LITERAL_HEADER(ComGoogleCommonCollectImmutableMap_Builder)
#if !defined (_ComGoogleCommonCollectImmutableMap_) && (ComGoogleCommonCollectImmutableMap_INCLUDE_ALL || ComGoogleCommonCollectImmutableMap_INCLUDE)
#define _ComGoogleCommonCollectImmutableMap_

@class ComGoogleCommonCollectImmutableCollection;
@class ComGoogleCommonCollectImmutableMap_Builder;
@class ComGoogleCommonCollectImmutableSet;
@class ComGoogleCommonCollectImmutableSetMultimap;
@protocol JavaUtilMap_Entry;

#define JavaUtilMap_RESTRICT 1
#define JavaUtilMap_INCLUDE 1
#include "java/util/Map.h"

#define JavaIoSerializable_RESTRICT 1
#define JavaIoSerializable_INCLUDE 1
#include "java/io/Serializable.h"


@interface ComGoogleCommonCollectImmutableMap : NSObject < JavaUtilMap, JavaIoSerializable > {
}

+ (ComGoogleCommonCollectImmutableMap *)of;

+ (ComGoogleCommonCollectImmutableMap *)ofWithId:(id)k1
                                          withId:(id)v1;

+ (ComGoogleCommonCollectImmutableMap *)ofWithId:(id)k1
                                          withId:(id)v1
                                          withId:(id)k2
                                          withId:(id)v2;

+ (ComGoogleCommonCollectImmutableMap *)ofWithId:(id)k1
                                          withId:(id)v1
                                          withId:(id)k2
                                          withId:(id)v2
                                          withId:(id)k3
                                          withId:(id)v3;

+ (ComGoogleCommonCollectImmutableMap *)ofWithId:(id)k1
                                          withId:(id)v1
                                          withId:(id)k2
                                          withId:(id)v2
                                          withId:(id)k3
                                          withId:(id)v3
                                          withId:(id)k4
                                          withId:(id)v4;

+ (ComGoogleCommonCollectImmutableMap *)ofWithId:(id)k1
                                          withId:(id)v1
                                          withId:(id)k2
                                          withId:(id)v2
                                          withId:(id)k3
                                          withId:(id)v3
                                          withId:(id)k4
                                          withId:(id)v4
                                          withId:(id)k5
                                          withId:(id)v5;

+ (ComGoogleCommonCollectImmutableMap_Builder *)builder;

+ (id<JavaUtilMap_Entry>)entryOfWithId:(id)key
                                withId:(id)value;

+ (ComGoogleCommonCollectImmutableMap *)copyOfWithJavaUtilMap:(id<JavaUtilMap>)map OBJC_METHOD_FAMILY_NONE;

- (instancetype)init;

- (id)putWithId:(id)k
         withId:(id)v;

- (id)removeWithId:(id)o;

- (void)putAllWithJavaUtilMap:(id<JavaUtilMap>)map;

- (void)clear;

- (jboolean)isEmpty;

- (jboolean)containsKeyWithId:(id)key;

- (jboolean)containsValueWithId:(id)value;

- (id)getWithId:(id)key;

- (ComGoogleCommonCollectImmutableSet *)entrySet;

- (ComGoogleCommonCollectImmutableSet *)createEntrySet;

- (ComGoogleCommonCollectImmutableSet *)keySet;

- (ComGoogleCommonCollectImmutableSet *)createKeySet;

- (ComGoogleCommonCollectImmutableCollection *)values;

- (ComGoogleCommonCollectImmutableSetMultimap *)asMultimap;

- (jboolean)isEqual:(id)object;

- (jboolean)isPartialView;

- (NSUInteger)hash;

- (NSString *)description;

- (id)writeReplace;

@end

J2OBJC_EMPTY_STATIC_INIT(ComGoogleCommonCollectImmutableMap)

CF_EXTERN_C_BEGIN

FOUNDATION_EXPORT ComGoogleCommonCollectImmutableMap *ComGoogleCommonCollectImmutableMap_of();

FOUNDATION_EXPORT ComGoogleCommonCollectImmutableMap *ComGoogleCommonCollectImmutableMap_ofWithId_withId_(id k1, id v1);

FOUNDATION_EXPORT ComGoogleCommonCollectImmutableMap *ComGoogleCommonCollectImmutableMap_ofWithId_withId_withId_withId_(id k1, id v1, id k2, id v2);

FOUNDATION_EXPORT ComGoogleCommonCollectImmutableMap *ComGoogleCommonCollectImmutableMap_ofWithId_withId_withId_withId_withId_withId_(id k1, id v1, id k2, id v2, id k3, id v3);

FOUNDATION_EXPORT ComGoogleCommonCollectImmutableMap *ComGoogleCommonCollectImmutableMap_ofWithId_withId_withId_withId_withId_withId_withId_withId_(id k1, id v1, id k2, id v2, id k3, id v3, id k4, id v4);

FOUNDATION_EXPORT ComGoogleCommonCollectImmutableMap *ComGoogleCommonCollectImmutableMap_ofWithId_withId_withId_withId_withId_withId_withId_withId_withId_withId_(id k1, id v1, id k2, id v2, id k3, id v3, id k4, id v4, id k5, id v5);

FOUNDATION_EXPORT ComGoogleCommonCollectImmutableMap_Builder *ComGoogleCommonCollectImmutableMap_builder();

FOUNDATION_EXPORT id<JavaUtilMap_Entry> ComGoogleCommonCollectImmutableMap_entryOfWithId_withId_(id key, id value);

FOUNDATION_EXPORT ComGoogleCommonCollectImmutableMap *ComGoogleCommonCollectImmutableMap_copyOfWithJavaUtilMap_(id<JavaUtilMap> map);
CF_EXTERN_C_END
#endif

J2OBJC_TYPE_LITERAL_HEADER(ComGoogleCommonCollectImmutableMap)
#if !defined (_ComGoogleCommonCollectImmutableMap_viewMapValuesAsSingletonSets_MapViewOfValuesAsSingletonSets_) && (ComGoogleCommonCollectImmutableMap_INCLUDE_ALL || ComGoogleCommonCollectImmutableMap_viewMapValuesAsSingletonSets_MapViewOfValuesAsSingletonSets_INCLUDE)
#define _ComGoogleCommonCollectImmutableMap_viewMapValuesAsSingletonSets_MapViewOfValuesAsSingletonSets_

@class ComGoogleCommonCollectImmutableSet;


@interface ComGoogleCommonCollectImmutableMap_viewMapValuesAsSingletonSets_MapViewOfValuesAsSingletonSets : ComGoogleCommonCollectImmutableMap {
}

- (jint)size;

- (jboolean)containsKeyWithId:(id)key;

- (ComGoogleCommonCollectImmutableSet *)getWithId:(id)key;

- (jboolean)isPartialView;

- (ComGoogleCommonCollectImmutableSet *)createEntrySet;

- (instancetype)initWithComGoogleCommonCollectImmutableMap:(ComGoogleCommonCollectImmutableMap *)outer$;

@end

J2OBJC_EMPTY_STATIC_INIT(ComGoogleCommonCollectImmutableMap_viewMapValuesAsSingletonSets_MapViewOfValuesAsSingletonSets)

CF_EXTERN_C_BEGIN
CF_EXTERN_C_END
#endif

J2OBJC_TYPE_LITERAL_HEADER(ComGoogleCommonCollectImmutableMap_viewMapValuesAsSingletonSets_MapViewOfValuesAsSingletonSets)
#if !defined (_ComGoogleCommonCollectImmutableMap_viewMapValuesAsSingletonSets_MapViewOfValuesAsSingletonSets_createEntrySet_MapViewOfValuesAsSingletonSetsEntrySet_) && (ComGoogleCommonCollectImmutableMap_INCLUDE_ALL || ComGoogleCommonCollectImmutableMap_viewMapValuesAsSingletonSets_MapViewOfValuesAsSingletonSets_createEntrySet_MapViewOfValuesAsSingletonSetsEntrySet_INCLUDE)
#define _ComGoogleCommonCollectImmutableMap_viewMapValuesAsSingletonSets_MapViewOfValuesAsSingletonSets_createEntrySet_MapViewOfValuesAsSingletonSetsEntrySet_

@class ComGoogleCommonCollectImmutableMap;
@class ComGoogleCommonCollectImmutableMap_viewMapValuesAsSingletonSets_MapViewOfValuesAsSingletonSets;
@class ComGoogleCommonCollectUnmodifiableIterator;

#define ComGoogleCommonCollectImmutableMapEntrySet_RESTRICT 1
#define ComGoogleCommonCollectImmutableMapEntrySet_INCLUDE 1
#include "com/google/common/collect/ImmutableMapEntrySet.h"


@interface ComGoogleCommonCollectImmutableMap_viewMapValuesAsSingletonSets_MapViewOfValuesAsSingletonSets_createEntrySet_MapViewOfValuesAsSingletonSetsEntrySet : ComGoogleCommonCollectImmutableMapEntrySet {
}

- (ComGoogleCommonCollectImmutableMap *)map;

- (ComGoogleCommonCollectUnmodifiableIterator *)iterator;

- (instancetype)initWithComGoogleCommonCollectImmutableMap_viewMapValuesAsSingletonSets_MapViewOfValuesAsSingletonSets:(ComGoogleCommonCollectImmutableMap_viewMapValuesAsSingletonSets_MapViewOfValuesAsSingletonSets *)outer$;


@end

J2OBJC_EMPTY_STATIC_INIT(ComGoogleCommonCollectImmutableMap_viewMapValuesAsSingletonSets_MapViewOfValuesAsSingletonSets_createEntrySet_MapViewOfValuesAsSingletonSetsEntrySet)

CF_EXTERN_C_BEGIN
CF_EXTERN_C_END
#endif

J2OBJC_TYPE_LITERAL_HEADER(ComGoogleCommonCollectImmutableMap_viewMapValuesAsSingletonSets_MapViewOfValuesAsSingletonSets_createEntrySet_MapViewOfValuesAsSingletonSetsEntrySet)
#if !defined (_ComGoogleCommonCollectImmutableMap_viewMapValuesAsSingletonSets_MapViewOfValuesAsSingletonSets_createEntrySet_MapViewOfValuesAsSingletonSetsEntrySet_$1_) && (ComGoogleCommonCollectImmutableMap_INCLUDE_ALL || ComGoogleCommonCollectImmutableMap_viewMapValuesAsSingletonSets_MapViewOfValuesAsSingletonSets_createEntrySet_MapViewOfValuesAsSingletonSetsEntrySet_$1_INCLUDE)
#define _ComGoogleCommonCollectImmutableMap_viewMapValuesAsSingletonSets_MapViewOfValuesAsSingletonSets_createEntrySet_MapViewOfValuesAsSingletonSetsEntrySet_$1_

@protocol JavaUtilIterator;
@protocol JavaUtilMap_Entry;

#define ComGoogleCommonCollectUnmodifiableIterator_RESTRICT 1
#define ComGoogleCommonCollectUnmodifiableIterator_INCLUDE 1
#include "com/google/common/collect/UnmodifiableIterator.h"


@interface ComGoogleCommonCollectImmutableMap_viewMapValuesAsSingletonSets_MapViewOfValuesAsSingletonSets_createEntrySet_MapViewOfValuesAsSingletonSetsEntrySet_$1 : ComGoogleCommonCollectUnmodifiableIterator {
}

- (jboolean)hasNext;

- (id<JavaUtilMap_Entry>)next;

- (instancetype)initWithJavaUtilIterator:(id<JavaUtilIterator>)capture$0;

@end

J2OBJC_EMPTY_STATIC_INIT(ComGoogleCommonCollectImmutableMap_viewMapValuesAsSingletonSets_MapViewOfValuesAsSingletonSets_createEntrySet_MapViewOfValuesAsSingletonSetsEntrySet_$1)

CF_EXTERN_C_BEGIN
CF_EXTERN_C_END
#endif

J2OBJC_TYPE_LITERAL_HEADER(ComGoogleCommonCollectImmutableMap_viewMapValuesAsSingletonSets_MapViewOfValuesAsSingletonSets_createEntrySet_MapViewOfValuesAsSingletonSetsEntrySet_$1)
#if !defined (_ComGoogleCommonCollectImmutableMap_viewMapValuesAsSingletonSets_MapViewOfValuesAsSingletonSets_createEntrySet_MapViewOfValuesAsSingletonSetsEntrySet_$1_$1_) && (ComGoogleCommonCollectImmutableMap_INCLUDE_ALL || ComGoogleCommonCollectImmutableMap_viewMapValuesAsSingletonSets_MapViewOfValuesAsSingletonSets_createEntrySet_MapViewOfValuesAsSingletonSetsEntrySet_$1_$1_INCLUDE)
#define _ComGoogleCommonCollectImmutableMap_viewMapValuesAsSingletonSets_MapViewOfValuesAsSingletonSets_createEntrySet_MapViewOfValuesAsSingletonSetsEntrySet_$1_$1_

@class ComGoogleCommonCollectImmutableSet;
@protocol JavaUtilMap_Entry;

#define ComGoogleCommonCollectAbstractMapEntry_RESTRICT 1
#define ComGoogleCommonCollectAbstractMapEntry_INCLUDE 1
#include "com/google/common/collect/AbstractMapEntry.h"


@interface ComGoogleCommonCollectImmutableMap_viewMapValuesAsSingletonSets_MapViewOfValuesAsSingletonSets_createEntrySet_MapViewOfValuesAsSingletonSetsEntrySet_$1_$1 : ComGoogleCommonCollectAbstractMapEntry {
}

- (id)getKey;

- (ComGoogleCommonCollectImmutableSet *)getValue;

- (instancetype)initWithJavaUtilMap_Entry:(id<JavaUtilMap_Entry>)capture$0;

@end

J2OBJC_EMPTY_STATIC_INIT(ComGoogleCommonCollectImmutableMap_viewMapValuesAsSingletonSets_MapViewOfValuesAsSingletonSets_createEntrySet_MapViewOfValuesAsSingletonSetsEntrySet_$1_$1)

CF_EXTERN_C_BEGIN
CF_EXTERN_C_END
#endif

J2OBJC_TYPE_LITERAL_HEADER(ComGoogleCommonCollectImmutableMap_viewMapValuesAsSingletonSets_MapViewOfValuesAsSingletonSets_createEntrySet_MapViewOfValuesAsSingletonSetsEntrySet_$1_$1)
#if !defined (_ComGoogleCommonCollectImmutableMap_SerializedForm_) && (ComGoogleCommonCollectImmutableMap_INCLUDE_ALL || ComGoogleCommonCollectImmutableMap_SerializedForm_INCLUDE)
#define _ComGoogleCommonCollectImmutableMap_SerializedForm_

@class ComGoogleCommonCollectImmutableMap;
@class ComGoogleCommonCollectImmutableMap_Builder;
@class IOSObjectArray;

#define JavaIoSerializable_RESTRICT 1
#define JavaIoSerializable_INCLUDE 1
#include "java/io/Serializable.h"


#define ComGoogleCommonCollectImmutableMap_SerializedForm_serialVersionUID 0LL

@interface ComGoogleCommonCollectImmutableMap_SerializedForm : NSObject < JavaIoSerializable > {
}

- (instancetype)initWithComGoogleCommonCollectImmutableMap:(ComGoogleCommonCollectImmutableMap *)map;

- (id)readResolve;

- (id)createMapWithComGoogleCommonCollectImmutableMap_Builder:(ComGoogleCommonCollectImmutableMap_Builder *)builder;

@end

J2OBJC_EMPTY_STATIC_INIT(ComGoogleCommonCollectImmutableMap_SerializedForm)

CF_EXTERN_C_BEGIN

J2OBJC_STATIC_FIELD_GETTER(ComGoogleCommonCollectImmutableMap_SerializedForm, serialVersionUID, jlong)
CF_EXTERN_C_END
#endif

J2OBJC_TYPE_LITERAL_HEADER(ComGoogleCommonCollectImmutableMap_SerializedForm)
