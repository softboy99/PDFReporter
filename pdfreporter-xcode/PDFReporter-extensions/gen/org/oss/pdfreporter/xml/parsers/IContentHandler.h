//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: pdfreporter-extensions/src/org/oss/pdfreporter/xml/parsers/IContentHandler.java
//
//  Created by kendra on 9/27/13.
//

#ifndef _OrgOssPdfreporterXmlParsersIContentHandler_H_
#define _OrgOssPdfreporterXmlParsersIContentHandler_H_

@class IOSCharArray;
@protocol OrgOssPdfreporterXmlParsersIAttributes;

#import "JreEmulation.h"

@protocol OrgOssPdfreporterXmlParsersIContentHandler < NSObject, JavaObject >
- (void)startElementWithNSString:(NSString *)uri
                    withNSString:(NSString *)localName
                    withNSString:(NSString *)qName
withOrgOssPdfreporterXmlParsersIAttributes:(id<OrgOssPdfreporterXmlParsersIAttributes>)atts;
- (void)endElementWithNSString:(NSString *)uri
                  withNSString:(NSString *)localName
                  withNSString:(NSString *)qName;
- (void)charactersWithCharArray:(IOSCharArray *)ch
                        withInt:(int)start
                        withInt:(int)length;
@end

#endif // _OrgOssPdfreporterXmlParsersIContentHandler_H_
