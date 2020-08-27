//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/libcore/luni/src/main/java/java/beans/PropertyChangeListener.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_JavaBeansPropertyChangeListener")
#ifdef RESTRICT_JavaBeansPropertyChangeListener
#define INCLUDE_ALL_JavaBeansPropertyChangeListener 0
#else
#define INCLUDE_ALL_JavaBeansPropertyChangeListener 1
#endif
#undef RESTRICT_JavaBeansPropertyChangeListener

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if !defined (JavaBeansPropertyChangeListener_) && (INCLUDE_ALL_JavaBeansPropertyChangeListener || defined(INCLUDE_JavaBeansPropertyChangeListener))
#define JavaBeansPropertyChangeListener_

#define RESTRICT_JavaUtilEventListener 1
#define INCLUDE_JavaUtilEventListener 1
#include "java/util/EventListener.h"

@class JavaBeansPropertyChangeEvent;

/*!
 @brief A PropertyChangeListener can subscribe with a event source.
 Whenever that
 source raises a PropertyChangeEvent this listener will get notified.
 */
@protocol JavaBeansPropertyChangeListener < JavaUtilEventListener, NSObject, JavaObject >

/*!
 @brief The source bean calls this method when an event is raised.
 @param event
 the <code>PropertyChangeEvent</code> object which contains the name
 and the old and new value of the property that has changed.
 */
- (void)propertyChangeWithJavaBeansPropertyChangeEvent:(JavaBeansPropertyChangeEvent *)event;

@end

J2OBJC_EMPTY_STATIC_INIT(JavaBeansPropertyChangeListener)

J2OBJC_TYPE_LITERAL_HEADER(JavaBeansPropertyChangeListener)

#endif


#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_JavaBeansPropertyChangeListener")
