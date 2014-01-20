/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */



#import "UIView.h"



@class CALayer, NSString, UIImageView, UILabel;



@interface MPScrollingTitlesView : UIView

{

    UILabel *_albumLabel;

    UILabel *_artistLabel;

    double _idealWidth;

    _Bool _marqueeEnabled;

    UIImageView *_marqueeView;

    CALayer *_maskLayer;

    UILabel *_titleLabel;

    long long _style;

}



- (void).cxx_destruct;

- (void)_applicationDidBecomeActiveNotification:(id)arg1;

- (void)_applicationDidEnterBackgroundNotification:(id)arg1;

- (id)_newArtistAlbumLabel;

- (id)_newTitleLabel;

- (void)_startMarquee;

- (void)_stopMarquee;

- (void)_updateMarqueeView;

@property(copy, nonatomic) NSString *album;

@property(copy, nonatomic) NSString *artist;

- (void)dealloc;

- (void)didMoveToWindow;

- (id)initWithFrame:(struct CGRect)arg1;

- (void)layoutSubviews;

@property(nonatomic) long long style; // @synthesize style=_style;

@property(copy, nonatomic) NSString *title;



@end

