/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */



#import "MFPBrush.h"


@class NSArray;



__attribute__((visibility("hidden")))

@interface MFPGradientBrush : MFPBrush

{

    struct CGAffineTransform mTransform;

    NSArray *mBlend;

    NSArray *mColorBlend;

    int mWrapMode;

    NSArray *mStops;

    struct CGShading *mShading;

    struct CGFunction *mShadingFunction;

}



- (id).cxx_construct;

- (id)color;

- (id)colorAtPosition:(float)arg1;

- (void)createPhoneBrush;

- (void)createShading;

- (void)createShadingFunction;

- (void)createStopsFromBlend;

- (void)createStopsFromColorBlend;

- (void)createStopsFromStartAndEndColors;

- (void)dealloc;

- (id)endColor;

- (void)fillPath:(id)arg1;

- (id)init;

- (void)setBlend:(id)arg1;

- (void)setColorBlend:(id)arg1;

- (void)setTransform:(struct CGAffineTransform)arg1;

- (void)setWrapMode:(int)arg1;

- (id)startColor;



@end


