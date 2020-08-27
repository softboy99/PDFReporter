//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/libcore/luni/src/main/java/org/xml/sax/helpers/AttributeListImpl.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_OrgXmlSaxHelpersAttributeListImpl")
#ifdef RESTRICT_OrgXmlSaxHelpersAttributeListImpl
#define INCLUDE_ALL_OrgXmlSaxHelpersAttributeListImpl 0
#else
#define INCLUDE_ALL_OrgXmlSaxHelpersAttributeListImpl 1
#endif
#undef RESTRICT_OrgXmlSaxHelpersAttributeListImpl

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if !defined (OrgXmlSaxHelpersAttributeListImpl_) && (INCLUDE_ALL_OrgXmlSaxHelpersAttributeListImpl || defined(INCLUDE_OrgXmlSaxHelpersAttributeListImpl))
#define OrgXmlSaxHelpersAttributeListImpl_

#define RESTRICT_OrgXmlSaxAttributeList 1
#define INCLUDE_OrgXmlSaxAttributeList 1
#include "org/xml/sax/AttributeList.h"

@class IOSObjectArray;

/*!
 @brief Default implementation for AttributeList.
 <blockquote>
 <em>This module, both source code and documentation, is in the
 Public Domain, and comes with <strong>NO WARRANTY</strong>.</em>
 See <a href='http://www.saxproject.org'>http://www.saxproject.org</a>
 for further information.
 </blockquote>
 <p>AttributeList implements the deprecated SAX1 <code>AttributeList</code>
  interface, and has been
 replaced by the new SAX2 <code>AttributesImpl</code>
  interface.</p>
 <p>This class provides a convenience implementation of the SAX
 <code>AttributeList</code> interface.  This
 implementation is useful both for SAX parser writers, who can use
 it to provide attributes to the application, and for SAX application
 writers, who can use it to create a persistent copy of an element's
 attribute specifications:</p>
 @code

  private AttributeList myatts;
  public void startElement (String name, AttributeList atts)
  {
              // create a persistent copy of the attribute list
              // for use outside this method
   myatts = new AttributeListImpl(atts);
   [...]
  }
  
@endcode
 <p>Please note that SAX parsers are not required to use this
 class to provide an implementation of AttributeList; it is
 supplied only as an optional convenience.  In particular,
 parser writers are encouraged to invent more efficient
 implementations.</p>
 @since SAX 1.0
 @author David Megginson
 @version 2.0.1 (sax2r2)
 - seealso: org.xml.sax.AttributeList
 - seealso: org.xml.sax.DocumentHandler#startElement
 */
__attribute__((deprecated))
@interface OrgXmlSaxHelpersAttributeListImpl : NSObject < OrgXmlSaxAttributeList >

#pragma mark Public

/*!
 @brief Create an empty attribute list.
 <p>This constructor is most useful for parser writers, who
 will use it to create a single, reusable attribute list that
 can be reset with the clear method between elements.</p>
 - seealso: #addAttribute
 - seealso: #clear
 */
- (instancetype)init;

/*!
 @brief Construct a persistent copy of an existing attribute list.
 <p>This constructor is most useful for application writers,
 who will use it to create a persistent copy of an existing
 attribute list.</p>
 @param atts The attribute list to copy
 - seealso: org.xml.sax.DocumentHandler#startElement
 */
- (instancetype)initWithOrgXmlSaxAttributeList:(id<OrgXmlSaxAttributeList>)atts;

/*!
 @brief Add an attribute to an attribute list.
 <p>This method is provided for SAX parser writers, to allow them
 to build up an attribute list incrementally before delivering
 it to the application.</p>
 @param name The attribute name.
 @param type The attribute type ("NMTOKEN" for an enumeration).
 @param value The attribute value (must not be null).
 - seealso: #removeAttribute
 - seealso: org.xml.sax.DocumentHandler#startElement
 */
- (void)addAttributeWithNSString:(NSString *)name
                    withNSString:(NSString *)type
                    withNSString:(NSString *)value;

/*!
 @brief Clear the attribute list.
 <p>SAX parser writers can use this method to reset the attribute
 list between DocumentHandler.startElement events.  Normally,
 it will make sense to reuse the same AttributeListImpl object
 rather than allocating a new one each time.</p>
 - seealso: org.xml.sax.DocumentHandler#startElement
 */
