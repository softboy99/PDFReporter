//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: apache_harmony/classlib/modules/luni/src/main/java/java/util/AbstractSet.java
//
//  Created by tball on 7/15/13.
//

#ifndef _JavaUtilAbstractSet_H_
#define _JavaUtilAbstractSet_H_

@protocol JavaUtilCollection;

#import "JreEmulation.h"
#include "java/util/AbstractCollection.h"
#include "java/util/Set.h"

@interface JavaUtilAbstractSet : JavaUtilAbstractCollection < JavaUtilSet > {
}

- (id)init;
- (BOOL)isEqual:(id)object;
- (NSUInteger)hash;
- (BOOL)removeAllWithJavaUtilCollection:(id<JavaUtilCollection>)collection;
@end

#endif // _JavaUtilAbstractSet_H_
