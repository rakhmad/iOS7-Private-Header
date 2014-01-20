/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */



#import "UIButton.h"


@class CADisplayLink, CALayer, NSMutableArray, NSTimer, UIImageView;



__attribute__((visibility("hidden")))

@interface UIDictationMeterView : UIButton

{

    UIImageView *_background;

    UIImageView *_overlay;

    NSMutableArray *_micListeningImages;

    CALayer *_micImageLayer;

    CALayer *_animatingLayer;

    NSTimer *_fillTimer;

    int _phase;

    int _state;

    float _runningPowerLevels[5];

    unsigned int _powerPointer;

    CADisplayLink *_displayLink;

    double _releaseStart;

    float _releaseLevel;

    int _cachedViewMode;

}



- (float)_adjustedDuration:(float)arg1;

- (double)_animationInterval;

- (id)_attackKeyFrameAnimation;

- (void)_clearDisplayLink;

- (float)_currentMicPowerLevel;

- (id)_decayKeyFrameAnimation;

- (id)_emptyMicImage;

- (id)_keyframeAnimationForCGImages:(id)arg1 duration:(double)arg2;

- (float)_powerLevelForMicPower:(float)arg1;

- (void)_removeAnimationsAndClearLayers;

- (void)_reset;

- (void)_resetRunningPowerLevels;

- (void)_startAttack;

- (void)_startDecay;

- (void)_startListening;

- (void)_startRelease;

- (void)_startSustain;

- (id)_sustainKeyFrameAnimation;

- (void)_updateListeningAnimation:(id)arg1;

- (float)_updateMedianWithNewValue:(float)arg1;

- (void)_updateReleaseAnimation:(id)arg1;

- (void)animationDidStop:(id)arg1 finished:(_Bool)arg2;

- (void)dealloc;

- (id)imageForMicLevel:(double)arg1;

- (id)initWithFrame:(struct CGRect)arg1;

- (void)layoutSubviews;

- (void)setState:(int)arg1;



@end

