//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: pdfreporter-core/src/org/oss/pdfreporter/engine/fonts/SimpleFontExtensionHelper.java
//
//  Created by kendra on 9/27/13.
//

#include "IOSClass.h"
#include "java/io/FileOutputStream.h"
#include "java/io/IOException.h"
#include "java/io/InputStream.h"
#include "java/io/InputStreamReader.h"
#include "java/io/OutputStream.h"
#include "java/io/OutputStreamWriter.h"
#include "java/io/Writer.h"
#include "java/lang/Boolean.h"
#include "java/lang/Exception.h"
#include "java/lang/StringBuffer.h"
#include "java/util/ArrayList.h"
#include "java/util/HashMap.h"
#include "java/util/HashSet.h"
#include "java/util/Iterator.h"
#include "java/util/List.h"
#include "java/util/Map.h"
#include "java/util/Set.h"
#include "org/oss/pdfreporter/engine/DefaultJasperReportsContext.h"
#include "org/oss/pdfreporter/engine/JRException.h"
#include "org/oss/pdfreporter/engine/JRRuntimeException.h"
#include "org/oss/pdfreporter/engine/JasperReportsContext.h"
#include "org/oss/pdfreporter/engine/fonts/FontFace.h"
#include "org/oss/pdfreporter/engine/fonts/FontFamily.h"
#include "org/oss/pdfreporter/engine/fonts/SimpleFontExtensionHelper.h"
#include "org/oss/pdfreporter/engine/fonts/SimpleFontExtensionsRegistryFactory.h"
#include "org/oss/pdfreporter/engine/fonts/SimpleFontFamily.h"
#include "org/oss/pdfreporter/registry/IRegistry.h"
#include "org/oss/pdfreporter/repo/RepositoryUtil.h"
#include "org/oss/pdfreporter/uses/org/w3c/dom/Document.h"
#include "org/oss/pdfreporter/uses/org/w3c/dom/Element.h"
#include "org/oss/pdfreporter/uses/org/w3c/dom/NamedNodeMap.h"
#include "org/oss/pdfreporter/uses/org/w3c/dom/Node.h"
#include "org/oss/pdfreporter/uses/org/w3c/dom/NodeList.h"
#include "org/oss/pdfreporter/xml/parsers/IDocumentBuilder.h"
#include "org/oss/pdfreporter/xml/parsers/IDocumentBuilderFactory.h"
#include "org/oss/pdfreporter/xml/parsers/IInputSource.h"
#include "org/oss/pdfreporter/xml/parsers/ParserConfigurationException.h"
#include "org/oss/pdfreporter/xml/parsers/XMLParseException.h"
#include "org/oss/pdfreporter/xml/parsers/factory/IXmlParserFactory.h"

@implementation OrgOssPdfreporterEngineFontsSimpleFontExtensionHelper

static NSString * OrgOssPdfreporterEngineFontsSimpleFontExtensionHelper_DEFAULT_ENCODING_ = @"UTF-8";
static NSString * OrgOssPdfreporterEngineFontsSimpleFontExtensionHelper_NODE_fontFamily_ = @"fontFamily";
static NSString * OrgOssPdfreporterEngineFontsSimpleFontExtensionHelper_NODE_normal_ = @"normal";
static NSString * OrgOssPdfreporterEngineFontsSimpleFontExtensionHelper_NODE_bold_ = @"bold";
static NSString * OrgOssPdfreporterEngineFontsSimpleFontExtensionHelper_NODE_italic_ = @"italic";
static NSString * OrgOssPdfreporterEngineFontsSimpleFontExtensionHelper_NODE_boldItalic_ = @"boldItalic";
static NSString * OrgOssPdfreporterEngineFontsSimpleFontExtensionHelper_NODE_pdfEncoding_ = @"pdfEncoding";
static NSString * OrgOssPdfreporterEngineFontsSimpleFontExtensionHelper_NODE_pdfEmbedded_ = @"pdfEmbedded";
static NSString * OrgOssPdfreporterEngineFontsSimpleFontExtensionHelper_NODE_exportFonts_ = @"exportFonts";
static NSString * OrgOssPdfreporterEngineFontsSimpleFontExtensionHelper_NODE_export_ = @"export";
static NSString * OrgOssPdfreporterEngineFontsSimpleFontExtensionHelper_NODE_locales_ = @"locales";
static NSString * OrgOssPdfreporterEngineFontsSimpleFontExtensionHelper_NODE_locale_ = @"locale";
static NSString * OrgOssPdfreporterEngineFontsSimpleFontExtensionHelper_ATTRIBUTE_name_ = @"name";
static NSString * OrgOssPdfreporterEngineFontsSimpleFontExtensionHelper_ATTRIBUTE_key_ = @"key";
static OrgOssPdfreporterEngineFontsSimpleFontExtensionHelper * OrgOssPdfreporterEngineFontsSimpleFontExtensionHelper_instance_;

@synthesize documentBuilder = documentBuilder_;

