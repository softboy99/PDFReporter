//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/tball/tmp/j2objc/testing/mockito/build_result/java/org/mockito/Mock.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_OrgMockitoMock")
#ifdef RESTRICT_OrgMockitoMock
#define INCLUDE_ALL_OrgMockitoMock 0
#else
#define INCLUDE_ALL_OrgMockitoMock 1
#endif
#undef RESTRICT_OrgMockitoMock

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if !defined (OrgMockitoMock_) && (INCLUDE_ALL_OrgMockitoMock || defined(INCLUDE_OrgMockitoMock))
#define OrgMockitoMock_

#define RESTRICT_JavaLangAnnotationAnnotation 1
#define INCLUDE_JavaLangAnnotationAnnotation 1
#include "java/lang/annotation/Annotation.h"

@class IOSClass;
@class IOSObjectArray;
@class OrgMockitoAnswers;

/*!
 @brief Mark a field as a mock.
 <ul>
 <li>Allows shorthand mock creation.</li>
 <li>Minimizes repetitive mock creation code.</li>
 <li>Makes the test class more readable.</li>
 <li>Makes the verification error easier to read because the <b>field name</b> is used to identify the mock.</li>
 </ul>
 <pre class="code"><code class="java">
 public class ArticleManagerTest extends SampleBaseTestCase {
 &#064;Mock private ArticleCalculator calculator;
 &#064;Mock(name = "database") private ArticleDatabase dbMock;
 &#064;Mock(answer = RETURNS_MOCKS) private UserProvider userProvider;
 &#064;Mock(extraInterfaces = {Queue.class, Observer.class}) private  articleMonitor;
 private ArticleManager manager;
 &#064;Before public void setup() {
 manager = new ArticleManager(userProvider, database, calculator, articleMonitor);
 }
 }
 public class SampleBaseTestCase {
 &#064;Before public void initMocks() {
 MockitoAnnotations.initMocks(this);
 }
 }
 
@endcode
 <p>
 <strong><code>MockitoAnnotations.initMocks(this)</code></strong> method has to be called to initialize annotated objects.
 In above example, <code>initMocks()</code> is called in &#064;Before (JUnit4) method of test's base class.
 For JUnit3 <code>initMocks()</code> can go to <code>setup()</code> method of a base class.
 <strong>Instead</strong> you can also put initMocks() in your JUnit runner (&#064;RunWith) or use the built-in
 <code>org.mockito.runners.MockitoJUnitRunner</code>.
 </p>
 - seealso: Mockito#mock(Class)
 - seealso: Spy
 - seealso: InjectMocks
 - seealso: MockitoAnnotations#initMocks(Object)
 - seealso: org.mockito.runners.MockitoJUnitRunner
 */
@protocol OrgMockitoMock < JavaLangAnnotationAnnotation >

@property (readonly) OrgMockitoAnswers *answer;
@property (readonly) NSString *name;
@property (readonly) IOSObjectArray *extraInterfaces;

@end

@interface OrgMockitoMock : NSObject < OrgMockitoMock > {
 @public
  OrgMockitoAnswers *answer_;
  NSString *name_;
  IOSObjectArray *extraInterfaces_;
}

@end

J2OBJC_EMPTY_STATIC_INIT(OrgMockitoMock)

FOUNDATION_EXPORT id<OrgMockitoMock> create_OrgMockitoMock(OrgMockitoAnswers *answer, IOSObjectArray *extraInterfaces, NSString *name);

J2OBJC_TYPE_LITERAL_HEADER(OrgMockitoMock)

#endif


#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_OrgMockitoMock")
