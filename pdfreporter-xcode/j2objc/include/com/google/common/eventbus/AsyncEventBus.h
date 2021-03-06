//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/krasnocka/Downloads/j2objc-master/guava/sources/com/google/common/eventbus/AsyncEventBus.java
//

#include "J2ObjC_header.h"

#if !ComGoogleCommonEventbusAsyncEventBus_RESTRICT
#define ComGoogleCommonEventbusAsyncEventBus_INCLUDE_ALL 1
#endif
#undef ComGoogleCommonEventbusAsyncEventBus_RESTRICT
#if !defined (_ComGoogleCommonEventbusAsyncEventBus_) && (ComGoogleCommonEventbusAsyncEventBus_INCLUDE_ALL || ComGoogleCommonEventbusAsyncEventBus_INCLUDE)
#define _ComGoogleCommonEventbusAsyncEventBus_

@class ComGoogleCommonEventbusEventHandler;
@class JavaUtilConcurrentConcurrentLinkedQueue;
@protocol JavaUtilConcurrentExecutor;

#define ComGoogleCommonEventbusEventBus_RESTRICT 1
#define ComGoogleCommonEventbusEventBus_INCLUDE 1
#include "com/google/common/eventbus/EventBus.h"


@interface ComGoogleCommonEventbusAsyncEventBus : ComGoogleCommonEventbusEventBus {
}

- (instancetype)initWithNSString:(NSString *)identifier
  withJavaUtilConcurrentExecutor:(id<JavaUtilConcurrentExecutor>)executor;

- (instancetype)initWithJavaUtilConcurrentExecutor:(id<JavaUtilConcurrentExecutor>)executor;

- (void)enqueueEventWithId:(id)event
withComGoogleCommonEventbusEventHandler:(ComGoogleCommonEventbusEventHandler *)handler;

- (void)dispatchQueuedEvents;

- (void)dispatchWithId:(id)event
withComGoogleCommonEventbusEventHandler:(ComGoogleCommonEventbusEventHandler *)handler;

@end

J2OBJC_EMPTY_STATIC_INIT(ComGoogleCommonEventbusAsyncEventBus)

CF_EXTERN_C_BEGIN
CF_EXTERN_C_END
#endif

J2OBJC_TYPE_LITERAL_HEADER(ComGoogleCommonEventbusAsyncEventBus)
#if !defined (_ComGoogleCommonEventbusAsyncEventBus_$1_) && (ComGoogleCommonEventbusAsyncEventBus_INCLUDE_ALL || ComGoogleCommonEventbusAsyncEventBus_$1_INCLUDE)
#define _ComGoogleCommonEventbusAsyncEventBus_$1_

@class ComGoogleCommonEventbusAsyncEventBus;
@class ComGoogleCommonEventbusEventHandler;

#define JavaLangRunnable_RESTRICT 1
#define JavaLangRunnable_INCLUDE 1
#include "java/lang/Runnable.h"


@interface ComGoogleCommonEventbusAsyncEventBus_$1 : NSObject < JavaLangRunnable > {
}

- (void)run;

- (instancetype)initWithComGoogleCommonEventbusAsyncEventBus:(ComGoogleCommonEventbusAsyncEventBus *)outer$
                                                      withId:(id)capture$0
                     withComGoogleCommonEventbusEventHandler:(ComGoogleCommonEventbusEventHandler *)capture$1;

@end

J2OBJC_EMPTY_STATIC_INIT(ComGoogleCommonEventbusAsyncEventBus_$1)

CF_EXTERN_C_BEGIN
CF_EXTERN_C_END
#endif

J2OBJC_TYPE_LITERAL_HEADER(ComGoogleCommonEventbusAsyncEventBus_$1)
