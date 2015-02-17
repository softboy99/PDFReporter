//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/libcore/luni/src/main/java/java/util/concurrent/ForkJoinPool.java
//

#ifndef _JavaUtilConcurrentForkJoinPool_H_
#define _JavaUtilConcurrentForkJoinPool_H_

@class IOSObjectArray;
@class JavaLangRuntimePermission;
@class JavaLangThrowable;
@class JavaUtilArrayList;
@class JavaUtilConcurrentAtomicAtomicInteger;
@class JavaUtilConcurrentForkJoinTask;
@class JavaUtilConcurrentForkJoinWorkerThread;
@class JavaUtilConcurrentLocksReentrantLock;
@class JavaUtilConcurrentTimeUnitEnum;
@class JavaUtilRandom;
@class SunMiscUnsafe;
@protocol JavaLangRunnable;
@protocol JavaLangThread_UncaughtExceptionHandler;
@protocol JavaUtilCollection;
@protocol JavaUtilConcurrentCallable;
@protocol JavaUtilConcurrentForkJoinPool_ForkJoinWorkerThreadFactory;
@protocol JavaUtilConcurrentForkJoinPool_ManagedBlocker;
@protocol JavaUtilConcurrentLocksCondition;
@protocol JavaUtilConcurrentRunnableFuture;
@protocol JavaUtilList;

#include "J2ObjC_header.h"
#include "java/util/concurrent/AbstractExecutorService.h"
#include "java/util/concurrent/RecursiveAction.h"

#define JavaUtilConcurrentForkJoinPool_AC_MASK -281474976710656LL
#define JavaUtilConcurrentForkJoinPool_AC_SHIFT 48
#define JavaUtilConcurrentForkJoinPool_AC_UNIT 281474976710656LL
#define JavaUtilConcurrentForkJoinPool_EC_SHIFT 16
#define JavaUtilConcurrentForkJoinPool_EC_UNIT 65536
#define JavaUtilConcurrentForkJoinPool_E_MASK 2147483647
#define JavaUtilConcurrentForkJoinPool_INITIAL_QUEUE_CAPACITY 8
#define JavaUtilConcurrentForkJoinPool_INT_SIGN ((jint) 0x80000000)
#define JavaUtilConcurrentForkJoinPool_MAXIMUM_QUEUE_CAPACITY 16777216
#define JavaUtilConcurrentForkJoinPool_MAX_ID 32767
#define JavaUtilConcurrentForkJoinPool_SG_UNIT 65536
#define JavaUtilConcurrentForkJoinPool_SHORT_SIGN 32768
#define JavaUtilConcurrentForkJoinPool_SHRINK_RATE 4000000000LL
#define JavaUtilConcurrentForkJoinPool_SMASK 65535
#define JavaUtilConcurrentForkJoinPool_STOP_BIT 2147483648LL
#define JavaUtilConcurrentForkJoinPool_ST_SHIFT 31
#define JavaUtilConcurrentForkJoinPool_TC_MASK 281470681743360LL
#define JavaUtilConcurrentForkJoinPool_TC_SHIFT 32
#define JavaUtilConcurrentForkJoinPool_TC_UNIT 4294967296LL
#define JavaUtilConcurrentForkJoinPool_UAC_MASK -65536
#define JavaUtilConcurrentForkJoinPool_UAC_SHIFT 16
#define JavaUtilConcurrentForkJoinPool_UAC_UNIT 65536
#define JavaUtilConcurrentForkJoinPool_UTC_MASK 65535
#define JavaUtilConcurrentForkJoinPool_UTC_SHIFT 0
#define JavaUtilConcurrentForkJoinPool_UTC_UNIT 1

@interface JavaUtilConcurrentForkJoinPool : JavaUtilConcurrentAbstractExecutorService {
 @public
  IOSObjectArray *workers_;
  id<JavaLangThread_UncaughtExceptionHandler> ueh_;
  jlong ctl_;
  jint parallelism_;
  jint queueBase_;
  jint queueTop_;
  jboolean shutdown__;
  jboolean locallyFifo_;
  jint quiescerCount_;
  jint blockedCount_;
  jint scanGuard_;
}

