/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */





#import "IMSystemMonitorListener.h"



@class IMHandle, IMPeople, IMServiceImpl, NSArray, NSAttributedString, NSData, NSDate, NSDictionary, NSMutableDictionary, NSRecursiveLock, NSString;



@interface IMAccount : NSObject <IMSystemMonitorListener>

{

    IMServiceImpl *_service;

    IMPeople *_buddyList;

    NSRecursiveLock *_lock;

    NSMutableDictionary *_imHandles;

    NSMutableDictionary *_inlineTransfers;

    IMHandle *_loginIMHandle;

    NSArray *_cachedAllowList;

    NSArray *_cachedBlockList;

    NSString *_loginID;

    NSString *_displayName;

    NSString *_uniqueID;

    long long _accountType;

    NSDictionary *_data;

    NSMutableDictionary *_dataChanges;

    NSMutableDictionary *_localCache;

    NSDictionary *_profile;

    NSMutableDictionary *_profileChanges;

    NSString *_countryCode;

    long long _profileStatus;

    NSDictionary *_accountPreferences;

    NSMutableDictionary *_accountPreferencesChanges;

    NSDictionary *_accountPersistentProperties;

    NSMutableDictionary *_accountPersistentPropertiesChanges;

    NSArray *_groups;

    NSMutableDictionary *_sortOrders;

    NSDictionary *_members;

    NSMutableDictionary *_coalescedChanges;

    NSArray *_targetGroupState;

    NSArray *_lastReceivedGroupState;

    NSDictionary *_subtypeInfo;

    NSArray *_vettedAliases;

    unsigned long long _myStatus;

    NSMutableDictionary *_currentAccountStatus;

    NSString *_myStatusMessage;

    NSDictionary *_myNowPlaying;

    NSDate *_myIdleSince;

    NSData *_myPictureData;

    NSData *_accountImageData;

    unsigned long long _capabilities;

    unsigned long long _defaultHandleCapabilities;

    _Bool _hasCheckedDefaultHandleCapabilities;

    NSAttributedString *_myProfile;

    long long _registrationStatus;

    long long _registrationFailureReason;

    NSDictionary *_registrationAlertInfo;

    unsigned long long _loginStatus;

    _Bool _isActive;

    _Bool _hasPostedOfflineNotification;

    _Bool _justLoggedIn;

    _Bool _useMeCardName;

    unsigned int _cachedBlockingMode;

    _Bool _blockIdleStatus;

    _Bool _syncedWithRemoteBuddyList;

    _Bool _hasReceivedSync;

    int _numHolding;

    int _coalesceCount;

    _Bool _needToCheckForWatchedIMHandles;

    _Bool _iconChecked;

    _Bool _hasBeenRemoved;

    id _smallImage;

    id _accountImage;

    _Bool _asleep;

}



+ (id)_groupSummaryFromGroupList:(id)arg1;

+ (id)allBuddyListIMHandles;

+ (id)arrayOfAllIMHandles;

+ (id)nameOfLoginStatus:(unsigned long long)arg1;

+ (id)passwordForAccount:(id)arg1 forServiceName:(id)arg2;

+ (void)removePasswordForAccount:(id)arg1 forServiceName:(id)arg2;

+ (void)removeTemporaryPasswordForAccount:(id)arg1 forServiceName:(id)arg2;

+ (void)setPassword:(id)arg1 forAccount:(id)arg2 forServiceName:(id)arg3;

+ (void)setTemporaryPassword:(id)arg1 forAccount:(id)arg2 forServiceName:(id)arg3;

+ (id)temporaryPasswordForAccount:(id)arg1 forServiceName:(id)arg2;

- (id)_aliasInfoForAlias:(id)arg1;

- (id)_aliases;

- (void)_applyChangesToTemporaryCache:(id)arg1;

- (void)_clearImageCache;

- (void)_ensureGroupsExists:(id)arg1;

- (void)_handleDeliveredCommand:(id)arg1 withProperties:(id)arg2 fromBuddyInfo:(id)arg3;

- (void)_handleIncomingCommand:(id)arg1 withProperties:(id)arg2 fromBuddyInfo:(id)arg3;

- (id)_imHandleWithID:(id)arg1 alreadyCanonical:(_Bool)arg2 knownIDStatus:(int)arg3 originalID:(id)arg4 countryCode:(id)arg5;

@property(readonly, nonatomic) _Bool _isUsableForSending;

