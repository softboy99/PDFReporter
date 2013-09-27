//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: pdfreporter-core/src/org/oss/pdfreporter/engine/util/JRStringUtil.java
//
//  Created by kendra on 9/27/13.
//

#include "IOSCharArray.h"
#include "IOSClass.h"
#include "java/lang/Character.h"
#include "java/lang/Integer.h"
#include "java/lang/StringBuffer.h"
#include "java/lang/StringBuilder.h"
#include "java/util/ArrayList.h"
#include "java/util/List.h"
#include "java/util/StringTokenizer.h"
#include "org/oss/pdfreporter/engine/util/JRStringUtil.h"

@implementation OrgOssPdfreporterEngineUtilJRStringUtil

static NSString * OrgOssPdfreporterEngineUtilJRStringUtil_JAVA_IDENTIFIER_PREFIX_ = @"j";

+ (NSString *)JAVA_IDENTIFIER_PREFIX {
  return OrgOssPdfreporterEngineUtilJRStringUtil_JAVA_IDENTIFIER_PREFIX_;
}

+ (NSString *)replaceCRwithLFWithNSString:(NSString *)text {
  if (text != nil) {
    int length = [text length];
    IOSCharArray *chars = [text toCharArray];
    int r = 0;
    BOOL dirty = NO;
    for (int i = 0; i < length; ++i) {
      unichar ch = [((IOSCharArray *) nil_chk(chars)) charAtIndex:i];
      if (ch == 0x000d) {
        dirty = YES;
        if (i + 1 < length && [((IOSCharArray *) nil_chk(chars)) charAtIndex:i + 1] == 0x000a) {
          r++;
        }
        else {
          (*[((IOSCharArray *) nil_chk(chars)) charRefAtIndex:i - r]) = 0x000a;
        }
      }
      else {
        (*[((IOSCharArray *) nil_chk(chars)) charRefAtIndex:i - r]) = ch;
      }
    }
    return dirty ? [NSString stringWithCharacters:chars offset:0 length:length - r] : text;
  }
  return nil;
}

+ (NSString *)xmlEncodeWithNSString:(NSString *)text {
  return [OrgOssPdfreporterEngineUtilJRStringUtil xmlEncodeWithNSString:text withNSString:nil];
}

+ (NSString *)xmlEncodeWithNSString:(NSString *)text
                       withNSString:(NSString *)invalidCharReplacement {
  if (text == nil || [((NSString *) nil_chk(text)) length] == 0) {
    return text;
  }
  int length = [((NSString *) nil_chk(text)) length];
  JavaLangStringBuffer *ret = [[JavaLangStringBuffer alloc] initWithInt:length * 12 / 10];
  int last = 0;
  for (int i = 0; i < length; i++) {
    unichar c = [((NSString *) nil_chk(text)) charAtWithInt:i];
    if ([JavaLangCharacter isISOControlWithUnichar:c] && c != 0x0009 && c != 0x000d && c != 0x000a) {
      last = [OrgOssPdfreporterEngineUtilJRStringUtil appendTextWithNSString:text withJavaLangStringBuffer:ret withInt:i withInt:last];
      if (invalidCharReplacement == nil) {
        (void) [((JavaLangStringBuffer *) nil_chk(ret)) appendWithUnichar:c];
      }
      else if ([@"" isEqual:invalidCharReplacement]) {
        continue;
      }
      else {
        (void) [((JavaLangStringBuffer *) nil_chk(ret)) appendWithNSString:invalidCharReplacement];
      }
    }
    else {
      switch (c) {
        case '&':
        last = [OrgOssPdfreporterEngineUtilJRStringUtil appendTextWithNSString:text withJavaLangStringBuffer:ret withInt:i withInt:last];
        (void) [((JavaLangStringBuffer *) nil_chk(ret)) appendWithNSString:@"&amp;"];
        break;
        case '>':
        last = [OrgOssPdfreporterEngineUtilJRStringUtil appendTextWithNSString:text withJavaLangStringBuffer:ret withInt:i withInt:last];
        (void) [((JavaLangStringBuffer *) nil_chk(ret)) appendWithNSString:@"&gt;"];
        break;
        case '<':
        last = [OrgOssPdfreporterEngineUtilJRStringUtil appendTextWithNSString:text withJavaLangStringBuffer:ret withInt:i withInt:last];
        (void) [((JavaLangStringBuffer *) nil_chk(ret)) appendWithNSString:@"&lt;"];
        break;
        case '\"':
        last = [OrgOssPdfreporterEngineUtilJRStringUtil appendTextWithNSString:text withJavaLangStringBuffer:ret withInt:i withInt:last];
        (void) [((JavaLangStringBuffer *) nil_chk(ret)) appendWithNSString:@"&quot;"];
        break;
        case '\'':
        last = [OrgOssPdfreporterEngineUtilJRStringUtil appendTextWithNSString:text withJavaLangStringBuffer:ret withInt:i withInt:last];
        (void) [((JavaLangStringBuffer *) nil_chk(ret)) appendWithNSString:@"&apos;"];
        break;
        default:
        break;
      }
    }
  }
  [OrgOssPdfreporterEngineUtilJRStringUtil appendTextWithNSString:text withJavaLangStringBuffer:ret withInt:length withInt:last];
  return [((JavaLangStringBuffer *) nil_chk(ret)) description];
}