- (void)workWithJavaUtilConcurrentForkJoinWorkerThread:(JavaUtilConcurrentForkJoinWorkerThread *)w;

- (void)signalWork;

- (void)tryAwaitJoinWithJavaUtilConcurrentForkJoinTask:(JavaUtilConcurrentForkJoinTask *)joinMe;

- (void)timedAwaitJoinWithJavaUtilConcurrentForkJoinTask:(JavaUtilConcurrentForkJoinTask *)joinMe
                                                withLong:(jlong)nanos;

- (NSString *)nextWorkerName;

- (jint)registerWorkerWithJavaUtilConcurrentForkJoinWorkerThread:(JavaUtilConcurrentForkJoinWorkerThread *)w;

- (void)deregisterWorkerWithJavaUtilConcurrentForkJoinWorkerThread:(JavaUtilConcurrentForkJoinWorkerThread *)w
                                             withJavaLangThrowable:(JavaLangThrowable *)ex;

- (void)addQuiescerCountWithInt:(jint)delta;

- (void)addActiveCountWithInt:(jint)delta;

- (jint)idlePerActive;

- (instancetype)init;

- (instancetype)initWithInt:(jint)parallelism;

- (instancetype)initWithInt:(jint)parallelism
withJavaUtilConcurrentForkJoinPool_ForkJoinWorkerThreadFactory:(id<JavaUtilConcurrentForkJoinPool_ForkJoinWorkerThreadFactory>)factory
withJavaLangThread_UncaughtExceptionHandler:(id<JavaLangThread_UncaughtExceptionHandler>)handler
                withBoolean:(jboolean)asyncMode;

- (id)invokeWithJavaUtilConcurrentForkJoinTask:(JavaUtilConcurrentForkJoinTask *)task;

- (void)executeWithJavaUtilConcurrentForkJoinTask:(JavaUtilConcurrentForkJoinTask *)task;

- (void)executeWithJavaLangRunnable:(id<JavaLangRunnable>)task;

- (JavaUtilConcurrentForkJoinTask *)submitWithJavaUtilConcurrentForkJoinTask:(JavaUtilConcurrentForkJoinTask *)task;

- (JavaUtilConcurrentForkJoinTask *)submitWithJavaUtilConcurrentCallable:(id<JavaUtilConcurrentCallable>)task;

- (JavaUtilConcurrentForkJoinTask *)submitWithJavaLangRunnable:(id<JavaLangRunnable>)task
                                                        withId:(id)result;

- (JavaUtilConcurrentForkJoinTask *)submitWithJavaLangRunnable:(id<JavaLangRunnable>)task;

- (id<JavaUtilList>)invokeAllWithJavaUtilCollection:(id<JavaUtilCollection>)tasks;

- (id<JavaUtilConcurrentForkJoinPool_ForkJoinWorkerThreadFactory>)getFactory;

- (id<JavaLangThread_UncaughtExceptionHandler>)getUncaughtExceptionHandler;

- (jint)getParallelism;

- (jint)getPoolSize;

- (jboolean)getAsyncMode;

- (jint)getRunningThreadCount;

- (jint)getActiveThreadCount;

- (jboolean)isQuiescent;

- (jlong)getStealCount;

- (jlong)getQueuedTaskCount;

- (jint)getQueuedSubmissionCount;

- (jboolean)hasQueuedSubmissions;

- (JavaUtilConcurrentForkJoinTask *)pollSubmission;

- (jint)drainTasksToWithJavaUtilCollection:(id<JavaUtilCollection>)c;

- (NSString *)description;

- (void)shutdown;

- (id<JavaUtilList>)shutdownNow;

- (jboolean)isTerminated;

