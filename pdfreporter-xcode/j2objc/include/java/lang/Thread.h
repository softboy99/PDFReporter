//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: Classes/java/lang/Thread.java
//

#ifndef _JavaLangThread_H_
#define _JavaLangThread_H_

@class IOSObjectArray;
@class JavaLangClassLoader;
@class JavaLangThreadGroup;
@class JavaLangThread_StateEnum;
@class JavaLangThrowable;
@protocol JavaLangThread_UncaughtExceptionHandler;
@protocol JavaUtilList;

#include "J2ObjC_header.h"
#include "java/lang/Enum.h"
#include "java/lang/Runnable.h"

#define JavaLangThread_MAX_PRIORITY 10
#define JavaLangThread_MIN_PRIORITY 1
#define JavaLangThread_NANOS_PER_MILLI 1000000
#define JavaLangThread_NORM_PRIORITY 5
#define JavaLangThread_POLL_INTERVAL 20

@interface JavaLangThread : NSObject < JavaLangRunnable > {
 @public
  jboolean interrupted__;
  id blocker_;
}

- (instancetype)init;

- (instancetype)initWithJavaLangRunnable:(id<JavaLangRunnable>)runnable;

- (instancetype)initWithJavaLangRunnable:(id<JavaLangRunnable>)runnable
                            withNSString:(NSString *)threadName;

- (instancetype)initWithNSString:(NSString *)threadName;

- (instancetype)initWithJavaLangThreadGroup:(JavaLangThreadGroup *)group
                       withJavaLangRunnable:(id<JavaLangRunnable>)runnable;

- (instancetype)initWithJavaLangThreadGroup:(JavaLangThreadGroup *)group
                       withJavaLangRunnable:(id<JavaLangRunnable>)runnable
                               withNSString:(NSString *)threadName
                                   withLong:(jlong)stack;

- (instancetype)initWithJavaLangThreadGroup:(JavaLangThreadGroup *)group
                       withJavaLangRunnable:(id<JavaLangRunnable>)runnable
                               withNSString:(NSString *)threadName;

- (instancetype)initWithJavaLangThreadGroup:(JavaLangThreadGroup *)group
                               withNSString:(NSString *)threadName;

+ (JavaLangThread *)currentThread;

- (void)start;

- (void)run;

+ (jint)activeCount;

- (jboolean)isDaemon;

- (void)setDaemonWithBoolean:(jboolean)isDaemon;

+ (jint)enumerateWithJavaLangThreadArray:(IOSObjectArray *)threads;

- (jlong)getId;

- (NSString *)getName;

- (void)setNameWithNSString:(NSString *)name;

- (jint)getPriority;

- (void)setPriorityWithInt:(jint)priority;

- (JavaLangThread_StateEnum *)getState;

- (JavaLangThreadGroup *)getThreadGroup;

- (IOSObjectArray *)getStackTrace;

- (jint)countStackFrames;

- (void)interrupt;

+ (jboolean)interrupted;

- (jboolean)isInterrupted;

- (void)join;

- (void)joinWithLong:(jlong)millis;

- (void)joinWithLong:(jlong)millis
             withInt:(jint)nanos;

- (jboolean)isAlive;

- (void)checkAccess;

+ (void)sleepWithLong:(jlong)millis;

+ (void)sleepWithLong:(jlong)millis
              withInt:(jint)nanos;

+ (void)yield;

+ (jboolean)holdsLockWithId:(id)object;

- (JavaLangClassLoader *)getContextClassLoader;

- (void)setContextClassLoaderWithJavaLangClassLoader:(JavaLangClassLoader *)cl;

- (NSString *)description;

- (void)unpark;

- (void)parkForWithLong:(jlong)nanos;

- (void)parkUntilWithLong:(jlong)time;

+ (id<JavaLangThread_UncaughtExceptionHandler>)getDefaultUncaughtExceptionHandler;

+ (void)setDefaultUncaughtExceptionHandlerWithJavaLangThread_UncaughtExceptionHandler:(id<JavaLangThread_UncaughtExceptionHandler>)handler;

- (id<JavaLangThread_UncaughtExceptionHandler>)getUncaughtExceptionHandler;

- (void)setUncaughtExceptionHandlerWithJavaLangThread_UncaughtExceptionHandler:(id<JavaLangThread_UncaughtExceptionHandler>)handler;

- (void)pushInterruptAction$WithJavaLangRunnable:(id<JavaLangRunnable>)interruptAction;

- (void)popInterruptAction$WithJavaLangRunnable:(id<JavaLangRunnable>)interruptAction;

@end

FOUNDATION_EXPORT BOOL JavaLangThread_initialized;
J2OBJC_STATIC_INIT(JavaLangThread)

J2OBJC_FIELD_SETTER(JavaLangThread, blocker_, id)

CF_EXTERN_C_BEGIN

