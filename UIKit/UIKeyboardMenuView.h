/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */



#import "UIView.h"


#import "UIDimmingViewDelegate.h"

#import "UITableViewDataSource.h"

#import "UITableViewDelegate.h"



@class NSTimer, UIDimmingView, UIInputSwitcherSelectionExtraView, UIInputSwitcherShadowView, UIInputSwitcherTableView, UIKBTree, UIKeyboardLayoutStar;



__attribute__((visibility("hidden")))

@interface UIKeyboardMenuView : UIView <UITableViewDataSource, UITableViewDelegate, UIDimmingViewDelegate>

{

    UIInputSwitcherTableView *m_table;

    UIInputSwitcherShadowView *m_shadowView;

    UIInputSwitcherSelectionExtraView *m_selExtraView;

    struct CGRect m_referenceRect;

    double m_pointerOffset;

    _Bool m_scrollable;

    _Bool m_startAutoscroll;

    _Bool m_scrolling;

    _Bool m_shouldFade;

    struct CGPoint m_point;

    double m_scrollStartTime;

    int m_scrollDirection;

    NSTimer *m_scrollTimer;

    int m_visibleRows;

    int m_firstVisibleRow;

    int m_mode;

    UIDimmingView *m_dimmingView;

    _Bool _usesStraightLeftEdge;

    _Bool _usesDarkTheme;

    UIKBTree *_referenceKey;

    UIKeyboardLayoutStar *_layout;

}



+ (id)viewThatContainsBaseKey;

- (void)_delayedFade;

- (int)_internationalKeyRoundedCornerInLayout:(id)arg1;

- (void)applicationWillSuspend:(id)arg1;

- (void)autoscrollTimerFired:(id)arg1;

- (_Bool)centerPopUpOverKey;

- (void)dealloc;

- (long long)defaultSelectedIndex;

- (void)didSelectItemAtIndex:(int)arg1;

- (id)dimmingView;

- (void)dimmingViewWasTapped:(id)arg1;

- (void)endScrolling:(id)arg1;

- (void)fade;

- (void)fadeAnimationDidStop:(id)arg1 finished:(id)arg2 context:(id)arg3;

- (void)fadeWithDelay:(double)arg1;

- (id)font;

- (void)hide;

- (void)highlightRow:(int)arg1;

- (int)indexForIndexPath:(id)arg1;

- (id)initWithFrame:(struct CGRect)arg1;

- (void)insertSelExtraView;

- (_Bool)isVisible;

@property(nonatomic) UIKeyboardLayoutStar *layout; // @synthesize layout=_layout;

- (id)maskForShadowViewBlurredBackground;

- (double)minYOfLastTableCellForSelectionExtraView;

@property(nonatomic) int mode; // @synthesize mode=m_mode;

- (long long)numberOfItems;

- (void)performShowAnimation;

- (struct CGRect)popupRect;

- (struct CGSize)preferredSize;

@property(nonatomic) UIKBTree *referenceKey; // @synthesize referenceKey=_referenceKey;

- (void)removeFromSuperview;

- (void)scrollViewDidScroll:(id)arg1;

- (void)selectItemAtPoint:(struct CGPoint)arg1;

- (void)setFrame:(struct CGRect)arg1;

- (void)setHighlightForRowAtIndexPath:(id)arg1 highlight:(_Bool)arg2;

- (void)setKeyboardDimmed:(_Bool)arg1;

- (void)setNeedsDisplay;

- (void)setNeedsDisplayForCell:(id)arg1;

- (void)setNeedsDisplayForTopBottomCells;

- (void)setRenderConfig:(id)arg1;

@property(nonatomic) _Bool usesDarkTheme; // @synthesize usesDarkTheme=_usesDarkTheme;

@property(nonatomic) _Bool usesStraightLeftEdge; // @synthesize usesStraightLeftEdge=_usesStraightLeftEdge;

- (void)setupShadowViewWithSize:(struct CGSize)arg1;

- (void)show;

- (void)showAsHUD;

- (void)showAsPopupForKey:(id)arg1 inLayout:(id)arg2;

- (void)stopAnyAutoscrolling;

- (id)subtitleFont;

- (id)subtitleForItemAtIndex:(int)arg1;

- (id)table;

- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;

- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;

- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;

- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;

- (id)tableView:(id)arg1 willDeselectRowAtIndexPath:(id)arg2;

- (void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3;

- (id)tableView:(id)arg1 willSelectRowAtIndexPath:(id)arg2;

- (id)titleForItemAtIndex:(int)arg1;

- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;

- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;

- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;

- (void)touchesMoved:(id)arg1 withEvent:(id)arg2;

- (void)updateSelectionWithPoint:(struct CGPoint)arg1;

- (_Bool)usesDimmingView;

- (_Bool)usesShadowView;

@property(readonly) _Bool usesTable;



@end


