//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/libcore/luni/src/main/java/java/io/ByteArrayInputStream.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_JavaIoByteArrayInputStream")
#ifdef RESTRICT_JavaIoByteArrayInputStream
#define INCLUDE_ALL_JavaIoByteArrayInputStream 0
#else
#define INCLUDE_ALL_JavaIoByteArrayInputStream 1
#endif
#undef RESTRICT_JavaIoByteArrayInputStream

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if !defined (JavaIoByteArrayInputStream_) && (INCLUDE_ALL_JavaIoByteArrayInputStream || defined(INCLUDE_JavaIoByteArrayInputStream))
#define JavaIoByteArrayInputStream_

#define RESTRICT_JavaIoInputStream 1
#define INCLUDE_JavaIoInputStream 1
#include "java/io/InputStream.h"

@class IOSByteArray;

/*!
 @brief A specialized <code>InputStream</code> for reading the contents of a byte array.
 - seealso: ByteArrayOutputStream
 */
@interface JavaIoByteArrayInputStream : JavaIoInputStream {
 @public
  /*!
   @brief The <code>byte</code> array containing the bytes to stream over.
   */
  IOSByteArray *buf_;
  /*!
   @brief The current position within the byte array.
   */
  jint pos_;
  /*!
   @brief The current mark position.
   Initially set to 0 or the <code>offset</code>
 parameter within the constructor.
   */
  jint mark_;
  /*!
   @brief The total number of bytes initially available in the byte array
 <code>buf</code>.
   */
  jint count_;
}

#pragma mark Public

/*!
 @brief Constructs a new <code>ByteArrayInputStream</code> on the byte array
 <code>buf</code>.
 @param buf
 the byte array to stream over.
 */
- (instancetype)initWithByteArray:(IOSByteArray *)buf;

/*!
 @brief Constructs a new <code>ByteArrayInputStream</code> on the byte array
 <code>buf</code> with the initial position set to <code>offset</code> and the
 number of bytes available set to <code>offset</code> + <code>length</code>.
 @param buf
 the byte array to stream over.
 @param offset
 the initial position in <code>buf</code> to start streaming from.
 @param length
 the number of bytes available for streaming.
 */
- (instancetype)initWithByteArray:(IOSByteArray *)buf
                          withInt:(jint)offset
                          withInt:(jint)length;

/*!
 @brief Returns the number of remaining bytes.
 @return <code>count - pos</code>
 */
- (jint)available;

/*!
 @brief Closes this stream and frees resources associated with this stream.
 @throws IOException
 if an I/O error occurs while closing this stream.
 */
- (void)close;

/*!
 @brief Sets a mark position in this ByteArrayInputStream.
 The parameter
 <code>readlimit</code> is ignored. Sending <code>reset()</code> will reposition the
 stream back to the marked position.
 @param readlimit
 ignored.
 - seealso: #markSupported()
 - seealso: #reset()
 */
- (void)markWithInt:(jint)readlimit;

/*!
 @brief Indicates whether this stream supports the <code>mark()</code> and
 <code>reset()</code> methods.
 Returns <code>true</code> since this class supports
 these methods.
 @return always <code>true</code>.
 - seealso: #mark(int)
 - seealso: #reset()
 */
- (jboolean)markSupported;

/*!
 @brief Reads a single byte from the source byte array and returns it as an
 integer in the range from 0 to 255.
 Returns -1 if the end of the source
 array has been reached.
 @return the byte read or -1 if the end of this stream has been reached.
 */
- (jint)read;

- (jint)readWithByteArray:(IOSByteArray *)buffer
                  withInt:(jint)byteOffset
                  withInt:(jint)byteCount;

/*!
 @brief Resets this stream to the last marked location.
 This implementation
 resets the position to either the marked position, the start position
 supplied in the constructor or 0 if neither has been provided.
 - seealso: #mark(int)
 */
- (void)reset;

/*!
 @brief Skips <code>byteCount</code> bytes in this InputStream.
 Subsequent
 calls to <code>read</code> will not return these bytes unless <code>reset</code> is
 used. This implementation skips <code>byteCount</code> number of bytes in the
 target stream. It does nothing and returns 0 if <code>byteCount</code> is negative.
 @return the number of bytes actually skipped.
 */
- (jlong)skipWithLong:(jlong)byteCount;

@end

J2OBJC_EMPTY_STATIC_INIT(JavaIoByteArrayInputStream)

J2OBJC_FIELD_SETTER(JavaIoByteArrayInputStream, buf_, IOSByteArray *)

FOUNDATION_EXPORT void JavaIoByteArrayInputStream_initWithByteArray_(JavaIoByteArrayInputStream *self, IOSByteArray *buf);

FOUNDATION_EXPORT JavaIoByteArrayInputStream *new_JavaIoByteArrayInputStream_initWithByteArray_(IOSByteArray *buf) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT JavaIoByteArrayInputStream *create_JavaIoByteArrayInputStream_initWithByteArray_(IOSByteArray *buf);

FOUNDATION_EXPORT void JavaIoByteArrayInputStream_initWithByteArray_withInt_withInt_(JavaIoByteArrayInputStream *self, IOSByteArray *buf, jint offset, jint length);

FOUNDATION_EXPORT JavaIoByteArrayInputStream *new_JavaIoByteArrayInputStream_initWithByteArray_withInt_withInt_(IOSByteArray *buf, jint offset, jint length) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT JavaIoByteArrayInputStream *create_JavaIoByteArrayInputStream_initWithByteArray_withInt_withInt_(IOSByteArray *buf, jint offset, jint length);

J2OBJC_TYPE_LITERAL_HEADER(JavaIoByteArrayInputStream)

#endif


#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_JavaIoByteArrayInputStream")
