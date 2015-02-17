//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/libcore/luni/src/main/java/java/nio/channels/SeekableByteChannel.java
//

#ifndef _JavaNioChannelsSeekableByteChannel_H_
#define _JavaNioChannelsSeekableByteChannel_H_

@class JavaNioByteBuffer;

#include "J2ObjC_header.h"
#include "java/nio/channels/ByteChannel.h"

@protocol JavaNioChannelsSeekableByteChannel < JavaNioChannelsByteChannel, NSObject, JavaObject >
- (jlong)position;

- (id<JavaNioChannelsSeekableByteChannel>)positionWithLong:(jlong)newPosition;

- (jlong)size;

- (id<JavaNioChannelsSeekableByteChannel>)truncateWithLong:(jlong)size;

- (jint)writeWithJavaNioByteBuffer:(JavaNioByteBuffer *)buffer;

- (jint)readWithJavaNioByteBuffer:(JavaNioByteBuffer *)buffer;

@end

J2OBJC_EMPTY_STATIC_INIT(JavaNioChannelsSeekableByteChannel)

J2OBJC_TYPE_LITERAL_HEADER(JavaNioChannelsSeekableByteChannel)

#endif // _JavaNioChannelsSeekableByteChannel_H_
