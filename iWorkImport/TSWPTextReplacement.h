/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */





#import "TSWPReplaceAction.h"



@class NSString, TSWPSelection;



__attribute__((visibility("hidden")))

@interface TSWPTextReplacement : NSObject <TSWPReplaceAction>

{

    TSWPSelection *_selection;

    NSString *_string;

}



- (void)dealloc;

- (long long)delta;

- (id)initWithSelection:(id)arg1 string:(id)arg2;

- (struct _NSRange)insertedRange;

- (void)performWithStorage:(id)arg1 delta:(long long)arg2 undoTransaction:(struct TSWPStorageTransaction *)arg3 replaceBlock:(id)arg4;

- (unsigned long long)targetCharIndex;



@end


