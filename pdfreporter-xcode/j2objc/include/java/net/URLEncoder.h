//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/libcore/luni/src/main/java/java/net/URLEncoder.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_JavaNetURLEncoder")
#ifdef RESTRICT_JavaNetURLEncoder
#define INCLUDE_ALL_JavaNetURLEncoder 0
#else
#define INCLUDE_ALL_JavaNetURLEncoder 1
#endif
#undef RESTRICT_JavaNetURLEncoder

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if !defined (JavaNetURLEncoder_) && (INCLUDE_ALL_JavaNetURLEncoder || defined(INCLUDE_JavaNetURLEncoder))
#define JavaNetURLEncoder_

@class IOSObjectArray;
@class LibcoreNetUriCodec;

/*!
 @brief This class is used to encode a string using the format required by
 <code>application/x-www-form-urlencoded</code> MIME content type.
 <p>All characters except letters ('a'..'z', 'A'..'Z') and numbers ('0'..'9')
 and characters '.', '-', '*', '_' are converted into their hexadecimal value
 prepended by '%'. For example: '#' -> %23. In addition, spaces are
 substituted by '+'.
 */
@interface JavaNetURLEncoder : NSObject

+ (LibcoreNetUriCodec *)ENCODER;

+ (void)setENCODER:(LibcoreNetUriCodec *)value;

#pragma mark Public

/*!
 @brief Equivalent to <code>encode(s, "UTF-8")</code>.
 */
+ (NSString *)encodeWithNSString:(NSString *)s __attribute__((deprecated));

/*!
 @brief Encodes <code>s</code> using the <code>Charset</code> named by <code>charsetName</code>.
 */
+ (NSString *)encodeWithNSString:(NSString *)s
                    withNSString:(NSString *)charsetName;

@end

J2OBJC_STATIC_INIT(JavaNetURLEncoder)

inline LibcoreNetUriCodec *JavaNetURLEncoder_get_ENCODER();
inline LibcoreNetUriCodec *JavaNetURLEncoder_set_ENCODER(LibcoreNetUriCodec *value);
/*! INTERNAL ONLY - Use accessor function from above. */
FOUNDATION_EXPORT LibcoreNetUriCodec *JavaNetURLEncoder_ENCODER;
J2OBJC_STATIC_FIELD_OBJ(JavaNetURLEncoder, ENCODER, LibcoreNetUriCodec *)

FOUNDATION_EXPORT NSString *JavaNetURLEncoder_encodeWithNSString_(NSString *s);

FOUNDATION_EXPORT NSString *JavaNetURLEncoder_encodeWithNSString_withNSString_(NSString *s, NSString *charsetName);

J2OBJC_TYPE_LITERAL_HEADER(JavaNetURLEncoder)

#endif


#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_JavaNetURLEncoder")
