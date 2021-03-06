/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */



#import "PSKeychainSyncViewController.h"


#import "UIAlertViewDelegate.h"



@class UIAlertView, UIFont;



@interface KeychainSyncAdvancedSecurityCodeController : PSKeychainSyncViewController <UIAlertViewDelegate>

{

    double _cellTextWidth;

    UIFont *_cellFont;

    UIAlertView *_disableRecoveryConfirmationAlert;

    _Bool _showsDisableRecoveryOption;

}



- (void)_finishedWithSpecifier:(id)arg1;

- (void)alertView:(id)arg1 didDismissWithButtonIndex:(long long)arg2;

- (void)dealloc;

- (void)nextPressed;

@property(nonatomic) _Bool showsDisableRecoveryOption; // @synthesize showsDisableRecoveryOption=_showsDisableRecoveryOption;

- (id)specifiers;

- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;

- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;

- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;

- (void)viewDidLoad;



@end


