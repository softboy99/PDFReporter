//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/tball/tmp/j2objc/testing/mockito/build_result/java/org/mockito/verification/VerificationWithTimeout.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_OrgMockitoVerificationVerificationWithTimeout")
#ifdef RESTRICT_OrgMockitoVerificationVerificationWithTimeout
#define INCLUDE_ALL_OrgMockitoVerificationVerificationWithTimeout 0
#else
#define INCLUDE_ALL_OrgMockitoVerificationVerificationWithTimeout 1
#endif
#undef RESTRICT_OrgMockitoVerificationVerificationWithTimeout

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if !defined (OrgMockitoVerificationVerificationWithTimeout_) && (INCLUDE_ALL_OrgMockitoVerificationVerificationWithTimeout || defined(INCLUDE_OrgMockitoVerificationVerificationWithTimeout))
#define OrgMockitoVerificationVerificationWithTimeout_

#define RESTRICT_OrgMockitoVerificationVerificationMode 1
#define INCLUDE_OrgMockitoVerificationVerificationMode 1
#include "org/mockito/verification/VerificationMode.h"

@class IOSObjectArray;

/*!
 @brief VerificationWithTimeout is a <code>VerificationMode</code> that allows combining existing verification modes with 'timeout'.
 E.g:
 <pre class="code"><code class="java">
 verify(mock, timeout(100).times(5)).foo();
 verify(mock, timeout(100).never()).bar();
 verify(mock, timeout(200).atLeastOnce()).baz();
 
@endcode
 <p>
 See examples in javadoc for <code>Mockito.verify(Object,VerificationMode)</code>
 */
@protocol OrgMockitoVerificationVerificationWithTimeout < OrgMockitoVerificationVerificationMode, NSObject, JavaObject >

/*!
 @brief Allows verifying exact number of invocations within given timeout
 <pre class="code"><code class="java">
 verify(mock, timeout(100).times(2)).someMethod("some arg");
 
@endcode
 See examples in javadoc for <code>Mockito</code> class
 @param wantedNumberOfInvocations wanted number of invocations
 @return verification mode
 */
- (id<OrgMockitoVerificationVerificationMode>)timesWithInt:(jint)wantedNumberOfInvocations;

/*!
 @brief Alias to times(0), see <code>times(int)</code>
 <p>
 Verifies that interaction did not happen within given timeout.
 E.g:
 <pre class="code"><code class="java">
 verify(mock, timeout(100).never()).someMethod();
 
@endcode
 <p>
 If you want to verify there were NO interactions with the mock 
 check out <code>Mockito.verifyNoMoreInteractions(Object...)</code>
 <p>
 See examples in javadoc for <code>Mockito</code> class
 @return verification mode
 */
- (id<OrgMockitoVerificationVerificationMode>)never;

/*!
 @brief Allows at-least-once verification withing given timeout.
 E.g:
 <pre class="code"><code class="java">
 verify(mock, timeout(100).atLeastOnce()).someMethod("some arg");
 
@endcode
 Alias to atLeast(1)
 <p>
 See examples in javadoc for <code>Mockito</code> class
 @return verification mode
 */
- (id<OrgMockitoVerificationVerificationMode>)atLeastOnce;

/*!
 @brief Allows at-least-x verification withing given timeout.
 E.g:
 <pre class="code"><code class="java">
 verify(mock, timeout(100).atLeast(3)).someMethod("some arg");
 
@endcode
 See examples in javadoc for <code>Mockito</code> class
 @param minNumberOfInvocations minimum number of invocations
 @return verification mode
 */
- (id<OrgMockitoVerificationVerificationMode>)atLeastWithInt:(jint)minNumberOfInvocations;

/*!
 @return verification mode
 */
- (id<OrgMockitoVerificationVerificationMode>)atMostWithInt:(jint)maxNumberOfInvocations __attribute__((deprecated));

/*!
 @brief Allows checking if given method was the only one invoked.
 E.g:
 <pre class="code"><code class="java">
 verify(mock, only()).someMethod();
 //above is a shorthand for following 2 lines of code:
 verify(mock).someMethod();
 verifyNoMoreInvocations(mock);
 
@endcode
 <p>
 See also <code>Mockito.verifyNoMoreInteractions(Object...)</code>
 <p>
 See examples in javadoc for <code>Mockito</code> class
 @return verification mode
 */
- (id<OrgMockitoVerificationVerificationMode>)only;

@end

J2OBJC_EMPTY_STATIC_INIT(OrgMockitoVerificationVerificationWithTimeout)

J2OBJC_TYPE_LITERAL_HEADER(OrgMockitoVerificationVerificationWithTimeout)

#endif


#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_OrgMockitoVerificationVerificationWithTimeout")
