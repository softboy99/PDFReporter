//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: pdfreporter-extensions/src/org/oss/pdfreporter/uses/java/beans/IPropertyChangeSupport.java
//
//  Created by kendra on 9/27/13.
//

#ifndef _OrgOssPdfreporterUsesJavaBeansIPropertyChangeSupport_H_
#define _OrgOssPdfreporterUsesJavaBeansIPropertyChangeSupport_H_

@class IOSObjectArray;
@class OrgOssPdfreporterUsesJavaBeansPropertyChangeEvent;
@protocol OrgOssPdfreporterUsesJavaBeansPropertyChangeListener;

#import "JreEmulation.h"

@protocol OrgOssPdfreporterUsesJavaBeansIPropertyChangeSupport < NSObject, JavaObject >
- (void)addPropertyChangeListenerWithOrgOssPdfreporterUsesJavaBeansPropertyChangeListener:(id<OrgOssPdfreporterUsesJavaBeansPropertyChangeListener>)listener;
- (void)removePropertyChangeListenerWithOrgOssPdfreporterUsesJavaBeansPropertyChangeListener:(id<OrgOssPdfreporterUsesJavaBeansPropertyChangeListener>)listener;
- (IOSObjectArray *)getPropertyChangeListeners;
- (void)addPropertyChangeListenerWithNSString:(NSString *)propertyName
withOrgOssPdfreporterUsesJavaBeansPropertyChangeListener:(id<OrgOssPdfreporterUsesJavaBeansPropertyChangeListener>)listener;
- (void)removePropertyChangeListenerWithNSString:(NSString *)propertyName
withOrgOssPdfreporterUsesJavaBeansPropertyChangeListener:(id<OrgOssPdfreporterUsesJavaBeansPropertyChangeListener>)listener;
- (IOSObjectArray *)getPropertyChangeListenersWithNSString:(NSString *)propertyName;
- (void)firePropertyChangeWithNSString:(NSString *)propertyName
                                withId:(id)oldValue
                                withId:(id)newValue;
- (void)firePropertyChangeWithNSString:(NSString *)propertyName
                               withInt:(int)oldValue
                               withInt:(int)newValue;
- (void)firePropertyChangeWithNSString:(NSString *)propertyName
                              withBOOL:(BOOL)oldValue
                              withBOOL:(BOOL)newValue;
- (void)firePropertyChangeWithOrgOssPdfreporterUsesJavaBeansPropertyChangeEvent:(OrgOssPdfreporterUsesJavaBeansPropertyChangeEvent *)evt;
- (void)fireIndexedPropertyChangeWithNSString:(NSString *)propertyName
                                      withInt:(int)index
                                       withId:(id)oldValue
                                       withId:(id)newValue;
- (void)fireIndexedPropertyChangeWithNSString:(NSString *)propertyName
                                      withInt:(int)index
                                      withInt:(int)oldValue
                                      withInt:(int)newValue;
- (void)fireIndexedPropertyChangeWithNSString:(NSString *)propertyName
                                      withInt:(int)index
                                     withBOOL:(BOOL)oldValue
                                     withBOOL:(BOOL)newValue;
- (BOOL)hasListenersWithNSString:(NSString *)propertyName;
@end

#endif // _OrgOssPdfreporterUsesJavaBeansIPropertyChangeSupport_H_
