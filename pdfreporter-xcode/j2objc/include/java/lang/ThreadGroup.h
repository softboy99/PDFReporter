//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: apache_harmony/classlib/modules/luni-kernel/src/main/java/java/lang/ThreadGroup.java
//

#ifndef _JavaLangThreadGroup_H_
#define _JavaLangThreadGroup_H_

@class IOSObjectArray;
@class JavaLangThread;
@class JavaLangThrowable;

#include "J2ObjC_header.h"
#include "java/lang/Thread.h"

@interface JavaLangThreadGroup : NSObject < JavaLangThread_UncaughtExceptionHandler > {
 @public
  JavaLangThreadGroup *parent_;
  jint numThreads_;
  jint numGroups_;
}

- (instancetype)initWithNSString:(NSString *)name;

- (instancetype)initWithJavaLangThreadGroup:(JavaLangThreadGroup *)parent
                               withNSString:(NSString *)name;

- (instancetype)initWithJavaLangThreadGroup:(JavaLangThreadGroup *)parent;

- (jint)activeCount;

- (jint)activeGroupCount;

- (void)addWithJavaLangThread:(JavaLangThread *)thread;

- (void)checkAccess;

- (void)destroy;

- (jint)enumerateWithJavaLangThreadArray:(IOSObjectArray *)threads;

- (jint)enumerateWithJavaLangThreadArray:(IOSObjectArray *)threads
                             withBoolean:(jboolean)recurse;

- (jint)enumerateWithJavaLangThreadGroupArray:(IOSObjectArray *)groups;

- (jint)enumerateWithJavaLangThreadGroupArray:(IOSObjectArray *)groups
                                  withBoolean:(jboolean)recurse;

- (jint)getMaxPriority;

- (NSString *)getName;

- (JavaLangThreadGroup *)getParent;

- (jboolean)isDestroyed;

- (void)list;

- (jboolean)parentOfWithJavaLangThreadGroup:(JavaLangThreadGroup *)g;

- (void)removeWithJavaLangThread:(JavaLangThread *)thread;

- (void)setMaxPriorityWithInt:(jint)newMax;

- (NSString *)description;

- (void)uncaughtExceptionWithJavaLangThread:(JavaLangThread *)t
                      withJavaLangThrowable:(JavaLangThrowable *)e;

@end

J2OBJC_EMPTY_STATIC_INIT(JavaLangThreadGroup)

J2OBJC_FIELD_SETTER(JavaLangThreadGroup, parent_, JavaLangThreadGroup *)

CF_EXTERN_C_BEGIN
CF_EXTERN_C_END

J2OBJC_TYPE_LITERAL_HEADER(JavaLangThreadGroup)

@interface JavaLangThreadGroup_ChildrenGroupsLock : NSObject {
}

- (instancetype)initWithJavaLangThreadGroup:(JavaLangThreadGroup *)outer$;

@end

J2OBJC_EMPTY_STATIC_INIT(JavaLangThreadGroup_ChildrenGroupsLock)

CF_EXTERN_C_BEGIN
CF_EXTERN_C_END

J2OBJC_TYPE_LITERAL_HEADER(JavaLangThreadGroup_ChildrenGroupsLock)

@interface JavaLangThreadGroup_ChildrenThreadsLock : NSObject {
}

- (instancetype)initWithJavaLangThreadGroup:(JavaLangThreadGroup *)outer$;

@end

J2OBJC_EMPTY_STATIC_INIT(JavaLangThreadGroup_ChildrenThreadsLock)

CF_EXTERN_C_BEGIN
CF_EXTERN_C_END

J2OBJC_TYPE_LITERAL_HEADER(JavaLangThreadGroup_ChildrenThreadsLock)

#endif // _JavaLangThreadGroup_H_