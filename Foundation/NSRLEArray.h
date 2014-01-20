/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */





#import "NSCopying.h"

#import "NSMutableCopying.h"



@interface NSRLEArray : NSObject <NSCopying, NSMutableCopying>

{

    struct _NSRefCountedRunArray *theList;

}



- (void)_makeNewListFrom:(struct _NSRefCountedRunArray *)arg1;

- (id)copyWithZone:(struct _NSZone *)arg1;

- (unsigned long long)count;

- (void)dealloc;

- (id)description;

- (void)finalize;

- (id)init;

- (id)initWithRefCountedRunArray:(struct _NSRefCountedRunArray *)arg1;

- (id)mutableCopyWithZone:(struct _NSZone *)arg1;

- (id)objectAtIndex:(unsigned long long)arg1 effectiveRange:(struct _NSRange *)arg2;

- (id)objectAtIndex:(unsigned long long)arg1 effectiveRange:(struct _NSRange *)arg2 runIndex:(unsigned long long *)arg3;

- (id)objectAtRunIndex:(unsigned long long)arg1 length:(unsigned long long *)arg2;



@end

