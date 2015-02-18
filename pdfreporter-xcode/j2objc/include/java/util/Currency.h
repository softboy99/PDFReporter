//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/libcore/luni/src/main/java/java/util/Currency.java
//

#ifndef _JavaUtilCurrency_H_
#define _JavaUtilCurrency_H_

@class JavaUtilHashMap;
@class JavaUtilLocale;
@protocol JavaUtilSet;

#include "J2ObjC_header.h"
#include "java/io/Serializable.h"

#define JavaUtilCurrency_serialVersionUID -158308464356906721LL

@interface JavaUtilCurrency : NSObject < JavaIoSerializable > {
}

+ (JavaUtilCurrency *)getInstanceWithNSString:(NSString *)currencyCode;

+ (JavaUtilCurrency *)getInstanceWithJavaUtilLocale:(JavaUtilLocale *)locale;

+ (id<JavaUtilSet>)getAvailableCurrencies;

- (NSString *)getCurrencyCode;

- (NSString *)getSymbol;

- (NSString *)getSymbolWithJavaUtilLocale:(JavaUtilLocale *)locale;

- (jint)getDefaultFractionDigits;

- (NSString *)description;

@end

FOUNDATION_EXPORT BOOL JavaUtilCurrency_initialized;
J2OBJC_STATIC_INIT(JavaUtilCurrency)

CF_EXTERN_C_BEGIN

FOUNDATION_EXPORT JavaUtilCurrency *JavaUtilCurrency_getInstanceWithNSString_(NSString *currencyCode);

FOUNDATION_EXPORT JavaUtilCurrency *JavaUtilCurrency_getInstanceWithJavaUtilLocale_(JavaUtilLocale *locale);

FOUNDATION_EXPORT id<JavaUtilSet> JavaUtilCurrency_getAvailableCurrencies();

J2OBJC_STATIC_FIELD_GETTER(JavaUtilCurrency, serialVersionUID, jlong)

FOUNDATION_EXPORT JavaUtilHashMap *JavaUtilCurrency_codesToCurrencies_;
J2OBJC_STATIC_FIELD_GETTER(JavaUtilCurrency, codesToCurrencies_, JavaUtilHashMap *)

FOUNDATION_EXPORT JavaUtilHashMap *JavaUtilCurrency_localesToCurrencies_;
J2OBJC_STATIC_FIELD_GETTER(JavaUtilCurrency, localesToCurrencies_, JavaUtilHashMap *)
CF_EXTERN_C_END

J2OBJC_TYPE_LITERAL_HEADER(JavaUtilCurrency)

#endif // _JavaUtilCurrency_H_