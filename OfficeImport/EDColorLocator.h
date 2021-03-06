/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */





@class TSUColor;



__attribute__((visibility("hidden")))

@interface EDColorLocator : NSObject

{

    unsigned int mColorOffset;

    int mColorIndex;

    TSUColor *mColor;

}



- (id)color;

- (int)colorIndex;

- (void)dealloc;

- (id)initWith:(id)arg1 index:(int)arg2 offset:(unsigned int)arg3;

- (unsigned int)offset;

- (void)setColor:(id)arg1;

- (void)setColorIndex:(int)arg1;

- (void)setOffset:(unsigned int)arg1;



@end


