//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: pdfreporter-core/src/org/oss/pdfreporter/compilers/jeval/JevalExpressionFactory.java
//
//  Created by kendra on 9/27/13.
//

#include "IOSClass.h"
#include "IOSObjectArray.h"
#include "java/lang/StringBuilder.h"
#include "java/util/List.h"
#include "java/util/logging/Level.h"
#include "java/util/logging/Logger.h"
#include "org/oss/pdfreporter/compilers/IExpressionElement.h"
#include "org/oss/pdfreporter/compilers/jeval/ChunkBuilder.h"
#include "org/oss/pdfreporter/compilers/jeval/ExpressionField.h"
#include "org/oss/pdfreporter/compilers/jeval/ExpressionParameter.h"
#include "org/oss/pdfreporter/compilers/jeval/ExpressionParseException.h"
#include "org/oss/pdfreporter/compilers/jeval/ExpressionVariable.h"
#include "org/oss/pdfreporter/compilers/jeval/IDataHolder.h"
#include "org/oss/pdfreporter/compilers/jeval/JEvalExpression.h"
#include "org/oss/pdfreporter/compilers/jeval/JevalExpressionFactory.h"
#include "org/oss/pdfreporter/compilers/jeval/ResultCast.h"
#include "org/oss/pdfreporter/engine/JRException.h"
#include "org/oss/pdfreporter/engine/JRExpressionChunk.h"

@implementation OrgOssPdfreporterCompilersJevalJevalExpressionFactory

static JavaUtilLoggingLogger * OrgOssPdfreporterCompilersJevalJevalExpressionFactory_logger_;

@synthesize rawExpression = rawExpression_;
@synthesize dataholder = dataholder_;

+ (JavaUtilLoggingLogger *)logger {
  return OrgOssPdfreporterCompilersJevalJevalExpressionFactory_logger_;
}

- (id)initWithOrgOssPdfreporterCompilersJevalIDataHolder:(id<OrgOssPdfreporterCompilersJevalIDataHolder>)dataholder {
  if ((self = [super init])) {
    self.dataholder = dataholder;
  }
  return self;
}

+ (id<OrgOssPdfreporterCompilersIExpressionElement>)buildExpressionWithOrgOssPdfreporterCompilersJevalIDataHolder:(id<OrgOssPdfreporterCompilersJevalIDataHolder>)dataholder
                                                                withOrgOssPdfreporterEngineJRExpressionChunkArray:(IOSObjectArray *)chunks
                                                                                                          withInt:(int)expressionId {
  return [((OrgOssPdfreporterCompilersJevalJevalExpressionFactory *) [[OrgOssPdfreporterCompilersJevalJevalExpressionFactory alloc] initWithOrgOssPdfreporterCompilersJevalIDataHolder:dataholder]) buildWithOrgOssPdfreporterEngineJRExpressionChunkArray:chunks withInt:expressionId];
}

