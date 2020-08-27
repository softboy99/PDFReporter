//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/libcore/luni/src/main/java/org/xml/sax/helpers/ParserAdapter.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_OrgXmlSaxHelpersParserAdapter")
#ifdef RESTRICT_OrgXmlSaxHelpersParserAdapter
#define INCLUDE_ALL_OrgXmlSaxHelpersParserAdapter 0
#else
#define INCLUDE_ALL_OrgXmlSaxHelpersParserAdapter 1
#endif
#undef RESTRICT_OrgXmlSaxHelpersParserAdapter

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if !defined (OrgXmlSaxHelpersParserAdapter_) && (INCLUDE_ALL_OrgXmlSaxHelpersParserAdapter || defined(INCLUDE_OrgXmlSaxHelpersParserAdapter))
#define OrgXmlSaxHelpersParserAdapter_

#define RESTRICT_OrgXmlSaxXMLReader 1
#define INCLUDE_OrgXmlSaxXMLReader 1
#include "org/xml/sax/XMLReader.h"

#define RESTRICT_OrgXmlSaxDocumentHandler 1
#define INCLUDE_OrgXmlSaxDocumentHandler 1
#include "org/xml/sax/DocumentHandler.h"

@class IOSCharArray;
@class OrgXmlSaxInputSource;
@protocol OrgXmlSaxAttributeList;
@protocol OrgXmlSaxContentHandler;
@protocol OrgXmlSaxDTDHandler;
@protocol OrgXmlSaxEntityResolver;
@protocol OrgXmlSaxErrorHandler;
@protocol OrgXmlSaxLocator;
@protocol OrgXmlSaxParser;

/*!
 @brief Adapt a SAX1 Parser as a SAX2 XMLReader.
 <blockquote>
 <em>This module, both source code and documentation, is in the
 Public Domain, and comes with <strong>NO WARRANTY</strong>.</em>
 See <a href='http://www.saxproject.org'>http://www.saxproject.org</a>
 for further information.
 </blockquote>
 <p>This class wraps a SAX1 <code>Parser</code>
 and makes it act as a SAX2 <code>XMLReader</code>,
 with feature, property, and Namespace support.  Note
 that it is not possible to report <code>skippedEntity</code>
  events, since SAX1 does not make that information available.</p>
 <p>This adapter does not test for duplicate Namespace-qualified
 attribute names.</p>
 @since SAX 2.0
 @author David Megginson
 @version 2.0.1 (sax2r2)
 - seealso: org.xml.sax.helpers.XMLReaderAdapter
 - seealso: org.xml.sax.XMLReader
 - seealso: org.xml.sax.Parser
 */
@interface OrgXmlSaxHelpersParserAdapter : NSObject < OrgXmlSaxXMLReader, OrgXmlSaxDocumentHandler > {
 @public
  id<OrgXmlSaxLocator> locator_;
  id<OrgXmlSaxEntityResolver> entityResolver_;
  id<OrgXmlSaxDTDHandler> dtdHandler_;
  id<OrgXmlSaxContentHandler> contentHandler_;
  id<OrgXmlSaxErrorHandler> errorHandler_;
}

#pragma mark Public

/*!
 @brief Construct a new parser adapter.
 <p>Use the "org.xml.sax.parser" property to locate the
 embedded SAX1 driver.</p>
 @exception SAXException If the embedded driver
 cannot be instantiated or if the
 org.xml.sax.parser property is not specified.
 */
- (instancetype)init;

/*!
 @brief Construct a new parser adapter.
 <p>Note that the embedded parser cannot be changed once the
 adapter is created; to embed a different parser, allocate
 a new ParserAdapter.</p>
 @param parser The SAX1 parser to embed.
 @exception java.lang.NullPointerException If the parser parameter
 is null.
 */
- (instancetype)initWithOrgXmlSaxParser:(id<OrgXmlSaxParser>)parser;

