//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/libcore/luni/src/main/java/java/util/PropertyResourceBundle.java
//

#ifndef _JavaUtilPropertyResourceBundle_H_
#define _JavaUtilPropertyResourceBundle_H_

@class JavaIoInputStream;
@class JavaIoReader;
@class JavaUtilProperties;
@protocol JavaUtilSet;

#include "J2ObjC_header.h"
#include "java/util/Enumeration.h"
#include "java/util/ResourceBundle.h"

@interface JavaUtilPropertyResourceBundle : JavaUtilResourceBundle {
 @public
  JavaUtilProperties *resources_;
}

- (instancetype)initWithJavaIoInputStream:(JavaIoInputStream *)stream;

- (instancetype)initWithJavaIoReader:(JavaIoReader *)reader;

- (id<JavaUtilSet>)handleKeySet;

- (id<JavaUtilEnumeration>)getKeys;

- (id)handleGetObjectWithNSString:(NSString *)key;

@end

J2OBJC_EMPTY_STATIC_INIT(JavaUtilPropertyResourceBundle)

J2OBJC_FIELD_SETTER(JavaUtilPropertyResourceBundle, resources_, JavaUtilProperties *)

CF_EXTERN_C_BEGIN
CF_EXTERN_C_END

J2OBJC_TYPE_LITERAL_HEADER(JavaUtilPropertyResourceBundle)

@interface JavaUtilPropertyResourceBundle_$1 : NSObject < JavaUtilEnumeration > {
 @public
  id<JavaUtilEnumeration> local_;
  id<JavaUtilEnumeration> pEnum_;
  NSString *nextElement__;
}

- (jboolean)hasMoreElements;

- (NSString *)nextElement;

- (instancetype)initWithJavaUtilPropertyResourceBundle:(JavaUtilPropertyResourceBundle *)outer$;

@end

J2OBJC_EMPTY_STATIC_INIT(JavaUtilPropertyResourceBundle_$1)

J2OBJC_FIELD_SETTER(JavaUtilPropertyResourceBundle_$1, local_, id<JavaUtilEnumeration>)
J2OBJC_FIELD_SETTER(JavaUtilPropertyResourceBundle_$1, pEnum_, id<JavaUtilEnumeration>)
J2OBJC_FIELD_SETTER(JavaUtilPropertyResourceBundle_$1, nextElement__, NSString *)

CF_EXTERN_C_BEGIN
CF_EXTERN_C_END

J2OBJC_TYPE_LITERAL_HEADER(JavaUtilPropertyResourceBundle_$1)

#endif // _JavaUtilPropertyResourceBundle_H_