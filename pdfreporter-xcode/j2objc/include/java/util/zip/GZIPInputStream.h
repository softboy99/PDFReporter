//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/libcore/luni/src/main/java/java/util/zip/GZIPInputStream.java
//

#ifndef _JavaUtilZipGZIPInputStream_H_
#define _JavaUtilZipGZIPInputStream_H_

@class IOSByteArray;
@class JavaIoInputStream;
@class JavaUtilZipCRC32;

#include "J2ObjC_header.h"
#include "java/util/zip/InflaterInputStream.h"

#define JavaUtilZipGZIPInputStream_FCOMMENT 16
#define JavaUtilZipGZIPInputStream_FEXTRA 4
#define JavaUtilZipGZIPInputStream_FHCRC 2
#define JavaUtilZipGZIPInputStream_FNAME 8
#define JavaUtilZipGZIPInputStream_GZIP_MAGIC 35615
#define JavaUtilZipGZIPInputStream_GZIP_TRAILER_SIZE 8

@interface JavaUtilZipGZIPInputStream : JavaUtilZipInflaterInputStream {
 @public
  JavaUtilZipCRC32 *crc_;
  jboolean eos_;
}

- (instancetype)initWithJavaIoInputStream:(JavaIoInputStream *)is;

- (instancetype)initWithJavaIoInputStream:(JavaIoInputStream *)is
                                  withInt:(jint)size;

- (void)close;

- (jint)readWithByteArray:(IOSByteArray *)buffer
                  withInt:(jint)byteOffset
                  withInt:(jint)byteCount;

@end

J2OBJC_EMPTY_STATIC_INIT(JavaUtilZipGZIPInputStream)

J2OBJC_FIELD_SETTER(JavaUtilZipGZIPInputStream, crc_, JavaUtilZipCRC32 *)

CF_EXTERN_C_BEGIN

J2OBJC_STATIC_FIELD_GETTER(JavaUtilZipGZIPInputStream, FCOMMENT, jint)

J2OBJC_STATIC_FIELD_GETTER(JavaUtilZipGZIPInputStream, FEXTRA, jint)

J2OBJC_STATIC_FIELD_GETTER(JavaUtilZipGZIPInputStream, FHCRC, jint)

J2OBJC_STATIC_FIELD_GETTER(JavaUtilZipGZIPInputStream, FNAME, jint)

J2OBJC_STATIC_FIELD_GETTER(JavaUtilZipGZIPInputStream, GZIP_TRAILER_SIZE, jint)

J2OBJC_STATIC_FIELD_GETTER(JavaUtilZipGZIPInputStream, GZIP_MAGIC, jint)
CF_EXTERN_C_END

J2OBJC_TYPE_LITERAL_HEADER(JavaUtilZipGZIPInputStream)

#endif // _JavaUtilZipGZIPInputStream_H_