+ (NSString *)DEFAULT_ENCODING {
  return OrgOssPdfreporterEngineFontsSimpleFontExtensionHelper_DEFAULT_ENCODING_;
}

+ (NSString *)NODE_fontFamily {
  return OrgOssPdfreporterEngineFontsSimpleFontExtensionHelper_NODE_fontFamily_;
}

+ (NSString *)NODE_normal {
  return OrgOssPdfreporterEngineFontsSimpleFontExtensionHelper_NODE_normal_;
}

+ (NSString *)NODE_bold {
  return OrgOssPdfreporterEngineFontsSimpleFontExtensionHelper_NODE_bold_;
}

+ (NSString *)NODE_italic {
  return OrgOssPdfreporterEngineFontsSimpleFontExtensionHelper_NODE_italic_;
}

+ (NSString *)NODE_boldItalic {
  return OrgOssPdfreporterEngineFontsSimpleFontExtensionHelper_NODE_boldItalic_;
}

+ (NSString *)NODE_pdfEncoding {
  return OrgOssPdfreporterEngineFontsSimpleFontExtensionHelper_NODE_pdfEncoding_;
}

+ (NSString *)NODE_pdfEmbedded {
  return OrgOssPdfreporterEngineFontsSimpleFontExtensionHelper_NODE_pdfEmbedded_;
}

+ (NSString *)NODE_exportFonts {
  return OrgOssPdfreporterEngineFontsSimpleFontExtensionHelper_NODE_exportFonts_;
}

+ (NSString *)NODE_export {
  return OrgOssPdfreporterEngineFontsSimpleFontExtensionHelper_NODE_export_;
}

+ (NSString *)NODE_locales {
  return OrgOssPdfreporterEngineFontsSimpleFontExtensionHelper_NODE_locales_;
}

+ (NSString *)NODE_locale {
  return OrgOssPdfreporterEngineFontsSimpleFontExtensionHelper_NODE_locale_;
}

+ (NSString *)ATTRIBUTE_name {
  return OrgOssPdfreporterEngineFontsSimpleFontExtensionHelper_ATTRIBUTE_name_;
}

+ (NSString *)ATTRIBUTE_key {
  return OrgOssPdfreporterEngineFontsSimpleFontExtensionHelper_ATTRIBUTE_key_;
}

+ (OrgOssPdfreporterEngineFontsSimpleFontExtensionHelper *)instance {
  return OrgOssPdfreporterEngineFontsSimpleFontExtensionHelper_instance_;
}

+ (void)setInstance:(OrgOssPdfreporterEngineFontsSimpleFontExtensionHelper *)instance {
  OrgOssPdfreporterEngineFontsSimpleFontExtensionHelper_instance_ = instance;
}

+ (OrgOssPdfreporterEngineFontsSimpleFontExtensionHelper *)getInstance {
  if (OrgOssPdfreporterEngineFontsSimpleFontExtensionHelper_instance_ == nil) {
    OrgOssPdfreporterEngineFontsSimpleFontExtensionHelper_instance_ = [[OrgOssPdfreporterEngineFontsSimpleFontExtensionHelper alloc] init];
  }
  return OrgOssPdfreporterEngineFontsSimpleFontExtensionHelper_instance_;
}

- (id)init {
  if ((self = [super init])) {
    @try {
      id<OrgOssPdfreporterXmlParsersIDocumentBuilderFactory> factory = [((id<OrgOssPdfreporterXmlParsersFactoryIXmlParserFactory>) nil_chk([OrgOssPdfreporterRegistryIRegistry getIXmlParserFactory])) newDocumentBuilderFactory];
      documentBuilder_ = [((id<OrgOssPdfreporterXmlParsersIDocumentBuilderFactory>) nil_chk(factory)) newDocumentBuilder];
      [((id<OrgOssPdfreporterXmlParsersIDocumentBuilder>) nil_chk(documentBuilder_)) setErrorHandlerWithOrgOssPdfreporterXmlParsersXMLErrorHandler:self];
    }
    @catch (OrgOssPdfreporterXmlParsersParserConfigurationException *e) {
      @throw [[OrgOssPdfreporterEngineJRRuntimeException alloc] initWithJavaLangThrowable:e];
    }
  }
  return self;
}

- (id<JavaUtilList>)loadFontFamiliesWithNSString:(NSString *)file {
  return [self loadFontFamiliesWithOrgOssPdfreporterEngineJasperReportsContext:[OrgOssPdfreporterEngineDefaultJasperReportsContext getInstance] withNSString:file];
}

