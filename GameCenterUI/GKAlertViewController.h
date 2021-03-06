/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */



#import "UIViewController.h"



#import "UIAlertViewDelegate.h"



@class GKUIAlertView;



@interface GKAlertViewController : UIViewController <UIAlertViewDelegate>

{

    _Bool _isShown;

    GKUIAlertView *_alertView;

}



+ (id)alertViewControllerWithTitle:(id)arg1 message:(id)arg2 cancelButtonTitle:(id)arg3 otherButtonTitle:(id)arg4 dismissHandler:(id)arg5;

@property(retain, nonatomic) GKUIAlertView *alertView; // @synthesize alertView=_alertView;

- (void)dealloc;

- (id)init;

@property(nonatomic) _Bool isShown; // @synthesize isShown=_isShown;

- (void)loadView;

- (_Bool)shouldAutorotateToInterfaceOrientation:(long long)arg1;

- (void)viewDidAppear:(_Bool)arg1;



@end


