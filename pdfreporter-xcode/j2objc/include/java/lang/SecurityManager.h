//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/libcore/luni/src/main/java/java/lang/SecurityManager.java
//

#ifndef _JavaLangSecurityManager_H_
#define _JavaLangSecurityManager_H_

@class IOSClass;
@class IOSObjectArray;
@class JavaIoFileDescriptor;
@class JavaLangClassLoader;
@class JavaLangThread;
@class JavaLangThreadGroup;
@class JavaSecurityPermission;

#include "J2ObjC_header.h"

@interface JavaLangSecurityManager : NSObject {
 @public
  jboolean inCheck_;
}

- (instancetype)init;

- (void)checkAcceptWithNSString:(NSString *)host
                        withInt:(jint)port;

- (void)checkAccessWithJavaLangThread:(JavaLangThread *)thread;

- (void)checkAccessWithJavaLangThreadGroup:(JavaLangThreadGroup *)group;

- (void)checkConnectWithNSString:(NSString *)host
                         withInt:(jint)port;

- (void)checkConnectWithNSString:(NSString *)host
                         withInt:(jint)port
                          withId:(id)context;

- (void)checkCreateClassLoader;

- (void)checkDeleteWithNSString:(NSString *)file;

- (void)checkExecWithNSString:(NSString *)cmd;

- (void)checkExitWithInt:(jint)status;

- (void)checkLinkWithNSString:(NSString *)libName;

- (void)checkListenWithInt:(jint)port;

- (void)checkMemberAccessWithIOSClass:(IOSClass *)cls
                              withInt:(jint)type;

- (void)checkPackageAccessWithNSString:(NSString *)packageName;

- (void)checkPackageDefinitionWithNSString:(NSString *)packageName;

- (void)checkPropertiesAccess;

- (void)checkPropertyAccessWithNSString:(NSString *)key;

- (void)checkReadWithJavaIoFileDescriptor:(JavaIoFileDescriptor *)fd;

- (void)checkReadWithNSString:(NSString *)file;

- (void)checkReadWithNSString:(NSString *)file
                       withId:(id)context;

- (void)checkSecurityAccessWithNSString:(NSString *)target;

- (void)checkSetFactory;

- (jboolean)checkTopLevelWindowWithId:(id)window;

- (void)checkSystemClipboardAccess;

- (void)checkAwtEventQueueAccess;

- (void)checkPrintJobAccess;

- (void)checkWriteWithJavaIoFileDescriptor:(JavaIoFileDescriptor *)fd;

- (void)checkWriteWithNSString:(NSString *)file;

- (jboolean)getInCheck;

- (IOSObjectArray *)getClassContext;

- (JavaLangClassLoader *)currentClassLoader;

- (jint)classLoaderDepth;

- (IOSClass *)currentLoadedClass;

- (jint)classDepthWithNSString:(NSString *)name;

- (jboolean)inClassWithNSString:(NSString *)name;

- (jboolean)inClassLoader;

- (JavaLangThreadGroup *)getThreadGroup;

- (id)getSecurityContext;

- (void)checkPermissionWithJavaSecurityPermission:(JavaSecurityPermission *)permission;

- (void)checkPermissionWithJavaSecurityPermission:(JavaSecurityPermission *)permission
                                           withId:(id)context;

@end

J2OBJC_EMPTY_STATIC_INIT(JavaLangSecurityManager)

CF_EXTERN_C_BEGIN
CF_EXTERN_C_END

J2OBJC_TYPE_LITERAL_HEADER(JavaLangSecurityManager)

#endif // _JavaLangSecurityManager_H_