- (void)_loadFromDictionary:(id)arg1 force:(_Bool)arg2;

- (void)_loginWithAutoLogin:(_Bool)arg1;

- (void)_markHasSyncedWithRemoteBuddies;

- (void)_notJustLoggedIn;

@property(readonly, nonatomic) NSDictionary *_persistentProperties;

- (id)_persistentPropertyForKey:(id)arg1;

- (void)_refreshLoginIMHandle;

- (void)_registrationStatusChanged:(id)arg1;

- (void)_removeObjectForKey:(id)arg1;

- (void)_removePersistentPropertyForKey:(id)arg1;

- (void)_resumeBuddyUpdatesNow;

- (id)_serverWithSSL:(_Bool)arg1;

- (void)_serviceDidConnect:(id)arg1;

- (void)_serviceDidDisconnect:(id)arg1;

- (void)_serviceDidReconnect:(id)arg1;

- (void)_setBool:(_Bool)arg1 forKey:(id)arg2;

- (void)_setDictionaryData:(id)arg1 forKey:(id)arg2;

- (void)_setInteger:(int)arg1 forKey:(id)arg2;

- (void)_setLocalCachedObject:(id)arg1 forKey:(id)arg2;

- (void)_setObject:(id)arg1 forKey:(id)arg2;

- (void)_setPersistentPropertyObject:(id)arg1 forKey:(id)arg2;

- (void)_setString:(id)arg1 forKey:(id)arg2;

- (id)_statuses;

- (void)_syncWithRemoteBuddies;

- (_Bool)_updateDisplayName:(id)arg1;

- (void)_updateLogin:(id)arg1;

- (void)_updateMyStatus:(unsigned long long)arg1 message:(id)arg2;

- (void)_updateProfileInfo:(id)arg1;

- (void)_updateRegistrationStatus:(int)arg1 error:(int)arg2 info:(id)arg3;

- (void)_watchBuddiesIfNecessary;

@property(retain, nonatomic) NSString *accountDescription;

- (void)accountDidBecomeActive;

- (void)accountDidDeactivate;

@property(readonly, nonatomic) NSData *accountImageData;

@property(readonly, nonatomic) NSDictionary *accountPreferences;

@property(readonly, nonatomic) NSDictionary *accountSubtypeInfo; // @synthesize accountSubtypeInfo=_subtypeInfo;

@property(readonly, nonatomic) long long accountType;

- (void)accountWillBeRemoved;

- (_Bool)addAlias:(id)arg1;

- (_Bool)addAlias:(id)arg1 type:(long long)arg2;

- (_Bool)addAliases:(id)arg1;

- (void)addBuddyToBuddyList:(id)arg1;

- (_Bool)addIMHandle:(id)arg1 toGroups:(id)arg2 atLocation:(long long)arg3;

- (_Bool)addIMHandle:(id)arg1 toIMPerson:(id)arg2;

- (_Bool)addPeople:(id)arg1 toGroups:(id)arg2 atLocation:(long long)arg3;

@property(readonly, nonatomic) NSArray *addressBookProperties;

@property(readonly, nonatomic) NSString *addressBookProperty;

@property(readonly, nonatomic) NSArray *aliases;

- (id)aliasesForType:(long long)arg1;

@property(retain, nonatomic) NSArray *allowList;

@property(nonatomic) _Bool allowsVCRelay;

@property(readonly, nonatomic) NSArray *arrayOfAllIMHandles;

- (_Bool)authenticateAccount;

@property(readonly, nonatomic) NSString *authorizationID;

@property(readonly, nonatomic) NSString *authorizationToken;

@property(nonatomic) _Bool autoLogin;

- (void)autoLoginAccount;

- (void)beginChanges;

@property(nonatomic) _Bool blockIdleStatus; // @synthesize blockIdleStatus=_blockIdleStatus;

@property(retain, nonatomic) NSArray *blockList;

- (void)blockMessages:(_Bool)arg1 fromID:(id)arg2;

@property(nonatomic) _Bool blockOtherAddresses;

@property(nonatomic) unsigned int blockingMode; // @synthesize blockingMode=_cachedBlockingMode;

- (_Bool)boolForKey:(id)arg1;

- (_Bool)boolForPreferenceKey:(id)arg1;

@property(readonly, nonatomic) IMPeople *buddyList; // @synthesize buddyList=_buddyList;

