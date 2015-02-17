//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/libcore/luni/src/main/java/org/xml/sax/ContentHandler.java
//

#ifndef _OrgXmlSaxContentHandler_H_
#define _OrgXmlSaxContentHandler_H_

@class IOSCharArray;
@protocol OrgXmlSaxAttributes;
@protocol OrgXmlSaxLocator;

#include "J2ObjC_header.h"

@protocol OrgXmlSaxContentHandler < NSObject, JavaObject >

- (void)setDocumentLocatorWithOrgXmlSaxLocator:(id<OrgXmlSaxLocator>)locator;

- (void)startDocument;

- (void)endDocument;

- (void)startPrefixMappingWithNSString:(NSString *)prefix
                          withNSString:(NSString *)uri;

- (void)endPrefixMappingWithNSString:(NSString *)prefix;

- (void)startElementWithNSString:(NSString *)uri
                    withNSString:(NSString *)localName
                    withNSString:(NSString *)qName
         withOrgXmlSaxAttributes:(id<OrgXmlSaxAttributes>)atts;

- (void)endElementWithNSString:(NSString *)uri
                  withNSString:(NSString *)localName
                  withNSString:(NSString *)qName;

- (void)charactersWithCharArray:(IOSCharArray *)ch
                        withInt:(jint)start
                        withInt:(jint)length;

- (void)ignorableWhitespaceWithCharArray:(IOSCharArray *)ch
                                 withInt:(jint)start
                                 withInt:(jint)length;

- (void)processingInstructionWithNSString:(NSString *)target
                             withNSString:(NSString *)data;

- (void)skippedEntityWithNSString:(NSString *)name;

@end

J2OBJC_EMPTY_STATIC_INIT(OrgXmlSaxContentHandler)

J2OBJC_TYPE_LITERAL_HEADER(OrgXmlSaxContentHandler)

#endif // _OrgXmlSaxContentHandler_H_
