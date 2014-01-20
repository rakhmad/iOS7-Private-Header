/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */





@class NSTimer, UIScrollView;



@interface PLAutoScroller : NSObject

{

    UIScrollView *_targetScrollView;

    struct CGPoint _targetPoint;

    double _thresholdDistance;

    NSTimer *_autoscrollTimer;

}



- (void)_stopAutoscrollTimer;

- (void)_updateAutoscrollTimer:(id)arg1;

- (void)dealloc;

- (id)init;

- (id)initWithTargetScrollView:(id)arg1 thresholdDistance:(double)arg2;

@property(nonatomic) struct CGPoint targetPoint; // @synthesize targetPoint=_targetPoint;

- (void)stopAndInvalidate;

@property(readonly) double thresholdDistance; // @synthesize thresholdDistance=_thresholdDistance;



@end

