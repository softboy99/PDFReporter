//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: apache_harmony/classlib/modules/math/src/main/java/java/math/Conversion.java
//
//  Created by tball on 7/15/13.
//

#ifndef _JavaMathConversion_H_
#define _JavaMathConversion_H_

@class IOSIntArray;
@class JavaMathBigInteger;

#import "JreEmulation.h"

@interface JavaMathConversion : NSObject {
}

+ (IOSIntArray *)digitFitInInt;
+ (IOSIntArray *)bigRadices;
- (id)init;
+ (NSString *)bigInteger2StringWithJavaMathBigInteger:(JavaMathBigInteger *)val
                                              withInt:(int)radix;
+ (NSString *)toDecimalScaledStringWithJavaMathBigInteger:(JavaMathBigInteger *)val
                                                  withInt:(int)scale_;
+ (NSString *)toDecimalScaledStringWithLongInt:(long long int)value
                                       withInt:(int)scale_;
+ (long long int)divideLongByBillionWithLongInt:(long long int)a;
+ (double)bigInteger2DoubleWithJavaMathBigInteger:(JavaMathBigInteger *)val;
@end

#endif // _JavaMathConversion_H_
