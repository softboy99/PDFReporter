//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/libcore/luni/src/main/java/java/util/concurrent/ThreadFactory.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_JavaUtilConcurrentThreadFactory")
#ifdef RESTRICT_JavaUtilConcurrentThreadFactory
#define INCLUDE_ALL_JavaUtilConcurrentThreadFactory 0
#else
#define INCLUDE_ALL_JavaUtilConcurrentThreadFactory 1
#endif
#undef RESTRICT_JavaUtilConcurrentThreadFactory

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if !defined (JavaUtilConcurrentThreadFactory_) && (INCLUDE_ALL_JavaUtilConcurrentThreadFactory || defined(INCLUDE_JavaUtilConcurrentThreadFactory))
#define JavaUtilConcurrentThreadFactory_

@class JavaLangThread;
@protocol JavaLangRunnable;

/*!
 @brief An object that creates new threads on demand.
 Using thread factories
 removes hardwiring of calls to <code>new Thread</code>,
 enabling applications to use special thread subclasses, priorities, etc.
 <p>
 The simplest implementation of this interface is just:
 @code
 
  class SimpleThreadFactory implements ThreadFactory 
   public Thread newThread(Runnable r) {
     return new Thread(r);
   }
  
@endcode
 The <code>Executors.defaultThreadFactory</code> method provides a more
 useful simple implementation, that sets the created thread context
 to known values before returning it.
 @since 1.5
 @author Doug Lea
 */
@protocol JavaUtilConcurrentThreadFactory < NSObject, JavaObject >

/*!
 @brief Constructs a new <code>Thread</code>.
 Implementations may also initialize
 priority, name, daemon status, <code>ThreadGroup</code>, etc.
 @param r a runnable to be executed by new thread instance
 @return constructed thread, or <code>null</code> if the request to
 create a thread is rejected
 */
- (JavaLangThread *)newThreadWithJavaLangRunnable:(id<JavaLangRunnable>)r OBJC_METHOD_FAMILY_NONE;

@end

J2OBJC_EMPTY_STATIC_INIT(JavaUtilConcurrentThreadFactory)

J2OBJC_TYPE_LITERAL_HEADER(JavaUtilConcurrentThreadFactory)

#endif


#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_JavaUtilConcurrentThreadFactory")
