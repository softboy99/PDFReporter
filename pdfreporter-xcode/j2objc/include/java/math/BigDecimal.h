//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: apache_harmony/classlib/modules/math/src/main/java/java/math/BigDecimal.java
//

#ifndef _JavaMathBigDecimal_H_
#define _JavaMathBigDecimal_H_

@class IOSCharArray;
@class IOSIntArray;
@class IOSLongArray;
@class IOSObjectArray;
@class JavaIoObjectInputStream;
@class JavaIoObjectOutputStream;
@class JavaMathBigInteger;
@class JavaMathMathContext;
@class JavaMathRoundingModeEnum;

#include "J2ObjC_header.h"
#include "java/io/Serializable.h"
#include "java/lang/Comparable.h"

#define JavaMathBigDecimal_BI_SCALED_BY_ZERO_LENGTH 11
#define JavaMathBigDecimal_LOG10_2 0.3010299956639812
#define JavaMathBigDecimal_ROUND_CEILING 2
#define JavaMathBigDecimal_ROUND_DOWN 1
#define JavaMathBigDecimal_ROUND_FLOOR 3
#define JavaMathBigDecimal_ROUND_HALF_DOWN 5
#define JavaMathBigDecimal_ROUND_HALF_EVEN 6
#define JavaMathBigDecimal_ROUND_HALF_UP 4
#define JavaMathBigDecimal_ROUND_UNNECESSARY 7
#define JavaMathBigDecimal_ROUND_UP 0
#define JavaMathBigDecimal_serialVersionUID 6108874887143696463LL

@interface JavaMathBigDecimal : NSNumber < JavaLangComparable, JavaIoSerializable > {
}

- (instancetype)initWithCharArray:(IOSCharArray *)inArg
                          withInt:(jint)offset
                          withInt:(jint)len;

- (instancetype)initWithCharArray:(IOSCharArray *)inArg
                          withInt:(jint)offset
                          withInt:(jint)len
          withJavaMathMathContext:(JavaMathMathContext *)mc;

- (instancetype)initWithCharArray:(IOSCharArray *)inArg;

- (instancetype)initWithCharArray:(IOSCharArray *)inArg
          withJavaMathMathContext:(JavaMathMathContext *)mc;

- (instancetype)initWithNSString:(NSString *)val;

- (instancetype)initWithNSString:(NSString *)val
         withJavaMathMathContext:(JavaMathMathContext *)mc;

- (instancetype)initWithDouble:(jdouble)val;

- (instancetype)initWithDouble:(jdouble)val
       withJavaMathMathContext:(JavaMathMathContext *)mc;

- (instancetype)initWithJavaMathBigInteger:(JavaMathBigInteger *)val;

- (instancetype)initWithJavaMathBigInteger:(JavaMathBigInteger *)val
                   withJavaMathMathContext:(JavaMathMathContext *)mc;

- (instancetype)initWithJavaMathBigInteger:(JavaMathBigInteger *)unscaledVal
                                   withInt:(jint)scale_;

- (instancetype)initWithJavaMathBigInteger:(JavaMathBigInteger *)unscaledVal
                                   withInt:(jint)scale_
                   withJavaMathMathContext:(JavaMathMathContext *)mc;

- (instancetype)initWithInt:(jint)val;

- (instancetype)initWithInt:(jint)val
    withJavaMathMathContext:(JavaMathMathContext *)mc;

- (instancetype)initWithLong:(jlong)val;

- (instancetype)initWithLong:(jlong)val
     withJavaMathMathContext:(JavaMathMathContext *)mc;

+ (JavaMathBigDecimal *)valueOfWithLong:(jlong)unscaledVal
                                withInt:(jint)scale_;

+ (JavaMathBigDecimal *)valueOfWithLong:(jlong)unscaledVal;

+ (JavaMathBigDecimal *)valueOfWithDouble:(jdouble)val;

- (JavaMathBigDecimal *)addWithJavaMathBigDecimal:(JavaMathBigDecimal *)augend;

- (JavaMathBigDecimal *)addWithJavaMathBigDecimal:(JavaMathBigDecimal *)augend
                          withJavaMathMathContext:(JavaMathMathContext *)mc;

- (JavaMathBigDecimal *)subtractWithJavaMathBigDecimal:(JavaMathBigDecimal *)subtrahend;

- (JavaMathBigDecimal *)subtractWithJavaMathBigDecimal:(JavaMathBigDecimal *)subtrahend
                               withJavaMathMathContext:(JavaMathMathContext *)mc;

- (JavaMathBigDecimal *)multiplyWithJavaMathBigDecimal:(JavaMathBigDecimal *)multiplicand;

- (JavaMathBigDecimal *)multiplyWithJavaMathBigDecimal:(JavaMathBigDecimal *)multiplicand
                               withJavaMathMathContext:(JavaMathMathContext *)mc;

- (JavaMathBigDecimal *)divideWithJavaMathBigDecimal:(JavaMathBigDecimal *)divisor
                                             withInt:(jint)scale_
                                             withInt:(jint)roundingMode;

