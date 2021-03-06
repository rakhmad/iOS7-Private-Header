/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */



#import "UIView.h"



@class NSMutableArray, NSMutableDictionary, NSString, UIImageView, UILabel;



__attribute__((visibility("hidden")))

@interface SLSheetTitleView : UIView

{

    UIImageView *_serviceIconView;

    NSMutableArray *_constraints;

    UILabel *_titleLabel;

    long long _currentBarMetrics;

    NSMutableDictionary *_titleFonts;

    NSString *_title;

}



- (void).cxx_destruct;

- (void)_setupTitleLabel;

- (void)_updateTitleLabelForBarMetrics:(long long)arg1;

- (id)initWithFrame:(struct CGRect)arg1;

- (struct CGSize)intrinsicContentSize;

- (void)layoutSubviews;

- (void)setCurrentBarMetrics:(long long)arg1;

- (void)setServiceIconImage:(id)arg1;

@property(copy, nonatomic) NSString *title; // @synthesize title=_title;

- (void)setTitleFont:(id)arg1 forBarMetrics:(long long)arg2;

- (void)sizeToFit;

- (void)updateConstraints;



@end