- (void)buddyPictureChanged:(id)arg1 imageData:(id)arg2 imageHash:(id)arg3;

- (void)buddyPropertiesChanged:(id)arg1;

@property(readonly, nonatomic) _Bool canActivate;

- (id)canonicalFormOfID:(id)arg1;

- (id)canonicalFormOfID:(id)arg1 countryCode:(id)arg2;

@property(readonly, nonatomic) unsigned long long capabilities; // @synthesize capabilities=_capabilities;

- (void)changeBuddyList:(id)arg1 add:(_Bool)arg2 groups:(id)arg3 atLocation:(int)arg4;

- (id)chatIDForRoomName:(id)arg1;

- (void)clearServiceCaches;

- (void)clearTargetState;

- (long long)compareAccountNames:(id)arg1;

- (long long)compareIDs:(id)arg1;

- (long long)compareLoginStatus:(id)arg1;

- (long long)compareNames:(id)arg1;

- (long long)compareServices:(id)arg1;

- (long long)compareStatus:(id)arg1;

@property(readonly, nonatomic) NSString *countryCode;

- (void)dealloc;

- (id)defaultChatSuffix;

- (unsigned long long)defaultHandleCapabilities;

- (id)description;

@property(readonly, nonatomic) NSDictionary *dictionary;

- (id)dictionaryDataForKey:(id)arg1;

- (id)dictionaryDataForPreferenceKey:(id)arg1;

- (void)disconnectAllIMHandles;

@property(copy, nonatomic) NSString *displayName;

- (_Bool)emailAddressIsID:(id)arg1;

@property(readonly, nonatomic) NSArray *emailDomains;

- (void)endChanges;

- (_Bool)equalID:(id)arg1 andID:(id)arg2;

- (id)existingIMHandleWithID:(id)arg1;

- (id)existingIMHandleWithID:(id)arg1 alreadyCanonical:(_Bool)arg2;

- (id)existingIMHandleWithID:(id)arg1 countryCode:(id)arg2;

- (id)existingIMHandleWithInfo:(id)arg1;

- (id)existingIMHandleWithInfo:(id)arg1 alreadyCanonical:(_Bool)arg2;

- (void)finalize;

- (void)forgetAllWatches;

@property(nonatomic) _Bool goIdle;

@property(readonly, nonatomic) NSArray *groupList;

- (id)groupMembers:(id)arg1;

- (void)groupsChanged:(id)arg1 error:(id)arg2;

- (void)handleSubscriptionRequestFrom:(id)arg1 withMessage:(id)arg2;

@property(readonly, nonatomic) _Bool handlesChatInvites;

- (_Bool)hasAlias:(id)arg1;

- (_Bool)hasAlias:(id)arg1 type:(long long)arg2;

- (_Bool)hasCapability:(unsigned long long)arg1;

@property(readonly, nonatomic) _Bool hasCustomDescription;

@property(readonly, nonatomic) _Bool hasSyncedWithRemoteBuddies;

@property(readonly, nonatomic) _Bool hasTargetGroupStateBeenMet;

- (void)holdBuddyUpdates;

- (void)hookupToDaemon;

- (void)imHandle:(id)arg1 buddyStatusChanged:(_Bool)arg2;

- (Class)imHandleClass;

- (id)imHandleWithID:(id)arg1;

- (id)imHandleWithID:(id)arg1 alreadyCanonical:(_Bool)arg2;

- (id)imHandleWithID:(id)arg1 countryCode:(id)arg2;

- (id)imHandleWithInfo:(id)arg1;

- (id)imHandleWithInfo:(id)arg1 alreadyCanonical:(_Bool)arg2;

- (id)imHandlesForIMPerson:(id)arg1;

- (id)initWithService:(id)arg1;

- (id)initWithUniqueID:(id)arg1 service:(id)arg2;

- (int)integerForKey:(id)arg1;

- (int)integerForPreferenceKey:(id)arg1;

@property(readonly, nonatomic) NSString *internalName;

@property(readonly, nonatomic) long long invalidSettings;

@property(readonly, nonatomic) _Bool isActive; // @synthesize isActive=_isActive;

@property(readonly, nonatomic) _Bool isAsleep;

@property(readonly, nonatomic) _Bool isAwaitingTargetGroupState;

@property(readonly, nonatomic) _Bool isConnected;

@property(readonly, nonatomic) _Bool isConnecting;

@property(nonatomic, getter=isInvisible) _Bool invisible;

