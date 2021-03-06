/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */



#import "NSMutableString.h"


@interface NSCheapMutableString : NSMutableString

{

    union {

        unsigned short *fat;

        char *thin;

    } contents;

    struct {

        unsigned int isFat:1;

        unsigned int freeWhenDone:1;

        unsigned int refs:30;

    } flags;

    unsigned long long numCharacters;

    void *_reserved;

}



- (const char *)cString;

- (unsigned long long)cStringLength;

- (unsigned short)characterAtIndex:(unsigned long long)arg1;

- (void)dealloc;

- (unsigned long long)fastestEncoding;

- (void)finalize;

- (_Bool)getBytes:(void *)arg1 maxLength:(unsigned long long)arg2 usedLength:(unsigned long long *)arg3 encoding:(unsigned long long)arg4 options:(unsigned long long)arg5 range:(struct _NSRange)arg6 remainingRange:(struct _NSRange *)arg7;

- (void)getCharacters:(unsigned short *)arg1 range:(struct _NSRange)arg2;

- (unsigned long long)length;

- (const char *)lossyCString;

- (void)setContentsNoCopy:(void *)arg1 length:(unsigned long long)arg2 freeWhenDone:(_Bool)arg3 isUnicode:(_Bool)arg4;



@end


