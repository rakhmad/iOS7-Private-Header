/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */



#import "UIInputViewAnimationStyle.h"


@class UINavigationControllerKeyboardAnimationStyleInfo, _UIViewControllerTransitionContext;



__attribute__((visibility("hidden")))

@interface UINavigationControllerKeyboardAnimationStyle : UIInputViewAnimationStyle

{

    _Bool _disableAlongsideView;

    _UIViewControllerTransitionContext *_context;

    UINavigationControllerKeyboardAnimationStyleInfo *_info;

}



+ (id)animationStyleAnimated:(_Bool)arg1 duration:(double)arg2 outDirection:(int)arg3 context:(id)arg4;

+ (id)animationStyleWithoutAlongsideViewAnimated:(_Bool)arg1 duration:(double)arg2 outDirection:(int)arg3 context:(id)arg4;

@property(readonly, nonatomic) _UIViewControllerTransitionContext *context; // @synthesize context=_context;

- (void)dealloc;

@property(nonatomic) _Bool disableAlongsideView; // @synthesize disableAlongsideView=_disableAlongsideView;

@property(readonly, nonatomic) UINavigationControllerKeyboardAnimationStyleInfo *info; // @synthesize info=_info;

- (id)initWithContext:(id)arg1;

- (_Bool)isAnimationCompleted;

- (void)launchAnimation:(id)arg1 afterStarted:(void)arg2 completion:(id)arg3 forHost:(void)arg4 fromCurrentPosition:(id)arg5;

- (_Bool)useCustomTransition;



@end


