//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: pdfreporter-core/src/org/oss/pdfreporter/font/IFont.java
//
//  Created by kendra on 9/27/13.
//

#include "IOSClass.h"
#include "java/lang/IllegalArgumentException.h"
#include "org/oss/pdfreporter/font/IFont.h"
#include "org/oss/pdfreporter/font/IFontManager.h"


@implementation OrgOssPdfreporterFontIFont

static NSString * OrgOssPdfreporterFontIFont_ZAPF_DINGBATS_ = @"ZapfDingbats";
static NSString * OrgOssPdfreporterFontIFont_SYMBOL_ = @"Symbol";
static NSString * OrgOssPdfreporterFontIFont_TIMES_ROMAN_ = @"Times-Roman";
static NSString * OrgOssPdfreporterFontIFont_HELVETICA_ = @"Helvetica";
static NSString * OrgOssPdfreporterFontIFont_COURIER_ = @"Courier";

+ (NSString *)ZAPF_DINGBATS {
  return OrgOssPdfreporterFontIFont_ZAPF_DINGBATS_;
}

+ (NSString *)SYMBOL {
  return OrgOssPdfreporterFontIFont_SYMBOL_;
}

+ (NSString *)TIMES_ROMAN {
  return OrgOssPdfreporterFontIFont_TIMES_ROMAN_;
}

+ (NSString *)HELVETICA {
  return OrgOssPdfreporterFontIFont_HELVETICA_;
}

+ (NSString *)COURIER {
  return OrgOssPdfreporterFontIFont_COURIER_;
}

@end

static OrgOssPdfreporterFontIFont_FontDecorationEnum *OrgOssPdfreporterFontIFont_FontDecorationEnum_SUPERSCRIPT;
static OrgOssPdfreporterFontIFont_FontDecorationEnum *OrgOssPdfreporterFontIFont_FontDecorationEnum_SUBSCRIPT;
static OrgOssPdfreporterFontIFont_FontDecorationEnum *OrgOssPdfreporterFontIFont_FontDecorationEnum_UNDERLINE;
static OrgOssPdfreporterFontIFont_FontDecorationEnum *OrgOssPdfreporterFontIFont_FontDecorationEnum_STRIKE_THROUGH;
static OrgOssPdfreporterFontIFont_FontDecorationEnum *OrgOssPdfreporterFontIFont_FontDecorationEnum_NONE;
IOSObjectArray *OrgOssPdfreporterFontIFont_FontDecorationEnum_values;

@implementation OrgOssPdfreporterFontIFont_FontDecorationEnum

+ (OrgOssPdfreporterFontIFont_FontDecorationEnum *)SUPERSCRIPT {
  return OrgOssPdfreporterFontIFont_FontDecorationEnum_SUPERSCRIPT;
}
+ (OrgOssPdfreporterFontIFont_FontDecorationEnum *)SUBSCRIPT {
  return OrgOssPdfreporterFontIFont_FontDecorationEnum_SUBSCRIPT;
}
+ (OrgOssPdfreporterFontIFont_FontDecorationEnum *)UNDERLINE {
  return OrgOssPdfreporterFontIFont_FontDecorationEnum_UNDERLINE;
}
+ (OrgOssPdfreporterFontIFont_FontDecorationEnum *)STRIKE_THROUGH {
  return OrgOssPdfreporterFontIFont_FontDecorationEnum_STRIKE_THROUGH;
}
+ (OrgOssPdfreporterFontIFont_FontDecorationEnum *)NONE {
  return OrgOssPdfreporterFontIFont_FontDecorationEnum_NONE;
}

- (id)copyWithZone:(NSZone *)zone {
  return self;
}

- (id)initWithNSString:(NSString *)name withInt:(int)ordinal {
  return [super initWithNSString:name withInt:ordinal];
}

+ (void)initialize {
  if (self == [OrgOssPdfreporterFontIFont_FontDecorationEnum class]) {
    OrgOssPdfreporterFontIFont_FontDecorationEnum_SUPERSCRIPT = [[OrgOssPdfreporterFontIFont_FontDecorationEnum alloc] initWithNSString:@"SUPERSCRIPT" withInt:0];
    OrgOssPdfreporterFontIFont_FontDecorationEnum_SUBSCRIPT = [[OrgOssPdfreporterFontIFont_FontDecorationEnum alloc] initWithNSString:@"SUBSCRIPT" withInt:1];
    OrgOssPdfreporterFontIFont_FontDecorationEnum_UNDERLINE = [[OrgOssPdfreporterFontIFont_FontDecorationEnum alloc] initWithNSString:@"UNDERLINE" withInt:2];
    OrgOssPdfreporterFontIFont_FontDecorationEnum_STRIKE_THROUGH = [[OrgOssPdfreporterFontIFont_FontDecorationEnum alloc] initWithNSString:@"STRIKE_THROUGH" withInt:3];
    OrgOssPdfreporterFontIFont_FontDecorationEnum_NONE = [[OrgOssPdfreporterFontIFont_FontDecorationEnum alloc] initWithNSString:@"NONE" withInt:4];
    OrgOssPdfreporterFontIFont_FontDecorationEnum_values = [[IOSObjectArray alloc] initWithObjects:(id[]){ OrgOssPdfreporterFontIFont_FontDecorationEnum_SUPERSCRIPT, OrgOssPdfreporterFontIFont_FontDecorationEnum_SUBSCRIPT, OrgOssPdfreporterFontIFont_FontDecorationEnum_UNDERLINE, OrgOssPdfreporterFontIFont_FontDecorationEnum_STRIKE_THROUGH, OrgOssPdfreporterFontIFont_FontDecorationEnum_NONE, nil } count:5 type:[IOSClass classWithClass:[OrgOssPdfreporterFontIFont_FontDecorationEnum class]]];
  }
}

