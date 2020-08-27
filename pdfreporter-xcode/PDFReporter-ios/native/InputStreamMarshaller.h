//
//  J2ObjcHelper.h
//  JasperReportiOS
//
//  Created by Martin Krasnočka on 5/3/13.
//  Copyright (c) 2013 Digireport. All rights reserved.
//

#import <Foundation/Foundation.h>
#include "java/io/InputStream.h"
#include "java/io/Reader.h"
#include "org/oss/pdfreporter/xml/parsers/IInputSource.h"

@interface InputStreamMarshaller : NSObject
+(NSData *)convertJavaIoInputStreamToNSData:(JavaIoInputStream *)is;
+(NSData *)convertInputSourceToNSData:(id<OrgOssPdfreporterXmlParsersIInputSource>)input;
@end