- (jboolean)isTerminating;

- (jboolean)isAtLeastTerminating;

- (jboolean)isShutdown;

- (jboolean)awaitTerminationWithLong:(jlong)timeout
  withJavaUtilConcurrentTimeUnitEnum:(JavaUtilConcurrentTimeUnitEnum *)unit;

+ (void)managedBlockWithJavaUtilConcurrentForkJoinPool_ManagedBlocker:(id<JavaUtilConcurrentForkJoinPool_ManagedBlocker>)blocker;

- (id<JavaUtilConcurrentRunnableFuture>)newTaskForWithJavaLangRunnable:(id<JavaLangRunnable>)runnable
                                                                withId:(id)value OBJC_METHOD_FAMILY_NONE;

- (id<JavaUtilConcurrentRunnableFuture>)newTaskForWithJavaUtilConcurrentCallable:(id<JavaUtilConcurrentCallable>)callable OBJC_METHOD_FAMILY_NONE;

@end

FOUNDATION_EXPORT BOOL JavaUtilConcurrentForkJoinPool_initialized;
J2OBJC_STATIC_INIT(JavaUtilConcurrentForkJoinPool)

J2OBJC_FIELD_SETTER(JavaUtilConcurrentForkJoinPool, workers_, IOSObjectArray *)
J2OBJC_FIELD_SETTER(JavaUtilConcurrentForkJoinPool, ueh_, id<JavaLangThread_UncaughtExceptionHandler>)

CF_EXTERN_C_BEGIN

FOUNDATION_EXPORT void JavaUtilConcurrentForkJoinPool_managedBlockWithJavaUtilConcurrentForkJoinPool_ManagedBlocker_(id<JavaUtilConcurrentForkJoinPool_ManagedBlocker> blocker);

FOUNDATION_EXPORT id<JavaUtilConcurrentForkJoinPool_ForkJoinWorkerThreadFactory> JavaUtilConcurrentForkJoinPool_defaultForkJoinWorkerThreadFactory_;
J2OBJC_STATIC_FIELD_GETTER(JavaUtilConcurrentForkJoinPool, defaultForkJoinWorkerThreadFactory_, id<JavaUtilConcurrentForkJoinPool_ForkJoinWorkerThreadFactory>)

FOUNDATION_EXPORT JavaLangRuntimePermission *JavaUtilConcurrentForkJoinPool_modifyThreadPermission_;
J2OBJC_STATIC_FIELD_GETTER(JavaUtilConcurrentForkJoinPool, modifyThreadPermission_, JavaLangRuntimePermission *)

FOUNDATION_EXPORT JavaUtilConcurrentAtomicAtomicInteger *JavaUtilConcurrentForkJoinPool_poolNumberGenerator_;
J2OBJC_STATIC_FIELD_GETTER(JavaUtilConcurrentForkJoinPool, poolNumberGenerator_, JavaUtilConcurrentAtomicAtomicInteger *)

FOUNDATION_EXPORT JavaUtilRandom *JavaUtilConcurrentForkJoinPool_workerSeedGenerator_;
J2OBJC_STATIC_FIELD_GETTER(JavaUtilConcurrentForkJoinPool, workerSeedGenerator_, JavaUtilRandom *)

J2OBJC_STATIC_FIELD_GETTER(JavaUtilConcurrentForkJoinPool, INITIAL_QUEUE_CAPACITY, jint)

J2OBJC_STATIC_FIELD_GETTER(JavaUtilConcurrentForkJoinPool, MAXIMUM_QUEUE_CAPACITY, jint)

J2OBJC_STATIC_FIELD_GETTER(JavaUtilConcurrentForkJoinPool, AC_SHIFT, jint)

J2OBJC_STATIC_FIELD_GETTER(JavaUtilConcurrentForkJoinPool, TC_SHIFT, jint)

J2OBJC_STATIC_FIELD_GETTER(JavaUtilConcurrentForkJoinPool, ST_SHIFT, jint)