+ (int)appendTextWithNSString:(NSString *)text
     withJavaLangStringBuffer:(JavaLangStringBuffer *)ret
                      withInt:(int)current
                      withInt:(int)old {
  if (old < current) {
    (void) [((JavaLangStringBuffer *) nil_chk(ret)) appendWithNSString:[((NSString *) nil_chk(text)) substring:old endIndex:current]];
  }
  return current + 1;
}

+ (NSString *)htmlEncodeWithNSString:(NSString *)text {
  if (text == nil || [((NSString *) nil_chk(text)) length] == 0) {
    return text;
  }
  int length = [((NSString *) nil_chk(text)) length];
  JavaLangStringBuffer *ret = [[JavaLangStringBuffer alloc] initWithInt:length * 12 / 10];
  BOOL isEncodeSpace = YES;
  int last = 0;
  for (int i = 0; i < length; i++) {
    unichar c = [((NSString *) nil_chk(text)) charAtWithInt:i];
    switch (c) {
      case ' ':
      if (isEncodeSpace) {
        if (last < i) {
          (void) [((JavaLangStringBuffer *) nil_chk(ret)) appendWithNSString:[((NSString *) nil_chk(text)) substring:last endIndex:i]];
        }
        last = i + 1;
        (void) [((JavaLangStringBuffer *) nil_chk(ret)) appendWithNSString:@"&nbsp;"];
        isEncodeSpace = NO;
      }
      else {
        isEncodeSpace = YES;
      }
      break;
      case '&':
      if (last < i) {
        (void) [((JavaLangStringBuffer *) nil_chk(ret)) appendWithNSString:[((NSString *) nil_chk(text)) substring:last endIndex:i]];
      }
      last = i + 1;
      (void) [((JavaLangStringBuffer *) nil_chk(ret)) appendWithNSString:@"&amp;"];
      isEncodeSpace = NO;
      break;
      case '>':
      if (last < i) {
        (void) [((JavaLangStringBuffer *) nil_chk(ret)) appendWithNSString:[((NSString *) nil_chk(text)) substring:last endIndex:i]];
      }
      last = i + 1;
      (void) [((JavaLangStringBuffer *) nil_chk(ret)) appendWithNSString:@"&gt;"];
      isEncodeSpace = NO;
      break;
      case '<':
      if (last < i) {
        (void) [((JavaLangStringBuffer *) nil_chk(ret)) appendWithNSString:[((NSString *) nil_chk(text)) substring:last endIndex:i]];
      }
      last = i + 1;
      (void) [((JavaLangStringBuffer *) nil_chk(ret)) appendWithNSString:@"&lt;"];
      isEncodeSpace = NO;
      break;
      case '\"':
      if (last < i) {
        (void) [((JavaLangStringBuffer *) nil_chk(ret)) appendWithNSString:[((NSString *) nil_chk(text)) substring:last endIndex:i]];
      }
      last = i + 1;
      (void) [((JavaLangStringBuffer *) nil_chk(ret)) appendWithNSString:@"&quot;"];
      isEncodeSpace = NO;
      break;
      case 0x000a:
      if (last < i) {
        (void) [((JavaLangStringBuffer *) nil_chk(ret)) appendWithNSString:[((NSString *) nil_chk(text)) substring:last endIndex:i]];
      }
      last = i + 1;
      (void) [((JavaLangStringBuffer *) nil_chk(ret)) appendWithNSString:@"<br/>"];
      isEncodeSpace = NO;
      break;
      default:
      isEncodeSpace = NO;
      break;
    }
  }
  if (last < length) {
    (void) [((JavaLangStringBuffer *) nil_chk(ret)) appendWithNSString:[((NSString *) nil_chk(text)) substring:last]];
  }
  return [((JavaLangStringBuffer *) nil_chk(ret)) description];
}

