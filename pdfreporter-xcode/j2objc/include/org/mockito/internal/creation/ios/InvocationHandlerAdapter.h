//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: src/main/java/org/mockito/internal/creation/ios/InvocationHandlerAdapter.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_OrgMockitoInternalCreationIosInvocationHandlerAdapter")
#ifdef RESTRICT_OrgMockitoInternalCreationIosInvocationHandlerAdapter
#define INCLUDE_ALL_OrgMockitoInternalCreationIosInvocationHandlerAdapter 0
#else
#define INCLUDE_ALL_OrgMockitoInternalCreationIosInvocationHandlerAdapter 1
#endif
#undef RESTRICT_OrgMockitoInternalCreationIosInvocationHandlerAdapter

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if !defined (OrgMockitoInternalCreationIosInvocationHandlerAdapter_) && (INCLUDE_ALL_OrgMockitoInternalCreationIosInvocationHandlerAdapter || defined(INCLUDE_OrgMockitoInternalCreationIosInvocationHandlerAdapter))
#define OrgMockitoInternalCreationIosInvocationHandlerAdapter_

#define RESTRICT_JavaLangReflectInvocationHandler 1
#define INCLUDE_JavaLangReflectInvocationHandler 1
#include "java/lang/reflect/InvocationHandler.h"

@class IOSObjectArray;
@class JavaLangReflectMethod;
@protocol OrgMockitoInvocationMockHandler;

/*!
 @brief InvocationHandler adapter, inspired by the dexmaker project's version.
 https://code.google.com/p/dexmaker/
 */
@interface OrgMockitoInternalCreationIosInvocationHandlerAdapter : NSObject < JavaLangReflectInvocationHandler >

#pragma mark Public

- (instancetype)initWithOrgMockitoInvocationMockHandler:(id<OrgMockitoInvocationMockHandler>)handler;

- (id<OrgMockitoInvocationMockHandler>)getHandler;

- (id)invokeWithId:(id)proxy
withJavaLangReflectMethod:(JavaLangReflectMethod *)method
 withNSObjectArray:(IOSObjectArray *)args;

- (void)setHandlerWithOrgMockitoInvocationMockHandler:(id<OrgMockitoInvocationMockHandler>)handler;

@end

J2OBJC_EMPTY_STATIC_INIT(OrgMockitoInternalCreationIosInvocationHandlerAdapter)

FOUNDATION_EXPORT void OrgMockitoInternalCreationIosInvocationHandlerAdapter_initWithOrgMockitoInvocationMockHandler_(OrgMockitoInternalCreationIosInvocationHandlerAdapter *self, id<OrgMockitoInvocationMockHandler> handler);

FOUNDATION_EXPORT OrgMockitoInternalCreationIosInvocationHandlerAdapter *new_OrgMockitoInternalCreationIosInvocationHandlerAdapter_initWithOrgMockitoInvocationMockHandler_(id<OrgMockitoInvocationMockHandler> handler) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT OrgMockitoInternalCreationIosInvocationHandlerAdapter *create_OrgMockitoInternalCreationIosInvocationHandlerAdapter_initWithOrgMockitoInvocationMockHandler_(id<OrgMockitoInvocationMockHandler> handler);

J2OBJC_TYPE_LITERAL_HEADER(OrgMockitoInternalCreationIosInvocationHandlerAdapter)

#endif


#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_OrgMockitoInternalCreationIosInvocationHandlerAdapter")
