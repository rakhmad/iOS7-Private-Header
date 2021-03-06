/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */



#import "CNFRegListController.h"


#import "CNFRegFirstRunDelegate.h"

#import "CNFRegViewAccountControllerDelegate.h"

#import "CNFRegWizardControllerDelegate.h"



@class NSArray, NSMutableArray, NSNumber, NSString, PSSpecifier;



@interface CNFRegSettingsController : CNFRegListController <CNFRegWizardControllerDelegate, CNFRegViewAccountControllerDelegate, CNFRegFirstRunDelegate>

{

    PSSpecifier *_faceTimeEnabledGroupSpecifier;

    PSSpecifier *_faceTimeEnabledSpecifier;

    NSArray *_accountGroupSpecifiers;

    NSArray *_aliasGroupSpecifiers;

    NSArray *_callerIdGroupSpecifiers;

    PSSpecifier *_addAddressButtonSpecifier;

    NSArray *_replyWithMessageGroupSpecifiers;

    NSArray *_blacklistGroupSpecifiers;

    PSSpecifier *_blankAddressSpecifier;

    NSString *_pendingAddress;

    NSMutableArray *_addresses;

    id _alertHandler;

    NSNumber *_delayedRefreshAnimatedFlag;

    struct {

        unsigned int listeningForFinishedEditingEvents:1;

        unsigned int appeared:1;

        unsigned int ignoringTextFieldChanges:1;

        unsigned int showEnableSwitch:1;

        unsigned int refreshingCallerIdValues:1;

    } _settingsFlags;

}



- (_Bool)_allAccountsAreDeactivated;

- (id)_appleIDAccounts;

- (void)_buildSpecifierCache:(id)arg1;

- (void)_cacheIndividualSpecifier:(id)arg1 includeInGroup:(_Bool *)arg2;

- (void)_cacheSpecifierGroup:(id)arg1 withSpecifiers:(id)arg2;

- (_Bool)_canDeselectAlias:(id)arg1;

- (void)_clearBlankAliasField;

- (void)_handleDeactivation:(id)arg1;

- (void)_handleFaceTimeCTRegistrationStatusChanged;

- (void)_handleFaceTimeEntitlementStatusChanged;

- (void)_handleFaceTimeStateChanged;

- (void)_handleFailedAccountReactivation:(id)arg1 error:(id)arg2;

- (void)_handleSuccessfulAccountReactivation:(id)arg1;

- (void)_hideLocaleChooser;

- (id)_localeChooserForAccount:(id)arg1;

- (id)_operationalAccounts;

- (id)_operationalAccountsForService:(long long)arg1;

- (_Bool)_popFromSettingsAnimated:(_Bool)arg1;

- (void)_refreshFaceTimeSettingsDelayed:(id)arg1;

- (void)_reloadSpecifier:(id)arg1 withBlock:(id)arg2;

- (void)_setupAccountHandlers;

- (void)_setupAccountHandlersForDisabledOperation;

- (void)_setupAccountHandlersForDisabling;

- (void)_setupAccountHandlersForNormalOperation;

- (void)_setupAllListeners;

- (_Bool)_shouldShowAliasInfo;

- (_Bool)_shouldUseDisabledHandlers;

- (void)_showAccountAlertForAccount:(id)arg1;

- (void)_showAliasValidationError:(id)arg1;

- (void)_showLocaleChooserWithAccount:(id)arg1;

- (void)_showSignInController;

- (void)_showViewAccountControllerForAccount:(id)arg1;

- (id)_specifierIdentifierForAccount:(id)arg1;

- (id)_switchFooterText;

- (void)_tearDownAllListeners;

- (void)_updateAddAliasButtonText;

- (void)_updateControllerStateAnimated:(_Bool)arg1;

- (void)_updateSwitch;

- (void)_updateSwitchDelayed;

- (id)_useableAccounts;

- (id)accountSpecifiers;

- (void)accountTappedWithSpecifier:(id)arg1;

- (void)addAddressTapped:(id)arg1;

- (_Bool)additionalAliasesAvailable;

@property(copy, nonatomic) id alertHandler; // @synthesize alertHandler=_alertHandler;

- (void)alertView:(id)arg1 didDismissWithButtonIndex:(long long)arg2;

- (id)aliasDetailControllerForSpecifier:(id)arg1;

- (id)aliasForSpecifier:(id)arg1;

- (id)aliasSpecifiers;

- (id)aliasWithIdentifier:(id)arg1;

- (id)blankAliasTextField;

- (id)bundle;

- (id)callerIdAliasSpecifiers;

- (void)clearAccountCache;

- (id)createSpecifierForAccount:(id)arg1;

- (id)createSpecifierForAlias:(id)arg1;

- (id)createSpecifierForCallerIdAlias:(id)arg1;

- (id)customTitle;

- (void)dealloc;

- (void)firstRunController:(id)arg1 finishedWithState:(unsigned long long)arg2;