- (void)clear;

/*!
 @brief Return the number of attributes in the list.
 @return The number of attributes in the list.
 - seealso: org.xml.sax.AttributeList#getLength
 */
- (jint)getLength;

/*!
 @brief Get the name of an attribute (by position).
 @param i The position of the attribute in the list.
 @return The attribute name as a string, or null if there
 is no attribute at that position.
 - seealso: org.xml.sax.AttributeList#getName(int)
 */
- (NSString *)getNameWithInt:(jint)i;

/*!
 @brief Get the type of an attribute (by position).
 @param i The position of the attribute in the list.
 @return The attribute type as a string ("NMTOKEN" for an
 enumeration, and "CDATA" if no declaration was
 read), or null if there is no attribute at
 that position.
 - seealso: org.xml.sax.AttributeList#getType(int)
 */
- (NSString *)getTypeWithInt:(jint)i;

/*!
 @brief Get the type of an attribute (by name).
 @param name The attribute name.
 @return The attribute type as a string ("NMTOKEN" for an
 enumeration, and "CDATA" if no declaration was
 read).
 - seealso: org.xml.sax.AttributeList#getType(java.lang.String)
 */
- (NSString *)getTypeWithNSString:(NSString *)name;

/*!
 @brief Get the value of an attribute (by position).
 @param i The position of the attribute in the list.
 @return The attribute value as a string, or null if
 there is no attribute at that position.
 - seealso: org.xml.sax.AttributeList#getValue(int)
 */
- (NSString *)getValueWithInt:(jint)i;

/*!
 @brief Get the value of an attribute (by name).
 @param name The attribute name.
 @return the named attribute's value or null, if the attribute does not
 exist.
 - seealso: org.xml.sax.AttributeList#getValue(java.lang.String)
 */
- (NSString *)getValueWithNSString:(NSString *)name;

/*!
 @brief Remove an attribute from the list.
 <p>SAX application writers can use this method to filter an
 attribute out of an AttributeList.  Note that invoking this
 method will change the length of the attribute list and
 some of the attribute's indices.</p>
 <p>If the requested attribute is not in the list, this is
 a no-op.</p>
 @param name The attribute name.
 - seealso: #addAttribute
 */
- (void)removeAttributeWithNSString:(NSString *)name;

/*!
 @brief Set the attribute list, discarding previous contents.
 <p>This method allows an application writer to reuse an
 attribute list easily.</p>
 @param atts The attribute list to copy.
 */
- (void)setAttributeListWithOrgXmlSaxAttributeList:(id<OrgXmlSaxAttributeList>)atts;

@end

J2OBJC_EMPTY_STATIC_INIT(OrgXmlSaxHelpersAttributeListImpl)

FOUNDATION_EXPORT void OrgXmlSaxHelpersAttributeListImpl_init(OrgXmlSaxHelpersAttributeListImpl *self);

FOUNDATION_EXPORT OrgXmlSaxHelpersAttributeListImpl *new_OrgXmlSaxHelpersAttributeListImpl_init() NS_RETURNS_RETAINED;

FOUNDATION_EXPORT OrgXmlSaxHelpersAttributeListImpl *create_OrgXmlSaxHelpersAttributeListImpl_init();

FOUNDATION_EXPORT void OrgXmlSaxHelpersAttributeListImpl_initWithOrgXmlSaxAttributeList_(OrgXmlSaxHelpersAttributeListImpl *self, id<OrgXmlSaxAttributeList> atts);

FOUNDATION_EXPORT OrgXmlSaxHelpersAttributeListImpl *new_OrgXmlSaxHelpersAttributeListImpl_initWithOrgXmlSaxAttributeList_(id<OrgXmlSaxAttributeList> atts) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT OrgXmlSaxHelpersAttributeListImpl *create_OrgXmlSaxHelpersAttributeListImpl_initWithOrgXmlSaxAttributeList_(id<OrgXmlSaxAttributeList> atts);

J2OBJC_TYPE_LITERAL_HEADER(OrgXmlSaxHelpersAttributeListImpl)

#endif


#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_OrgXmlSaxHelpersAttributeListImpl")
