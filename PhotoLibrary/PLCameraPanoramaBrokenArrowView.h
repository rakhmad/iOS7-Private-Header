/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */



#import "UIView.h"



@class CAShapeLayer, UIImageView;



@interface PLCameraPanoramaBrokenArrowView : UIView

{

    UIImageView *_arrowHead;

    UIView *_arrowTail;

    CAShapeLayer *_arrowTailPiecesLayer;

    struct CGPath *_currentTailPiecesPath;

    struct CGRect _arrowTailRect;

    double _currentNormalizedSpeed;

    double _tailBiggestDelta;

    double _tailBigDelta;

    double _tailMediumDelta;

    double _tailSmallDelta;

}



- (struct CGPath *)_newTailPiecesPathOfWidth:(double *)arg1;

- (void)_updateTailWithAnimationDuration:(double)arg1;

- (void)animateArrowSpeedWithNormalizedSpeed:(double)arg1 duration:(double)arg2;

- (void)dealloc;

- (id)initWithFrame:(struct CGRect)arg1;

- (void)resetArrow;



@end

