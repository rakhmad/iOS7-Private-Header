/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */



#import "UIGestureRecognizer.h"


@class UIDelayedAction;



__attribute__((visibility("hidden")))

@interface UIScrollViewDelayedTouchesBeganGestureRecognizer : UIGestureRecognizer

{

    UIDelayedAction *_touchDelay;

    struct CGPoint _startScreenLocation;

}



- (void)_resetGestureRecognizer;

- (void)clearTimer;

- (void)dealloc;

- (void)sendDelayedTouches;

- (void)sendTouchesShouldBeginForDelayedTouches:(id)arg1;

- (void)sendTouchesShouldBeginForTouches:(id)arg1 withEvent:(id)arg2;

- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;

- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;

- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;

- (void)touchesMoved:(id)arg1 withEvent:(id)arg2;



@end


