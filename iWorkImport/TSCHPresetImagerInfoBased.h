/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */



#import "TSCHPresetImager.h"


@class TSCHChartType;



__attribute__((visibility("hidden")))

@interface TSCHPresetImagerInfoBased : TSCHPresetImager

{

    TSCHChartType *mChartType;

}



+ (id)presetImagerForChartType:(id)arg1;

- (void)dealloc;

- (id)imageWithPreset:(id)arg1 target:(int)arg2 imageSize:(struct CGSize)arg3 imageScale:(double)arg4 swatchFrame:(struct CGRect)arg5 documentRoot:(id)arg6;

- (id)initWithChartType:(id)arg1;

- (id)p_chartType;

- (id)p_rectAdjustmentForChartType:(id)arg1;

- (struct UIEdgeInsets)swatchImageEdgeInsetsForSize:(struct CGSize)arg1;



@end

