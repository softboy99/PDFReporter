//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/libcore/luni/src/main/java/java/util/EventListenerProxy.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_JavaUtilEventListenerProxy")
#ifdef RESTRICT_JavaUtilEventListenerProxy
#define INCLUDE_ALL_JavaUtilEventListenerProxy 0
#else
#define INCLUDE_ALL_JavaUtilEventListenerProxy 1
#endif
#undef RESTRICT_JavaUtilEventListenerProxy

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if !defined (JavaUtilEventListenerProxy_) && (INCLUDE_ALL_JavaUtilEventListenerProxy || defined(INCLUDE_JavaUtilEventListenerProxy))
#define JavaUtilEventListenerProxy_

#define RESTRICT_JavaUtilEventListener 1
#define INCLUDE_JavaUtilEventListener 1
#include "java/util/EventListener.h"

/*!
 @brief This abstract class provides a simple wrapper for objects of type <code>EventListener</code>.
 */
@interface JavaUtilEventListenerProxy : NSObject < JavaUtilEventListener >

#pragma mark Public

/*!
 @brief Creates a new <code>EventListener</code> proxy instance.
 @param listener
 the listener wrapped by this proxy.
 */
- (instancetype)initWithJavaUtilEventListener:(id<JavaUtilEventListener>)listener;

/*!
 @brief Returns the wrapped <code>EventListener</code>.
 @return the wrapped <code>EventListener</code>.
 */
- (id<JavaUtilEventListener>)getListener;

@end

J2OBJC_EMPTY_STATIC_INIT(JavaUtilEventListenerProxy)

FOUNDATION_EXPORT void JavaUtilEventListenerProxy_initWithJavaUtilEventListener_(JavaUtilEventListenerProxy *self, id<JavaUtilEventListener> listener);

J2OBJC_TYPE_LITERAL_HEADER(JavaUtilEventListenerProxy)

#endif


#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_JavaUtilEventListenerProxy")
