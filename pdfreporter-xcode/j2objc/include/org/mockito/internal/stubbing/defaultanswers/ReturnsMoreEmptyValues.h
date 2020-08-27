//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/tball/tmp/j2objc/testing/mockito/build_result/java/org/mockito/internal/stubbing/defaultanswers/ReturnsMoreEmptyValues.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_OrgMockitoInternalStubbingDefaultanswersReturnsMoreEmptyValues")
#ifdef RESTRICT_OrgMockitoInternalStubbingDefaultanswersReturnsMoreEmptyValues
#define INCLUDE_ALL_OrgMockitoInternalStubbingDefaultanswersReturnsMoreEmptyValues 0
#else
#define INCLUDE_ALL_OrgMockitoInternalStubbingDefaultanswersReturnsMoreEmptyValues 1
#endif
#undef RESTRICT_OrgMockitoInternalStubbingDefaultanswersReturnsMoreEmptyValues

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if !defined (OrgMockitoInternalStubbingDefaultanswersReturnsMoreEmptyValues_) && (INCLUDE_ALL_OrgMockitoInternalStubbingDefaultanswersReturnsMoreEmptyValues || defined(INCLUDE_OrgMockitoInternalStubbingDefaultanswersReturnsMoreEmptyValues))
#define OrgMockitoInternalStubbingDefaultanswersReturnsMoreEmptyValues_

#define RESTRICT_OrgMockitoStubbingAnswer 1
#define INCLUDE_OrgMockitoStubbingAnswer 1
#include "org/mockito/stubbing/Answer.h"

#define RESTRICT_JavaIoSerializable 1
#define INCLUDE_JavaIoSerializable 1
#include "java/io/Serializable.h"

@class IOSClass;
@protocol OrgMockitoInvocationInvocationOnMock;

/*!
 @brief It's likely this implementation will be used by default by every Mockito 2.0 mock.
 <p>
 Currently <b>used only</b> by <code>Mockito.RETURNS_SMART_NULLS</code>
 <p>
 Current version of Mockito mocks by deafult use <code>ReturnsEmptyValues</code>  
 <ul>
 <li>
 Returns appropriate primitive for primitive-returning methods
 </li>
 <li>
 Returns consistent values for primitive wrapper classes (e.g. int-returning method retuns 0 <b>and</b> Integer-returning method returns 0, too)
 </li>
 <li>
 Returns empty collection for collection-returning methods (works for most commonly used collection types)
 </li>
 <li>
 Returns empty array for array-returning methods
 </li>
 <li>
 Returns "" for String-returning method
 </li>
 <li>
 Returns description of mock for toString() method
 </li>
 <li>
 Returns non-zero for Comparable#compareTo(T other) method (see issue 184)
 </li>
 <li>
 Returns null for everything else
 </li>
 </ul>
 */
@interface OrgMockitoInternalStubbingDefaultanswersReturnsMoreEmptyValues : NSObject < OrgMockitoStubbingAnswer, JavaIoSerializable >

#pragma mark Public

- (instancetype)init;

- (id)answerWithOrgMockitoInvocationInvocationOnMock:(id<OrgMockitoInvocationInvocationOnMock>)invocation;

#pragma mark Package-Private

- (id)returnValueForWithIOSClass:(IOSClass *)type;

@end

J2OBJC_EMPTY_STATIC_INIT(OrgMockitoInternalStubbingDefaultanswersReturnsMoreEmptyValues)

FOUNDATION_EXPORT void OrgMockitoInternalStubbingDefaultanswersReturnsMoreEmptyValues_init(OrgMockitoInternalStubbingDefaultanswersReturnsMoreEmptyValues *self);

FOUNDATION_EXPORT OrgMockitoInternalStubbingDefaultanswersReturnsMoreEmptyValues *new_OrgMockitoInternalStubbingDefaultanswersReturnsMoreEmptyValues_init() NS_RETURNS_RETAINED;

FOUNDATION_EXPORT OrgMockitoInternalStubbingDefaultanswersReturnsMoreEmptyValues *create_OrgMockitoInternalStubbingDefaultanswersReturnsMoreEmptyValues_init();

J2OBJC_TYPE_LITERAL_HEADER(OrgMockitoInternalStubbingDefaultanswersReturnsMoreEmptyValues)

#endif


#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_OrgMockitoInternalStubbingDefaultanswersReturnsMoreEmptyValues")
