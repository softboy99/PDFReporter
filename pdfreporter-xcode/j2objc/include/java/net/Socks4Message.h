//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/libcore/luni/src/main/java/java/net/Socks4Message.java
//

#ifndef _JavaNetSocks4Message_H_
#define _JavaNetSocks4Message_H_

@class IOSByteArray;

#include "J2ObjC_header.h"

#define JavaNetSocks4Message_BUFFER_LENGTH 256
#define JavaNetSocks4Message_COMMAND_BIND 2
#define JavaNetSocks4Message_COMMAND_CONNECT 1
#define JavaNetSocks4Message_INDEX_COMMAND 1
#define JavaNetSocks4Message_INDEX_IP 4
#define JavaNetSocks4Message_INDEX_PORT 2
#define JavaNetSocks4Message_INDEX_USER_ID 8
#define JavaNetSocks4Message_INDEX_VERSION 0
#define JavaNetSocks4Message_MAX_USER_ID_LENGTH 248
#define JavaNetSocks4Message_REPLY_LENGTH 8
#define JavaNetSocks4Message_RETURN_CANNOT_CONNECT_TO_IDENTD 92
#define JavaNetSocks4Message_RETURN_DIFFERENT_USER_IDS 93
#define JavaNetSocks4Message_RETURN_FAILURE 91
#define JavaNetSocks4Message_RETURN_SUCCESS 90
#define JavaNetSocks4Message_SOCKS_VERSION 4

@interface JavaNetSocks4Message : NSObject {
 @public
  IOSByteArray *buffer_;
}

- (instancetype)init;

- (jint)getCommandOrResult;

- (void)setCommandOrResultWithInt:(jint)command;

- (jint)getPort;

- (void)setPortWithInt:(jint)port;

- (jint)getIP;

- (void)setIPWithByteArray:(IOSByteArray *)ip;

- (NSString *)getUserId;

- (void)setUserIdWithNSString:(NSString *)id_;

- (NSString *)description;

- (jint)getLength;

- (NSString *)getErrorStringWithInt:(jint)error;

- (IOSByteArray *)getBytes;

@end

J2OBJC_EMPTY_STATIC_INIT(JavaNetSocks4Message)

J2OBJC_FIELD_SETTER(JavaNetSocks4Message, buffer_, IOSByteArray *)

CF_EXTERN_C_BEGIN

J2OBJC_STATIC_FIELD_GETTER(JavaNetSocks4Message, COMMAND_CONNECT, jint)

J2OBJC_STATIC_FIELD_GETTER(JavaNetSocks4Message, COMMAND_BIND, jint)

J2OBJC_STATIC_FIELD_GETTER(JavaNetSocks4Message, RETURN_SUCCESS, jint)

J2OBJC_STATIC_FIELD_GETTER(JavaNetSocks4Message, RETURN_FAILURE, jint)

J2OBJC_STATIC_FIELD_GETTER(JavaNetSocks4Message, RETURN_CANNOT_CONNECT_TO_IDENTD, jint)

J2OBJC_STATIC_FIELD_GETTER(JavaNetSocks4Message, RETURN_DIFFERENT_USER_IDS, jint)

J2OBJC_STATIC_FIELD_GETTER(JavaNetSocks4Message, REPLY_LENGTH, jint)

J2OBJC_STATIC_FIELD_GETTER(JavaNetSocks4Message, INDEX_VERSION, jint)

J2OBJC_STATIC_FIELD_GETTER(JavaNetSocks4Message, SOCKS_VERSION, jint)

J2OBJC_STATIC_FIELD_GETTER(JavaNetSocks4Message, INDEX_COMMAND, jint)

J2OBJC_STATIC_FIELD_GETTER(JavaNetSocks4Message, INDEX_PORT, jint)

J2OBJC_STATIC_FIELD_GETTER(JavaNetSocks4Message, INDEX_IP, jint)

J2OBJC_STATIC_FIELD_GETTER(JavaNetSocks4Message, INDEX_USER_ID, jint)

J2OBJC_STATIC_FIELD_GETTER(JavaNetSocks4Message, BUFFER_LENGTH, jint)

J2OBJC_STATIC_FIELD_GETTER(JavaNetSocks4Message, MAX_USER_ID_LENGTH, jint)
CF_EXTERN_C_END

J2OBJC_TYPE_LITERAL_HEADER(JavaNetSocks4Message)

#endif // _JavaNetSocks4Message_H_