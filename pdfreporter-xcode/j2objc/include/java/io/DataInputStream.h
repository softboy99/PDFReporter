//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: apache_harmony/classlib/modules/luni/src/main/java/java/io/DataInputStream.java
//
//  Created by tball on 7/15/13.
//

#ifndef _JavaIoDataInputStream_H_
#define _JavaIoDataInputStream_H_

@class IOSByteArray;
@class JavaIoInputStream;

#import "JreEmulation.h"
#include "java/io/DataInput.h"
#include "java/io/FilterInputStream.h"

@interface JavaIoDataInputStream : JavaIoFilterInputStream < JavaIoDataInput > {
 @public
  IOSByteArray *buff_;
}

@property (nonatomic, retain) IOSByteArray *buff;

- (id)initWithJavaIoInputStream:(JavaIoInputStream *)inArg;
- (int)readWithByteArray:(IOSByteArray *)buffer;
- (int)readWithByteArray:(IOSByteArray *)buffer
                 withInt:(int)offset
                 withInt:(int)length;
- (BOOL)readBoolean;
- (char)readByte;
- (int)readToBuffWithInt:(int)count;
- (unichar)readChar;
- (double)readDouble;
- (float)readFloat;
- (void)readFullyWithByteArray:(IOSByteArray *)buffer;
- (void)readFullyWithByteArray:(IOSByteArray *)buffer
                       withInt:(int)offset
                       withInt:(int)length;
- (int)readInt;
- (NSString *)readLine;
- (long long int)readLong;
- (short int)readShort;
- (int)readUnsignedByte;
- (int)readUnsignedShort;
- (NSString *)readUTF;
- (NSString *)decodeUTFWithInt:(int)utfSize;
+ (NSString *)decodeUTFWithInt:(int)utfSize
           withJavaIoDataInput:(id<JavaIoDataInput>)inArg;
+ (NSString *)readUTFWithJavaIoDataInput:(id<JavaIoDataInput>)inArg;
- (int)skipBytesWithInt:(int)count;
@end

#endif // _JavaIoDataInputStream_H_
