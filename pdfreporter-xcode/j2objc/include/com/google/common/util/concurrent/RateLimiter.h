//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/krasnocka/Downloads/j2objc-master/guava/sources/com/google/common/util/concurrent/RateLimiter.java
//

#include "J2ObjC_header.h"

#if !ComGoogleCommonUtilConcurrentRateLimiter_RESTRICT
#define ComGoogleCommonUtilConcurrentRateLimiter_INCLUDE_ALL 1
#endif
#undef ComGoogleCommonUtilConcurrentRateLimiter_RESTRICT
#if ComGoogleCommonUtilConcurrentRateLimiter_SleepingTicker_$1_INCLUDE
#define ComGoogleCommonUtilConcurrentRateLimiter_SleepingTicker_INCLUDE 1
#endif
#if ComGoogleCommonUtilConcurrentRateLimiter_Bursty_INCLUDE
#define ComGoogleCommonUtilConcurrentRateLimiter_INCLUDE 1
#endif
#if ComGoogleCommonUtilConcurrentRateLimiter_WarmingUp_INCLUDE
#define ComGoogleCommonUtilConcurrentRateLimiter_INCLUDE 1
#endif
#if !defined (_ComGoogleCommonUtilConcurrentRateLimiter_) && (ComGoogleCommonUtilConcurrentRateLimiter_INCLUDE_ALL || ComGoogleCommonUtilConcurrentRateLimiter_INCLUDE)
#define _ComGoogleCommonUtilConcurrentRateLimiter_

@class ComGoogleCommonUtilConcurrentRateLimiter_SleepingTicker;
@class JavaUtilConcurrentTimeUnitEnum;


@interface ComGoogleCommonUtilConcurrentRateLimiter : NSObject {
 @public
  jdouble storedPermits_;
  jdouble maxPermits_;
  jdouble stableIntervalMicros_;
}

+ (ComGoogleCommonUtilConcurrentRateLimiter *)createWithDouble:(jdouble)permitsPerSecond;

+ (ComGoogleCommonUtilConcurrentRateLimiter *)createWithComGoogleCommonUtilConcurrentRateLimiter_SleepingTicker:(ComGoogleCommonUtilConcurrentRateLimiter_SleepingTicker *)ticker
                                                                                                     withDouble:(jdouble)permitsPerSecond;

+ (ComGoogleCommonUtilConcurrentRateLimiter *)createWithDouble:(jdouble)permitsPerSecond
                                                      withLong:(jlong)warmupPeriod
                            withJavaUtilConcurrentTimeUnitEnum:(JavaUtilConcurrentTimeUnitEnum *)unit;

+ (ComGoogleCommonUtilConcurrentRateLimiter *)createWithComGoogleCommonUtilConcurrentRateLimiter_SleepingTicker:(ComGoogleCommonUtilConcurrentRateLimiter_SleepingTicker *)ticker
                                                                                                     withDouble:(jdouble)permitsPerSecond
                                                                                                       withLong:(jlong)warmupPeriod
                                                                             withJavaUtilConcurrentTimeUnitEnum:(JavaUtilConcurrentTimeUnitEnum *)timeUnit;

+ (ComGoogleCommonUtilConcurrentRateLimiter *)createBurstyWithComGoogleCommonUtilConcurrentRateLimiter_SleepingTicker:(ComGoogleCommonUtilConcurrentRateLimiter_SleepingTicker *)ticker
                                                                                                           withDouble:(jdouble)permitsPerSecond
                                                                                                              withInt:(jint)maxBurstSize;

- (void)setRateWithDouble:(jdouble)permitsPerSecond;

- (void)doSetRateWithDouble:(jdouble)permitsPerSecond
                 withDouble:(jdouble)stableIntervalMicros;

- (jdouble)getRate;

- (void)acquire;

- (void)acquireWithInt:(jint)permits;

- (jboolean)tryAcquireWithLong:(jlong)timeout
withJavaUtilConcurrentTimeUnitEnum:(JavaUtilConcurrentTimeUnitEnum *)unit;

- (jboolean)tryAcquireWithInt:(jint)permits;

- (jboolean)tryAcquire;

- (jboolean)tryAcquireWithInt:(jint)permits
                     withLong:(jlong)timeout
withJavaUtilConcurrentTimeUnitEnum:(JavaUtilConcurrentTimeUnitEnum *)unit;

