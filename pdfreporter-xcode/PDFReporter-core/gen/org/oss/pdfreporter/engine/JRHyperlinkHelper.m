//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: pdfreporter-core/src/org/oss/pdfreporter/engine/JRHyperlinkHelper.java
//
//  Created by kendra on 9/27/13.
//

#include "org/oss/pdfreporter/engine/JRExpression.h"
#include "org/oss/pdfreporter/engine/JRHyperlink.h"
#include "org/oss/pdfreporter/engine/JRHyperlinkHelper.h"
#include "org/oss/pdfreporter/engine/JRRuntimeException.h"
#include "org/oss/pdfreporter/engine/type/HyperlinkTargetEnum.h"
#include "org/oss/pdfreporter/engine/type/HyperlinkTypeEnum.h"

@implementation OrgOssPdfreporterEngineJRHyperlinkHelper

+ (char)getHyperlinkTypeWithOrgOssPdfreporterEngineJRHyperlink:(id<OrgOssPdfreporterEngineJRHyperlink>)hyperlink {
  return [((OrgOssPdfreporterEngineTypeHyperlinkTypeEnumEnum *) nil_chk([OrgOssPdfreporterEngineJRHyperlinkHelper getHyperlinkTypeValueWithNSString:[((id<OrgOssPdfreporterEngineJRHyperlink>) nil_chk(hyperlink)) getLinkType]])) getValue];
}

+ (OrgOssPdfreporterEngineTypeHyperlinkTypeEnumEnum *)getHyperlinkTypeValueWithOrgOssPdfreporterEngineJRHyperlink:(id<OrgOssPdfreporterEngineJRHyperlink>)hyperlink {
  return [OrgOssPdfreporterEngineJRHyperlinkHelper getHyperlinkTypeValueWithNSString:[((id<OrgOssPdfreporterEngineJRHyperlink>) nil_chk(hyperlink)) getLinkType]];
}

+ (char)getHyperlinkTypeWithNSString:(NSString *)linkType {
  return [((OrgOssPdfreporterEngineTypeHyperlinkTypeEnumEnum *) nil_chk([OrgOssPdfreporterEngineJRHyperlinkHelper getHyperlinkTypeValueWithNSString:linkType])) getValue];
}

+ (OrgOssPdfreporterEngineTypeHyperlinkTypeEnumEnum *)getHyperlinkTypeValueWithNSString:(NSString *)linkType {
  OrgOssPdfreporterEngineTypeHyperlinkTypeEnumEnum *type;
  if (linkType == nil) {
    type = [OrgOssPdfreporterEngineTypeHyperlinkTypeEnumEnum NONE];
  }
  else {
    OrgOssPdfreporterEngineTypeHyperlinkTypeEnumEnum *builtinType = [OrgOssPdfreporterEngineTypeHyperlinkTypeEnumEnum getByNameWithNSString:linkType];
    if (builtinType == nil) {
      type = [OrgOssPdfreporterEngineTypeHyperlinkTypeEnumEnum CUSTOM];
    }
    else {
      type = builtinType;
    }
  }
  return type;
}

+ (char)getHyperlinkTargetWithOrgOssPdfreporterEngineJRHyperlink:(id<OrgOssPdfreporterEngineJRHyperlink>)hyperlink {
  return [OrgOssPdfreporterEngineJRHyperlinkHelper getHyperlinkTargetWithNSString:[((id<OrgOssPdfreporterEngineJRHyperlink>) nil_chk(hyperlink)) getLinkTarget]];
}

+ (char)getHyperlinkTargetWithNSString:(NSString *)linkTarget {
  return [((OrgOssPdfreporterEngineTypeHyperlinkTargetEnumEnum *) nil_chk([OrgOssPdfreporterEngineJRHyperlinkHelper getHyperlinkTargetValueWithNSString:linkTarget])) getValue];
}

+ (OrgOssPdfreporterEngineTypeHyperlinkTargetEnumEnum *)getHyperlinkTargetValueWithNSString:(NSString *)linkTarget {
  OrgOssPdfreporterEngineTypeHyperlinkTargetEnumEnum *target;
  if (linkTarget == nil) {
    target = [OrgOssPdfreporterEngineTypeHyperlinkTargetEnumEnum SELF];
  }
  else {
    OrgOssPdfreporterEngineTypeHyperlinkTargetEnumEnum *builtinTarget = [OrgOssPdfreporterEngineTypeHyperlinkTargetEnumEnum getByNameWithNSString:linkTarget];
    if (builtinTarget == nil) {
      target = [OrgOssPdfreporterEngineTypeHyperlinkTargetEnumEnum CUSTOM];
    }
    else {
      target = builtinTarget;
    }
  }
  return target;
}

+ (NSString *)getLinkTypeWithChar:(char)hyperlinkType {
  return [OrgOssPdfreporterEngineJRHyperlinkHelper getLinkTypeWithOrgOssPdfreporterEngineTypeHyperlinkTypeEnumEnum:[OrgOssPdfreporterEngineTypeHyperlinkTypeEnumEnum getByValueWithChar:hyperlinkType]];
}

