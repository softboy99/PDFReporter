//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/tball/tmp/j2objc/testing/mockito/build_result/java/org/mockito/plugins/MockMaker.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_OrgMockitoPluginsMockMaker")
#ifdef RESTRICT_OrgMockitoPluginsMockMaker
#define INCLUDE_ALL_OrgMockitoPluginsMockMaker 0
#else
#define INCLUDE_ALL_OrgMockitoPluginsMockMaker 1
#endif
#undef RESTRICT_OrgMockitoPluginsMockMaker

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if !defined (OrgMockitoPluginsMockMaker_) && (INCLUDE_ALL_OrgMockitoPluginsMockMaker || defined(INCLUDE_OrgMockitoPluginsMockMaker))
#define OrgMockitoPluginsMockMaker_

@class IOSObjectArray;
@protocol OrgMockitoInvocationMockHandler;
@protocol OrgMockitoMockMockCreationSettings;

/*!
 @brief The facility to create mocks.
 <p>By default, an internal cglib/asm/objenesis based implementation is used.</p>
 <p><code>MockMaker</code> is an extension point that makes it possible to use custom dynamic proxies
 and avoid using the default cglib/asm/objenesis implementation.
 For example, the android users can use a MockMaker that can work with Dalvik virtual machine
 and hence bring Mockito to android apps developers.</p>
 <h3>Using the extension point</h3>
 <p>Suppose you wrote an extension to create mocks with some <em>Awesome</em> library, in order to tell
 Mockito to use it you need to put in your <strong>classpath</strong>:
 <ol style="list-style-type: lower-alpha">
 <li>The implementation itself, for example <code>org.awesome.mockito.AwesomeMockMaker</code> that extends the <code>MockMaker</code>.</li>
 <li>A file "<code>mockito-extensions/org.mockito.plugins.MockMaker</code>". The content of this file is
 exactly a <strong>one</strong> line with the qualified name: <code>org.awesome.mockito.AwesomeMockMaker</code>.</li>
 </ol></p>
 <p>Note that if several <code>mockito-extensions/org.mockito.plugins.MockMaker</code> files exists in the classpath
 Mockito will only use the first returned by the standard <code>ClassLoader.getResource</code> mechanism.
 - seealso: org.mockito.mock.MockCreationSettings
 - seealso: org.mockito.invocation.MockHandler
 @since 1.9.5
 */
@protocol OrgMockitoPluginsMockMaker < NSObject, JavaObject >

/*!
 @brief If you want to provide your own implementation of <code>MockMaker</code> this method should:
 <ul>
 <li>Create a proxy object that implements <code>settings.typeToMock</code> and potentially also <code>settings.extraInterfaces</code>.
 </li>
 <li>You may use the information from <code>settings</code> to create/configure your proxy object.</li>
 <li>Your proxy object should carry the <code>handler</code> with it. For example, if you generate byte code
 to create the proxy you could generate an extra field to keep the <code>handler</code> with the generated object.
 Your implementation of <code>MockMaker</code> is required to provide this instance of <code>handler</code> when
 <code>getHandler(Object)</code> is called.
 </li>
 </ul>
 @param settings - mock creation settings like type to mock, extra interfaces and so on.
 @param handler See <code>org.mockito.invocation.MockHandler</code>.
 <b>Do not</b> provide your own implementation at this time. Make sure your implementation of
 <code>getHandler(Object)</code> will return this instance.
 @return The mock instance.
 @since 1.9.5
 */
- (id)createMockWithOrgMockitoMockMockCreationSettings:(id<OrgMockitoMockMockCreationSettings>)settings
                   withOrgMockitoInvocationMockHandler:(id<OrgMockitoInvocationMockHandler>)handler;

/*!
 @brief Returns the handler for the <code>mock</code>.
 <b>Do not</b> provide your own implementations at this time
 because the work on the <code>MockHandler</code> api is not completed.
 Use the instance provided to you by Mockito at <code>createMock</code> or <code>resetMock</code>.
 @param mock The mock instance.
 @return may return null - it means that there is no handler attached to provided object.
 This means the passed object is not really a Mockito mock.
 @since 1.9.5
 */
- (id<OrgMockitoInvocationMockHandler>)getHandlerWithId:(id)mock;

/*!
 @brief Replaces the existing handler on <code>mock</code> with <code>newHandler</code>.
 <p>The invocation handler actually store invocations to achieve
 stubbing and verification. In order to reset the mock, we pass
 a new instance of the invocation handler.</p>
 <p>Your implementation should make sure the <code>newHandler</code> is correctly associated to passed <code>mock</code></p>
 @param mock The mock instance whose invocation handler is to be replaced.
 @param newHandler The new invocation handler instance.
 @param settings The mock settings - should you need to access some of the mock creation details.
 @since 1.9.5
 */
- (void)resetMockWithId:(id)mock
withOrgMockitoInvocationMockHandler:(id<OrgMockitoInvocationMockHandler>)newHandler
withOrgMockitoMockMockCreationSettings:(id<OrgMockitoMockMockCreationSettings>)settings;

@end

J2OBJC_EMPTY_STATIC_INIT(OrgMockitoPluginsMockMaker)

J2OBJC_TYPE_LITERAL_HEADER(OrgMockitoPluginsMockMaker)

#endif


#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_OrgMockitoPluginsMockMaker")