+ (NSString *)getJavaIdentifierWithNSString:(NSString *)name {
  if ([OrgOssPdfreporterEngineUtilJRStringUtil isValidJavaIdentifierWithNSString:name]) {
    return name;
  }
  JavaLangStringBuffer *buffer = [[JavaLangStringBuffer alloc] initWithInt:[((NSString *) nil_chk(name)) length] + 5];
  IOSCharArray *literalChars = [IOSCharArray arrayWithLength:[((NSString *) nil_chk(name)) length]];
  [((NSString *) nil_chk(name)) getChars:0 sourceEnd:(int) [((IOSCharArray *) nil_chk(literalChars)) count] destination:literalChars destinationBegin:0];
  for (int i = 0; i < (int) [((IOSCharArray *) nil_chk(literalChars)) count]; i++) {
    if (i == 0 && ![JavaLangCharacter isJavaIdentifierStartWithUnichar:[((IOSCharArray *) nil_chk(literalChars)) charAtIndex:i]]) {
      (void) [((JavaLangStringBuffer *) nil_chk(buffer)) appendWithNSString:OrgOssPdfreporterEngineUtilJRStringUtil_JAVA_IDENTIFIER_PREFIX_];
      (void) [((JavaLangStringBuffer *) nil_chk(buffer)) appendWithInt:(int) [((IOSCharArray *) nil_chk(literalChars)) charAtIndex:i]];
    }
    else if (i != 0 && ![JavaLangCharacter isJavaIdentifierPartWithUnichar:[((IOSCharArray *) nil_chk(literalChars)) charAtIndex:i]]) {
      (void) [((JavaLangStringBuffer *) nil_chk(buffer)) appendWithInt:(int) [((IOSCharArray *) nil_chk(literalChars)) charAtIndex:i]];
    }
    else {
      (void) [((JavaLangStringBuffer *) nil_chk(buffer)) appendWithUnichar:[((IOSCharArray *) nil_chk(literalChars)) charAtIndex:i]];
    }
  }
  return [((JavaLangStringBuffer *) nil_chk(buffer)) description];
}

+ (BOOL)isValidJavaIdentifierWithNSString:(NSString *)literal {
  BOOL result = YES;
  IOSCharArray *literalChars = [IOSCharArray arrayWithLength:[((NSString *) nil_chk(literal)) length]];
  [((NSString *) nil_chk(literal)) getChars:0 sourceEnd:(int) [((IOSCharArray *) nil_chk(literalChars)) count] destination:literalChars destinationBegin:0];
  for (int i = 0; i < (int) [((IOSCharArray *) nil_chk(literalChars)) count]; i++) {
    if (i == 0 && ![JavaLangCharacter isJavaIdentifierStartWithUnichar:[((IOSCharArray *) nil_chk(literalChars)) charAtIndex:i]]) {
      result = NO;
      break;
    }
    if (i != 0 && ![JavaLangCharacter isJavaIdentifierPartWithUnichar:[((IOSCharArray *) nil_chk(literalChars)) charAtIndex:i]]) {
      result = NO;
      break;
    }
  }
  return result;
}