- (id<JavaUtilList>)loadFontFamiliesWithOrgOssPdfreporterEngineJasperReportsContext:(id<OrgOssPdfreporterEngineJasperReportsContext>)jasperReportsContext
                                                                       withNSString:(NSString *)file {
  JavaIoInputStream *is = nil;
  @try {
    is = [((OrgOssPdfreporterRepoRepositoryUtil *) nil_chk([OrgOssPdfreporterRepoRepositoryUtil getInstanceWithOrgOssPdfreporterEngineJasperReportsContext:jasperReportsContext])) getInputStreamFromLocationWithNSString:file];
    return [self loadFontFamiliesWithOrgOssPdfreporterEngineJasperReportsContext:jasperReportsContext withJavaIoInputStream:is];
  }
  @catch (OrgOssPdfreporterEngineJRException *e) {
    @throw [[OrgOssPdfreporterEngineJRRuntimeException alloc] initWithJavaLangThrowable:e];
  }
  @finally {
    if (is != nil) {
      @try {
        [is close];
      }
      @catch (JavaIoIOException *e) {
      }
    }
  }
}

- (id<JavaUtilList>)loadFontFamiliesWithOrgOssPdfreporterEngineJasperReportsContext:(id<OrgOssPdfreporterEngineJasperReportsContext>)jasperReportsContext
                                                              withJavaIoInputStream:(JavaIoInputStream *)is {
  id<JavaUtilList> fontFamilies = nil;
  @try {
    id<OrgOssPdfreporterUsesOrgW3cDomDocument> document = [((id<OrgOssPdfreporterXmlParsersIDocumentBuilder>) nil_chk(documentBuilder_)) parseWithOrgOssPdfreporterXmlParsersIInputSource:[((id<OrgOssPdfreporterXmlParsersFactoryIXmlParserFactory>) nil_chk([OrgOssPdfreporterRegistryIRegistry getIXmlParserFactory])) newInputSourceWithJavaIoReader:[[JavaIoInputStreamReader alloc] initWithJavaIoInputStream:is withNSString:@"UTF-8"]]];
    fontFamilies = [self parseFontFamiliesWithOrgOssPdfreporterEngineJasperReportsContext:jasperReportsContext withOrgOssPdfreporterUsesOrgW3cDomNode:[((id<OrgOssPdfreporterUsesOrgW3cDomDocument>) nil_chk(document)) getDocumentElement]];
  }
  @catch (OrgOssPdfreporterXmlParsersXMLParseException *e) {
    @throw [[OrgOssPdfreporterEngineJRRuntimeException alloc] initWithJavaLangThrowable:e];
  }
  @catch (JavaIoIOException *e) {
    @throw [[OrgOssPdfreporterEngineJRRuntimeException alloc] initWithJavaLangThrowable:e];
  }
  return fontFamilies;
}

- (id<JavaUtilList>)loadFontFamiliesWithJavaIoInputStream:(JavaIoInputStream *)is {
  return [self loadFontFamiliesWithOrgOssPdfreporterEngineJasperReportsContext:[OrgOssPdfreporterEngineDefaultJasperReportsContext getInstance] withJavaIoInputStream:is];
}

- (id<JavaUtilList>)parseFontFamiliesWithOrgOssPdfreporterEngineJasperReportsContext:(id<OrgOssPdfreporterEngineJasperReportsContext>)jasperReportsContext
                                              withOrgOssPdfreporterUsesOrgW3cDomNode:(id<OrgOssPdfreporterUsesOrgW3cDomNode>)fontFamiliesNode {
  id<JavaUtilList> fontFamilies = [[JavaUtilArrayList alloc] init];
  id<OrgOssPdfreporterUsesOrgW3cDomNodeList> nodeList = [((id<OrgOssPdfreporterUsesOrgW3cDomNode>) nil_chk(fontFamiliesNode)) getChildNodes];
  for (int i = 0; i < [((id<OrgOssPdfreporterUsesOrgW3cDomNodeList>) nil_chk(nodeList)) getLength]; i++) {
    id<OrgOssPdfreporterUsesOrgW3cDomNode> node = [((id<OrgOssPdfreporterUsesOrgW3cDomNodeList>) nil_chk(nodeList)) itemWithInt:i];
    if ([((id<OrgOssPdfreporterUsesOrgW3cDomNode>) nil_chk(node)) getNodeType] == OrgOssPdfreporterUsesOrgW3cDomNode_ELEMENT_NODE && [((NSString *) nil_chk(OrgOssPdfreporterEngineFontsSimpleFontExtensionHelper_NODE_fontFamily_)) isEqual:[((id<OrgOssPdfreporterUsesOrgW3cDomNode>) nil_chk(node)) getNodeName]]) {
      [((id<JavaUtilList>) nil_chk(fontFamilies)) addWithId:[self parseFontFamilyWithOrgOssPdfreporterEngineJasperReportsContext:jasperReportsContext withOrgOssPdfreporterUsesOrgW3cDomNode:node]];
    }
  }
  return fontFamilies;
}

