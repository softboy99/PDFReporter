//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/tball/tmp/j2objc/testing/mockito/build_result/java/org/mockito/internal/exceptions/stacktrace/StackTraceFilter.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_OrgMockitoInternalExceptionsStacktraceStackTraceFilter")
#ifdef RESTRICT_OrgMockitoInternalExceptionsStacktraceStackTraceFilter
#define INCLUDE_ALL_OrgMockitoInternalExceptionsStacktraceStackTraceFilter 0
#else
#define INCLUDE_ALL_OrgMockitoInternalExceptionsStacktraceStackTraceFilter 1
#endif
#undef RESTRICT_OrgMockitoInternalExceptionsStacktraceStackTraceFilter

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if !defined (OrgMockitoInternalExceptionsStacktraceStackTraceFilter_) && (INCLUDE_ALL_OrgMockitoInternalExceptionsStacktraceStackTraceFilter || defined(INCLUDE_OrgMockitoInternalExceptionsStacktraceStackTraceFilter))
#define OrgMockitoInternalExceptionsStacktraceStackTraceFilter_

#define RESTRICT_JavaIoSerializable 1
#define INCLUDE_JavaIoSerializable 1
#include "java/io/Serializable.h"

@class IOSObjectArray;

@interface OrgMockitoInternalExceptionsStacktraceStackTraceFilter : NSObject < JavaIoSerializable >

+ (jlong)serialVersionUID;

#pragma mark Public

- (instancetype)init;

/*!
 @brief Example how the filter works (+/- means good/bad):
 [a+, b+, c-, d+, e+, f-, g+] -> [a+, b+, g+]
 Basically removes all bad from the middle.
 If any good are in the middle of bad those are also removed. 
 */
- (IOSObjectArray *)filterWithJavaLangStackTraceElementArray:(IOSObjectArray *)target
                                                 withBoolean:(jboolean)keepTop;

@end

J2OBJC_STATIC_INIT(OrgMockitoInternalExceptionsStacktraceStackTraceFilter)

inline jlong OrgMockitoInternalExceptionsStacktraceStackTraceFilter_get_serialVersionUID();
#define OrgMockitoInternalExceptionsStacktraceStackTraceFilter_serialVersionUID -5499819791513105700LL
J2OBJC_STATIC_FIELD_CONSTANT(OrgMockitoInternalExceptionsStacktraceStackTraceFilter, serialVersionUID, jlong)

FOUNDATION_EXPORT void OrgMockitoInternalExceptionsStacktraceStackTraceFilter_init(OrgMockitoInternalExceptionsStacktraceStackTraceFilter *self);

FOUNDATION_EXPORT OrgMockitoInternalExceptionsStacktraceStackTraceFilter *new_OrgMockitoInternalExceptionsStacktraceStackTraceFilter_init() NS_RETURNS_RETAINED;

FOUNDATION_EXPORT OrgMockitoInternalExceptionsStacktraceStackTraceFilter *create_OrgMockitoInternalExceptionsStacktraceStackTraceFilter_init();

J2OBJC_TYPE_LITERAL_HEADER(OrgMockitoInternalExceptionsStacktraceStackTraceFilter)

#endif


#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_OrgMockitoInternalExceptionsStacktraceStackTraceFilter")