FOUNDATION_EXPORT JavaLangThread *JavaLangThread_currentThread();

FOUNDATION_EXPORT jint JavaLangThread_activeCount();

FOUNDATION_EXPORT jint JavaLangThread_enumerateWithJavaLangThreadArray_(IOSObjectArray *threads);

FOUNDATION_EXPORT jboolean JavaLangThread_interrupted();

FOUNDATION_EXPORT void JavaLangThread_sleepWithLong_(jlong millis);

FOUNDATION_EXPORT void JavaLangThread_sleepWithLong_withInt_(jlong millis, jint nanos);

FOUNDATION_EXPORT void JavaLangThread_yield();

FOUNDATION_EXPORT jboolean JavaLangThread_holdsLockWithId_(id object);

FOUNDATION_EXPORT id<JavaLangThread_UncaughtExceptionHandler> JavaLangThread_getDefaultUncaughtExceptionHandler();

FOUNDATION_EXPORT void JavaLangThread_setDefaultUncaughtExceptionHandlerWithJavaLangThread_UncaughtExceptionHandler_(id<JavaLangThread_UncaughtExceptionHandler> handler);

J2OBJC_STATIC_FIELD_GETTER(JavaLangThread, NANOS_PER_MILLI, jint)

FOUNDATION_EXPORT JavaLangThreadGroup *JavaLangThread_systemThreadGroup_;
J2OBJC_STATIC_FIELD_GETTER(JavaLangThread, systemThreadGroup_, JavaLangThreadGroup *)
J2OBJC_STATIC_FIELD_SETTER(JavaLangThread, systemThreadGroup_, JavaLangThreadGroup *)

FOUNDATION_EXPORT JavaLangThreadGroup *JavaLangThread_mainThreadGroup_;
J2OBJC_STATIC_FIELD_GETTER(JavaLangThread, mainThreadGroup_, JavaLangThreadGroup *)
J2OBJC_STATIC_FIELD_SETTER(JavaLangThread, mainThreadGroup_, JavaLangThreadGroup *)

FOUNDATION_EXPORT jlong JavaLangThread_threadOrdinalNum_;
J2OBJC_STATIC_FIELD_GETTER(JavaLangThread, threadOrdinalNum_, jlong)
J2OBJC_STATIC_FIELD_REF_GETTER(JavaLangThread, threadOrdinalNum_, jlong)

FOUNDATION_EXPORT id<JavaLangThread_UncaughtExceptionHandler> JavaLangThread_defaultUncaughtHandler_;
J2OBJC_STATIC_FIELD_GETTER(JavaLangThread, defaultUncaughtHandler_, id<JavaLangThread_UncaughtExceptionHandler>)
J2OBJC_STATIC_FIELD_SETTER(JavaLangThread, defaultUncaughtHandler_, id<JavaLangThread_UncaughtExceptionHandler>)

J2OBJC_STATIC_FIELD_GETTER(JavaLangThread, MAX_PRIORITY, jint)

J2OBJC_STATIC_FIELD_GETTER(JavaLangThread, MIN_PRIORITY, jint)

J2OBJC_STATIC_FIELD_GETTER(JavaLangThread, NORM_PRIORITY, jint)

FOUNDATION_EXPORT NSString *JavaLangThread_THREAD_;
J2OBJC_STATIC_FIELD_GETTER(JavaLangThread, THREAD_, NSString *)

FOUNDATION_EXPORT NSString *JavaLangThread_KEY_PREFIX_;
J2OBJC_STATIC_FIELD_GETTER(JavaLangThread, KEY_PREFIX_, NSString *)

FOUNDATION_EXPORT NSString *JavaLangThread_JAVA_THREAD_;
J2OBJC_STATIC_FIELD_GETTER(JavaLangThread, JAVA_THREAD_, NSString *)

FOUNDATION_EXPORT NSString *JavaLangThread_TARGET_;
J2OBJC_STATIC_FIELD_GETTER(JavaLangThread, TARGET_, NSString *)

FOUNDATION_EXPORT NSString *JavaLangThread_THREAD_ID_;
J2OBJC_STATIC_FIELD_GETTER(JavaLangThread, THREAD_ID_, NSString *)

FOUNDATION_EXPORT NSString *JavaLangThread_UNCAUGHT_HANDLER_;
J2OBJC_STATIC_FIELD_GETTER(JavaLangThread, UNCAUGHT_HANDLER_, NSString *)

J2OBJC_STATIC_FIELD_GETTER(JavaLangThread, POLL_INTERVAL, jint)
CF_EXTERN_C_END

J2OBJC_TYPE_LITERAL_HEADER(JavaLangThread)