+ (NSString *)getLinkTypeWithOrgOssPdfreporterEngineTypeHyperlinkTypeEnumEnum:(OrgOssPdfreporterEngineTypeHyperlinkTypeEnumEnum *)hyperlinkType {
  NSString *type;
  switch ([hyperlinkType ordinal]) {
    case OrgOssPdfreporterEngineTypeHyperlinkTypeEnum_NULL:
    case OrgOssPdfreporterEngineTypeHyperlinkTypeEnum_NONE:
    type = nil;
    break;
    case OrgOssPdfreporterEngineTypeHyperlinkTypeEnum_REFERENCE:
    case OrgOssPdfreporterEngineTypeHyperlinkTypeEnum_LOCAL_ANCHOR:
    case OrgOssPdfreporterEngineTypeHyperlinkTypeEnum_LOCAL_PAGE:
    case OrgOssPdfreporterEngineTypeHyperlinkTypeEnum_REMOTE_ANCHOR:
    case OrgOssPdfreporterEngineTypeHyperlinkTypeEnum_REMOTE_PAGE:
    type = [((OrgOssPdfreporterEngineTypeHyperlinkTypeEnumEnum *) nil_chk(hyperlinkType)) getName];
    break;
    case OrgOssPdfreporterEngineTypeHyperlinkTypeEnum_CUSTOM:
    @throw [[OrgOssPdfreporterEngineJRRuntimeException alloc] initWithNSString:@"Custom hyperlink types cannot be specified using the byte constant"];
    default:
    @throw [[OrgOssPdfreporterEngineJRRuntimeException alloc] initWithNSString:[NSString stringWithFormat:@"Unknown hyperlink type %@", hyperlinkType]];
  }
  return type;
}

+ (NSString *)getLinkTargetWithChar:(char)hyperlinkTarget {
  return [OrgOssPdfreporterEngineJRHyperlinkHelper getLinkTargetWithOrgOssPdfreporterEngineTypeHyperlinkTargetEnumEnum:[OrgOssPdfreporterEngineTypeHyperlinkTargetEnumEnum getByValueWithChar:hyperlinkTarget]];
}

+ (NSString *)getLinkTargetWithOrgOssPdfreporterEngineTypeHyperlinkTargetEnumEnum:(OrgOssPdfreporterEngineTypeHyperlinkTargetEnumEnum *)hyperlinkTarget {
  NSString *target;
  switch ([hyperlinkTarget ordinal]) {
    case OrgOssPdfreporterEngineTypeHyperlinkTargetEnum_NONE:
    case OrgOssPdfreporterEngineTypeHyperlinkTargetEnum_SELF:
    target = nil;
    break;
    case OrgOssPdfreporterEngineTypeHyperlinkTargetEnum_BLANK:
    target = [((OrgOssPdfreporterEngineTypeHyperlinkTargetEnumEnum *) nil_chk([OrgOssPdfreporterEngineTypeHyperlinkTargetEnumEnum BLANK])) getName];
    break;
    case OrgOssPdfreporterEngineTypeHyperlinkTargetEnum_PARENT:
    target = [((OrgOssPdfreporterEngineTypeHyperlinkTargetEnumEnum *) nil_chk([OrgOssPdfreporterEngineTypeHyperlinkTargetEnumEnum PARENT])) getName];
    break;
    case OrgOssPdfreporterEngineTypeHyperlinkTargetEnum_TOP:
    target = [((OrgOssPdfreporterEngineTypeHyperlinkTargetEnumEnum *) nil_chk([OrgOssPdfreporterEngineTypeHyperlinkTargetEnumEnum TOP])) getName];
    break;
    case OrgOssPdfreporterEngineTypeHyperlinkTargetEnum_CUSTOM:
    @throw [[OrgOssPdfreporterEngineJRRuntimeException alloc] initWithNSString:@"Custom hyperlink targets cannot be specified using the byte constant"];
    default:
    @throw [[OrgOssPdfreporterEngineJRRuntimeException alloc] initWithNSString:[NSString stringWithFormat:@"Unknown hyperlink target %@", hyperlinkTarget]];
  }
  return target;
}

+ (BOOL)isEmptyWithOrgOssPdfreporterEngineJRHyperlink:(id<OrgOssPdfreporterEngineJRHyperlink>)hyperlink {
  return hyperlink == nil || ([((id<OrgOssPdfreporterEngineJRHyperlink>) nil_chk(hyperlink)) getHyperlinkTypeValue] == [OrgOssPdfreporterEngineTypeHyperlinkTypeEnumEnum NONE] && [((id<OrgOssPdfreporterEngineJRHyperlink>) nil_chk(hyperlink)) getHyperlinkTooltipExpression] == nil);
}

- (id)init {
  return [super init];
}

@end