- (id<OrgOssPdfreporterEngineFontsFontFamily>)parseFontFamilyWithOrgOssPdfreporterEngineJasperReportsContext:(id<OrgOssPdfreporterEngineJasperReportsContext>)jasperReportsContext
                                                                      withOrgOssPdfreporterUsesOrgW3cDomNode:(id<OrgOssPdfreporterUsesOrgW3cDomNode>)fontFamilyNode {
  OrgOssPdfreporterEngineFontsSimpleFontFamily *fontFamily = [[OrgOssPdfreporterEngineFontsSimpleFontFamily alloc] initWithOrgOssPdfreporterEngineJasperReportsContext:jasperReportsContext];
  id<OrgOssPdfreporterUsesOrgW3cDomNamedNodeMap> nodeAttrs = [((id<OrgOssPdfreporterUsesOrgW3cDomNode>) nil_chk(fontFamilyNode)) getAttributes];
  if ([((id<OrgOssPdfreporterUsesOrgW3cDomNamedNodeMap>) nil_chk(nodeAttrs)) getNamedItemWithNSString:OrgOssPdfreporterEngineFontsSimpleFontExtensionHelper_ATTRIBUTE_name_] != nil) {
    [((OrgOssPdfreporterEngineFontsSimpleFontFamily *) nil_chk(fontFamily)) setNameWithNSString:[((id<OrgOssPdfreporterUsesOrgW3cDomNode>) nil_chk([((id<OrgOssPdfreporterUsesOrgW3cDomNamedNodeMap>) nil_chk(nodeAttrs)) getNamedItemWithNSString:OrgOssPdfreporterEngineFontsSimpleFontExtensionHelper_ATTRIBUTE_name_])) getNodeValue]];
  }
  id<OrgOssPdfreporterUsesOrgW3cDomNodeList> nodeList = [((id<OrgOssPdfreporterUsesOrgW3cDomNode>) nil_chk(fontFamilyNode)) getChildNodes];
  for (int i = 0; i < [((id<OrgOssPdfreporterUsesOrgW3cDomNodeList>) nil_chk(nodeList)) getLength]; i++) {
    id<OrgOssPdfreporterUsesOrgW3cDomNode> node = [((id<OrgOssPdfreporterUsesOrgW3cDomNodeList>) nil_chk(nodeList)) itemWithInt:i];
    if ([((id<OrgOssPdfreporterUsesOrgW3cDomNode>) nil_chk(node)) getNodeType] == OrgOssPdfreporterUsesOrgW3cDomNode_ELEMENT_NODE) {
      if ([((NSString *) nil_chk(OrgOssPdfreporterEngineFontsSimpleFontExtensionHelper_NODE_normal_)) isEqual:[((id<OrgOssPdfreporterUsesOrgW3cDomNode>) nil_chk(node)) getNodeName]]) {
        [((OrgOssPdfreporterEngineFontsSimpleFontFamily *) nil_chk(fontFamily)) setNormalWithNSString:[((id<OrgOssPdfreporterUsesOrgW3cDomNode>) nil_chk(node)) getTextContent]];
      }
      else if ([((NSString *) nil_chk(OrgOssPdfreporterEngineFontsSimpleFontExtensionHelper_NODE_bold_)) isEqual:[((id<OrgOssPdfreporterUsesOrgW3cDomNode>) nil_chk(node)) getNodeName]]) {
        [((OrgOssPdfreporterEngineFontsSimpleFontFamily *) nil_chk(fontFamily)) setBoldWithNSString:[((id<OrgOssPdfreporterUsesOrgW3cDomNode>) nil_chk(node)) getTextContent]];
      }
      else if ([((NSString *) nil_chk(OrgOssPdfreporterEngineFontsSimpleFontExtensionHelper_NODE_italic_)) isEqual:[((id<OrgOssPdfreporterUsesOrgW3cDomNode>) nil_chk(node)) getNodeName]]) {
        [((OrgOssPdfreporterEngineFontsSimpleFontFamily *) nil_chk(fontFamily)) setItalicWithNSString:[((id<OrgOssPdfreporterUsesOrgW3cDomNode>) nil_chk(node)) getTextContent]];
      }
      else if ([((NSString *) nil_chk(OrgOssPdfreporterEngineFontsSimpleFontExtensionHelper_NODE_boldItalic_)) isEqual:[((id<OrgOssPdfreporterUsesOrgW3cDomNode>) nil_chk(node)) getNodeName]]) {
        [((OrgOssPdfreporterEngineFontsSimpleFontFamily *) nil_chk(fontFamily)) setBoldItalicWithNSString:[((id<OrgOssPdfreporterUsesOrgW3cDomNode>) nil_chk(node)) getTextContent]];
      }
      else if ([((NSString *) nil_chk(OrgOssPdfreporterEngineFontsSimpleFontExtensionHelper_NODE_pdfEncoding_)) isEqual:[((id<OrgOssPdfreporterUsesOrgW3cDomNode>) nil_chk(node)) getNodeName]]) {
        [((OrgOssPdfreporterEngineFontsSimpleFontFamily *) nil_chk(fontFamily)) setPdfEncodingWithNSString:[((id<OrgOssPdfreporterUsesOrgW3cDomNode>) nil_chk(node)) getTextContent]];
      }
      else if ([((NSString *) nil_chk(OrgOssPdfreporterEngineFontsSimpleFontExtensionHelper_NODE_pdfEmbedded_)) isEqual:[((id<OrgOssPdfreporterUsesOrgW3cDomNode>) nil_chk(node)) getNodeName]]) {
        [((OrgOssPdfreporterEngineFontsSimpleFontFamily *) nil_chk(fontFamily)) setPdfEmbeddedWithJavaLangBoolean:[JavaLangBoolean valueOfWithNSString:[((id<OrgOssPdfreporterUsesOrgW3cDomNode>) nil_chk(node)) getTextContent]]];
      }
      else if ([((NSString *) nil_chk(OrgOssPdfreporterEngineFontsSimpleFontExtensionHelper_NODE_exportFonts_)) isEqual:[((id<OrgOssPdfreporterUsesOrgW3cDomNode>) nil_chk(node)) getNodeName]]) {
        [((OrgOssPdfreporterEngineFontsSimpleFontFamily *) nil_chk(fontFamily)) setExportFontsWithJavaUtilMap:[self parseExportFontsWithOrgOssPdfreporterUsesOrgW3cDomNode:node]];
      }
      else if ([((NSString *) nil_chk(OrgOssPdfreporterEngineFontsSimpleFontExtensionHelper_NODE_locales_)) isEqual:[((id<OrgOssPdfreporterUsesOrgW3cDomNode>) nil_chk(node)) getNodeName]]) {
        [((OrgOssPdfreporterEngineFontsSimpleFontFamily *) nil_chk(fontFamily)) setLocalesWithJavaUtilSet:[self parseLocalesWithOrgOssPdfreporterUsesOrgW3cDomNode:node]];
      }
    }
  }
  return fontFamily;
}

