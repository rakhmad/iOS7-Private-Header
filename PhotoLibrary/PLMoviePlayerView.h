/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */



#import "UIView.h"



@class AVPlayer, PLAVPlayerView, PLAirPlayBackgroundView, PLVideoOutBackgroundView;



@interface PLMoviePlayerView : UIView

{

    PLAVPlayerView *_avPlayerView;

    PLVideoOutBackgroundView *_videoOutView;

    PLAirPlayBackgroundView *_airPlayView;

    _Bool _destinationPlaceholderHidden;

    unsigned long long _scaleMode;

}



- (void)_clearAirPlayView;

- (void)_clearVideoView;

- (void)_installBackgroundView:(id)arg1;

- (void)dealloc;

@property(readonly, nonatomic) long long destinationPlaceholderStyle;

- (id)initWithFrame:(struct CGRect)arg1;

@property(nonatomic, getter=isDestinationPlaceholderHidden) _Bool destinationPlaceholderHidden;

@property(retain, nonatomic) AVPlayer *player;

- (void)reattachVideoView;

@property(nonatomic) unsigned long long scaleMode; // @synthesize scaleMode=_scaleMode;

- (void)setDestinationPlaceholderStyle:(long long)arg1 airPlayDeviceName:(id)arg2;

- (void)setScaleMode:(unsigned long long)arg1 duration:(double)arg2;

@property(readonly, nonatomic) UIView *videoView;



@end


