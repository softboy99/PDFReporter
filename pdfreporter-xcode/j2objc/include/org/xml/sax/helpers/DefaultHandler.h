//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/libcore/luni/src/main/java/org/xml/sax/helpers/DefaultHandler.java
//
//  Created by tball on 7/15/13.
//

#ifndef _OrgXmlSaxHelpersDefaultHandler_H_
#define _OrgXmlSaxHelpersDefaultHandler_H_

@class IOSCharArray;
@class OrgXmlSaxInputSource;
@class OrgXmlSaxSAXParseException;
@protocol OrgXmlSaxAttributes;
@protocol OrgXmlSaxLocator;

#import "JreEmulation.h"
#include "org/xml/sax/ContentHandler.h"
#include "org/xml/sax/DTDHandler.h"
#include "org/xml/sax/EntityResolver.h"
#include "org/xml/sax/ErrorHandler.h"

@interface OrgXmlSaxHelpersDefaultHandler : NSObject < OrgXmlSaxEntityResolver, OrgXmlSaxDTDHandler, OrgXmlSaxContentHandler, OrgXmlSaxErrorHandler > {
}

- (OrgXmlSaxInputSource *)resolveEntityWithNSString:(NSString *)publicId
                                       withNSString:(NSString *)systemId;
- (void)notationDeclWithNSString:(NSString *)name
                    withNSString:(NSString *)publicId
                    withNSString:(NSString *)systemId;
- (void)unparsedEntityDeclWithNSString:(NSString *)name
                          withNSString:(NSString *)publicId
                          withNSString:(NSString *)systemId
                          withNSString:(NSString *)notationName;
- (void)setDocumentLocatorWithOrgXmlSaxLocator:(id<OrgXmlSaxLocator>)locator;
- (void)startDocument;
- (void)endDocument;
- (void)startPrefixMappingWithNSString:(NSString *)prefix
                          withNSString:(NSString *)uri;
- (void)endPrefixMappingWithNSString:(NSString *)prefix;
- (void)startElementWithNSString:(NSString *)uri
                    withNSString:(NSString *)localName
                    withNSString:(NSString *)qName
         withOrgXmlSaxAttributes:(id<OrgXmlSaxAttributes>)attributes;
- (void)endElementWithNSString:(NSString *)uri
                  withNSString:(NSString *)localName
                  withNSString:(NSString *)qName;
- (void)charactersWithCharArray:(IOSCharArray *)ch
                        withInt:(int)start
                        withInt:(int)length;
- (void)ignorableWhitespaceWithCharArray:(IOSCharArray *)ch
                                 withInt:(int)start
                                 withInt:(int)length;
- (void)processingInstructionWithNSString:(NSString *)target
                             withNSString:(NSString *)data;
- (void)skippedEntityWithNSString:(NSString *)name;
- (void)warningWithOrgXmlSaxSAXParseException:(OrgXmlSaxSAXParseException *)e;
- (void)errorWithOrgXmlSaxSAXParseException:(OrgXmlSaxSAXParseException *)e;
- (void)fatalErrorWithOrgXmlSaxSAXParseException:(OrgXmlSaxSAXParseException *)e;
- (id)init;
@end

#endif // _OrgXmlSaxHelpersDefaultHandler_H_
