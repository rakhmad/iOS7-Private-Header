/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */



#import "UIButton.h"



@interface MPButton : UIButton

{

    struct UIEdgeInsets _hitRectInsets;

    double _holdDelayInterval;

    unsigned int _holding:1;

}



+ (id)easyTouchButtonWithType:(long long)arg1;

+ (double)easyTouchDefaultCharge;

+ (struct UIEdgeInsets)easyTouchDefaultHitRectInsets;

- (void)_delayedTriggerHold;

- (void)_handleTouchCancel;

- (void)_handleTouchDown;

- (void)_handleTouchUp;

- (_Bool)beginTrackingWithTouch:(id)arg1 withEvent:(id)arg2;

- (void)cancelTrackingWithEvent:(id)arg1;

- (void)dealloc;

- (void)endTrackingWithTouch:(id)arg1 withEvent:(id)arg2;

- (struct CGRect)hitRect;

@property(nonatomic) struct UIEdgeInsets hitRectInsets; // @synthesize hitRectInsets=_hitRectInsets;

@property(nonatomic) double holdDelayInterval; // @synthesize holdDelayInterval=_holdDelayInterval;

- (id)initWithFrame:(struct CGRect)arg1;

- (_Bool)pointInside:(struct CGPoint)arg1 withEvent:(id)arg2;



@end

