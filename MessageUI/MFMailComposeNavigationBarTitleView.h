/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */



#import "UIView.h"



@class NSString, UIImageView, UILabel;



@interface MFMailComposeNavigationBarTitleView : UIView

{

    UILabel *_titleLabel;

    UILabel *_subtitleLabel;

    UIImageView *_subtitleImageView;

    unsigned long long _style;

}



- (id)_subtitleImageWhenMini:(_Bool)arg1;

- (id)_subtitleTextColor;

- (double)_verticalOffsetForSubtitleImageWhenMini:(_Bool)arg1;

- (void)dealloc;

- (id)initWithFrame:(struct CGRect)arg1;

- (void)layoutSubviews;

- (void)setSubtitleText:(id)arg1 withStyle:(unsigned long long)arg2;

@property(copy, nonatomic) NSString *title;



@end


