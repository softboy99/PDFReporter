//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/krasnocka/Downloads/j2objc-master/testing/mockito/build_result/java/org/mockito/internal/util/collections/ListUtil.java
//

#ifndef _OrgMockitoInternalUtilCollectionsListUtil_H_
#define _OrgMockitoInternalUtilCollectionsListUtil_H_

@class JavaUtilLinkedList;
@protocol JavaUtilCollection;
@protocol OrgMockitoInternalUtilCollectionsListUtil_Filter;

#include "J2ObjC_header.h"

@interface OrgMockitoInternalUtilCollectionsListUtil : NSObject {
}

+ (JavaUtilLinkedList *)filterWithJavaUtilCollection:(id<JavaUtilCollection>)collection
withOrgMockitoInternalUtilCollectionsListUtil_Filter:(id<OrgMockitoInternalUtilCollectionsListUtil_Filter>)filter;

- (instancetype)init;

@end

J2OBJC_EMPTY_STATIC_INIT(OrgMockitoInternalUtilCollectionsListUtil)

CF_EXTERN_C_BEGIN

FOUNDATION_EXPORT JavaUtilLinkedList *OrgMockitoInternalUtilCollectionsListUtil_filterWithJavaUtilCollection_withOrgMockitoInternalUtilCollectionsListUtil_Filter_(id<JavaUtilCollection> collection, id<OrgMockitoInternalUtilCollectionsListUtil_Filter> filter);
CF_EXTERN_C_END

J2OBJC_TYPE_LITERAL_HEADER(OrgMockitoInternalUtilCollectionsListUtil)

@protocol OrgMockitoInternalUtilCollectionsListUtil_Filter < NSObject, JavaObject >

- (jboolean)isOutWithId:(id)object;

@end

J2OBJC_EMPTY_STATIC_INIT(OrgMockitoInternalUtilCollectionsListUtil_Filter)

J2OBJC_TYPE_LITERAL_HEADER(OrgMockitoInternalUtilCollectionsListUtil_Filter)

#endif // _OrgMockitoInternalUtilCollectionsListUtil_H_
