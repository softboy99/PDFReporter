//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/libcore/luni/src/main/java/javax/xml/transform/sax/SAXResult.java
//

#ifndef _JavaxXmlTransformSaxSAXResult_H_
#define _JavaxXmlTransformSaxSAXResult_H_

@protocol OrgXmlSaxContentHandler;
@protocol OrgXmlSaxExtLexicalHandler;

#include "J2ObjC_header.h"
#include "javax/xml/transform/Result.h"

@interface JavaxXmlTransformSaxSAXResult : NSObject < JavaxXmlTransformResult > {
}

- (instancetype)init;

- (instancetype)initWithOrgXmlSaxContentHandler:(id<OrgXmlSaxContentHandler>)handler;

- (void)setHandlerWithOrgXmlSaxContentHandler:(id<OrgXmlSaxContentHandler>)handler;

- (id<OrgXmlSaxContentHandler>)getHandler;

- (void)setLexicalHandlerWithOrgXmlSaxExtLexicalHandler:(id<OrgXmlSaxExtLexicalHandler>)handler;

- (id<OrgXmlSaxExtLexicalHandler>)getLexicalHandler;

- (void)setSystemIdWithNSString:(NSString *)systemId;

- (NSString *)getSystemId;

@end

J2OBJC_EMPTY_STATIC_INIT(JavaxXmlTransformSaxSAXResult)

CF_EXTERN_C_BEGIN

FOUNDATION_EXPORT NSString *JavaxXmlTransformSaxSAXResult_FEATURE_;
J2OBJC_STATIC_FIELD_GETTER(JavaxXmlTransformSaxSAXResult, FEATURE_, NSString *)
CF_EXTERN_C_END

J2OBJC_TYPE_LITERAL_HEADER(JavaxXmlTransformSaxSAXResult)

#endif // _JavaxXmlTransformSaxSAXResult_H_