- (id<JavaUtilMap>)parseExportFontsWithOrgOssPdfreporterUsesOrgW3cDomNode:(id<OrgOssPdfreporterUsesOrgW3cDomNode>)exportFontsNode {
  id<JavaUtilMap> exportFonts = [[JavaUtilHashMap alloc] init];
  id<OrgOssPdfreporterUsesOrgW3cDomNodeList> nodeList = [((id<OrgOssPdfreporterUsesOrgW3cDomNode>) nil_chk(exportFontsNode)) getChildNodes];
  for (int i = 0; i < [((id<OrgOssPdfreporterUsesOrgW3cDomNodeList>) nil_chk(nodeList)) getLength]; i++) {
    id<OrgOssPdfreporterUsesOrgW3cDomNode> node = [((id<OrgOssPdfreporterUsesOrgW3cDomNodeList>) nil_chk(nodeList)) itemWithInt:i];
    if ([((id<OrgOssPdfreporterUsesOrgW3cDomNode>) nil_chk(node)) getNodeType] == OrgOssPdfreporterUsesOrgW3cDomNode_ELEMENT_NODE && [((NSString *) nil_chk(OrgOssPdfreporterEngineFontsSimpleFontExtensionHelper_NODE_export_)) isEqual:[((id<OrgOssPdfreporterUsesOrgW3cDomNode>) nil_chk(node)) getNodeName]]) {
      id<OrgOssPdfreporterUsesOrgW3cDomNamedNodeMap> nodeAttrs = [((id<OrgOssPdfreporterUsesOrgW3cDomNode>) nil_chk(node)) getAttributes];
      if ([((id<OrgOssPdfreporterUsesOrgW3cDomNamedNodeMap>) nil_chk(nodeAttrs)) getNamedItemWithNSString:OrgOssPdfreporterEngineFontsSimpleFontExtensionHelper_ATTRIBUTE_key_] != nil) {
        (void) [((id<JavaUtilMap>) nil_chk(exportFonts)) putWithId:[((id<OrgOssPdfreporterUsesOrgW3cDomNode>) nil_chk([((id<OrgOssPdfreporterUsesOrgW3cDomNamedNodeMap>) nil_chk(nodeAttrs)) getNamedItemWithNSString:OrgOssPdfreporterEngineFontsSimpleFontExtensionHelper_ATTRIBUTE_key_])) getNodeValue] withId:[((id<OrgOssPdfreporterUsesOrgW3cDomNode>) nil_chk(node)) getTextContent]];
      }
    }
  }
  return exportFonts;
}

+ (NSString *)getFontsXmlWithJavaUtilList:(id<JavaUtilList>)fontFamilies {
  JavaLangStringBuffer *buffer = nil;
  if (fontFamilies != nil) {
    buffer = [[JavaLangStringBuffer alloc] init];
    (void) [((JavaLangStringBuffer *) nil_chk(buffer)) appendWithNSString:@"<?xml version=\"1.0\" encoding=\"UTF-8\"?>\n"];
    (void) [((JavaLangStringBuffer *) nil_chk(buffer)) appendWithNSString:@"<fontFamilies>\n"];
    {
      id<JavaUtilIterator> iter__ = [fontFamilies iterator];
      while ([((id<JavaUtilIterator>) nil_chk(iter__)) hasNext]) {
        id<OrgOssPdfreporterEngineFontsFontFamily> fontFamily = [((id<JavaUtilIterator>) nil_chk(iter__)) next];
        [OrgOssPdfreporterEngineFontsSimpleFontExtensionHelper addFontFamilyWithJavaLangStringBuffer:buffer withOrgOssPdfreporterEngineFontsFontFamily:fontFamily];
      }
    }
    (void) [((JavaLangStringBuffer *) nil_chk(buffer)) appendWithNSString:@"</fontFamilies>\n"];
    return [((JavaLangStringBuffer *) nil_chk(buffer)) description];
  }
  else {
    return nil;
  }
}

