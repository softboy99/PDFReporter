//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/libcore/luni/src/main/java/org/xml/sax/ext/EntityResolver2.java
//

#ifndef _OrgXmlSaxExtEntityResolver2_H_
#define _OrgXmlSaxExtEntityResolver2_H_

@class OrgXmlSaxInputSource;

#include "J2ObjC_header.h"
#include "org/xml/sax/EntityResolver.h"

@protocol OrgXmlSaxExtEntityResolver2 < OrgXmlSaxEntityResolver, NSObject, JavaObject >
- (OrgXmlSaxInputSource *)getExternalSubsetWithNSString:(NSString *)name
                                           withNSString:(NSString *)baseURI;

- (OrgXmlSaxInputSource *)resolveEntityWithNSString:(NSString *)name
                                       withNSString:(NSString *)publicId
                                       withNSString:(NSString *)baseURI
                                       withNSString:(NSString *)systemId;

@end

J2OBJC_EMPTY_STATIC_INIT(OrgXmlSaxExtEntityResolver2)

J2OBJC_TYPE_LITERAL_HEADER(OrgXmlSaxExtEntityResolver2)

#endif // _OrgXmlSaxExtEntityResolver2_H_