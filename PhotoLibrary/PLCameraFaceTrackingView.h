/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */



#import "PLCameraFocusView.h"


@interface PLCameraFaceTrackingView : PLCameraFocusView

{

    _Bool _isInFrame;

}



- (id)_createBoundsAnimation;

- (id)_createContentsAnimation;

- (void)_loadImagesWithImageSize:(struct CGSize *)arg1;

- (void)animateToFrame:(struct CGRect)arg1;

- (void)fadeIn;

- (void)fadeOut;

- (double)fadeOutDuration;

- (id)init;

@property(nonatomic) _Bool isInFrame; // @synthesize isInFrame=_isInFrame;



@end