@property(readonly, nonatomic) _Bool isManaged;

@property(readonly, nonatomic) _Bool isOperational;

@property(readonly, nonatomic) _Bool isRegistered;

@property(readonly, nonatomic) _Bool justLoggedIn; // @synthesize justLoggedIn=_justLoggedIn;

- (void)loadFromDictionary:(id)arg1;

@property(retain, nonatomic) NSString *login; // @synthesize login=_loginID;

- (void)loginAccount;

@property(readonly, nonatomic) id loginIMHandle; // @synthesize loginIMHandle=_loginIMHandle;

@property(readonly, nonatomic) unsigned long long loginStatus; // @synthesize loginStatus=_loginStatus;

- (void)loginStatusChanged:(unsigned int)arg1 message:(id)arg2 reason:(int)arg3 properties:(id)arg4;

@property(readonly, nonatomic) NSString *loginStatusMessage;

- (void)logoutAccount;

@property(readonly, nonatomic) _Bool makingChanges;

- (id)memberGroups:(id)arg1;

@property(readonly, nonatomic) NSDate *myIdleSince; // @synthesize myIdleSince=_myIdleSince;

@property(readonly, nonatomic) NSString *myNowPlayingString;

@property(readonly, nonatomic) NSData *myPictureData; // @synthesize myPictureData=_myPictureData;

@property(readonly, nonatomic) NSAttributedString *myProfile; // @synthesize myProfile=_myProfile;

@property(readonly, nonatomic) unsigned long long myStatus; // @synthesize myStatus=_myStatus;

@property(readonly, nonatomic) NSDictionary *myStatusDictionary; // @synthesize myStatusDictionary=_currentAccountStatus;

@property(readonly, nonatomic) NSString *myStatusMessage; // @synthesize myStatusMessage=_myStatusMessage;

@property(readonly, nonatomic) NSString *name;

- (void)nowLoggedIn;

- (void)nowLoggedOut;

- (id)objectForKey:(id)arg1;

- (id)objectForPreferenceKey:(id)arg1;

@property(readonly, nonatomic) NSString *password;

- (id)personForIMHandle:(id)arg1;

- (id)personForIMHandle:(id)arg1 identifier:(int *)arg2;

- (id)personSibsForIMHandle:(id)arg1;

@property(readonly, nonatomic) long long port;

@property(readonly, nonatomic) NSDictionary *profileInfo;

- (id)profileStringForKey:(id)arg1;

- (long long)profileValidationErrorReason;

- (long long)profileValidationStatus;

- (id)profileValueForKey:(id)arg1;

- (id)propertiesForGroup:(id)arg1;

- (void)recalculateSubtypeInfo;

- (id)recalculatedSubtypeInfo;

- (_Bool)registerAccount;

- (void)registerIMHandle:(id)arg1;

@property(readonly, nonatomic) NSDictionary *registrationFailureAlertInfo;

@property(readonly, nonatomic) long long registrationFailureReason;

@property(readonly, nonatomic) long long registrationStatus;

- (_Bool)removeAlias:(id)arg1;

- (_Bool)removeAlias:(id)arg1 type:(long long)arg2;

- (_Bool)removeAliases:(id)arg1;

- (_Bool)removeIMHandle:(id)arg1 fromGroups:(id)arg2;

- (_Bool)removeIMHandle:(id)arg1 fromIMPerson:(id)arg2;

- (void)removeObjectForKey:(id)arg1;

- (void)removeObjectForPreferenceKey:(id)arg1;

- (void)removePassword;

- (_Bool)removePeople:(id)arg1 fromGroups:(id)arg2;

- (_Bool)removeProfileValueForKey:(id)arg1;

- (void)removeTemporaryPassword;

- (void)renameGroup:(id)arg1 to:(id)arg2;

- (void)reorderGroup:(id)arg1 order:(id)arg2;

- (void)reorderGroups:(id)arg1;

- (void)requestBuddyListAuthorizationFromIMHandle:(id)arg1;

- (void)requestGroups;

- (_Bool)requestNewAuthorizationCredentials;

- (void)requestProperty:(id)arg1 ofIMHandle:(id)arg2;

- (void)resetToDefaults;

- (void)resumeBuddyUpdates;

@property(readonly, nonatomic) NSString *server;

@property(readonly, nonatomic) IMServiceImpl *service; // @synthesize service=_service;

@property(readonly, nonatomic) NSString *serviceName;

