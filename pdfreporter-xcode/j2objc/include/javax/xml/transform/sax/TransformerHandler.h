//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/libcore/luni/src/main/java/javax/xml/transform/sax/TransformerHandler.java
//

#ifndef _JavaxXmlTransformSaxTransformerHandler_H_
#define _JavaxXmlTransformSaxTransformerHandler_H_

@class JavaxXmlTransformTransformer;
@protocol JavaxXmlTransformResult;

#include "J2ObjC_header.h"
#include "org/xml/sax/ContentHandler.h"
#include "org/xml/sax/DTDHandler.h"
#include "org/xml/sax/ext/LexicalHandler.h"

@protocol JavaxXmlTransformSaxTransformerHandler < OrgXmlSaxContentHandler, OrgXmlSaxExtLexicalHandler, OrgXmlSaxDTDHandler, NSObject, JavaObject >
- (void)setResultWithJavaxXmlTransformResult:(id<JavaxXmlTransformResult>)result;

- (void)setSystemIdWithNSString:(NSString *)systemID;

- (NSString *)getSystemId;

- (JavaxXmlTransformTransformer *)getTransformer;

@end

J2OBJC_EMPTY_STATIC_INIT(JavaxXmlTransformSaxTransformerHandler)

J2OBJC_TYPE_LITERAL_HEADER(JavaxXmlTransformSaxTransformerHandler)

#endif // _JavaxXmlTransformSaxTransformerHandler_H_