- (jlong)storedPermitsToWaitTimeWithDouble:(jdouble)storedPermits
                                withDouble:(jdouble)permitsToTake;

- (NSString *)description;

@end

J2OBJC_EMPTY_STATIC_INIT(ComGoogleCommonUtilConcurrentRateLimiter)

CF_EXTERN_C_BEGIN

FOUNDATION_EXPORT ComGoogleCommonUtilConcurrentRateLimiter *ComGoogleCommonUtilConcurrentRateLimiter_createWithDouble_(jdouble permitsPerSecond);

FOUNDATION_EXPORT ComGoogleCommonUtilConcurrentRateLimiter *ComGoogleCommonUtilConcurrentRateLimiter_createWithComGoogleCommonUtilConcurrentRateLimiter_SleepingTicker_withDouble_(ComGoogleCommonUtilConcurrentRateLimiter_SleepingTicker *ticker, jdouble permitsPerSecond);

FOUNDATION_EXPORT ComGoogleCommonUtilConcurrentRateLimiter *ComGoogleCommonUtilConcurrentRateLimiter_createWithDouble_withLong_withJavaUtilConcurrentTimeUnitEnum_(jdouble permitsPerSecond, jlong warmupPeriod, JavaUtilConcurrentTimeUnitEnum *unit);

FOUNDATION_EXPORT ComGoogleCommonUtilConcurrentRateLimiter *ComGoogleCommonUtilConcurrentRateLimiter_createWithComGoogleCommonUtilConcurrentRateLimiter_SleepingTicker_withDouble_withLong_withJavaUtilConcurrentTimeUnitEnum_(ComGoogleCommonUtilConcurrentRateLimiter_SleepingTicker *ticker, jdouble permitsPerSecond, jlong warmupPeriod, JavaUtilConcurrentTimeUnitEnum *timeUnit);

FOUNDATION_EXPORT ComGoogleCommonUtilConcurrentRateLimiter *ComGoogleCommonUtilConcurrentRateLimiter_createBurstyWithComGoogleCommonUtilConcurrentRateLimiter_SleepingTicker_withDouble_withInt_(ComGoogleCommonUtilConcurrentRateLimiter_SleepingTicker *ticker, jdouble permitsPerSecond, jint maxBurstSize);
CF_EXTERN_C_END
#endif

J2OBJC_TYPE_LITERAL_HEADER(ComGoogleCommonUtilConcurrentRateLimiter)
#if !defined (_ComGoogleCommonUtilConcurrentRateLimiter_WarmingUp_) && (ComGoogleCommonUtilConcurrentRateLimiter_INCLUDE_ALL || ComGoogleCommonUtilConcurrentRateLimiter_WarmingUp_INCLUDE)
#define _ComGoogleCommonUtilConcurrentRateLimiter_WarmingUp_

@class ComGoogleCommonUtilConcurrentRateLimiter_SleepingTicker;
@class JavaUtilConcurrentTimeUnitEnum;


@interface ComGoogleCommonUtilConcurrentRateLimiter_WarmingUp : ComGoogleCommonUtilConcurrentRateLimiter {
 @public
  jlong warmupPeriodMicros_;
}

- (instancetype)initWithComGoogleCommonUtilConcurrentRateLimiter_SleepingTicker:(ComGoogleCommonUtilConcurrentRateLimiter_SleepingTicker *)ticker
                                                                       withLong:(jlong)warmupPeriod
                                             withJavaUtilConcurrentTimeUnitEnum:(JavaUtilConcurrentTimeUnitEnum *)timeUnit;

- (void)doSetRateWithDouble:(jdouble)permitsPerSecond
                 withDouble:(jdouble)stableIntervalMicros;

- (jlong)storedPermitsToWaitTimeWithDouble:(jdouble)storedPermits
                                withDouble:(jdouble)permitsToTake;

@end

J2OBJC_EMPTY_STATIC_INIT(ComGoogleCommonUtilConcurrentRateLimiter_WarmingUp)

CF_EXTERN_C_BEGIN
CF_EXTERN_C_END
#endif

