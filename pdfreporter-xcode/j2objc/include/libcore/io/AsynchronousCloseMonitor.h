//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/libcore/luni/src/main/java/libcore/io/AsynchronousCloseMonitor.java
//

#ifndef _LibcoreIoAsynchronousCloseMonitor_H_
#define _LibcoreIoAsynchronousCloseMonitor_H_

@class JavaIoFileDescriptor;

#include "J2ObjC_header.h"

@interface LibcoreIoAsynchronousCloseMonitor : NSObject {
}

+ (void)signalBlockedThreadsWithJavaIoFileDescriptor:(JavaIoFileDescriptor *)fd;

+ (id)newAsynchronousSocketCloseMonitorWithInt:(jint)fd OBJC_METHOD_FAMILY_NONE;

@end

J2OBJC_EMPTY_STATIC_INIT(LibcoreIoAsynchronousCloseMonitor)

CF_EXTERN_C_BEGIN

FOUNDATION_EXPORT void LibcoreIoAsynchronousCloseMonitor_signalBlockedThreadsWithJavaIoFileDescriptor_(JavaIoFileDescriptor *fd);

FOUNDATION_EXPORT id LibcoreIoAsynchronousCloseMonitor_newAsynchronousSocketCloseMonitorWithInt_(jint fd);
CF_EXTERN_C_END

J2OBJC_TYPE_LITERAL_HEADER(LibcoreIoAsynchronousCloseMonitor)

#endif // _LibcoreIoAsynchronousCloseMonitor_H_