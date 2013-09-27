//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: pdfreporter-core/src/org/oss/pdfreporter/compilers/jeval/JEvalCompiler.java
//
//  Created by kendra on 9/27/13.
//

#ifndef _OrgOssPdfreporterCompilersJevalJEvalCompiler_H_
#define _OrgOssPdfreporterCompilersJevalJEvalCompiler_H_

@class IOSObjectArray;
@class JavaIoFile;
@class JavaUtilLoggingLogger;
@class OrgOssPdfreporterEngineDesignJRSourceCompileTask;
@class OrgOssPdfreporterEngineFillJREvaluator;
@protocol JavaUtilMap;
@protocol OrgOssPdfreporterEngineDesignJRCompilationSourceCode;
@protocol OrgOssPdfreporterEngineJasperReportsContext;

#import "JreEmulation.h"
#include "java/io/Serializable.h"
#include "org/oss/pdfreporter/engine/design/JRAbstractCompiler.h"

@interface OrgOssPdfreporterCompilersJevalJEvalCompiler : OrgOssPdfreporterEngineDesignJRAbstractCompiler {
}

+ (JavaUtilLoggingLogger *)logger;
+ (id<JavaUtilMap>)evaluators;
- (id)initWithOrgOssPdfreporterEngineJasperReportsContext:(id<OrgOssPdfreporterEngineJasperReportsContext>)jasperReportsContext
                                                 withBOOL:(BOOL)needsSourceFiles;
- (id)initWithOrgOssPdfreporterEngineJasperReportsContext:(id<OrgOssPdfreporterEngineJasperReportsContext>)jasperReportsContext;
- (OrgOssPdfreporterEngineFillJREvaluator *)loadEvaluatorWithJavaIoSerializable:(id<JavaIoSerializable>)compileData
                                                                   withNSString:(NSString *)unitName;
- (void)checkLanguageWithNSString:(NSString *)language;
- (id<OrgOssPdfreporterEngineDesignJRCompilationSourceCode>)generateSourceCodeWithOrgOssPdfreporterEngineDesignJRSourceCompileTask:(OrgOssPdfreporterEngineDesignJRSourceCompileTask *)sourceTask;
- (NSString *)compileUnitsWithOrgOssPdfreporterEngineDesignJRCompilationUnitArray:(IOSObjectArray *)units
                                                                     withNSString:(NSString *)classpath
                                                                   withJavaIoFile:(JavaIoFile *)tempDirFile;
- (NSString *)getSourceFileNameWithNSString:(NSString *)unitName;
@end

#define OrgOssPdfreporterCompilersJevalJEvalCompiler_DummyCompileData_serialVersionUID 1

@interface OrgOssPdfreporterCompilersJevalJEvalCompiler_DummyCompileData : NSObject < JavaIoSerializable > {
}

- (id)init;
@end

#endif // _OrgOssPdfreporterCompilersJevalJEvalCompiler_H_
