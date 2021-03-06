/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */



#import "UIView.h"


@class NSArray, UIKeyboardMenuView, _UIBackdropView;



__attribute__((visibility("hidden")))

@interface UIInputSwitcherShadowView : UIView

{

    int m_mode;

    double m_pointerOffset;

    NSArray *m_gradientColors;

    UIKeyboardMenuView *_menu;

    _UIBackdropView *_blurView;

    struct CGRect _keyRect;

}



@property(retain, nonatomic) _UIBackdropView *blurView; // @synthesize blurView=_blurView;

- (void)dealloc;

- (void)drawRect:(struct CGRect)arg1;

@property(retain, nonatomic) NSArray *gradientColors; // @synthesize gradientColors=m_gradientColors;

- (id)initWithFrame:(struct CGRect)arg1;

@property(nonatomic) struct CGRect keyRect; // @synthesize keyRect=_keyRect;

- (void)layoutSubviews;

@property(nonatomic) UIKeyboardMenuView *menu; // @synthesize menu=_menu;

@property(nonatomic) int mode; // @synthesize mode=m_mode;

@property(nonatomic) double pointerOffset; // @synthesize pointerOffset=m_pointerOffset;

- (void)setFrame:(struct CGRect)arg1;



@end