- (void)firstRunControllerDidFinish:(id)arg1 finished:(_Bool)arg2;

- (void)formSheetViewDidDisappear;

- (void)formSheetViewWillDisappear;

- (id)getAccountNameForSpecifier:(id)arg1;

- (id)getAddAliasTextForSpecifier:(id)arg1;

- (id)getFaceTimeEnabledForSpecifier:(id)arg1;

- (long long)groupIdForSpecifier:(id)arg1;

- (long long)groupIdForSpecifierId:(id)arg1;

- (long long)indexOfLastSpecifierInGroup:(id)arg1;

- (id)initWithNibName:(id)arg1 bundle:(id)arg2;

- (_Bool)isShowingAddButton;

- (_Bool)isShowingBlankAlias;

- (void)keyboardDismissed:(id)arg1;

- (id)logName;

@property(copy, nonatomic) NSString *pendingAddress; // @synthesize pendingAddress=_pendingAddress;

- (id)pendingAddressForSpecifier:(id)arg1;

- (_Bool)popToFirstRunControllerAnimated:(_Bool)arg1;

- (id)possibleCallerIdAliases;

- (void)refreshAccountsAnimated:(_Bool)arg1;

- (void)refreshAliasSpecifier:(id)arg1;

- (void)refreshAliasesAnimated:(_Bool)arg1;

- (void)refreshAllAliasSpecifiers;

- (void)refreshAllCallerIdAliasSpecifiers;

- (void)refreshBlacklistSettingsAnimated:(_Bool)arg1;

- (void)refreshCallerIdAliasesAnimated:(_Bool)arg1;

- (void)refreshCallerIdSpecifier:(id)arg1;

- (void)refreshEnabledStateAnimated:(_Bool)arg1;

- (void)refreshFaceTimeSettingsAnimated:(_Bool)arg1;

- (void)refreshFaceTimeSettingsWithDelayAnimated:(_Bool)arg1;

- (void)returnKeyPressed:(id)arg1;

- (void)setAliasSelected:(id)arg1;

- (void)setCallerId:(id)arg1;

- (void)setFaceTimeEnabled:(id)arg1 specifier:(id)arg2;

- (void)setFaceTimeEnabled:(id)arg1 specifier:(id)arg2 animated:(_Bool)arg3;

- (void)setPendingAddress:(id)arg1 forSpecifier:(id)arg2;

@property(nonatomic) _Bool showEnableSwitch;

- (_Bool)shouldReloadSpecifiersOnResume;

- (_Bool)shouldShowBlacklistSettings;

- (_Bool)shouldShowReplyWithMessage;

- (_Bool)showAccounts:(_Bool)arg1 animated:(_Bool)arg2;

- (void)showAddAliasButton:(_Bool)arg1 animated:(_Bool)arg2;

- (_Bool)showAliases:(_Bool)arg1 animated:(_Bool)arg2;

- (void)showAllSettings:(_Bool)arg1 animated:(_Bool)arg2;

- (void)showBlacklistSettings:(_Bool)arg1 animated:(_Bool)arg2;

- (void)showBlankAlias:(_Bool)arg1 animated:(_Bool)arg2;

- (_Bool)showCallerId:(_Bool)arg1 animated:(_Bool)arg2;

- (void)showReplyWithMessage:(_Bool)arg1 animated:(_Bool)arg2;

- (void)showSpecifiers:(id)arg1 afterGroupId:(id)arg2 animated:(_Bool)arg3;

- (id)specifierList;

- (void)startEditingTextField;

- (void)startListeningForFinishedEditingEventNotifications;

- (id)statusForAlias:(id)arg1;

- (id)statusForSpecifier:(id)arg1;

- (void)stopEditingTextField:(_Bool)arg1;

- (void)stopListeningForFinishedEditingEventNotifications;

- (void)systemApplicationDidEnterBackground;

- (void)systemApplicationDidResume;

- (void)systemApplicationDidSuspend;

- (void)systemApplicationWillEnterForeground;

- (void)tableView:(id)arg1 accessoryButtonTappedForRowWithIndexPath:(id)arg2;

- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;

- (void)textFieldEmptyStateChanged:(id)arg1 forSpecifier:(id)arg2;

- (void)updateSpecifier:(id)arg1 withAccount:(id)arg2;

- (void)updateSpecifier:(id)arg1 withAlias:(id)arg2;

- (void)updateSpecifier:(id)arg1 withCallerIdAlias:(id)arg2;

- (void)viewAccountControllerDidFinish:(id)arg1 withAppleId:(id)arg2;

- (void)viewDidAppear:(_Bool)arg1;

- (void)viewDidDisappear:(_Bool)arg1;

- (void)viewWillAppear:(_Bool)arg1;

- (void)viewWillDisappear:(_Bool)arg1;

- (void)willAnimateRotationToInterfaceOrientation:(long long)arg1 duration:(double)arg2;



@end


