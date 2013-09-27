//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: pdfreporter-core/src/org/oss/pdfreporter/engine/util/JRStringUtil.java
//
//  Created by kendra on 9/27/13.
//

#ifndef _OrgOssPdfreporterEngineUtilJRStringUtil_H_
#define _OrgOssPdfreporterEngineUtilJRStringUtil_H_

@class JavaLangStringBuffer;
@protocol JavaUtilList;

#import "JreEmulation.h"

@interface OrgOssPdfreporterEngineUtilJRStringUtil : NSObject {
}

+ (NSString *)JAVA_IDENTIFIER_PREFIX;
+ (NSString *)replaceCRwithLFWithNSString:(NSString *)text;
+ (NSString *)xmlEncodeWithNSString:(NSString *)text;
+ (NSString *)xmlEncodeWithNSString:(NSString *)text
                       withNSString:(NSString *)invalidCharReplacement;
+ (int)appendTextWithNSString:(NSString *)text
     withJavaLangStringBuffer:(JavaLangStringBuffer *)ret
                      withInt:(int)current
                      withInt:(int)old;
+ (NSString *)htmlEncodeWithNSString:(NSString *)text;
+ (NSString *)getJavaIdentifierWithNSString:(NSString *)name;
+ (BOOL)isValidJavaIdentifierWithNSString:(NSString *)literal;
+ (NSString *)escapeJavaStringLiteralWithNSString:(NSString *)text;
+ (NSString *)escapeJavaScriptWithNSString:(NSString *)input;
+ (id<JavaUtilList>)getTabIndexesWithNSString:(NSString *)text;
+ (NSString *)getStringWithId:(id)value;
- (id)init;
@end

#endif // _OrgOssPdfreporterEngineUtilJRStringUtil_H_