/*!
 @brief Adapter implementation method; do not call.
 Adapt a SAX1 characters event.
 @param ch An array of characters.
 @param start The starting position in the array.
 @param length The number of characters to use.
 @exception SAXException The client may raise a
 processing exception.
 - seealso: org.xml.sax.DocumentHandler#characters
 */
- (void)charactersWithCharArray:(IOSCharArray *)ch
                        withInt:(jint)start
                        withInt:(jint)length;

/*!
 @brief Adapter implementation method; do not call.
 Adapt a SAX1 end document event.
 @exception SAXException The client may raise a
 processing exception.
 - seealso: org.xml.sax.DocumentHandler#endDocument
 */
- (void)endDocument;

/*!
 @brief Adapter implementation method; do not call.
 Adapt a SAX1 end element event.
 @param qName The qualified (prefixed) name.
 @exception SAXException The client may raise a
 processing exception.
 - seealso: org.xml.sax.DocumentHandler#endElement
 */
- (void)endElementWithNSString:(NSString *)qName;

/*!
 @brief Return the current content handler.
 @return The current content handler, or null if none was supplied.
 - seealso: org.xml.sax.XMLReader#getEntityResolver
 */
- (id<OrgXmlSaxContentHandler>)getContentHandler;

/*!
 @brief Return the current DTD handler.
 @return the current DTD handler, or null if none was supplied
 - seealso: org.xml.sax.XMLReader#getEntityResolver
 */
- (id<OrgXmlSaxDTDHandler>)getDTDHandler;

/*!
 @brief Return the current entity resolver.
 @return The current entity resolver, or null if none was supplied.
 - seealso: org.xml.sax.XMLReader#getEntityResolver
 */
- (id<OrgXmlSaxEntityResolver>)getEntityResolver;

/*!
 @brief Return the current error handler.
 @return The current error handler, or null if none was supplied.
 - seealso: org.xml.sax.XMLReader#getEntityResolver
 */
- (id<OrgXmlSaxErrorHandler>)getErrorHandler;

/*!
 @brief Check a parser feature flag.
 <p>The only features recognized are namespaces and
 namespace-prefixes.</p>
 @param name The feature name, as a complete URI.
 @return The current feature value.
 @exception SAXNotRecognizedException If the feature
 value can't be assigned or retrieved.
 @exception SAXNotSupportedException If the
 feature is not currently readable.
 - seealso: org.xml.sax.XMLReader#setFeature
 */
- (jboolean)getFeatureWithNSString:(NSString *)name;

/*!
 @brief Get a parser property.
 <p>No properties are currently recognized.</p>
 @param name The property name.
 @return The property value.
 @exception SAXNotRecognizedException If the property
 value can't be assigned or retrieved.
 @exception SAXNotSupportedException If the property
 value is not currently readable.
 - seealso: org.xml.sax.XMLReader#getProperty
 */
- (id)getPropertyWithNSString:(NSString *)name;

/*!
 @brief Adapter implementation method; do not call.
 Adapt a SAX1 ignorable whitespace event.
 @param ch An array of characters.
 @param start The starting position in the array.
 @param length The number of characters to use.
 @exception SAXException The client may raise a
 processing exception.
 - seealso: org.xml.sax.DocumentHandler#ignorableWhitespace
 */
- (void)ignorableWhitespaceWithCharArray:(IOSCharArray *)ch
                                 withInt:(jint)start
                                 withInt:(jint)length;

/*!
 @brief Parse an XML document.
 @param input An input source for the document.
 @exception java.io.IOException If there is a problem reading
 the raw content of the document.
 @exception SAXException If there is a problem
 processing the document.
 - seealso: #parse(java.lang.String)
 - seealso: org.xml.sax.Parser#parse(org.xml.sax.InputSource)
 */
- (void)parseWithOrgXmlSaxInputSource:(OrgXmlSaxInputSource *)input;

/*!
 @brief Parse an XML document.
 @param systemId The absolute URL of the document.
 @exception java.io.IOException If there is a problem reading
 the raw content of the document.
 @exception SAXException If there is a problem
 processing the document.
 - seealso: #parse(org.xml.sax.InputSource)
 - seealso: org.xml.sax.Parser#parse(java.lang.String)
 */