- (JavaMathBigDecimal *)divideWithJavaMathBigDecimal:(JavaMathBigDecimal *)divisor
                                             withInt:(jint)scale_
                        withJavaMathRoundingModeEnum:(JavaMathRoundingModeEnum *)roundingMode;

- (JavaMathBigDecimal *)divideWithJavaMathBigDecimal:(JavaMathBigDecimal *)divisor
                                             withInt:(jint)roundingMode;

- (JavaMathBigDecimal *)divideWithJavaMathBigDecimal:(JavaMathBigDecimal *)divisor
                        withJavaMathRoundingModeEnum:(JavaMathRoundingModeEnum *)roundingMode;

- (JavaMathBigDecimal *)divideWithJavaMathBigDecimal:(JavaMathBigDecimal *)divisor;

- (JavaMathBigDecimal *)divideWithJavaMathBigDecimal:(JavaMathBigDecimal *)divisor
                             withJavaMathMathContext:(JavaMathMathContext *)mc;

- (JavaMathBigDecimal *)divideToIntegralValueWithJavaMathBigDecimal:(JavaMathBigDecimal *)divisor;

- (JavaMathBigDecimal *)divideToIntegralValueWithJavaMathBigDecimal:(JavaMathBigDecimal *)divisor
                                            withJavaMathMathContext:(JavaMathMathContext *)mc;

- (JavaMathBigDecimal *)remainderWithJavaMathBigDecimal:(JavaMathBigDecimal *)divisor;

- (JavaMathBigDecimal *)remainderWithJavaMathBigDecimal:(JavaMathBigDecimal *)divisor
                                withJavaMathMathContext:(JavaMathMathContext *)mc;

- (IOSObjectArray *)divideAndRemainderWithJavaMathBigDecimal:(JavaMathBigDecimal *)divisor;

- (IOSObjectArray *)divideAndRemainderWithJavaMathBigDecimal:(JavaMathBigDecimal *)divisor
                                     withJavaMathMathContext:(JavaMathMathContext *)mc;

- (JavaMathBigDecimal *)powWithInt:(jint)n;

- (JavaMathBigDecimal *)powWithInt:(jint)n
           withJavaMathMathContext:(JavaMathMathContext *)mc;

- (JavaMathBigDecimal *)abs;

- (JavaMathBigDecimal *)absWithJavaMathMathContext:(JavaMathMathContext *)mc;

- (JavaMathBigDecimal *)negate;

- (JavaMathBigDecimal *)negateWithJavaMathMathContext:(JavaMathMathContext *)mc;

- (JavaMathBigDecimal *)plus;

- (JavaMathBigDecimal *)plusWithJavaMathMathContext:(JavaMathMathContext *)mc;

- (jint)signum;

- (jint)scale__;

- (jint)precision;

- (JavaMathBigInteger *)unscaledValue;

- (JavaMathBigDecimal *)roundWithJavaMathMathContext:(JavaMathMathContext *)mc;

- (JavaMathBigDecimal *)setScaleWithInt:(jint)newScale
           withJavaMathRoundingModeEnum:(JavaMathRoundingModeEnum *)roundingMode;

- (JavaMathBigDecimal *)setScaleWithInt:(jint)newScale
                                withInt:(jint)roundingMode;

- (JavaMathBigDecimal *)setScaleWithInt:(jint)newScale;

- (JavaMathBigDecimal *)movePointLeftWithInt:(jint)n;

- (JavaMathBigDecimal *)movePointRightWithInt:(jint)n;

- (JavaMathBigDecimal *)scaleByPowerOfTenWithInt:(jint)n;

- (JavaMathBigDecimal *)stripTrailingZeros;

- (jint)compareToWithId:(JavaMathBigDecimal *)val;

- (jboolean)isEqual:(id)x;

- (JavaMathBigDecimal *)minWithJavaMathBigDecimal:(JavaMathBigDecimal *)val;

- (JavaMathBigDecimal *)maxWithJavaMathBigDecimal:(JavaMathBigDecimal *)val;

- (NSUInteger)hash;

- (NSString *)description;

- (NSString *)toEngineeringString;

- (NSString *)toPlainString;

- (JavaMathBigInteger *)toBigInteger;

- (JavaMathBigInteger *)toBigIntegerExact;

- (jlong)longLongValue;

- (jlong)longValueExact;

- (jint)intValue;

- (jint)intValueExact;

- (jshort)shortValueExact;

- (jbyte)byteValueExact;

- (jfloat)floatValue;

- (jdouble)doubleValue;

- (JavaMathBigDecimal *)ulp;


@end

FOUNDATION_EXPORT BOOL JavaMathBigDecimal_initialized;
J2OBJC_STATIC_INIT(JavaMathBigDecimal)

CF_EXTERN_C_BEGIN

FOUNDATION_EXPORT JavaMathBigDecimal *JavaMathBigDecimal_valueOfWithLong_withInt_(jlong unscaledVal, jint scale_);

