//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/libcore/luni/src/main/java/org/xml/sax/helpers/XMLReaderFactory.java
//

#ifndef _OrgXmlSaxHelpersXMLReaderFactory_H_
#define _OrgXmlSaxHelpersXMLReaderFactory_H_

@protocol OrgXmlSaxXMLReader;

#include "J2ObjC_header.h"

@interface OrgXmlSaxHelpersXMLReaderFactory : NSObject {
}

+ (id<OrgXmlSaxXMLReader>)createXMLReader;

+ (id<OrgXmlSaxXMLReader>)createXMLReaderWithNSString:(NSString *)className_;

@end

J2OBJC_EMPTY_STATIC_INIT(OrgXmlSaxHelpersXMLReaderFactory)

CF_EXTERN_C_BEGIN

FOUNDATION_EXPORT id<OrgXmlSaxXMLReader> OrgXmlSaxHelpersXMLReaderFactory_createXMLReader();

FOUNDATION_EXPORT id<OrgXmlSaxXMLReader> OrgXmlSaxHelpersXMLReaderFactory_createXMLReaderWithNSString_(NSString *className_);

FOUNDATION_EXPORT NSString *OrgXmlSaxHelpersXMLReaderFactory_property_;
J2OBJC_STATIC_FIELD_GETTER(OrgXmlSaxHelpersXMLReaderFactory, property_, NSString *)
CF_EXTERN_C_END

J2OBJC_TYPE_LITERAL_HEADER(OrgXmlSaxHelpersXMLReaderFactory)

#endif // _OrgXmlSaxHelpersXMLReaderFactory_H_