+ (void)addFontFamilyWithJavaLangStringBuffer:(JavaLangStringBuffer *)buffer
   withOrgOssPdfreporterEngineFontsFontFamily:(id<OrgOssPdfreporterEngineFontsFontFamily>)fontFamily {
  if (fontFamily != nil) {
    if ([((id<OrgOssPdfreporterEngineFontsFontFamily>) nil_chk(fontFamily)) getName] == nil) {
      return;
    }
    NSString *indent = @"  ";
    (void) [((JavaLangStringBuffer *) nil_chk(buffer)) appendWithNSString:[NSString stringWithFormat:@"%@<fontFamily name=\"%@\">\n", indent, [fontFamily getName]]];
    indent = @"    ";
    if ([((id<OrgOssPdfreporterEngineFontsFontFamily>) nil_chk(fontFamily)) getNormalFace] != nil) {
      (void) [((JavaLangStringBuffer *) nil_chk(buffer)) appendWithNSString:[NSString stringWithFormat:@"%@<normal>%@</normal>\n", indent, [((id<OrgOssPdfreporterEngineFontsFontFace>) nil_chk([((id<OrgOssPdfreporterEngineFontsFontFamily>) nil_chk(fontFamily)) getNormalFace])) getFile]]];
    }
    if ([((id<OrgOssPdfreporterEngineFontsFontFamily>) nil_chk(fontFamily)) getBoldFace] != nil) {
      (void) [((JavaLangStringBuffer *) nil_chk(buffer)) appendWithNSString:[NSString stringWithFormat:@"%@<bold>%@</bold>\n", indent, [((id<OrgOssPdfreporterEngineFontsFontFace>) nil_chk([((id<OrgOssPdfreporterEngineFontsFontFamily>) nil_chk(fontFamily)) getBoldFace])) getFile]]];
    }
    if ([((id<OrgOssPdfreporterEngineFontsFontFamily>) nil_chk(fontFamily)) getItalicFace] != nil) {
      (void) [((JavaLangStringBuffer *) nil_chk(buffer)) appendWithNSString:[NSString stringWithFormat:@"%@<italic>%@</italic>\n", indent, [((id<OrgOssPdfreporterEngineFontsFontFace>) nil_chk([((id<OrgOssPdfreporterEngineFontsFontFamily>) nil_chk(fontFamily)) getItalicFace])) getFile]]];
    }
    if ([((id<OrgOssPdfreporterEngineFontsFontFamily>) nil_chk(fontFamily)) getBoldItalicFace] != nil) {
      (void) [((JavaLangStringBuffer *) nil_chk(buffer)) appendWithNSString:[NSString stringWithFormat:@"%@<boldItalic>%@</boldItalic>\n", indent, [((id<OrgOssPdfreporterEngineFontsFontFace>) nil_chk([((id<OrgOssPdfreporterEngineFontsFontFamily>) nil_chk(fontFamily)) getBoldItalicFace])) getFile]]];
    }
    if ([((id<OrgOssPdfreporterEngineFontsFontFamily>) nil_chk(fontFamily)) getPdfEncoding] != nil) {
      (void) [((JavaLangStringBuffer *) nil_chk(buffer)) appendWithNSString:[NSString stringWithFormat:@"%@<pdfEncoding>%@</pdfEncoding>\n", indent, [((id<OrgOssPdfreporterEngineFontsFontFamily>) nil_chk(fontFamily)) getPdfEncoding]]];
    }
    if ([((id<OrgOssPdfreporterEngineFontsFontFamily>) nil_chk(fontFamily)) isPdfEmbedded] != nil) {
      (void) [((JavaLangStringBuffer *) nil_chk(buffer)) appendWithNSString:[NSString stringWithFormat:@"%@<pdfEmbedded>%@</pdfEmbedded>\n", indent, [((id<OrgOssPdfreporterEngineFontsFontFamily>) nil_chk(fontFamily)) isPdfEmbedded]]];
    }
    if ([(id) fontFamily isKindOfClass:[OrgOssPdfreporterEngineFontsSimpleFontFamily class]]) {
      OrgOssPdfreporterEngineFontsSimpleFontFamily *simpleFontFamily = (OrgOssPdfreporterEngineFontsSimpleFontFamily *) fontFamily;
      id<JavaUtilMap> exportFonts = [((OrgOssPdfreporterEngineFontsSimpleFontFamily *) nil_chk(simpleFontFamily)) getExportFonts];
      if (exportFonts != nil) {
        (void) [((JavaLangStringBuffer *) nil_chk(buffer)) appendWithNSString:[NSString stringWithFormat:@"%@<exportFonts>\n", indent]];
        indent = @"      ";
        {
          id<JavaUtilIterator> iter__ = [((id<JavaUtilSet>) nil_chk([exportFonts keySet])) iterator];
          while ([((id<JavaUtilIterator>) nil_chk(iter__)) hasNext]) {
            NSString *key = [((id<JavaUtilIterator>) nil_chk(iter__)) next];
            (void) [((JavaLangStringBuffer *) nil_chk(buffer)) appendWithNSString:[NSString stringWithFormat:@"%@<export key=\"%@\">%@</export>\n", indent, key, [exportFonts getWithId:key]]];
          }
        }
        indent = @"    ";
        (void) [((JavaLangStringBuffer *) nil_chk(buffer)) appendWithNSString:[NSString stringWithFormat:@"%@</exportFonts>\n", indent]];
      }
      id<JavaUtilSet> locales = [((OrgOssPdfreporterEngineFontsSimpleFontFamily *) nil_chk(simpleFontFamily)) getLocales];
      if (locales != nil) {
        (void) [((JavaLangStringBuffer *) nil_chk(buffer)) appendWithNSString:[NSString stringWithFormat:@"%@<locales>\n", indent]];
        indent = @"      ";
        {
          id<JavaUtilIterator> iter__ = [locales iterator];
          while ([((id<JavaUtilIterator>) nil_chk(iter__)) hasNext]) {
            NSString *locale = [((id<JavaUtilIterator>) nil_chk(iter__)) next];
            (void) [((JavaLangStringBuffer *) nil_chk(buffer)) appendWithNSString:[NSString stringWithFormat:@"%@<locale>%@</locale>\n", indent, locale]];
          }
        }
        indent = @"    ";
        (void) [((JavaLangStringBuffer *) nil_chk(buffer)) appendWithNSString:[NSString stringWithFormat:@"%@</locales>\n", indent]];
      }
    }
    indent = @"  ";
    (void) [((JavaLangStringBuffer *) nil_chk(buffer)) appendWithNSString:[NSString stringWithFormat:@"%@</fontFamily>\n\n", indent]];
  }
}

