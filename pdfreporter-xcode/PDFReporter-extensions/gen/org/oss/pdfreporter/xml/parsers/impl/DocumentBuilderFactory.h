//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: pdfreporter-extensions/src/org/oss/pdfreporter/xml/parsers/impl/DocumentBuilderFactory.java
//
//  Created by kendra on 9/27/13.
//

#ifndef _OrgOssPdfreporterXmlParsersImplDocumentBuilderFactory_H_
#define _OrgOssPdfreporterXmlParsersImplDocumentBuilderFactory_H_

@protocol OrgOssPdfreporterXmlParsersIDocumentBuilder;

#import "JreEmulation.h"
#include "org/oss/pdfreporter/xml/parsers/IDocumentBuilderFactory.h"

@interface OrgOssPdfreporterXmlParsersImplDocumentBuilderFactory : NSObject < OrgOssPdfreporterXmlParsersIDocumentBuilderFactory > {
 @public
  BOOL namespaceAware_, validating_, xIncludeAware_;
}

@property (nonatomic, assign) BOOL namespaceAware;
@property (nonatomic, assign) BOOL validating;
@property (nonatomic, assign) BOOL xIncludeAware;

- (id<OrgOssPdfreporterXmlParsersIDocumentBuilder>)newDocumentBuilder OBJC_METHOD_FAMILY_NONE;
- (void)setNamespaceAwareWithBOOL:(BOOL)awareness;
- (void)setValidatingWithBOOL:(BOOL)validating;
- (void)setIgnoringElementContentWhitespaceWithBOOL:(BOOL)whitespace;
- (void)setExpandEntityReferencesWithBOOL:(BOOL)expandEntityRef;
- (void)setIgnoringCommentsWithBOOL:(BOOL)ignoreComments;
- (void)setCoalescingWithBOOL:(BOOL)coalescing;
- (BOOL)isNamespaceAware;
- (BOOL)isValidating;
- (BOOL)isIgnoringElementContentWhitespace;
- (BOOL)isExpandEntityReferences;
- (BOOL)isIgnoringComments;
- (BOOL)isCoalescing;
- (void)setAttributeWithNSString:(NSString *)name
                          withId:(id)value;
- (id)getAttributeWithNSString:(NSString *)name;
- (void)setFeatureWithNSString:(NSString *)name
                      withBOOL:(BOOL)value;
- (BOOL)getFeatureWithNSString:(NSString *)name;
- (void)setXIncludeAwareWithBOOL:(BOOL)state;
- (BOOL)isXIncludeAware;
- (id)init;
@end

#endif // _OrgOssPdfreporterXmlParsersImplDocumentBuilderFactory_H_
