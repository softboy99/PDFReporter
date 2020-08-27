//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/libcore/luni/src/main/java/java/util/zip/Adler32.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_JavaUtilZipAdler32")
#ifdef RESTRICT_JavaUtilZipAdler32
#define INCLUDE_ALL_JavaUtilZipAdler32 0
#else
#define INCLUDE_ALL_JavaUtilZipAdler32 1
#endif
#undef RESTRICT_JavaUtilZipAdler32

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if !defined (JavaUtilZipAdler32_) && (INCLUDE_ALL_JavaUtilZipAdler32 || defined(INCLUDE_JavaUtilZipAdler32))
#define JavaUtilZipAdler32_

#define RESTRICT_JavaUtilZipChecksum 1
#define INCLUDE_JavaUtilZipChecksum 1
#include "java/util/zip/Checksum.h"

@class IOSByteArray;

/*!
 @brief The Adler-32 class is used to compute the <code>Adler32</code> checksum from a set
 of data.
 Compared to <code>CRC32</code> it trades reliability for speed.
 Refer to RFC 1950 for the specification.
 */
@interface JavaUtilZipAdler32 : NSObject < JavaUtilZipChecksum >

#pragma mark Public

- (instancetype)init;

/*!
 @brief Returns the <code>Adler32</code> checksum for all input received.
 @return The checksum for this instance.
 */
- (jlong)getValue;

/*!
 @brief Reset this instance to its initial checksum.
 */
- (void)reset;

/*!
 @brief Update this <code>Adler32</code> checksum using the contents of <code>buf</code>.
 @param buf
 bytes to update checksum with.
 */
- (void)updateWithByteArray:(IOSByteArray *)buf;

/*!
 @brief Update this <code>Adler32</code> checksum with the contents of <code>buf</code>,
 starting from <code>offset</code> and reading <code>byteCount</code> bytes of data.
 */
- (void)updateWithByteArray:(IOSByteArray *)buf
                    withInt:(jint)offset
                    withInt:(jint)byteCount;

/*!
 @brief Update this <code>Adler32</code> checksum with the single byte provided as
 argument.
 @param i
 the byte to update checksum with.
 */
- (void)updateWithInt:(jint)i;

@end

J2OBJC_EMPTY_STATIC_INIT(JavaUtilZipAdler32)

FOUNDATION_EXPORT void JavaUtilZipAdler32_init(JavaUtilZipAdler32 *self);

FOUNDATION_EXPORT JavaUtilZipAdler32 *new_JavaUtilZipAdler32_init() NS_RETURNS_RETAINED;

FOUNDATION_EXPORT JavaUtilZipAdler32 *create_JavaUtilZipAdler32_init();

J2OBJC_TYPE_LITERAL_HEADER(JavaUtilZipAdler32)

#endif


#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_JavaUtilZipAdler32")