+ (void)writeFontsXmlWithNSString:(NSString *)destFileName
                 withJavaUtilList:(id<JavaUtilList>)fontFamilies {
  JavaIoFileOutputStream *fos = nil;
  @try {
    fos = [[JavaIoFileOutputStream alloc] initWithNSString:destFileName];
    [OrgOssPdfreporterEngineFontsSimpleFontExtensionHelper writeFontsXmlWithJavaIoOutputStream:fos withJavaUtilList:fontFamilies];
  }
  @catch (JavaIoIOException *e) {
    @throw [[OrgOssPdfreporterEngineJRException alloc] initWithNSString:[NSString stringWithFormat:@"Error writing to file : %@", destFileName] withJavaLangThrowable:e];
  }
  @finally {
    if (fos != nil) {
      @try {
        [fos close];
      }
      @catch (JavaIoIOException *e) {
      }
    }
  }
}

+ (void)writeFontsXmlWithJavaIoOutputStream:(JavaIoOutputStream *)outputStream
                           withJavaUtilList:(id<JavaUtilList>)fontFamilies {
  JavaIoWriter *out = nil;
  @try {
    out = [[JavaIoOutputStreamWriter alloc] initWithJavaIoOutputStream:outputStream withNSString:OrgOssPdfreporterEngineFontsSimpleFontExtensionHelper_DEFAULT_ENCODING_];
    [((JavaIoWriter *) nil_chk(out)) writeWithNSString:[OrgOssPdfreporterEngineFontsSimpleFontExtensionHelper getFontsXmlWithJavaUtilList:fontFamilies]];
    [((JavaIoWriter *) nil_chk(out)) flush];
  }
  @catch (JavaLangException *e) {
    @throw [[OrgOssPdfreporterEngineJRException alloc] initWithNSString:@"Error writing to OutputStream : " withJavaLangThrowable:e];
  }
}

+ (void)writeFontExtensionsPropertiesWithNSString:(NSString *)fontsXmlLocation
                                     withNSString:(NSString *)destFileName {
  JavaIoFileOutputStream *fos = nil;
  @try {
    fos = [[JavaIoFileOutputStream alloc] initWithNSString:destFileName withBOOL:NO];
    [OrgOssPdfreporterEngineFontsSimpleFontExtensionHelper writeFontExtensionsPropertiesWithNSString:fontsXmlLocation withJavaIoOutputStream:fos];
  }
  @catch (JavaIoIOException *e) {
    @throw [[OrgOssPdfreporterEngineJRException alloc] initWithNSString:[NSString stringWithFormat:@"Error writing to file : %@", destFileName] withJavaLangThrowable:e];
  }
  @finally {
    if (fos != nil) {
      @try {
        [fos close];
      }
      @catch (JavaIoIOException *e) {
      }
    }
  }
}

