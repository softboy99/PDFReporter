//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/libcore/luni/src/main/java/org/w3c/dom/DOMErrorHandler.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_OrgW3cDomDOMErrorHandler")
#ifdef RESTRICT_OrgW3cDomDOMErrorHandler
#define INCLUDE_ALL_OrgW3cDomDOMErrorHandler 0
#else
#define INCLUDE_ALL_OrgW3cDomDOMErrorHandler 1
#endif
#undef RESTRICT_OrgW3cDomDOMErrorHandler

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if !defined (OrgW3cDomDOMErrorHandler_) && (INCLUDE_ALL_OrgW3cDomDOMErrorHandler || defined(INCLUDE_OrgW3cDomDOMErrorHandler))
#define OrgW3cDomDOMErrorHandler_

@protocol OrgW3cDomDOMError;

/*!
 @brief <code>DOMErrorHandler</code> is a callback interface that the DOM
 implementation can call when reporting errors that happens while
 processing XML data, or when doing some other processing (e.g. validating
 a document).
 A <code>DOMErrorHandler</code> object can be attached to a
 <code>Document</code> using the "error-handler" on the
 <code>DOMConfiguration</code> interface. If more than one error needs to
 be reported during an operation, the sequence and numbers of the errors
 passed to the error handler are implementation dependent.
 <p> The application that is using the DOM implementation is expected to
 implement this interface.
 <p>See also the <a href='http://www.w3.org/TR/2004/REC-DOM-Level-3-Core-20040407'>Document Object Model (DOM) Level 3 Core Specification</a>.
 @since DOM Level 3
 */
@protocol OrgW3cDomDOMErrorHandler < NSObject, JavaObject >

/*!
 @brief This method is called on the error handler when an error occurs.
 <br> If an exception is thrown from this method, it is considered to be
 equivalent of returning <code>true</code>.
 @param error  The error object that describes the error. This object
 may be reused by the DOM implementation across multiple calls to
 the <code>handleError</code> method.
 @return If the <code>handleError</code> method returns
 <code>false</code>, the DOM implementation should stop the current
 processing when possible. If the method returns <code>true</code>,
 the processing may continue depending on
 <code>DOMError.severity</code>.
 */
- (jboolean)handleErrorWithOrgW3cDomDOMError:(id<OrgW3cDomDOMError>)error;

@end

J2OBJC_EMPTY_STATIC_INIT(OrgW3cDomDOMErrorHandler)

J2OBJC_TYPE_LITERAL_HEADER(OrgW3cDomDOMErrorHandler)

#endif


#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_OrgW3cDomDOMErrorHandler")
