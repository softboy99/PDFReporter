//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: apache_harmony/classlib/modules/luni/src/main/java/java/lang/StringIndexOutOfBoundsException.java
//
//  Created by tball on 7/15/13.
//

#ifndef _JavaLangStringIndexOutOfBoundsException_H_
#define _JavaLangStringIndexOutOfBoundsException_H_

#import "JreEmulation.h"
#include "java/lang/IndexOutOfBoundsException.h"

#define JavaLangStringIndexOutOfBoundsException_serialVersionUID -6762910422159637258

@interface JavaLangStringIndexOutOfBoundsException : JavaLangIndexOutOfBoundsException {
}

- (id)init;
- (id)initWithInt:(int)index;
- (id)initWithNSString:(NSString *)detailMessage;
@end

#endif // _JavaLangStringIndexOutOfBoundsException_H_
