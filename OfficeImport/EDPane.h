/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */





@class EDReference;



__attribute__((visibility("hidden")))

@interface EDPane : NSObject

{

    double mXSplitPosition;

    double mYSplitPosition;

    EDReference *mTopLeftCell;

    int mActivePane;

}



+ (id)pane;

- (int)activePane;

- (void)dealloc;

- (id)init;

- (void)setActivePane:(int)arg1;

- (void)setTopLeftCell:(id)arg1;

- (void)setXSplitPosition:(double)arg1;

- (void)setYSplitPosition:(double)arg1;

- (id)topLeftCell;

- (double)xSplitPosition;

- (double)ySplitPosition;



@end