- (void)parseWithNSString:(NSString *)systemId;

/*!
 @brief Adapter implementation method; do not call.
 Adapt a SAX1 processing instruction event.
 @param target The processing instruction target.
 @param data The remainder of the processing instruction
 @exception SAXException The client may raise a
 processing exception.
 - seealso: org.xml.sax.DocumentHandler#processingInstruction
 */
- (void)processingInstructionWithNSString:(NSString *)target
                             withNSString:(NSString *)data;

/*!
 @brief Set the content handler.
 @param handler the new content handler
 - seealso: org.xml.sax.XMLReader#setEntityResolver
 */
- (void)setContentHandlerWithOrgXmlSaxContentHandler:(id<OrgXmlSaxContentHandler>)handler;

/*!
 @brief Adapter implementation method; do not call.
 Adapt a SAX1 document locator event.
 @param locator A document locator.
 - seealso: org.xml.sax.ContentHandler#setDocumentLocator
 */
- (void)setDocumentLocatorWithOrgXmlSaxLocator:(id<OrgXmlSaxLocator>)locator;

/*!
 @brief Set the DTD handler.
 @param handler the new DTD handler
 - seealso: org.xml.sax.XMLReader#setEntityResolver
 */
- (void)setDTDHandlerWithOrgXmlSaxDTDHandler:(id<OrgXmlSaxDTDHandler>)handler;

/*!
 @brief Set the entity resolver.
 @param resolver The new entity resolver.
 - seealso: org.xml.sax.XMLReader#setEntityResolver
 */
- (void)setEntityResolverWithOrgXmlSaxEntityResolver:(id<OrgXmlSaxEntityResolver>)resolver;

/*!
 @brief Set the error handler.
 @param handler The new error handler.
 - seealso: org.xml.sax.XMLReader#setEntityResolver
 */
- (void)setErrorHandlerWithOrgXmlSaxErrorHandler:(id<OrgXmlSaxErrorHandler>)handler;

/*!
 @brief Set a feature flag for the parser.
 <p>The only features recognized are namespaces and
 namespace-prefixes.</p>
 @param name The feature name, as a complete URI.
 @param value The requested feature value.
 @exception SAXNotRecognizedException If the feature
 can't be assigned or retrieved.
 @exception SAXNotSupportedException If the feature
 can't be assigned that value.
 - seealso: org.xml.sax.XMLReader#setFeature
 */
- (void)setFeatureWithNSString:(NSString *)name
                   withBoolean:(jboolean)value;

/*!
 @brief Set a parser property.
 <p>No properties are currently recognized.</p>
 @param name The property name.
 @param value The property value.
 @exception SAXNotRecognizedException If the property
 value can't be assigned or retrieved.
 @exception SAXNotSupportedException If the property
 can't be assigned that value.
 - seealso: org.xml.sax.XMLReader#setProperty
 */
- (void)setPropertyWithNSString:(NSString *)name
                         withId:(id)value;

/*!
 @brief Adapter implementation method; do not call.
 Adapt a SAX1 start document event.
 @exception SAXException The client may raise a
 processing exception.
 - seealso: org.xml.sax.DocumentHandler#startDocument
 */
- (void)startDocument;

/*!
 @brief Adapter implementation method; do not call.
 Adapt a SAX1 startElement event.
 <p>If necessary, perform Namespace processing.</p>
 @param qName The qualified (prefixed) name.
 @param qAtts The XML attribute list (with qnames).
 @exception SAXException The client may raise a
 processing exception.
 */
- (void)startElementWithNSString:(NSString *)qName
      withOrgXmlSaxAttributeList:(id<OrgXmlSaxAttributeList>)qAtts;

#pragma mark Package-Private

/*!
 @brief Report a non-fatal error.
 @param message The error message.
 @exception SAXException The client may throw
 an exception.
 */
- (void)reportErrorWithNSString:(NSString *)message;

@end

