//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/libcore/luni/src/main/java/java/util/zip/Checksum.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_JavaUtilZipChecksum")
#ifdef RESTRICT_JavaUtilZipChecksum
#define INCLUDE_ALL_JavaUtilZipChecksum 0
#else
#define INCLUDE_ALL_JavaUtilZipChecksum 1
#endif
#undef RESTRICT_JavaUtilZipChecksum

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if !defined (JavaUtilZipChecksum_) && (INCLUDE_ALL_JavaUtilZipChecksum || defined(INCLUDE_JavaUtilZipChecksum))
#define JavaUtilZipChecksum_

@class IOSByteArray;

/*!
 @brief The interface common to checksum classes such as <code>Adler32</code> and <code>CRC32</code>.
 */
@protocol JavaUtilZipChecksum < NSObject, JavaObject >

/*!
 @brief Returns the current calculated checksum value.
 @return the checksum.
 */
- (jlong)getValue;

/*!
 @brief Resets the checksum value applied before beginning calculations on a new
 stream of data.
 */
- (void)reset;

/*!
 @brief Updates the checksum with the given bytes.
 @param buf
 the byte array from which to read the bytes.
 @param off
 the initial position in <code>buf</code> to read the bytes from.
 @param nbytes
 the number of bytes to read from <code>buf</code>.
 */
- (void)updateWithByteArray:(IOSByteArray *)buf
                    withInt:(jint)off
                    withInt:(jint)nbytes;

/*!
 @brief Updates the checksum value with the given byte.
 @param val
 the byte to update the checksum with.
 */
- (void)updateWithInt:(jint)val;

@end

J2OBJC_EMPTY_STATIC_INIT(JavaUtilZipChecksum)

J2OBJC_TYPE_LITERAL_HEADER(JavaUtilZipChecksum)

#endif


#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_JavaUtilZipChecksum")
