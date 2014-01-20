/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */





#import "IMSystemMonitorListener.h"



@class IMAccount, IMServiceImpl, NSArray, NSDictionary, NSMutableDictionary, NSSet, NSString, NSTimer;



@interface CNFRegController : NSObject <IMSystemMonitorListener>

{

    NSArray *_services;

    NSArray *_accounts;

    NSMutableDictionary *_accountFilterCache;

    id _accountRegistrationBlock;

    id _callerIdChangedBlock;

    id _accountAddedBlock;

    id _accountRemovedBlock;

    id _aliasStatusChangedBlock;

    id _aliasRemovedBlock;

    id _aliasAddedBlock;

    id _vettedAliasesChangedBlock;

    id _profileChangedBlock;

    id _profileStatusChangedBlock;

    id _accountAuthorizationChangedBlock;

    id _accountActivationChangedBlock;

    id _willLaunchURLBlock;

    id _resetBlock;

    id _serviceDidBecomeUnsupportedBlock;

    long long _serviceType;

    id _alertHandler;

    NSTimer *_wifiAlertWatchTimer;

    long long _requiredWifiCount;

    unsigned char _originalWifiFlag;

    unsigned char _originalCellFlag;

    _Bool _originalUsesBackgroundNetwork;

    NSString *_logName;

    unsigned long long _logIndent;

    long long _systemAccountType;

    IMAccount *_systemAccount;

    struct {

        unsigned int listeningForAccountChanges:1;

        unsigned int listeningForCallerIDChanges:1;

        unsigned int listeningForAccountActivation:1;

        unsigned int preventingIdleSleep:1;

        unsigned int expectingWiFiPicker:1;

        unsigned int showedWifiFirstRunAlert:1;

        unsigned int ignoringAccountChanges:1;

        unsigned int activatingAccounts:1;

    } _controllerFlags;

    NSDictionary *_cachedCallerIDMap;

}



+ (id)controllerForServiceType:(long long)arg1;

- (_Bool)__ensureSingleAppleIDAccountExistsWithLogin:(id)arg1;

- (id)__filter_activeAccountsPredicate;

- (id)__filter_appleIDAccountPredicate;

- (id)__filter_failedAccountsPredicate;

- (id)__filter_inactiveAccountsPredicate;

- (id)__filter_operationalPredicate;

- (id)__filter_phoneAccountPredicate;

- (id)__filter_signInCompletePredicate;

- (id)__filter_signedInPredicate;

- (id)__filter_validatedAliasPredicate;

- (id)__filter_validatedProfilePredicate;

- (void)__updateSystemAccount;

- (id)_accountForAlias:(id)arg1 accounts:(id)arg2;

- (_Bool)_accountHasValidatedLocale:(id)arg1;

- (_Bool)_accountIsAuthenticated:(id)arg1;

- (id)_accountsPassingTests:(id)arg1 message:(id)arg2;

- (_Bool)_addAliases:(id)arg1 toAccount:(id)arg2 validate:(_Bool)arg3;

- (id)_aliasComparator;

- (_Bool)_aliasIsDevicePhoneNumber:(id)arg1;

- (id)_aliasesForAccount:(id)arg1;

- (id)_aliasesFromAccounts:(id)arg1 passingTest:(id)arg2;

- (id)_aliasesPassingTest:(id)arg1;

- (id)_allAvailableAliasesForAccount:(id)arg1;

- (void)_clearAccountCache;

- (void)_clearFilterCache;

- (id)_createAccountWithLogin:(id)arg1 foundExisting:(_Bool *)arg2;

- (void)_decrementLogIndent;

- (id)_guessedDisplayAliasFromAccounts:(id)arg1;

- (void)_handleCallerIDChanged;

- (void)_handleCallerIDChangedForResume:(id)arg1;

- (void)_incrementLogIndent;

- (_Bool)_isValidCallerIDAlias:(id)arg1 forAccount:(id)arg2;

- (id)_logName;

- (id)_logSpace;

- (void)_nukeCallerIDCache;

- (void)_postCallerIDChanged;

- (id)_predicatesWithFilter:(long long)arg1;

- (void)_purgeExcessAccounts;

- (_Bool)_shouldFilterOutAlias:(id)arg1 onAccount:(id)arg2;

- (void)_showNetworkAlertWithMessage:(id)arg1;

