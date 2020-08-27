//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/libcore/luni/src/main/java/java/sql/DriverPropertyInfo.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_JavaSqlDriverPropertyInfo")
#ifdef RESTRICT_JavaSqlDriverPropertyInfo
#define INCLUDE_ALL_JavaSqlDriverPropertyInfo 0
#else
#define INCLUDE_ALL_JavaSqlDriverPropertyInfo 1
#endif
#undef RESTRICT_JavaSqlDriverPropertyInfo

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if !defined (JavaSqlDriverPropertyInfo_) && (INCLUDE_ALL_JavaSqlDriverPropertyInfo || defined(INCLUDE_JavaSqlDriverPropertyInfo))
#define JavaSqlDriverPropertyInfo_

@class IOSObjectArray;

/*!
 @brief A class holding information about driver properties of a database connection.
 This class is returned by the
 <code>Driver.getPropertyInfo(String,java.util.Properties)</code> method and
 allows for the advanced connection handling.
 */
@interface JavaSqlDriverPropertyInfo : NSObject {
 @public
  /*!
   @brief If the value member can be chosen from a set of possible values, they are
 contained here.
   Otherwise choices is <code>null</code>.
   */
  IOSObjectArray *choices_;
  /*!
   @brief A description of the property.
   May be <code>null</code>.
   */
  NSString *description__;
  /*!
   @brief The name of the property.
   */
  NSString *name_;
  /*!
   @brief <code>true</code> when the value member must be provided during <code>Driver.connect</code>
 .
   <code>false</code> otherwise.
   */
  jboolean required_;
  /*!
   @brief The current value associated with this property.
   It is depending on the
 data gathered by the <code>getPropertyInfo</code> method, the general Java
 environment and the driver's default values.
   */
  NSString *value_;
}

#pragma mark Public

/*!
 @brief Creates a <code>DriverPropertyInfo</code> instance with the supplied name and
 value.
 Other class members take their default values.
 @param name
 The property name.
 @param value
 The property value.
 */
- (instancetype)initWithNSString:(NSString *)name
                    withNSString:(NSString *)value;

@end

J2OBJC_EMPTY_STATIC_INIT(JavaSqlDriverPropertyInfo)

J2OBJC_FIELD_SETTER(JavaSqlDriverPropertyInfo, choices_, IOSObjectArray *)
J2OBJC_FIELD_SETTER(JavaSqlDriverPropertyInfo, description__, NSString *)
J2OBJC_FIELD_SETTER(JavaSqlDriverPropertyInfo, name_, NSString *)
J2OBJC_FIELD_SETTER(JavaSqlDriverPropertyInfo, value_, NSString *)

FOUNDATION_EXPORT void JavaSqlDriverPropertyInfo_initWithNSString_withNSString_(JavaSqlDriverPropertyInfo *self, NSString *name, NSString *value);

FOUNDATION_EXPORT JavaSqlDriverPropertyInfo *new_JavaSqlDriverPropertyInfo_initWithNSString_withNSString_(NSString *name, NSString *value) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT JavaSqlDriverPropertyInfo *create_JavaSqlDriverPropertyInfo_initWithNSString_withNSString_(NSString *name, NSString *value);

J2OBJC_TYPE_LITERAL_HEADER(JavaSqlDriverPropertyInfo)

#endif


#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_JavaSqlDriverPropertyInfo")
