//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: pdfreporter-core/src/org/oss/pdfreporter/engine/export/JRPdfExporterContext.java
//
//  Created by kendra on 9/27/13.
//

#ifndef _OrgOssPdfreporterEngineExportJRPdfExporterContext_H_
#define _OrgOssPdfreporterEngineExportJRPdfExporterContext_H_

@protocol OrgOssPdfreporterPdfIDocument;
@protocol OrgOssPdfreporterPdfIPage;

#import "JreEmulation.h"
#include "org/oss/pdfreporter/engine/export/JRExporterContext.h"

@protocol OrgOssPdfreporterEngineExportJRPdfExporterContext < OrgOssPdfreporterEngineExportJRExporterContext, NSObject, JavaObject >
- (id<OrgOssPdfreporterPdfIDocument>)getPdfDocument;
- (id<OrgOssPdfreporterPdfIPage>)getCurrentPage;
@end

#endif // _OrgOssPdfreporterEngineExportJRPdfExporterContext_H_