J2OBJC_EMPTY_STATIC_INIT(OrgXmlSaxHelpersParserAdapter)

J2OBJC_FIELD_SETTER(OrgXmlSaxHelpersParserAdapter, locator_, id<OrgXmlSaxLocator>)
J2OBJC_FIELD_SETTER(OrgXmlSaxHelpersParserAdapter, entityResolver_, id<OrgXmlSaxEntityResolver>)
J2OBJC_FIELD_SETTER(OrgXmlSaxHelpersParserAdapter, dtdHandler_, id<OrgXmlSaxDTDHandler>)
J2OBJC_FIELD_SETTER(OrgXmlSaxHelpersParserAdapter, contentHandler_, id<OrgXmlSaxContentHandler>)
J2OBJC_FIELD_SETTER(OrgXmlSaxHelpersParserAdapter, errorHandler_, id<OrgXmlSaxErrorHandler>)

FOUNDATION_EXPORT void OrgXmlSaxHelpersParserAdapter_init(OrgXmlSaxHelpersParserAdapter *self);

FOUNDATION_EXPORT OrgXmlSaxHelpersParserAdapter *new_OrgXmlSaxHelpersParserAdapter_init() NS_RETURNS_RETAINED;

FOUNDATION_EXPORT OrgXmlSaxHelpersParserAdapter *create_OrgXmlSaxHelpersParserAdapter_init();

FOUNDATION_EXPORT void OrgXmlSaxHelpersParserAdapter_initWithOrgXmlSaxParser_(OrgXmlSaxHelpersParserAdapter *self, id<OrgXmlSaxParser> parser);

FOUNDATION_EXPORT OrgXmlSaxHelpersParserAdapter *new_OrgXmlSaxHelpersParserAdapter_initWithOrgXmlSaxParser_(id<OrgXmlSaxParser> parser) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT OrgXmlSaxHelpersParserAdapter *create_OrgXmlSaxHelpersParserAdapter_initWithOrgXmlSaxParser_(id<OrgXmlSaxParser> parser);

J2OBJC_TYPE_LITERAL_HEADER(OrgXmlSaxHelpersParserAdapter)

#endif

#if !defined (OrgXmlSaxHelpersParserAdapter_AttributeListAdapter_) && (INCLUDE_ALL_OrgXmlSaxHelpersParserAdapter || defined(INCLUDE_OrgXmlSaxHelpersParserAdapter_AttributeListAdapter))
#define OrgXmlSaxHelpersParserAdapter_AttributeListAdapter_

#define RESTRICT_OrgXmlSaxAttributes 1
#define INCLUDE_OrgXmlSaxAttributes 1
#include "org/xml/sax/Attributes.h"

@class OrgXmlSaxHelpersParserAdapter;
@protocol OrgXmlSaxAttributeList;

/*!
 @brief Adapt a SAX1 AttributeList as a SAX2 Attributes object.
 <p>This class is in the Public Domain, and comes with NO
 WARRANTY of any kind.</p>
 <p>This wrapper class is used only when Namespace support
 is disabled -- it provides pretty much a direct mapping
 from SAX1 to SAX2, except that names and types are
 interned whenever requested.</p>
 */
@interface OrgXmlSaxHelpersParserAdapter_AttributeListAdapter : NSObject < OrgXmlSaxAttributes >

#pragma mark Public

/*!
 @brief Look up an attribute index by qualified (prefixed) name.
 @param qName The qualified name.
 @return The attributes index, or -1 if none was found.
 - seealso: org.xml.sax.Attributes#getIndex(java.lang.String)
 */
- (jint)getIndexWithNSString:(NSString *)qName;

/*!
 @brief Look up an attribute index by Namespace name.
 @param uri The Namespace URI or the empty string.
 @param localName The local name.
 @return The attributes index, or -1 if none was found.
 - seealso: org.xml.sax.Attributes#getIndex(java.lang.String,java.lang.String)
 */
- (jint)getIndexWithNSString:(NSString *)uri
                withNSString:(NSString *)localName;

