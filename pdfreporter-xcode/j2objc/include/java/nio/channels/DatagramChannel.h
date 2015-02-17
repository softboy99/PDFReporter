//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/libcore/luni/src/main/java/java/nio/channels/DatagramChannel.java
//

#ifndef _JavaNioChannelsDatagramChannel_H_
#define _JavaNioChannelsDatagramChannel_H_

@class IOSObjectArray;
@class JavaNetDatagramSocket;
@class JavaNetSocketAddress;
@class JavaNioByteBuffer;
@class JavaNioChannelsSpiSelectorProvider;
@protocol JavaNetSocketOption;
@protocol JavaUtilSet;

#include "J2ObjC_header.h"
#include "java/nio/channels/ByteChannel.h"
#include "java/nio/channels/GatheringByteChannel.h"
#include "java/nio/channels/NetworkChannel.h"
#include "java/nio/channels/ScatteringByteChannel.h"
#include "java/nio/channels/spi/AbstractSelectableChannel.h"

@interface JavaNioChannelsDatagramChannel : JavaNioChannelsSpiAbstractSelectableChannel < JavaNioChannelsByteChannel, JavaNioChannelsScatteringByteChannel, JavaNioChannelsGatheringByteChannel, JavaNioChannelsNetworkChannel > {
}

- (instancetype)initWithJavaNioChannelsSpiSelectorProvider:(JavaNioChannelsSpiSelectorProvider *)selectorProvider;

+ (JavaNioChannelsDatagramChannel *)open;

- (jint)validOps;

- (JavaNetDatagramSocket *)socket;

- (JavaNioChannelsDatagramChannel *)bindWithJavaNetSocketAddress:(JavaNetSocketAddress *)local;

- (JavaNetSocketAddress *)getLocalAddress;

- (id)getOptionWithJavaNetSocketOption:(id<JavaNetSocketOption>)option;

- (JavaNioChannelsDatagramChannel *)setOptionWithJavaNetSocketOption:(id<JavaNetSocketOption>)option
                                                              withId:(id)value;

- (id<JavaUtilSet>)supportedOptions;

- (jboolean)isConnected;

- (JavaNioChannelsDatagramChannel *)connectWithJavaNetSocketAddress:(JavaNetSocketAddress *)address;

- (JavaNioChannelsDatagramChannel *)disconnect;

- (JavaNetSocketAddress *)receiveWithJavaNioByteBuffer:(JavaNioByteBuffer *)target;

- (jint)sendWithJavaNioByteBuffer:(JavaNioByteBuffer *)source
         withJavaNetSocketAddress:(JavaNetSocketAddress *)address;

- (jint)readWithJavaNioByteBuffer:(JavaNioByteBuffer *)target;

- (jlong)readWithJavaNioByteBufferArray:(IOSObjectArray *)targets
                                withInt:(jint)offset
                                withInt:(jint)length;

- (jlong)readWithJavaNioByteBufferArray:(IOSObjectArray *)targets;

- (jint)writeWithJavaNioByteBuffer:(JavaNioByteBuffer *)source;

- (jlong)writeWithJavaNioByteBufferArray:(IOSObjectArray *)sources
                                 withInt:(jint)offset
                                 withInt:(jint)length;

- (jlong)writeWithJavaNioByteBufferArray:(IOSObjectArray *)sources;

@end

J2OBJC_EMPTY_STATIC_INIT(JavaNioChannelsDatagramChannel)

CF_EXTERN_C_BEGIN

FOUNDATION_EXPORT JavaNioChannelsDatagramChannel *JavaNioChannelsDatagramChannel_open();
CF_EXTERN_C_END

J2OBJC_TYPE_LITERAL_HEADER(JavaNioChannelsDatagramChannel)

#endif // _JavaNioChannelsDatagramChannel_H_
