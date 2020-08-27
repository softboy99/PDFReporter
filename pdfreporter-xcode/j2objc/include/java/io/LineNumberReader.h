//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/libcore/luni/src/main/java/java/io/LineNumberReader.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_JavaIoLineNumberReader")
#ifdef RESTRICT_JavaIoLineNumberReader
#define INCLUDE_ALL_JavaIoLineNumberReader 0
#else
#define INCLUDE_ALL_JavaIoLineNumberReader 1
#endif
#undef RESTRICT_JavaIoLineNumberReader

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if !defined (JavaIoLineNumberReader_) && (INCLUDE_ALL_JavaIoLineNumberReader || defined(INCLUDE_JavaIoLineNumberReader))
#define JavaIoLineNumberReader_

#define RESTRICT_JavaIoBufferedReader 1
#define INCLUDE_JavaIoBufferedReader 1
#include "java/io/BufferedReader.h"

@class IOSCharArray;
@class JavaIoReader;

/*!
 @brief Wraps an existing <code>Reader</code> and counts the line terminators encountered
 while reading the data.
 The line number starts at 0 and is incremented any
 time <code>'\r'</code>, <code>'\n'</code> or <code>"\r\n"</code> is read. The class has an
 internal buffer for its data. The size of the buffer defaults to 8 KB.
 */
@interface JavaIoLineNumberReader : JavaIoBufferedReader

#pragma mark Public

/*!
 @brief Constructs a new LineNumberReader on the Reader <code>in</code>.
 The internal
 buffer gets the default size (8 KB).
 @param inArg
 the Reader that is buffered.
 */
- (instancetype)initWithJavaIoReader:(JavaIoReader *)inArg;

/*!
 @brief Constructs a new LineNumberReader on the Reader <code>in</code>.
 The size of
 the internal buffer is specified by the parameter <code>size</code>.
 @param inArg
 the Reader that is buffered.
 @param size
 the size of the buffer to allocate.
 @throws IllegalArgumentException
 if <code>size <= 0</code>.
 */
- (instancetype)initWithJavaIoReader:(JavaIoReader *)inArg
                             withInt:(jint)size;

/*!
 @brief Returns the current line number for this reader.
 Numbering starts at 0.
 @return the current line number.
 */
- (jint)getLineNumber;

/*!
 @brief Sets a mark position in this reader.
 The parameter <code>readlimit</code>
 indicates how many characters can be read before the mark is invalidated.
 Sending <code>reset()</code> will reposition this reader back to the marked
 position, provided that <code>readlimit</code> has not been surpassed. The
 line number associated with this marked position is also stored so that
 it can be restored when <code>reset()</code> is called.
 @param readlimit
 the number of characters that can be read from this stream
 before the mark is invalidated.
 @throws IOException
 if an error occurs while setting the mark in this reader.
 - seealso: #markSupported()
 - seealso: #reset()
 */
- (void)markWithInt:(jint)readlimit;

/*!
 @brief Reads a single character from the source reader and returns it as an
 integer with the two higher-order bytes set to 0.
 Returns -1 if the end
 of the source reader has been reached.
 <p>
 The line number count is incremented if a line terminator is encountered.
 Recognized line terminator sequences are <code>'\r'</code>, <code>'\n'</code> and
 <code>"\r\n"</code>. Line terminator sequences are always translated into
 <code>'\n'</code>.
 @return the character read or -1 if the end of the source reader has been
 reached.
 @throws IOException
 if the reader is closed or another IOException occurs.
 */
- (jint)read;

/*!
 @brief Reads at most <code>count</code> characters from the source reader and stores
 them in the character array <code>buffer</code> starting at <code>offset</code>.
 Returns the number of characters actually read or -1 if no characters
 have been read and the end of this reader has been reached.
 <p>
 The line number count is incremented if a line terminator is encountered.
 Recognized line terminator sequences are <code>'\r'</code>, <code>'\n'</code> and
 <code>"\r\n"</code>.
 @param buffer
 the array in which to store the characters read.
 @param offset
 the initial position in <code>buffer</code> to store the characters
 read from this reader.
 @param count
 the maximum number of characters to store in <code>buffer</code>.
 @return the number of characters actually read or -1 if the end of the
 source reader has been reached while reading.
 @throws IOException
 if this reader is closed or another IOException occurs.
 */
- (jint)readWithCharArray:(IOSCharArray *)buffer
                  withInt:(jint)offset
                  withInt:(jint)count;

/*!
 @brief Returns the next line of text available from this reader.
 A line is
 represented by 0 or more characters followed by <code>'\r'</code>,
 <code>'\n'</code>, <code>"\r\n"</code> or the end of the stream. The returned
 string does not include the newline sequence.
 @return the contents of the line or <code>null</code> if no characters have
 been read before the end of the stream has been reached.
 @throws IOException
 if this reader is closed or another IOException occurs.
 */
- (NSString *)readLine;

/*!
 @brief Resets this reader to the last marked location.
 It also resets the line
 count to what is was when this reader was marked. This implementation
 resets the source reader.
 @throws IOException
 if this reader is already closed, no mark has been set or the
 mark is no longer valid because more than <code>readlimit</code>
 bytes have been read since setting the mark.
 - seealso: #mark(int)
 - seealso: #markSupported()
 */
- (void)reset;

/*!
 @brief Sets the line number of this reader to the specified <code>lineNumber</code>.
 Note that this may have side effects on the line number associated with
 the last marked position.
 @param lineNumber
 the new line number value.
 - seealso: #mark(int)
 - seealso: #reset()
 */
- (void)setLineNumberWithInt:(jint)lineNumber;

/*!
 @brief Skips <code>charCount</code> characters in this reader.
 Subsequent calls to
 <code>read</code> will not return these characters unless <code>reset</code>
 is used. This implementation skips <code>charCount</code> number of characters in
 the source reader and increments the line number count whenever line
 terminator sequences are skipped.
 @return the number of characters actually skipped.
 @throws IllegalArgumentException
 if <code>charCount < 0</code>.
 @throws IOException
 if this reader is closed or another IOException occurs.
 - seealso: #mark(int)
 - seealso: #read()
 - seealso: #reset()
 */
- (jlong)skipWithLong:(jlong)charCount;

@end

J2OBJC_EMPTY_STATIC_INIT(JavaIoLineNumberReader)

FOUNDATION_EXPORT void JavaIoLineNumberReader_initWithJavaIoReader_(JavaIoLineNumberReader *self, JavaIoReader *inArg);

FOUNDATION_EXPORT JavaIoLineNumberReader *new_JavaIoLineNumberReader_initWithJavaIoReader_(JavaIoReader *inArg) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT JavaIoLineNumberReader *create_JavaIoLineNumberReader_initWithJavaIoReader_(JavaIoReader *inArg);

FOUNDATION_EXPORT void JavaIoLineNumberReader_initWithJavaIoReader_withInt_(JavaIoLineNumberReader *self, JavaIoReader *inArg, jint size);

FOUNDATION_EXPORT JavaIoLineNumberReader *new_JavaIoLineNumberReader_initWithJavaIoReader_withInt_(JavaIoReader *inArg, jint size) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT JavaIoLineNumberReader *create_JavaIoLineNumberReader_initWithJavaIoReader_withInt_(JavaIoReader *inArg, jint size);

J2OBJC_TYPE_LITERAL_HEADER(JavaIoLineNumberReader)

#endif


#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_JavaIoLineNumberReader")