typedef NS_ENUM(NSUInteger, JavaLangThread_State) {
  JavaLangThread_State_NEW = 0,
  JavaLangThread_State_RUNNABLE = 1,
  JavaLangThread_State_BLOCKED = 2,
  JavaLangThread_State_WAITING = 3,
  JavaLangThread_State_TIMED_WAITING = 4,
  JavaLangThread_State_TERMINATED = 5,
};

@interface JavaLangThread_StateEnum : JavaLangEnum < NSCopying > {
}

- (instancetype)initWithNSString:(NSString *)__name
                         withInt:(jint)__ordinal;

+ (IOSObjectArray *)values;
FOUNDATION_EXPORT IOSObjectArray *JavaLangThread_StateEnum_values();

+ (JavaLangThread_StateEnum *)valueOfWithNSString:(NSString *)name;

FOUNDATION_EXPORT JavaLangThread_StateEnum *JavaLangThread_StateEnum_valueOfWithNSString_(NSString *name);
- (id)copyWithZone:(NSZone *)zone;

@end

FOUNDATION_EXPORT BOOL JavaLangThread_StateEnum_initialized;
J2OBJC_STATIC_INIT(JavaLangThread_StateEnum)

FOUNDATION_EXPORT JavaLangThread_StateEnum *JavaLangThread_StateEnum_values_[];

#define JavaLangThread_StateEnum_NEW JavaLangThread_StateEnum_values_[JavaLangThread_State_NEW]
J2OBJC_ENUM_CONSTANT_GETTER(JavaLangThread_StateEnum, NEW)

#define JavaLangThread_StateEnum_RUNNABLE JavaLangThread_StateEnum_values_[JavaLangThread_State_RUNNABLE]
J2OBJC_ENUM_CONSTANT_GETTER(JavaLangThread_StateEnum, RUNNABLE)

#define JavaLangThread_StateEnum_BLOCKED JavaLangThread_StateEnum_values_[JavaLangThread_State_BLOCKED]
J2OBJC_ENUM_CONSTANT_GETTER(JavaLangThread_StateEnum, BLOCKED)

#define JavaLangThread_StateEnum_WAITING JavaLangThread_StateEnum_values_[JavaLangThread_State_WAITING]
J2OBJC_ENUM_CONSTANT_GETTER(JavaLangThread_StateEnum, WAITING)

#define JavaLangThread_StateEnum_TIMED_WAITING JavaLangThread_StateEnum_values_[JavaLangThread_State_TIMED_WAITING]
J2OBJC_ENUM_CONSTANT_GETTER(JavaLangThread_StateEnum, TIMED_WAITING)

#define JavaLangThread_StateEnum_TERMINATED JavaLangThread_StateEnum_values_[JavaLangThread_State_TERMINATED]
J2OBJC_ENUM_CONSTANT_GETTER(JavaLangThread_StateEnum, TERMINATED)

J2OBJC_TYPE_LITERAL_HEADER(JavaLangThread_StateEnum)

#define JavaLangThread_ParkState_PARKED 3
#define JavaLangThread_ParkState_PREEMPTIVELY_UNPARKED 2
#define JavaLangThread_ParkState_UNPARKED 1

@interface JavaLangThread_ParkState : NSObject {
}

@end

J2OBJC_EMPTY_STATIC_INIT(JavaLangThread_ParkState)

CF_EXTERN_C_BEGIN

J2OBJC_STATIC_FIELD_GETTER(JavaLangThread_ParkState, UNPARKED, jint)

J2OBJC_STATIC_FIELD_GETTER(JavaLangThread_ParkState, PREEMPTIVELY_UNPARKED, jint)

J2OBJC_STATIC_FIELD_GETTER(JavaLangThread_ParkState, PARKED, jint)
CF_EXTERN_C_END

J2OBJC_TYPE_LITERAL_HEADER(JavaLangThread_ParkState)

@protocol JavaLangThread_UncaughtExceptionHandler < NSObject, JavaObject >

- (void)uncaughtExceptionWithJavaLangThread:(JavaLangThread *)t
                      withJavaLangThrowable:(JavaLangThrowable *)e;

@end

J2OBJC_EMPTY_STATIC_INIT(JavaLangThread_UncaughtExceptionHandler)

J2OBJC_TYPE_LITERAL_HEADER(JavaLangThread_UncaughtExceptionHandler)

@interface JavaLangThread_SystemUncaughtExceptionHandler : NSObject < JavaLangThread_UncaughtExceptionHandler > {
}

- (void)uncaughtExceptionWithJavaLangThread:(JavaLangThread *)t
                      withJavaLangThrowable:(JavaLangThrowable *)e;

@end

J2OBJC_EMPTY_STATIC_INIT(JavaLangThread_SystemUncaughtExceptionHandler)

CF_EXTERN_C_BEGIN
CF_EXTERN_C_END

J2OBJC_TYPE_LITERAL_HEADER(JavaLangThread_SystemUncaughtExceptionHandler)

#endif // _JavaLangThread_H_
