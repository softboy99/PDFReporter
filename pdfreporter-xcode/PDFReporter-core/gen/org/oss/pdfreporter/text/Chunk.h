//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: pdfreporter-core/src/org/oss/pdfreporter/text/Chunk.java
//
//  Created by kendra on 9/27/13.
//

#ifndef _OrgOssPdfreporterTextChunk_H_
#define _OrgOssPdfreporterTextChunk_H_

#import "JreEmulation.h"

@interface OrgOssPdfreporterTextChunk : NSObject {
 @public
  NSString *val_;
  int mode_;
  int param_;
}

@property (nonatomic, copy) NSString *val;
@property (nonatomic, assign) int mode;
@property (nonatomic, assign) int param;

- (id)initWithNSString:(NSString *)val
               withInt:(int)mode;
- (id)initWithNSString:(NSString *)val
               withInt:(int)mode
               withInt:(int)param;
@end

#endif // _OrgOssPdfreporterTextChunk_H_
