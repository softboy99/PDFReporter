//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: pdfreporter-core/src/org/oss/pdfreporter/engine/fill/JRHorizontalFiller.java
//
//  Created by kendra on 9/27/13.
//

#ifndef _OrgOssPdfreporterEngineFillJRHorizontalFiller_H_
#define _OrgOssPdfreporterEngineFillJRHorizontalFiller_H_

@class JavaUtilLoggingLogger;
@class OrgOssPdfreporterEngineFillJREvaluator;
@class OrgOssPdfreporterEngineFillJRFillBand;
@class OrgOssPdfreporterEngineFillJRFillGroup;
@class OrgOssPdfreporterEngineFillJRFillSubreport;
@class OrgOssPdfreporterEngineFillJRPrintBand;
@class OrgOssPdfreporterEngineFillSavePoint;
@class OrgOssPdfreporterEngineJasperReport;
@protocol OrgOssPdfreporterEngineFillDatasetExpressionEvaluator;
@protocol OrgOssPdfreporterEngineJRGroup;
@protocol OrgOssPdfreporterEngineJasperReportsContext;

#import "JreEmulation.h"
#include "org/oss/pdfreporter/engine/fill/JRBaseFiller.h"

@interface OrgOssPdfreporterEngineFillJRHorizontalFiller : OrgOssPdfreporterEngineFillJRBaseFiller {
 @public
  int lastDetailOffsetX_;
  int lastDetailOffsetY_;
  int currentDetailOffsetY_;
  int maxDetailOffsetY_;
}

@property (nonatomic, assign) int lastDetailOffsetX;
@property (nonatomic, assign) int lastDetailOffsetY;
@property (nonatomic, assign) int currentDetailOffsetY;
@property (nonatomic, assign) int maxDetailOffsetY;

+ (JavaUtilLoggingLogger *)logger;
- (id)initWithOrgOssPdfreporterEngineJasperReportsContext:(id<OrgOssPdfreporterEngineJasperReportsContext>)jasperReportsContext
                  withOrgOssPdfreporterEngineJasperReport:(OrgOssPdfreporterEngineJasperReport *)jasperReport;
- (id)initWithOrgOssPdfreporterEngineJasperReportsContext:(id<OrgOssPdfreporterEngineJasperReportsContext>)jasperReportsContext
                  withOrgOssPdfreporterEngineJasperReport:(OrgOssPdfreporterEngineJasperReport *)jasperReport
           withOrgOssPdfreporterEngineFillJRFillSubreport:(OrgOssPdfreporterEngineFillJRFillSubreport *)parentElement;
- (id)initWithOrgOssPdfreporterEngineJasperReportsContext:(id<OrgOssPdfreporterEngineJasperReportsContext>)jasperReportsContext
                  withOrgOssPdfreporterEngineJasperReport:(OrgOssPdfreporterEngineJasperReport *)jasperReport
withOrgOssPdfreporterEngineFillDatasetExpressionEvaluator:(id<OrgOssPdfreporterEngineFillDatasetExpressionEvaluator>)evaluator
           withOrgOssPdfreporterEngineFillJRFillSubreport:(OrgOssPdfreporterEngineFillJRFillSubreport *)parentElement;
- (id)initWithOrgOssPdfreporterEngineJasperReportsContext:(id<OrgOssPdfreporterEngineJasperReportsContext>)jasperReportsContext
                  withOrgOssPdfreporterEngineJasperReport:(OrgOssPdfreporterEngineJasperReport *)jasperReport
               withOrgOssPdfreporterEngineFillJREvaluator:(OrgOssPdfreporterEngineFillJREvaluator *)evaluator
           withOrgOssPdfreporterEngineFillJRFillSubreport:(OrgOssPdfreporterEngineFillJRFillSubreport *)parentElement;