J2OBJC_STATIC_FIELD_GETTER(JavaUtilConcurrentForkJoinPool, EC_SHIFT, jint)

J2OBJC_STATIC_FIELD_GETTER(JavaUtilConcurrentForkJoinPool, MAX_ID, jint)

J2OBJC_STATIC_FIELD_GETTER(JavaUtilConcurrentForkJoinPool, SMASK, jint)

J2OBJC_STATIC_FIELD_GETTER(JavaUtilConcurrentForkJoinPool, SHORT_SIGN, jint)

J2OBJC_STATIC_FIELD_GETTER(JavaUtilConcurrentForkJoinPool, INT_SIGN, jint)

J2OBJC_STATIC_FIELD_GETTER(JavaUtilConcurrentForkJoinPool, STOP_BIT, jlong)

J2OBJC_STATIC_FIELD_GETTER(JavaUtilConcurrentForkJoinPool, AC_MASK, jlong)

J2OBJC_STATIC_FIELD_GETTER(JavaUtilConcurrentForkJoinPool, TC_MASK, jlong)

J2OBJC_STATIC_FIELD_GETTER(JavaUtilConcurrentForkJoinPool, TC_UNIT, jlong)

J2OBJC_STATIC_FIELD_GETTER(JavaUtilConcurrentForkJoinPool, AC_UNIT, jlong)

J2OBJC_STATIC_FIELD_GETTER(JavaUtilConcurrentForkJoinPool, UAC_SHIFT, jint)

J2OBJC_STATIC_FIELD_GETTER(JavaUtilConcurrentForkJoinPool, UTC_SHIFT, jint)

J2OBJC_STATIC_FIELD_GETTER(JavaUtilConcurrentForkJoinPool, UAC_MASK, jint)

J2OBJC_STATIC_FIELD_GETTER(JavaUtilConcurrentForkJoinPool, UTC_MASK, jint)

J2OBJC_STATIC_FIELD_GETTER(JavaUtilConcurrentForkJoinPool, UAC_UNIT, jint)

J2OBJC_STATIC_FIELD_GETTER(JavaUtilConcurrentForkJoinPool, UTC_UNIT, jint)

J2OBJC_STATIC_FIELD_GETTER(JavaUtilConcurrentForkJoinPool, E_MASK, jint)

J2OBJC_STATIC_FIELD_GETTER(JavaUtilConcurrentForkJoinPool, EC_UNIT, jint)

J2OBJC_STATIC_FIELD_GETTER(JavaUtilConcurrentForkJoinPool, SG_UNIT, jint)

J2OBJC_STATIC_FIELD_GETTER(JavaUtilConcurrentForkJoinPool, SHRINK_RATE, jlong)

FOUNDATION_EXPORT SunMiscUnsafe *JavaUtilConcurrentForkJoinPool_UNSAFE_;
J2OBJC_STATIC_FIELD_GETTER(JavaUtilConcurrentForkJoinPool, UNSAFE_, SunMiscUnsafe *)

FOUNDATION_EXPORT jlong JavaUtilConcurrentForkJoinPool_ctlOffset_;
J2OBJC_STATIC_FIELD_GETTER(JavaUtilConcurrentForkJoinPool, ctlOffset_, jlong)

FOUNDATION_EXPORT jlong JavaUtilConcurrentForkJoinPool_stealCountOffset_;
J2OBJC_STATIC_FIELD_GETTER(JavaUtilConcurrentForkJoinPool, stealCountOffset_, jlong)

FOUNDATION_EXPORT jlong JavaUtilConcurrentForkJoinPool_blockedCountOffset_;
J2OBJC_STATIC_FIELD_GETTER(JavaUtilConcurrentForkJoinPool, blockedCountOffset_, jlong)

FOUNDATION_EXPORT jlong JavaUtilConcurrentForkJoinPool_quiescerCountOffset_;
J2OBJC_STATIC_FIELD_GETTER(JavaUtilConcurrentForkJoinPool, quiescerCountOffset_, jlong)

