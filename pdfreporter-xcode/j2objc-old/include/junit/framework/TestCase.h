//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/tball/tmp/j2objc-0.8.3/junit/build_result/java/junit/framework/TestCase.java
//
//  Created by tball on 7/15/13.
//

#ifndef _JunitFrameworkTestCase_H_
#define _JunitFrameworkTestCase_H_

@class JunitFrameworkTestResult;

#import "JreEmulation.h"
#include "junit/framework/Assert.h"
#include "junit/framework/Test.h"

@interface JunitFrameworkTestCase : JunitFrameworkAssert < JunitFrameworkTest > {
 @public
  NSString *fName_;
}

@property (nonatomic, copy) NSString *fName;

- (id)init;
- (id)initWithNSString:(NSString *)name;
- (int)countTestCases;
- (JunitFrameworkTestResult *)createResult;
- (JunitFrameworkTestResult *)run;
- (void)runWithJunitFrameworkTestResult:(JunitFrameworkTestResult *)result;
- (void)runBare;
- (void)runTest;
- (void)setUp;
- (void)tearDown;
- (NSString *)description;
- (NSString *)getName;
- (void)setNameWithNSString:(NSString *)name;
@end

#endif // _JunitFrameworkTestCase_H_
