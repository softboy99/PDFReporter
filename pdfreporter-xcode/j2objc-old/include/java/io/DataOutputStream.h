//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: apache_harmony/classlib/modules/luni/src/main/java/java/io/DataOutputStream.java
//
//  Created by tball on 7/15/13.
//

#ifndef _JavaIoDataOutputStream_H_
#define _JavaIoDataOutputStream_H_

@class IOSByteArray;
@class JavaIoOutputStream;

#import "JreEmulation.h"
#include "java/io/DataOutput.h"
#include "java/io/FilterOutputStream.h"

@interface JavaIoDataOutputStream : JavaIoFilterOutputStream < JavaIoDataOutput > {
 @public
  int written_;
  IOSByteArray *buff_;
}

@property (nonatomic, assign) int written;
@property (nonatomic, retain) IOSByteArray *buff;

- (id)initWithJavaIoOutputStream:(JavaIoOutputStream *)outArg;
- (void)flush;
- (int)size;
- (void)writeWithByteArray:(IOSByteArray *)buffer
                   withInt:(int)offset
                   withInt:(int)count;
- (void)writeWithInt:(int)oneByte;
- (void)writeBooleanWithBOOL:(BOOL)val;
- (void)writeByteWithInt:(int)val;
- (void)writeBytesWithNSString:(NSString *)str;
- (void)writeCharWithInt:(int)val;
- (void)writeCharsWithNSString:(NSString *)str;
- (void)writeDoubleWithDouble:(double)val;
- (void)writeFloatWithFloat:(float)val;
- (void)writeIntWithInt:(int)val;
- (void)writeLongWithLongInt:(long long int)val;
- (int)writeLongToBufferWithLongInt:(long long int)val
                      withByteArray:(IOSByteArray *)buffer
                            withInt:(int)offset;
- (void)writeShortWithInt:(int)val;
- (int)writeShortToBufferWithInt:(int)val
                   withByteArray:(IOSByteArray *)buffer
                         withInt:(int)offset;
- (void)writeUTFWithNSString:(NSString *)str;
- (long long int)countUTFBytesWithNSString:(NSString *)str;
- (int)writeUTFBytesToBufferWithNSString:(NSString *)str
                             withLongInt:(long long int)count
                           withByteArray:(IOSByteArray *)buffer
                                 withInt:(int)offset;
@end

#endif // _JavaIoDataOutputStream_H_