FOUNDATION_EXPORT jlong JavaUtilConcurrentForkJoinPool_scanGuardOffset_;
J2OBJC_STATIC_FIELD_GETTER(JavaUtilConcurrentForkJoinPool, scanGuardOffset_, jlong)

FOUNDATION_EXPORT jlong JavaUtilConcurrentForkJoinPool_nextWorkerNumberOffset_;
J2OBJC_STATIC_FIELD_GETTER(JavaUtilConcurrentForkJoinPool, nextWorkerNumberOffset_, jlong)
CF_EXTERN_C_END

J2OBJC_TYPE_LITERAL_HEADER(JavaUtilConcurrentForkJoinPool)

@protocol JavaUtilConcurrentForkJoinPool_ForkJoinWorkerThreadFactory < NSObject, JavaObject >

- (JavaUtilConcurrentForkJoinWorkerThread *)newThreadWithJavaUtilConcurrentForkJoinPool:(JavaUtilConcurrentForkJoinPool *)pool OBJC_METHOD_FAMILY_NONE;

@end

J2OBJC_EMPTY_STATIC_INIT(JavaUtilConcurrentForkJoinPool_ForkJoinWorkerThreadFactory)

J2OBJC_TYPE_LITERAL_HEADER(JavaUtilConcurrentForkJoinPool_ForkJoinWorkerThreadFactory)

@interface JavaUtilConcurrentForkJoinPool_DefaultForkJoinWorkerThreadFactory : NSObject < JavaUtilConcurrentForkJoinPool_ForkJoinWorkerThreadFactory > {
}

- (JavaUtilConcurrentForkJoinWorkerThread *)newThreadWithJavaUtilConcurrentForkJoinPool:(JavaUtilConcurrentForkJoinPool *)pool OBJC_METHOD_FAMILY_NONE;

- (instancetype)init;

@end

J2OBJC_EMPTY_STATIC_INIT(JavaUtilConcurrentForkJoinPool_DefaultForkJoinWorkerThreadFactory)

CF_EXTERN_C_BEGIN
CF_EXTERN_C_END

J2OBJC_TYPE_LITERAL_HEADER(JavaUtilConcurrentForkJoinPool_DefaultForkJoinWorkerThreadFactory)

#define JavaUtilConcurrentForkJoinPool_InvokeAll_serialVersionUID -7914297376763021607LL

@interface JavaUtilConcurrentForkJoinPool_InvokeAll : JavaUtilConcurrentRecursiveAction {
 @public
  JavaUtilArrayList *tasks_;
}

- (instancetype)initWithJavaUtilArrayList:(JavaUtilArrayList *)tasks;

- (void)compute;

@end

J2OBJC_EMPTY_STATIC_INIT(JavaUtilConcurrentForkJoinPool_InvokeAll)

J2OBJC_FIELD_SETTER(JavaUtilConcurrentForkJoinPool_InvokeAll, tasks_, JavaUtilArrayList *)

CF_EXTERN_C_BEGIN

J2OBJC_STATIC_FIELD_GETTER(JavaUtilConcurrentForkJoinPool_InvokeAll, serialVersionUID, jlong)
CF_EXTERN_C_END

J2OBJC_TYPE_LITERAL_HEADER(JavaUtilConcurrentForkJoinPool_InvokeAll)

@protocol JavaUtilConcurrentForkJoinPool_ManagedBlocker < NSObject, JavaObject >

- (jboolean)block;

- (jboolean)isReleasable;

@end

J2OBJC_EMPTY_STATIC_INIT(JavaUtilConcurrentForkJoinPool_ManagedBlocker)

J2OBJC_TYPE_LITERAL_HEADER(JavaUtilConcurrentForkJoinPool_ManagedBlocker)

#endif // _JavaUtilConcurrentForkJoinPool_H_
