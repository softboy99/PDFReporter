//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: pdfreporter-core/src/org/oss/pdfreporter/engine/design/JRValidationFault.java
//
//  Created by kendra on 9/27/13.
//

#ifndef _OrgOssPdfreporterEngineDesignJRValidationFault_H_
#define _OrgOssPdfreporterEngineDesignJRValidationFault_H_

#import "JreEmulation.h"
#include "java/io/Serializable.h"

#define OrgOssPdfreporterEngineDesignJRValidationFault_serialVersionUID 10200

@interface OrgOssPdfreporterEngineDesignJRValidationFault : NSObject < JavaIoSerializable > {
 @public
  NSString *message_;
  id source_;
}

@property (nonatomic, copy) NSString *message;
@property (nonatomic, strong) id source;

- (id)init;
- (NSString *)getMessage;
- (void)setMessageWithNSString:(NSString *)message;
- (id)getSource;
- (void)setSourceWithId:(id)source;
@end

#endif // _OrgOssPdfreporterEngineDesignJRValidationFault_H_