- (void)setBool:(_Bool)arg1 forKey:(id)arg2;

- (void)setBool:(_Bool)arg1 forPreferenceKey:(id)arg2;

- (void)setBuddyListAuthorization:(_Bool)arg1 forIMHandle:(id)arg2;

- (void)setBuddyProperties:(id)arg1 buddyPictures:(id)arg2;

- (void)setCachedAllowList:(id)arg1;

- (void)setCachedBlockIdleStatus:(_Bool)arg1;

- (void)setCachedBlockList:(id)arg1;

- (void)setCachedBlockingMode:(unsigned int)arg1;

- (void)setCurrentAccountStatus:(id)arg1;

- (void)setDictionaryData:(id)arg1 forKey:(id)arg2;

- (void)setDictionaryData:(id)arg1 forPreferenceKey:(id)arg2;

- (void)setIMAccountLoginStatus:(unsigned long long)arg1;

- (void)setIMAccountLoginStatus:(unsigned long long)arg1 errorMessage:(id)arg2;

- (void)setIMAccountLoginStatus:(unsigned long long)arg1 errorMessage:(id)arg2 reason:(int)arg3;

- (void)setInteger:(int)arg1 forKey:(id)arg2;

- (void)setInteger:(int)arg1 forPreferenceKey:(id)arg2;

- (void)setIsActive:(_Bool)arg1;

- (void)setObject:(id)arg1 forKey:(id)arg2;

- (void)setObject:(id)arg1 forPreferenceKey:(id)arg2;

- (void)setPassword:(id)arg1;

- (_Bool)setProfileString:(id)arg1 forKey:(id)arg2;

- (_Bool)setProfileValue:(id)arg1 forKey:(id)arg2;

- (void)setString:(id)arg1 forKey:(id)arg2;

- (void)setString:(id)arg1 forPreferenceKey:(id)arg2;

- (void)setTargetGroupsState:(id)arg1;

- (void)setTemporaryPassword:(id)arg1;

- (void)setUniqueID:(id)arg1;

- (void)setValue:(id)arg1 ofExtraProperty:(id)arg2 ofIMHandle:(id)arg3;

- (void)setWaitForTargetState;

@property(readonly, nonatomic) NSString *shortName;

- (unsigned long long)sortOrderForIMHandle:(id)arg1 inGroup:(id)arg2;

- (void)startWatchingIMHandle:(id)arg1;

- (void)stopWatchingIMHandle:(id)arg1;

- (id)stringForKey:(id)arg1;

- (id)stringForPreferenceKey:(id)arg1;

@property(readonly, nonatomic) _Bool supportsAuthorization;

@property(readonly, nonatomic) _Bool supportsRegistration;

- (void)syncWithRemoteBuddies;

- (void)systemDidWake;

- (void)systemWillSleep;

- (void)targetGroupStateTimeout;

@property(readonly, nonatomic) NSString *temporaryPassword;

- (long long)typeForAlias:(id)arg1;

@property(readonly, nonatomic) NSString *uniqueID;

- (_Bool)unregisterAccount;

- (void)unregisterIMHandle:(id)arg1;

- (_Bool)unvalidateAlias:(id)arg1;

- (_Bool)unvalidateAliases:(id)arg1;

- (_Bool)updateAuthorizationCredentials:(id)arg1 token:(id)arg2;

- (void)updateCapabilities:(unsigned long long)arg1;

- (void)updateWithTargetGroups;

@property(readonly, nonatomic) _Bool useSSL;

@property(readonly, nonatomic) _Bool validLogin;

@property(readonly, nonatomic) _Bool validPort;

@property(readonly, nonatomic) _Bool validServer;

- (_Bool)validateAlias:(id)arg1;

- (_Bool)validateAlias:(id)arg1 type:(long long)arg2;

- (_Bool)validateAliases:(id)arg1;

- (_Bool)validateProfile;

- (long long)validationErrorReasonForAlias:(id)arg1;

- (long long)validationErrorReasonForAlias:(id)arg1 type:(long long)arg2;

- (long long)validationStatusForAlias:(id)arg1;

- (long long)validationStatusForAlias:(id)arg1 type:(long long)arg2;

- (struct _FZChatRoomValidity)validityOfChatRoomName:(id)arg1;

@property(readonly, nonatomic) NSArray *vettedAliases;

- (void)watchBuddiesIfNecessary;

- (void)writeSettings;



@end