FOUNDATION_EXPORT JavaMathBigDecimal *JavaMathBigDecimal_valueOfWithLong_(jlong unscaledVal);

FOUNDATION_EXPORT JavaMathBigDecimal *JavaMathBigDecimal_valueOfWithDouble_(jdouble val);

FOUNDATION_EXPORT JavaMathBigDecimal *JavaMathBigDecimal_ZERO_;
J2OBJC_STATIC_FIELD_GETTER(JavaMathBigDecimal, ZERO_, JavaMathBigDecimal *)

FOUNDATION_EXPORT JavaMathBigDecimal *JavaMathBigDecimal_ONE_;
J2OBJC_STATIC_FIELD_GETTER(JavaMathBigDecimal, ONE_, JavaMathBigDecimal *)

FOUNDATION_EXPORT JavaMathBigDecimal *JavaMathBigDecimal_TEN_;
J2OBJC_STATIC_FIELD_GETTER(JavaMathBigDecimal, TEN_, JavaMathBigDecimal *)

J2OBJC_STATIC_FIELD_GETTER(JavaMathBigDecimal, ROUND_UP, jint)

J2OBJC_STATIC_FIELD_GETTER(JavaMathBigDecimal, ROUND_DOWN, jint)

J2OBJC_STATIC_FIELD_GETTER(JavaMathBigDecimal, ROUND_CEILING, jint)

J2OBJC_STATIC_FIELD_GETTER(JavaMathBigDecimal, ROUND_FLOOR, jint)

J2OBJC_STATIC_FIELD_GETTER(JavaMathBigDecimal, ROUND_HALF_UP, jint)

J2OBJC_STATIC_FIELD_GETTER(JavaMathBigDecimal, ROUND_HALF_DOWN, jint)

J2OBJC_STATIC_FIELD_GETTER(JavaMathBigDecimal, ROUND_HALF_EVEN, jint)

J2OBJC_STATIC_FIELD_GETTER(JavaMathBigDecimal, ROUND_UNNECESSARY, jint)

J2OBJC_STATIC_FIELD_GETTER(JavaMathBigDecimal, serialVersionUID, jlong)

J2OBJC_STATIC_FIELD_GETTER(JavaMathBigDecimal, LOG10_2, jdouble)

FOUNDATION_EXPORT IOSObjectArray *JavaMathBigDecimal_FIVE_POW_;
J2OBJC_STATIC_FIELD_GETTER(JavaMathBigDecimal, FIVE_POW_, IOSObjectArray *)

FOUNDATION_EXPORT IOSObjectArray *JavaMathBigDecimal_TEN_POW_;
J2OBJC_STATIC_FIELD_GETTER(JavaMathBigDecimal, TEN_POW_, IOSObjectArray *)

FOUNDATION_EXPORT IOSLongArray *JavaMathBigDecimal_LONG_TEN_POW_;
J2OBJC_STATIC_FIELD_GETTER(JavaMathBigDecimal, LONG_TEN_POW_, IOSLongArray *)

FOUNDATION_EXPORT IOSLongArray *JavaMathBigDecimal_LONG_FIVE_POW_;
J2OBJC_STATIC_FIELD_GETTER(JavaMathBigDecimal, LONG_FIVE_POW_, IOSLongArray *)

FOUNDATION_EXPORT IOSIntArray *JavaMathBigDecimal_LONG_FIVE_POW_BIT_LENGTH_;
J2OBJC_STATIC_FIELD_GETTER(JavaMathBigDecimal, LONG_FIVE_POW_BIT_LENGTH_, IOSIntArray *)

FOUNDATION_EXPORT IOSIntArray *JavaMathBigDecimal_LONG_TEN_POW_BIT_LENGTH_;
J2OBJC_STATIC_FIELD_GETTER(JavaMathBigDecimal, LONG_TEN_POW_BIT_LENGTH_, IOSIntArray *)

J2OBJC_STATIC_FIELD_GETTER(JavaMathBigDecimal, BI_SCALED_BY_ZERO_LENGTH, jint)

FOUNDATION_EXPORT IOSObjectArray *JavaMathBigDecimal_BI_SCALED_BY_ZERO_;
J2OBJC_STATIC_FIELD_GETTER(JavaMathBigDecimal, BI_SCALED_BY_ZERO_, IOSObjectArray *)

FOUNDATION_EXPORT IOSObjectArray *JavaMathBigDecimal_ZERO_SCALED_BY_;
J2OBJC_STATIC_FIELD_GETTER(JavaMathBigDecimal, ZERO_SCALED_BY_, IOSObjectArray *)

FOUNDATION_EXPORT IOSCharArray *JavaMathBigDecimal_CH_ZEROS_;
J2OBJC_STATIC_FIELD_GETTER(JavaMathBigDecimal, CH_ZEROS_, IOSCharArray *)
CF_EXTERN_C_END

J2OBJC_TYPE_LITERAL_HEADER(JavaMathBigDecimal)

#endif // _JavaMathBigDecimal_H_
