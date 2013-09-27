//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: apache_harmony/classlib/modules/luni/src/main/java/java/util/BitSet.java
//
//  Created by tball on 7/15/13.
//

#ifndef _JavaUtilBitSet_H_
#define _JavaUtilBitSet_H_

@class IOSLongArray;

#import "JreEmulation.h"
#include "java/io/Serializable.h"

#define JavaUtilBitSet_ELM_SIZE 64
#define JavaUtilBitSet_OFFSET 6
#define JavaUtilBitSet_RIGHT_BITS 63
#define JavaUtilBitSet_serialVersionUID 7997698588986878753

@interface JavaUtilBitSet : NSObject < JavaIoSerializable, NSCopying > {
 @public
  IOSLongArray *bits_;
  BOOL needClear__;
  int actualArrayLength_;
  BOOL isLengthActual_;
}

@property (nonatomic, retain) IOSLongArray *bits;
@property (nonatomic, assign) BOOL needClear_;
@property (nonatomic, assign) int actualArrayLength;
@property (nonatomic, assign) BOOL isLengthActual;

+ (IOSLongArray *)TWO_N_ARRAY;
- (id)init;
- (id)initWithInt:(int)nbits;
- (id)initWithLongArray:(IOSLongArray *)bits
               withBOOL:(BOOL)needClear
                withInt:(int)actualArrayLength
               withBOOL:(BOOL)isLengthActual;
- (id)clone;
- (BOOL)isEqual:(id)obj;
- (void)growLengthWithInt:(int)len;
- (NSUInteger)hash;
- (BOOL)getWithInt:(int)pos;
- (JavaUtilBitSet *)getWithInt:(int)pos1
                       withInt:(int)pos2;
- (void)setWithInt:(int)pos;
- (void)setWithInt:(int)pos
          withBOOL:(BOOL)val;
- (void)setWithInt:(int)pos1
           withInt:(int)pos2;
- (void)needClear;
- (void)setWithInt:(int)pos1
           withInt:(int)pos2
          withBOOL:(BOOL)val;
- (void)clear;
- (void)clearWithInt:(int)pos;
- (void)clearWithInt:(int)pos1
             withInt:(int)pos2;
- (void)flipWithInt:(int)pos;
- (void)flipWithInt:(int)pos1
            withInt:(int)pos2;
- (BOOL)intersectsWithJavaUtilBitSet:(JavaUtilBitSet *)bs;
- (void)andWithJavaUtilBitSet:(JavaUtilBitSet *)bs;
- (void)andNotWithJavaUtilBitSet:(JavaUtilBitSet *)bs;
- (void)orWithJavaUtilBitSet:(JavaUtilBitSet *)bs;
- (void)xorWithJavaUtilBitSet:(JavaUtilBitSet *)bs;
- (int)size;
- (int)length;
- (int)getActualArrayLength;
- (NSString *)description;
- (int)nextSetBitWithInt:(int)pos;
- (int)nextClearBitWithInt:(int)pos;
- (BOOL)isEmpty;
- (int)cardinality;
- (int)popWithLongInt:(long long int)x;
- (id)copyWithZone:(NSZone *)zone;
@end

#endif // _JavaUtilBitSet_H_