J2OBJC_TYPE_LITERAL_HEADER(ComGoogleCommonUtilConcurrentRateLimiter_WarmingUp)
#if !defined (_ComGoogleCommonUtilConcurrentRateLimiter_Bursty_) && (ComGoogleCommonUtilConcurrentRateLimiter_INCLUDE_ALL || ComGoogleCommonUtilConcurrentRateLimiter_Bursty_INCLUDE)
#define _ComGoogleCommonUtilConcurrentRateLimiter_Bursty_

@class ComGoogleCommonUtilConcurrentRateLimiter_SleepingTicker;


@interface ComGoogleCommonUtilConcurrentRateLimiter_Bursty : ComGoogleCommonUtilConcurrentRateLimiter {
}

- (instancetype)initWithComGoogleCommonUtilConcurrentRateLimiter_SleepingTicker:(ComGoogleCommonUtilConcurrentRateLimiter_SleepingTicker *)ticker;

- (void)doSetRateWithDouble:(jdouble)permitsPerSecond
                 withDouble:(jdouble)stableIntervalMicros;

- (jlong)storedPermitsToWaitTimeWithDouble:(jdouble)storedPermits
                                withDouble:(jdouble)permitsToTake;

@end

J2OBJC_EMPTY_STATIC_INIT(ComGoogleCommonUtilConcurrentRateLimiter_Bursty)

CF_EXTERN_C_BEGIN
CF_EXTERN_C_END
#endif

J2OBJC_TYPE_LITERAL_HEADER(ComGoogleCommonUtilConcurrentRateLimiter_Bursty)
#if !defined (_ComGoogleCommonUtilConcurrentRateLimiter_SleepingTicker_) && (ComGoogleCommonUtilConcurrentRateLimiter_INCLUDE_ALL || ComGoogleCommonUtilConcurrentRateLimiter_SleepingTicker_INCLUDE)
#define _ComGoogleCommonUtilConcurrentRateLimiter_SleepingTicker_

#define ComGoogleCommonBaseTicker_RESTRICT 1
#define ComGoogleCommonBaseTicker_INCLUDE 1
#include "com/google/common/base/Ticker.h"


@interface ComGoogleCommonUtilConcurrentRateLimiter_SleepingTicker : ComGoogleCommonBaseTicker {
}

- (void)sleepMicrosUninterruptiblyWithLong:(jlong)micros;

- (instancetype)init;

@end

FOUNDATION_EXPORT BOOL ComGoogleCommonUtilConcurrentRateLimiter_SleepingTicker_initialized;
J2OBJC_STATIC_INIT(ComGoogleCommonUtilConcurrentRateLimiter_SleepingTicker)

CF_EXTERN_C_BEGIN

FOUNDATION_EXPORT ComGoogleCommonUtilConcurrentRateLimiter_SleepingTicker *ComGoogleCommonUtilConcurrentRateLimiter_SleepingTicker_SYSTEM_TICKER_;
J2OBJC_STATIC_FIELD_GETTER(ComGoogleCommonUtilConcurrentRateLimiter_SleepingTicker, SYSTEM_TICKER_, ComGoogleCommonUtilConcurrentRateLimiter_SleepingTicker *)
CF_EXTERN_C_END
#endif

J2OBJC_TYPE_LITERAL_HEADER(ComGoogleCommonUtilConcurrentRateLimiter_SleepingTicker)
#if !defined (_ComGoogleCommonUtilConcurrentRateLimiter_SleepingTicker_$1_) && (ComGoogleCommonUtilConcurrentRateLimiter_INCLUDE_ALL || ComGoogleCommonUtilConcurrentRateLimiter_SleepingTicker_$1_INCLUDE)
#define _ComGoogleCommonUtilConcurrentRateLimiter_SleepingTicker_$1_


@interface ComGoogleCommonUtilConcurrentRateLimiter_SleepingTicker_$1 : ComGoogleCommonUtilConcurrentRateLimiter_SleepingTicker {
}

- (jlong)read;

- (void)sleepMicrosUninterruptiblyWithLong:(jlong)micros;

- (instancetype)init;

@end

J2OBJC_EMPTY_STATIC_INIT(ComGoogleCommonUtilConcurrentRateLimiter_SleepingTicker_$1)

CF_EXTERN_C_BEGIN
CF_EXTERN_C_END
#endif

J2OBJC_TYPE_LITERAL_HEADER(ComGoogleCommonUtilConcurrentRateLimiter_SleepingTicker_$1)