+ (IOSObjectArray *)values {
  return [IOSObjectArray arrayWithArray:OrgOssPdfreporterFontIFont_FontDecorationEnum_values];
}

+ (OrgOssPdfreporterFontIFont_FontDecorationEnum *)valueOfWithNSString:(NSString *)name {
  for (int i = 0; i < [OrgOssPdfreporterFontIFont_FontDecorationEnum_values count]; i++) {
    OrgOssPdfreporterFontIFont_FontDecorationEnum *e = [OrgOssPdfreporterFontIFont_FontDecorationEnum_values objectAtIndex:i];
    if ([name isEqual:[e name]]) {
      return e;
    }
  }
  @throw [[JavaLangIllegalArgumentException alloc] initWithNSString:name];
  return nil;
}

@end

static OrgOssPdfreporterFontIFont_FontStyleEnum *OrgOssPdfreporterFontIFont_FontStyleEnum_PLAIN;
static OrgOssPdfreporterFontIFont_FontStyleEnum *OrgOssPdfreporterFontIFont_FontStyleEnum_BOLD;
static OrgOssPdfreporterFontIFont_FontStyleEnum *OrgOssPdfreporterFontIFont_FontStyleEnum_OBLIQUE;
static OrgOssPdfreporterFontIFont_FontStyleEnum *OrgOssPdfreporterFontIFont_FontStyleEnum_BOLD_OBLIQUE;
IOSObjectArray *OrgOssPdfreporterFontIFont_FontStyleEnum_values;

@implementation OrgOssPdfreporterFontIFont_FontStyleEnum

+ (OrgOssPdfreporterFontIFont_FontStyleEnum *)PLAIN {
  return OrgOssPdfreporterFontIFont_FontStyleEnum_PLAIN;
}
+ (OrgOssPdfreporterFontIFont_FontStyleEnum *)BOLD {
  return OrgOssPdfreporterFontIFont_FontStyleEnum_BOLD;
}
+ (OrgOssPdfreporterFontIFont_FontStyleEnum *)OBLIQUE {
  return OrgOssPdfreporterFontIFont_FontStyleEnum_OBLIQUE;
}
+ (OrgOssPdfreporterFontIFont_FontStyleEnum *)BOLD_OBLIQUE {
  return OrgOssPdfreporterFontIFont_FontStyleEnum_BOLD_OBLIQUE;
}

- (id)copyWithZone:(NSZone *)zone {
  return self;
}

- (id)initWithNSString:(NSString *)name withInt:(int)ordinal {
  return [super initWithNSString:name withInt:ordinal];
}

+ (void)initialize {
  if (self == [OrgOssPdfreporterFontIFont_FontStyleEnum class]) {
    OrgOssPdfreporterFontIFont_FontStyleEnum_PLAIN = [[OrgOssPdfreporterFontIFont_FontStyleEnum alloc] initWithNSString:@"PLAIN" withInt:0];
    OrgOssPdfreporterFontIFont_FontStyleEnum_BOLD = [[OrgOssPdfreporterFontIFont_FontStyleEnum alloc] initWithNSString:@"BOLD" withInt:1];
    OrgOssPdfreporterFontIFont_FontStyleEnum_OBLIQUE = [[OrgOssPdfreporterFontIFont_FontStyleEnum alloc] initWithNSString:@"OBLIQUE" withInt:2];
    OrgOssPdfreporterFontIFont_FontStyleEnum_BOLD_OBLIQUE = [[OrgOssPdfreporterFontIFont_FontStyleEnum alloc] initWithNSString:@"BOLD_OBLIQUE" withInt:3];
    OrgOssPdfreporterFontIFont_FontStyleEnum_values = [[IOSObjectArray alloc] initWithObjects:(id[]){ OrgOssPdfreporterFontIFont_FontStyleEnum_PLAIN, OrgOssPdfreporterFontIFont_FontStyleEnum_BOLD, OrgOssPdfreporterFontIFont_FontStyleEnum_OBLIQUE, OrgOssPdfreporterFontIFont_FontStyleEnum_BOLD_OBLIQUE, nil } count:4 type:[IOSClass classWithClass:[OrgOssPdfreporterFontIFont_FontStyleEnum class]]];
  }
}

+ (IOSObjectArray *)values {
  return [IOSObjectArray arrayWithArray:OrgOssPdfreporterFontIFont_FontStyleEnum_values];
}

+ (OrgOssPdfreporterFontIFont_FontStyleEnum *)valueOfWithNSString:(NSString *)name {
  for (int i = 0; i < [OrgOssPdfreporterFontIFont_FontStyleEnum_values count]; i++) {
    OrgOssPdfreporterFontIFont_FontStyleEnum *e = [OrgOssPdfreporterFontIFont_FontStyleEnum_values objectAtIndex:i];
    if ([name isEqual:[e name]]) {
      return e;
    }
  }
  @throw [[JavaLangIllegalArgumentException alloc] initWithNSString:name];
  return nil;
}

@end