- (void)_signOutAccount:(id)arg1 delete:(_Bool)arg2;

- (void)_startListeningForCallerIDChanges;

- (void)_startWiFiAlertWatchTimer;

- (void)_stopListeningForCallerIDChanges;

- (void)_stopWiFiAlertWatchTimer;

- (id)_vettedAliasesForAccount:(id)arg1;

- (void)_wifiAlertWatchTimerFired:(id)arg1;

@property(copy, nonatomic) id accountActivationChangedBlock; // @synthesize accountActivationChangedBlock=_accountActivationChangedBlock;

- (void)accountActivationStateChanged:(id)arg1;

- (void)accountAdded:(id)arg1;

@property(copy, nonatomic) id accountAddedBlock; // @synthesize accountAddedBlock=_accountAddedBlock;

@property(copy, nonatomic) id accountAuthorizationChangedBlock; // @synthesize accountAuthorizationChangedBlock=_accountAuthorizationChangedBlock;

- (id)accountForAlias:(id)arg1;

@property(copy, nonatomic) id accountRegistrationBlock; // @synthesize accountRegistrationBlock=_accountRegistrationBlock;

- (void)accountRegistrationChanged:(id)arg1;

- (void)accountRemoved:(id)arg1;

@property(copy, nonatomic) id accountRemovedBlock; // @synthesize accountRemovedBlock=_accountRemovedBlock;

- (unsigned long long)accountState;

- (unsigned long long)accountState:(id)arg1;

- (unsigned long long)accountStateForAccount:(id)arg1;

- (id)accountWithLogin:(id)arg1;

@property(readonly, nonatomic) NSArray *accounts;

- (id)accountsWithFilter:(long long)arg1;

- (id)accountsWithFilter:(long long)arg1 message:(id)arg2;

- (void)activateAccounts;

- (void)activateAccountsExcludingAccounts:(id)arg1;

- (id)activeAccounts;

- (_Bool)addAlias:(id)arg1;

- (_Bool)addAlias:(id)arg1 toAccount:(id)arg2;

@property(copy, nonatomic) id alertHandler; // @synthesize alertHandler=_alertHandler;

- (void)alertView:(id)arg1 clickedButtonAtIndex:(long long)arg2;

@property(copy, nonatomic) id aliasAddedBlock; // @synthesize aliasAddedBlock=_aliasAddedBlock;

- (id)aliasNamed:(id)arg1;

@property(copy, nonatomic) id aliasRemovedBlock; // @synthesize aliasRemovedBlock=_aliasRemovedBlock;

- (void)aliasStatusChanged:(id)arg1;

@property(copy, nonatomic) id aliasStatusChangedBlock; // @synthesize aliasStatusChangedBlock=_aliasStatusChangedBlock;

- (id)aliasSummaryString:(_Bool *)arg1;

@property(readonly, nonatomic) NSArray *aliases;

- (void)aliasesChanged:(id)arg1;

- (id)aliasesForAccounts:(id)arg1;

@property(readonly, nonatomic) NSArray *allAvailableAliases;

- (id)allAvailableAliasesForAccounts:(id)arg1;

@property(readonly, nonatomic) NSArray *appleIDAccounts;

- (void)authorizationCredentialsChanged:(id)arg1;

- (id)beginAccountSetupWithAccount:(id)arg1;

- (id)beginAccountSetupWithLogin:(id)arg1 authID:(id)arg2 authToken:(id)arg3 regionInfo:(id)arg4 foundExisting:(_Bool *)arg5;

- (id)beginAccountSetupWithLogin:(id)arg1 password:(id)arg2 foundExisting:(_Bool *)arg3;

@property(readonly, nonatomic) NSDictionary *cachedCallerIDMap; // @synthesize cachedCallerIDMap=_cachedCallerIDMap;

- (void)callerIdChanged:(id)arg1;

@property(copy, nonatomic) id callerIdChangedBlock; // @synthesize callerIdChangedBlock=_callerIdChangedBlock;

- (_Bool)canRemoveAlias:(id)arg1;

- (_Bool)cellularDataEnabled;

- (void)clearAllCaches;

- (void)connect;

- (void)connect:(_Bool)arg1;

- (void)deactivateAccounts;

- (void)dealloc;

- (_Bool)deviceCanTakeNetworkAction;

- (void)deviceCapabilityChanged:(id)arg1;