+ (NSString *)escapeJavaStringLiteralWithNSString:(NSString *)text {
  if (text == nil) {
    return text;
  }
  JavaLangStringBuffer *sbuffer = [[JavaLangStringBuffer alloc] init];
  JavaUtilStringTokenizer *tkzer = [[JavaUtilStringTokenizer alloc] initWithNSString:text withNSString:@"\\\"\n\r\t" withBOOL:YES];
  while ([((JavaUtilStringTokenizer *) nil_chk(tkzer)) hasMoreTokens]) {
    NSString *token = [((JavaUtilStringTokenizer *) nil_chk(tkzer)) nextToken];
    if ([@"\\" isEqual:token]) {
      (void) [((JavaLangStringBuffer *) nil_chk(sbuffer)) appendWithNSString:@"\\\\"];
    }
    else if ([@"\"" isEqual:token]) {
      (void) [((JavaLangStringBuffer *) nil_chk(sbuffer)) appendWithNSString:@"\\\""];
    }
    else if ([@"\n" isEqual:token]) {
      (void) [((JavaLangStringBuffer *) nil_chk(sbuffer)) appendWithNSString:@"\\n"];
    }
    else if ([@"\r" isEqual:token]) {
      (void) [((JavaLangStringBuffer *) nil_chk(sbuffer)) appendWithNSString:@"\\r"];
    }
    else if ([@"\t" isEqual:token]) {
      (void) [((JavaLangStringBuffer *) nil_chk(sbuffer)) appendWithNSString:@"\\t"];
    }
    else {
      (void) [((JavaLangStringBuffer *) nil_chk(sbuffer)) appendWithNSString:token];
    }
  }
  return [((JavaLangStringBuffer *) nil_chk(sbuffer)) description];
}

+ (NSString *)escapeJavaScriptWithNSString:(NSString *)input {
  if (input == nil) {
    return input;
  }
  JavaLangStringBuilder *filtered = [[JavaLangStringBuilder alloc] initWithInt:[((NSString *) nil_chk(input)) length]];
  unichar prevChar = 0x0000;
  unichar c;
  for (int i = 0; i < [((NSString *) nil_chk(input)) length]; i++) {
    c = [((NSString *) nil_chk(input)) charAtWithInt:i];
    if (c == '"') {
      (void) [((JavaLangStringBuilder *) nil_chk(filtered)) appendWithNSString:@"\\\""];
    }
    else if (c == '\'') {
      (void) [((JavaLangStringBuilder *) nil_chk(filtered)) appendWithNSString:@"\\'"];
    }
    else if (c == '\\') {
      (void) [((JavaLangStringBuilder *) nil_chk(filtered)) appendWithNSString:@"\\\\"];
    }
    else if (c == '/') {
      (void) [((JavaLangStringBuilder *) nil_chk(filtered)) appendWithNSString:@"\\/"];
    }
    else if (c == 0x0009) {
      (void) [((JavaLangStringBuilder *) nil_chk(filtered)) appendWithNSString:@"\\t"];
    }
    else if (c == 0x000a) {
      if (prevChar != 0x000d) {
        (void) [((JavaLangStringBuilder *) nil_chk(filtered)) appendWithNSString:@"\\n"];
      }
    }
    else if (c == 0x000d) {
      (void) [((JavaLangStringBuilder *) nil_chk(filtered)) appendWithNSString:@"\\n"];
    }
    else if (c == 0x000c) {
      (void) [((JavaLangStringBuilder *) nil_chk(filtered)) appendWithNSString:@"\\f"];
    }
    else {
      (void) [((JavaLangStringBuilder *) nil_chk(filtered)) appendWithUnichar:c];
    }
    prevChar = c;
  }
  return [((JavaLangStringBuilder *) nil_chk(filtered)) description];
}

+ (id<JavaUtilList>)getTabIndexesWithNSString:(NSString *)text {
  id<JavaUtilList> tabIndexes = nil;
  if (text != nil) {
    tabIndexes = [[JavaUtilArrayList alloc] init];
    for (int i = 0; i < [text length]; i++) {
      if ([text charAtWithInt:i] == 0x0009) {
        [((id<JavaUtilList>) nil_chk(tabIndexes)) addWithId:[JavaLangInteger valueOfWithInt:i]];
      }
    }
  }
  return tabIndexes;
}

+ (NSString *)getStringWithId:(id)value {
  return value == nil ? nil : [nil_chk(value) description];
}

- (id)init {
  return [super init];
}

@end