/*!
 @brief Return the length of the attribute list.
 @return The number of attributes in the list.
 - seealso: org.xml.sax.Attributes#getLength
 */
- (jint)getLength;

/*!
 @brief Return the local name of the specified attribute.
 @param The attribute's index.
 @return Always the empty string.
 - seealso: org.xml.sax.Attributes#getLocalName
 */
- (NSString *)getLocalNameWithInt:(jint)i;

/*!
 @brief Return the qualified (prefixed) name of the specified attribute.
 @param The attribute's index.
 @return The attribute's qualified name, internalized.
 */
- (NSString *)getQNameWithInt:(jint)i;

/*!
 @brief Return the type of the specified attribute.
 @param The attribute's index.
 @return The attribute's type as an internalized string.
 */
- (NSString *)getTypeWithInt:(jint)i;

/*!
 @brief Look up the type of an attribute by qualified (prefixed) name.
 @param qName The qualified name.
 @return The attribute's type as an internalized string.
 */
- (NSString *)getTypeWithNSString:(NSString *)qName;

/*!
 @brief Look up the type of an attribute by Namespace name.
 @param uri The Namespace URI
 @param localName The local name.
 @return The attribute's type as an internalized string.
 */
- (NSString *)getTypeWithNSString:(NSString *)uri
                     withNSString:(NSString *)localName;

/*!
 @brief Return the Namespace URI of the specified attribute.
 @param The attribute's index.
 @return Always the empty string.
 - seealso: org.xml.sax.Attributes#getURI
 */
- (NSString *)getURIWithInt:(jint)i;

/*!
 @brief Return the value of the specified attribute.
 @param The attribute's index.
 @return The attribute's value.
 */
- (NSString *)getValueWithInt:(jint)i;

/*!
 @brief Look up the value of an attribute by qualified (prefixed) name.
 @param qName The qualified name.
 @return The attribute's value.
 */
- (NSString *)getValueWithNSString:(NSString *)qName;

/*!
 @brief Look up the value of an attribute by Namespace name.
 @param uri The Namespace URI
 @param localName The local name.
 @return The attribute's value.
 */
- (NSString *)getValueWithNSString:(NSString *)uri
                      withNSString:(NSString *)localName;

#pragma mark Package-Private

/*!
 @brief Construct a new adapter.
 */
- (instancetype)initWithOrgXmlSaxHelpersParserAdapter:(OrgXmlSaxHelpersParserAdapter *)outer$;

/*!
 @brief Set the embedded AttributeList.
 <p>This method must be invoked before any of the others
 can be used.</p>
 @param The SAX1 attribute list (with qnames).
 */
- (void)setAttributeListWithOrgXmlSaxAttributeList:(id<OrgXmlSaxAttributeList>)qAtts;

@end

J2OBJC_EMPTY_STATIC_INIT(OrgXmlSaxHelpersParserAdapter_AttributeListAdapter)

FOUNDATION_EXPORT void OrgXmlSaxHelpersParserAdapter_AttributeListAdapter_initWithOrgXmlSaxHelpersParserAdapter_(OrgXmlSaxHelpersParserAdapter_AttributeListAdapter *self, OrgXmlSaxHelpersParserAdapter *outer$);

FOUNDATION_EXPORT OrgXmlSaxHelpersParserAdapter_AttributeListAdapter *new_OrgXmlSaxHelpersParserAdapter_AttributeListAdapter_initWithOrgXmlSaxHelpersParserAdapter_(OrgXmlSaxHelpersParserAdapter *outer$) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT OrgXmlSaxHelpersParserAdapter_AttributeListAdapter *create_OrgXmlSaxHelpersParserAdapter_AttributeListAdapter_initWithOrgXmlSaxHelpersParserAdapter_(OrgXmlSaxHelpersParserAdapter *outer$);

J2OBJC_TYPE_LITERAL_HEADER(OrgXmlSaxHelpersParserAdapter_AttributeListAdapter)

#endif


#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_OrgXmlSaxHelpersParserAdapter")