- (_Bool)deviceHasNetworkEnabled;

- (_Bool)deviceHasSaneNetworkConnection;

- (id)displayAccount;

- (id)displayAlias;

@property(readonly, nonatomic) NSArray *emailAliases;

@property(readonly, nonatomic) NSArray *failedAccounts;

- (id)firstAccount;

@property(readonly, nonatomic) IMServiceImpl *firstService; // @dynamic firstService;

- (id)guessedAccountName;

- (id)guessedAlias;

- (id)guessedDisplayAlias;

- (void)handleAliasAdded:(id)arg1;

- (void)handleAliasRemoved:(id)arg1;

- (_Bool)hasAlias:(id)arg1;

- (_Bool)hasAliasNamed:(id)arg1;

- (_Bool)hasFailedLogin;

- (_Bool)hasFailedLoginDueToBadLogin;

- (_Bool)hasSystemAccount;

- (id)init;

- (id)initWithServiceType:(long long)arg1;

- (_Bool)isConnected;

@property(nonatomic, getter=isServiceEnabled) _Bool serviceEnabled;

@property(readonly, nonatomic, getter=isServiceSupported) _Bool serviceSupported;

- (id)localPhoneNumberSentinelAlias;

- (id)loginForAccount:(id)arg1;

- (id)networkSettingsURLAllowingCellular:(_Bool)arg1;

- (void)nukeAllCallerIDSettings;

- (void)openURL:(id)arg1;

@property(readonly, nonatomic) NSArray *phoneAccounts;

- (void)profileChanged:(id)arg1;

@property(copy, nonatomic) id profileChangedBlock; // @synthesize profileChangedBlock=_profileChangedBlock;

@property(copy, nonatomic) id profileStatusChangedBlock; // @synthesize profileStatusChangedBlock=_profileStatusChangedBlock;

- (void)profileValidationStateChanged:(id)arg1;

- (void)refreshSystemAccount;

- (_Bool)removeAlias:(id)arg1 fromAccount:(id)arg2;

- (void)removeAllHandlers;

@property(copy, nonatomic) id resetBlock; // @synthesize resetBlock=_resetBlock;

- (void)resetNetworkFirstRunAlert;

@property(copy, nonatomic) id serviceDidBecomeUnsupportedBlock; // @synthesize serviceDidBecomeUnsupportedBlock=_serviceDidBecomeUnsupportedBlock;

@property(readonly, nonatomic) NSSet *serviceNames; // @dynamic serviceNames;

@property(nonatomic) long long serviceType; // @synthesize serviceType=_serviceType;

@property(copy, nonatomic) NSArray *services; // @synthesize services=_services;

- (_Bool)setAliases:(id)arg1 onAccount:(id)arg2;

- (void)setCellularDataEnabled:(_Bool)arg1 withCompletion:(id)arg2;

- (_Bool)setDisplayAlias:(id)arg1;

@property(copy, nonatomic) id vettedAliasesChangedBlock; // @synthesize vettedAliasesChangedBlock=_vettedAliasesChangedBlock;

@property(copy, nonatomic) id willLaunchURLBlock; // @synthesize willLaunchURLBlock=_willLaunchURLBlock;

- (_Bool)shouldHandleAccountNotification:(id)arg1;

- (_Bool)shouldShowAlertForError:(id)arg1;

- (void)showNetworkAlert;

- (void)showNetworkAlertIfNecessary;

- (void)showNetworkFirstRunAlert;

- (void)showSetupFaceTimeOverCellularAlertWithCompletion:(id)arg1;

- (void)signoutAccount:(id)arg1;

- (void)startListeningForAccountChanges;

- (void)startRequiringWifi;

- (void)stopListeningForAccountChanges;

- (void)stopRequiringWifi;

@property(readonly, nonatomic) IMAccount *systemAccount;

@property(readonly, nonatomic) long long systemAccountType;

- (void)systemApplicationDidEnterBackground;

- (_Bool)unvalidateAlias:(id)arg1;

@property(readonly, nonatomic) NSArray *useableAliases;

- (id)useableAliasesForAccounts:(id)arg1;

- (_Bool)validateAlias:(id)arg1;

@property(readonly, nonatomic) NSArray *vettedAliases;

- (void)vettedAliasesChanged:(id)arg1;

- (id)vettedAliasesForAccounts:(id)arg1;



@end

