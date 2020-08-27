//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/libcore/luni/src/main/java/org/xml/sax/AttributeList.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_OrgXmlSaxAttributeList")
#ifdef RESTRICT_OrgXmlSaxAttributeList
#define INCLUDE_ALL_OrgXmlSaxAttributeList 0
#else
#define INCLUDE_ALL_OrgXmlSaxAttributeList 1
#endif
#undef RESTRICT_OrgXmlSaxAttributeList

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if !defined (OrgXmlSaxAttributeList_) && (INCLUDE_ALL_OrgXmlSaxAttributeList || defined(INCLUDE_OrgXmlSaxAttributeList))
#define OrgXmlSaxAttributeList_

@class IOSObjectArray;

/*!
 @brief Interface for an element's attribute specifications.
 <blockquote>
 <em>This module, both source code and documentation, is in the
 Public Domain, and comes with <strong>NO WARRANTY</strong>.</em>
 See <a href='http://www.saxproject.org'>http://www.saxproject.org</a>
 for further information.
 </blockquote>
 <p>This is the original SAX1 interface for reporting an element's
 attributes.  Unlike the new <code>Attributes</code>
 interface, it does not support Namespace-related information.</p>
 <p>When an attribute list is supplied as part of a
 <code>startElement</code>
 event, the list will return valid results only during the
 scope of the event; once the event handler returns control
 to the parser, the attribute list is invalid.  To save a
 persistent copy of the attribute list, use the SAX1
 <code>AttributeListImpl</code>
 helper class.</p>
 <p>An attribute list includes only attributes that have been
 specified or defaulted: #IMPLIED attributes will not be included.</p>
 <p>There are two ways for the SAX application to obtain information
 from the AttributeList.  First, it can iterate through the entire
 list:</p>
 @code

  public void startElement (String name, AttributeList atts) {
   for (int i = 0; i < atts.getLength(); i++) {
     String name = atts.getName(i);
     String type = atts.getType(i);
     String value = atts.getValue(i);
     [...]
   }
  }
  
@endcode
 <p>(Note that the result of getLength() will be zero if there
 are no attributes.)
 <p>As an alternative, the application can request the value or
 type of specific attributes:</p>
 @code

  public void startElement (String name, AttributeList atts) {
   String identifier = atts.getValue("id");
   String label = atts.getValue("label");
   [...]
  }
  
@endcode
 @since SAX 1.0
 @author David Megginson
 @version 2.0.1 (sax2r2)
 - seealso: org.xml.sax.DocumentHandler#startElement startElement
 - seealso: org.xml.sax.helpers.AttributeListImpl AttributeListImpl
 */
__attribute__((deprecated))
@protocol OrgXmlSaxAttributeList < NSObject, JavaObject >

/*!
 @brief Return the number of attributes in this list.
 <p>The SAX parser may provide attributes in any
 arbitrary order, regardless of the order in which they were
 declared or specified.  The number of attributes may be
 zero.</p>
 @return The number of attributes in the list.
 */
- (jint)getLength;

/*!
 @brief Return the name of an attribute in this list (by position).
 <p>The names must be unique: the SAX parser shall not include the
 same attribute twice.  Attributes without values (those declared
 #IMPLIED without a value specified in the start tag) will be
 omitted from the list.</p>
 <p>If the attribute name has a namespace prefix, the prefix
 will still be attached.</p>
 @param i The index of the attribute in the list (starting at 0).
 @return The name of the indexed attribute, or null
 if the index is out of range.
 - seealso: #getLength
 */
- (NSString *)getNameWithInt:(jint)i;

/*!
 @brief Return the type of an attribute in the list (by position).
 <p>The attribute type is one of the strings "CDATA", "ID",
 "IDREF", "IDREFS", "NMTOKEN", "NMTOKENS", "ENTITY", "ENTITIES",
 or "NOTATION" (always in upper case).</p>
 <p>If the parser has not read a declaration for the attribute,
 or if the parser does not report attribute types, then it must
 return the value "CDATA" as stated in the XML 1.0 Recommentation
 (clause 3.3.3, "Attribute-Value Normalization").</p>
 <p>For an enumerated attribute that is not a notation, the
 parser will report the type as "NMTOKEN".</p>
 @param i The index of the attribute in the list (starting at 0).
 @return The attribute type as a string, or
 null if the index is out of range.
 - seealso: #getLength
 - seealso: #getType(java.lang.String)
 */
- (NSString *)getTypeWithInt:(jint)i;

/*!
 @brief Return the value of an attribute in the list (by position).
 <p>If the attribute value is a list of tokens (IDREFS,
 ENTITIES, or NMTOKENS), the tokens will be concatenated
 into a single string separated by whitespace.</p>
 @param i The index of the attribute in the list (starting at 0).
 @return The attribute value as a string, or
 null if the index is out of range.
 - seealso: #getLength
 - seealso: #getValue(java.lang.String)
 */
- (NSString *)getValueWithInt:(jint)i;

/*!
 @brief Return the type of an attribute in the list (by name).
 <p>The return value is the same as the return value for
 getType(int).</p>
 <p>If the attribute name has a namespace prefix in the document,
 the application must include the prefix here.</p>
 @param name The name of the attribute.
 @return The attribute type as a string, or null if no
 such attribute exists.
 - seealso: #getType(int)
 */
- (NSString *)getTypeWithNSString:(NSString *)name;

/*!
 @brief Return the value of an attribute in the list (by name).
 <p>The return value is the same as the return value for
 getValue(int).</p>
 <p>If the attribute name has a namespace prefix in the document,
 the application must include the prefix here.</p>
 @param name the name of the attribute to return
 @return The attribute value as a string, or null if
 no such attribute exists.
 - seealso: #getValue(int)
 */
- (NSString *)getValueWithNSString:(NSString *)name;

@end

J2OBJC_EMPTY_STATIC_INIT(OrgXmlSaxAttributeList)

J2OBJC_TYPE_LITERAL_HEADER(OrgXmlSaxAttributeList)

#endif


#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_OrgXmlSaxAttributeList")