- (id<OrgOssPdfreporterCompilersIExpressionElement>)buildWithOrgOssPdfreporterEngineJRExpressionChunkArray:(IOSObjectArray *)chunks
                                                                                                   withInt:(int)expressionId {
  OrgOssPdfreporterCompilersJevalResultCast *result = [[OrgOssPdfreporterCompilersJevalResultCast alloc] init];
  OrgOssPdfreporterCompilersJevalChunkBuilder *expressionBuilder = [[OrgOssPdfreporterCompilersJevalChunkBuilder alloc] init];
  rawExpression_ = [[JavaLangStringBuilder alloc] init];
  @try {
    {
      IOSObjectArray *a__ = chunks;
      int n__ = (int) [((IOSObjectArray *) nil_chk(a__)) count];
      for (int i__ = 0; i__ < n__; i__++) {
        id<OrgOssPdfreporterEngineJRExpressionChunk> designChunk = [((IOSObjectArray *) nil_chk(a__)) objectAtIndex:i__];
        NSString *chunkText = [((id<OrgOssPdfreporterEngineJRExpressionChunk>) nil_chk(designChunk)) getText];
        if (chunkText == nil) {
          chunkText = @"";
        }
        switch ([((id<OrgOssPdfreporterEngineJRExpressionChunk>) nil_chk(designChunk)) getType]) {
          case OrgOssPdfreporterEngineJRExpressionChunk_TYPE_TEXT:
          {
            (void) [((JavaLangStringBuilder *) nil_chk(rawExpression_)) appendWithNSString:chunkText];
            if ([OrgOssPdfreporterCompilersJevalResultCast isCastWithNSString:chunkText]) {
              result = [OrgOssPdfreporterCompilersJevalResultCast parseCastWithNSString:chunkText];
              (void) [((OrgOssPdfreporterCompilersJevalChunkBuilder *) nil_chk(expressionBuilder)) addTextWithNSString:[OrgOssPdfreporterCompilersJevalResultCast getNextWithNSString:chunkText]];
            }
            else {
              (void) [((OrgOssPdfreporterCompilersJevalChunkBuilder *) nil_chk(expressionBuilder)) addTextWithNSString:chunkText];
            }
            break;
          }
          case OrgOssPdfreporterEngineJRExpressionChunk_TYPE_PARAMETER:
          {
            [self appendRawParameterWithNSString:chunkText];
            (void) [((OrgOssPdfreporterCompilersJevalChunkBuilder *) nil_chk(expressionBuilder)) addVariableWithOrgOssPdfreporterCompilersJevalIVariable:[[OrgOssPdfreporterCompilersJevalExpressionParameter alloc] initWithOrgOssPdfreporterCompilersJevalIDataHolder:dataholder_ withNSString:chunkText]];
            break;
          }
          case OrgOssPdfreporterEngineJRExpressionChunk_TYPE_FIELD:
          {
            [self appendRawFieldWithNSString:chunkText];
            (void) [((OrgOssPdfreporterCompilersJevalChunkBuilder *) nil_chk(expressionBuilder)) addVariableWithOrgOssPdfreporterCompilersJevalIVariable:[[OrgOssPdfreporterCompilersJevalExpressionField alloc] initWithOrgOssPdfreporterCompilersJevalIDataHolder:dataholder_ withNSString:chunkText]];
            break;
          }
          case OrgOssPdfreporterEngineJRExpressionChunk_TYPE_VARIABLE:
          {
            [self appendRawVariableWithNSString:chunkText];
            (void) [((OrgOssPdfreporterCompilersJevalChunkBuilder *) nil_chk(expressionBuilder)) addVariableWithOrgOssPdfreporterCompilersJevalIVariable:[[OrgOssPdfreporterCompilersJevalExpressionVariable alloc] initWithOrgOssPdfreporterCompilersJevalIDataHolder:dataholder_ withNSString:chunkText]];
            break;
          }
          case OrgOssPdfreporterEngineJRExpressionChunk_TYPE_RESOURCE:
          {
            [self appendRawResourceWithNSString:chunkText];
            (void) [((OrgOssPdfreporterCompilersJevalChunkBuilder *) nil_chk(expressionBuilder)) addResourceWithNSString:chunkText];
            break;
          }
        }
      }
    }
    [((OrgOssPdfreporterCompilersJevalResultCast *) nil_chk(result)) setExpressionWithOrgOssPdfreporterCompilersJevalJEvalExpression:[OrgOssPdfreporterCompilersJevalJEvalExpression newInstanceWithJavaUtilList:[((OrgOssPdfreporterCompilersJevalChunkBuilder *) nil_chk(expressionBuilder)) getChunkList]]];
    [((JavaUtilLoggingLogger *) nil_chk(OrgOssPdfreporterCompilersJevalJevalExpressionFactory_logger_)) finestWithNSString:[NSString stringWithFormat:@"Compiled expression %d - %@", expressionId, [((JavaLangStringBuilder *) nil_chk(rawExpression_)) description]]];
    return result;
  }
  @catch (OrgOssPdfreporterCompilersJevalExpressionParseException *e) {
    [((JavaUtilLoggingLogger *) nil_chk(OrgOssPdfreporterCompilersJevalJevalExpressionFactory_logger_)) logWithJavaUtilLoggingLevel:[JavaUtilLoggingLevel SEVERE] withNSString:[NSString stringWithFormat:@"Error parsing '%@' in JRXML DesignReport.", [((JavaLangStringBuilder *) nil_chk(rawExpression_)) description]] withJavaLangThrowable:e];
    @throw [[OrgOssPdfreporterEngineJRException alloc] initWithNSString:[NSString stringWithFormat:@"Error parsing '%@' in JRXML DesignReport.", [((JavaLangStringBuilder *) nil_chk(rawExpression_)) description]] withJavaLangThrowable:e];
  }
}

- (void)appendRawParameterWithNSString:(NSString *)chunkText {
  (void) [((JavaLangStringBuilder *) nil_chk(rawExpression_)) appendWithNSString:@"$P{"];
  (void) [((JavaLangStringBuilder *) nil_chk(rawExpression_)) appendWithNSString:chunkText];
  (void) [((JavaLangStringBuilder *) nil_chk(rawExpression_)) appendWithNSString:@"}"];
}

- (void)appendRawFieldWithNSString:(NSString *)chunkText {
  (void) [((JavaLangStringBuilder *) nil_chk(rawExpression_)) appendWithNSString:@"$F{"];
  (void) [((JavaLangStringBuilder *) nil_chk(rawExpression_)) appendWithNSString:chunkText];
  (void) [((JavaLangStringBuilder *) nil_chk(rawExpression_)) appendWithNSString:@"}"];
}

- (void)appendRawVariableWithNSString:(NSString *)chunkText {
  (void) [((JavaLangStringBuilder *) nil_chk(rawExpression_)) appendWithNSString:@"$V{"];
  (void) [((JavaLangStringBuilder *) nil_chk(rawExpression_)) appendWithNSString:chunkText];
  (void) [((JavaLangStringBuilder *) nil_chk(rawExpression_)) appendWithNSString:@"}"];
}

- (void)appendRawResourceWithNSString:(NSString *)chunkText {
  (void) [((JavaLangStringBuilder *) nil_chk(rawExpression_)) appendWithNSString:@"str{"];
  (void) [((JavaLangStringBuilder *) nil_chk(rawExpression_)) appendWithNSString:chunkText];
  (void) [((JavaLangStringBuilder *) nil_chk(rawExpression_)) appendWithNSString:@"}"];
}

+ (void)initialize {
  if (self == [OrgOssPdfreporterCompilersJevalJevalExpressionFactory class]) {
    OrgOssPdfreporterCompilersJevalJevalExpressionFactory_logger_ = [JavaUtilLoggingLogger getLoggerWithNSString:[[IOSClass classWithClass:[OrgOssPdfreporterCompilersJevalJevalExpressionFactory class]] getName]];
  }
}

- (void)copyAllPropertiesTo:(id)copy {
  [super copyAllPropertiesTo:copy];
  OrgOssPdfreporterCompilersJevalJevalExpressionFactory *typedCopy = (OrgOssPdfreporterCompilersJevalJevalExpressionFactory *) copy;
  typedCopy.rawExpression = rawExpression_;
  typedCopy.dataholder = dataholder_;
}

@end