- (void)setPageHeightWithInt:(int)pageHeight;
- (void)fillReport;
- (void)fillReportStart;
- (void)setFirstColumn;
- (void)fillReportContent;
- (void)fillReportEnd;
- (void)fillTitle;
- (void)fillPageHeaderWithChar:(char)evaluation;
- (BOOL)fillBandNoOverflowWithOrgOssPdfreporterEngineFillJRFillBand:(OrgOssPdfreporterEngineFillJRFillBand *)band
                                                           withChar:(char)evaluation;
- (void)fillColumnHeadersWithChar:(char)evaluation;
- (void)fillGroupHeadersWithBOOL:(BOOL)isFillAll;
- (OrgOssPdfreporterEngineFillSavePoint *)fillGroupHeaderWithOrgOssPdfreporterEngineFillJRFillGroup:(OrgOssPdfreporterEngineFillJRFillGroup *)group;
- (void)fillGroupHeadersReprintWithChar:(char)evaluation;
- (void)fillGroupHeaderReprintWithOrgOssPdfreporterEngineFillJRFillGroup:(OrgOssPdfreporterEngineFillJRFillGroup *)group
                                                                withChar:(char)evaluation;
- (void)fillDetail;
- (void)fillGroupFootersWithBOOL:(BOOL)isFillAll;
- (OrgOssPdfreporterEngineFillSavePoint *)fillGroupFooterWithOrgOssPdfreporterEngineFillJRFillGroup:(OrgOssPdfreporterEngineFillJRFillGroup *)group
                                                                                           withChar:(char)evaluation;
- (void)fillColumnFootersWithChar:(char)evaluation;
- (void)fillPageFooterWithChar:(char)evaluation;
- (void)fillSummary;
- (void)fillSummaryNoLastFooterSamePage;
- (void)fillSummaryNoLastFooterNewPage;
- (void)fillSummaryWithLastFooterAndPageBands;
- (void)fillSummaryWithLastFooterNoPageBands;
- (void)fillSummaryOverflow;
- (void)fillBackground;
- (void)addPageWithBOOL:(BOOL)isResetPageNumber;
- (void)setColumnNumberVariable;
- (void)fillPageBreakWithBOOL:(BOOL)isResetPageNumber
                     withChar:(char)evalPrevPage
                     withChar:(char)evalNextPage
                     withBOOL:(BOOL)isReprintGroupHeaders;
- (void)fillPageBandWithOrgOssPdfreporterEngineFillJRFillBand:(OrgOssPdfreporterEngineFillJRFillBand *)band
                                                     withChar:(char)evaluation;
- (OrgOssPdfreporterEngineFillSavePoint *)fillColumnBandWithOrgOssPdfreporterEngineFillJRFillBand:(OrgOssPdfreporterEngineFillJRFillBand *)band
                                                                                         withChar:(char)evaluation;
- (void)fillFixedBandWithOrgOssPdfreporterEngineFillJRFillBand:(OrgOssPdfreporterEngineFillJRFillBand *)band
                                                      withChar:(char)evaluation;
- (void)fillFixedBandWithOrgOssPdfreporterEngineFillJRFillBand:(OrgOssPdfreporterEngineFillJRFillBand *)band
                                                      withChar:(char)evaluation
                                                      withBOOL:(BOOL)allowShrinking;
- (void)fillBandWithOrgOssPdfreporterEngineFillJRPrintBand:(OrgOssPdfreporterEngineFillJRPrintBand *)band;
- (void)setNewPageColumnInBands;
- (void)setNewGroupInBandsWithOrgOssPdfreporterEngineJRGroup:(id<OrgOssPdfreporterEngineJRGroup>)group;
- (OrgOssPdfreporterEngineFillJRFillBand *)getCurrentPageFooter;
- (void)setLastPageFooterWithBOOL:(BOOL)isLastPageFooter;
- (void)fillNoData;
- (void)setOffsetX;
@end

#endif // _OrgOssPdfreporterEngineFillJRHorizontalFiller_H_