+ (void)writeFontExtensionsPropertiesWithNSString:(NSString *)fontFamiliesPropertyValue
                           withJavaIoOutputStream:(JavaIoOutputStream *)outputStream {
  [OrgOssPdfreporterEngineFontsSimpleFontExtensionHelper writeFontExtensionsPropertiesWithNSString:[OrgOssPdfreporterEngineFontsSimpleFontExtensionsRegistryFactory PROPERTY_SIMPLE_FONT_FAMILIES_REGISTRY_FACTORY] withNSString:[[IOSClass classWithClass:[OrgOssPdfreporterEngineFontsSimpleFontExtensionsRegistryFactory class]] getName] withNSString:@"net.sf.jasperreports.extension.simple.font.families.location" withNSString:fontFamiliesPropertyValue withJavaIoOutputStream:outputStream];
}

+ (void)writeFontExtensionsPropertiesWithNSString:(NSString *)fontRegistryFactoryPropertyName
                                     withNSString:(NSString *)fontRegistryFactoryPropertyValue
                                     withNSString:(NSString *)fontFamiliesPropertyName
                                     withNSString:(NSString *)fontFamiliesPropertyValue
                           withJavaIoOutputStream:(JavaIoOutputStream *)outputStream {
  JavaIoWriter *out = nil;
  @try {
    out = [[JavaIoOutputStreamWriter alloc] initWithJavaIoOutputStream:outputStream withNSString:OrgOssPdfreporterEngineFontsSimpleFontExtensionHelper_DEFAULT_ENCODING_];
    [((JavaIoWriter *) nil_chk(out)) writeWithNSString:[NSString stringWithFormat:@"%@=%@\n", fontRegistryFactoryPropertyName, fontRegistryFactoryPropertyValue]];
    [((JavaIoWriter *) nil_chk(out)) writeWithNSString:[NSString stringWithFormat:@"%@=%@\n", fontFamiliesPropertyName, fontFamiliesPropertyValue]];
    [((JavaIoWriter *) nil_chk(out)) flush];
  }
  @catch (JavaLangException *e) {
    @throw [[OrgOssPdfreporterEngineJRException alloc] initWithNSString:@"Error writing to OutputStream : " withJavaLangThrowable:e];
  }
  @finally {
    if (out != nil) {
      @try {
        [out close];
      }
      @catch (JavaIoIOException *e) {
      }
    }
  }
}

- (id<JavaUtilSet>)parseLocalesWithOrgOssPdfreporterUsesOrgW3cDomNode:(id<OrgOssPdfreporterUsesOrgW3cDomNode>)localesNode {
  id<JavaUtilSet> locales = [[JavaUtilHashSet alloc] init];
  id<OrgOssPdfreporterUsesOrgW3cDomNodeList> nodeList = [((id<OrgOssPdfreporterUsesOrgW3cDomNode>) nil_chk(localesNode)) getChildNodes];
  for (int i = 0; i < [((id<OrgOssPdfreporterUsesOrgW3cDomNodeList>) nil_chk(nodeList)) getLength]; i++) {
    id<OrgOssPdfreporterUsesOrgW3cDomNode> node = [((id<OrgOssPdfreporterUsesOrgW3cDomNodeList>) nil_chk(nodeList)) itemWithInt:i];
    if ([((id<OrgOssPdfreporterUsesOrgW3cDomNode>) nil_chk(node)) getNodeType] == OrgOssPdfreporterUsesOrgW3cDomNode_ELEMENT_NODE && [((NSString *) nil_chk(OrgOssPdfreporterEngineFontsSimpleFontExtensionHelper_NODE_locale_)) isEqual:[((id<OrgOssPdfreporterUsesOrgW3cDomNode>) nil_chk(node)) getNodeName]]) {
      [((id<JavaUtilSet>) nil_chk(locales)) addWithId:[((id<OrgOssPdfreporterUsesOrgW3cDomNode>) nil_chk(node)) getTextContent]];
    }
  }
  return locales;
}

- (void)errorWithOrgOssPdfreporterXmlParsersXMLParseException:(OrgOssPdfreporterXmlParsersXMLParseException *)e {
}

- (void)fatalErrorWithOrgOssPdfreporterXmlParsersXMLParseException:(OrgOssPdfreporterXmlParsersXMLParseException *)e {
}

- (void)warningWithOrgOssPdfreporterXmlParsersXMLParseException:(OrgOssPdfreporterXmlParsersXMLParseException *)e {
}

+ (void)initialize {
  if (self == [OrgOssPdfreporterEngineFontsSimpleFontExtensionHelper class]) {
    OrgOssPdfreporterEngineFontsSimpleFontExtensionHelper_instance_ = nil;
  }
}

- (void)copyAllPropertiesTo:(id)copy {
  [super copyAllPropertiesTo:copy];
  OrgOssPdfreporterEngineFontsSimpleFontExtensionHelper *typedCopy = (OrgOssPdfreporterEngineFontsSimpleFontExtensionHelper *) copy;
  typedCopy.documentBuilder = documentBuilder_;
}

@end
