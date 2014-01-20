/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */





@class ACAccount, NSArray, NSDictionary, NSSet, NSString;



@interface AAAccount : NSObject

{

    ACAccount *_account;

    NSString *_fmipToken;

    NSArray *_appleIDAliases;

    NSString *_protocolVersion;

}



+ (id)accountTypeString;

+ (id)dataclassesBoundToPrimaryAccount;

+ (id)dataclassesBoundToSingleAccount;

+ (id)dataclassesBoundToSyncAccount;

- (void).cxx_destruct;

- (id)_childAccounts;

- (id)_mailChildAccount;

- (id)account;

@property(copy, nonatomic) NSString *accountDescription;

@property(readonly, nonatomic) NSDictionary *accountFirstDisplayAlert;

@property(readonly, nonatomic) NSDictionary *accountFooterButton;

@property(readonly, nonatomic) NSString *accountFooterText;

- (id)accountPropertyForKey:(id)arg1;

@property(readonly, nonatomic) int accountServiceType;

@property(readonly, nonatomic) NSArray *appleIDAliases; // @synthesize appleIDAliases=_appleIDAliases;

@property(copy, nonatomic) NSString *authToken;

- (void)authenticateWithHandler:(id)arg1;

@property(readonly, nonatomic) NSDictionary *dataclassProperties;

@property(readonly, nonatomic) NSString *displayName;

@property(readonly, nonatomic) NSSet *enabledDataclasses;

@property(readonly, nonatomic) NSString *firstName;

- (void)flushCachedPassword;

- (void)flushCachedTokens;

@property(copy, nonatomic) NSString *fmipToken; // @synthesize fmipToken=_fmipToken;

@property(readonly, nonatomic) NSString *identifier;

- (id)init;

- (id)initWithAccount:(id)arg1;

- (id)initWithAccountIdentifier:(id)arg1;

- (_Bool)isEnabledForDataclass:(id)arg1;

- (_Bool)isProvisionedForDataclass:(id)arg1;

@property(readonly, nonatomic) NSString *lastName;

@property(readonly, nonatomic) ACAccount *liverpoolAccount;

- (void)lookupEmailAddresses:(id)arg1 withHandler:(id)arg2;

- (int)mobileMeAccountStatus;

@property(readonly, nonatomic) _Bool needsEmailConfiguration;

@property(readonly, nonatomic) _Bool needsRegistration;

@property(nonatomic) _Bool needsToVerifyTerms;

- (void)notifyUserOfQuotaDepletion;

@property(copy, nonatomic) NSString *password;

@property(readonly, nonatomic) NSString *personID;

- (void)presentQuotaDepletionAlertForDataclass:(id)arg1;

- (void)presentQuotaDepletionAlertForDataclass:(id)arg1 withHandler:(id)arg2;

- (_Bool)presentQuotaDepletionAlertForDataclassIfNecessary:(id)arg1;

- (_Bool)presentQuotaDepletionAlertForDataclassIfNecessary:(id)arg1 withHandler:(id)arg2;

@property(nonatomic) _Bool primaryAccount;

@property(readonly, nonatomic) NSString *primaryEmail;

@property(readonly, nonatomic) _Bool primaryEmailVerified;

- (id)propertiesForDataclass:(id)arg1;

@property(readonly, nonatomic) NSString *protocolVersion; // @synthesize protocolVersion=_protocolVersion;

@property(readonly, nonatomic) NSSet *provisionedDataclasses;

- (void)removePasswordFromKeychain;

- (void)removeTokensFromKeychain;

- (void)renewCredentialsForAppleIDWithHandler:(id)arg1;

- (void)saveFMIPTokenInKeychain;

- (void)savePasswordInKeychain;

- (void)saveTokensInKeychain;

@property(readonly, nonatomic) _Bool serviceUnavailable;

@property(readonly, nonatomic) NSDictionary *serviceUnavailableInfo;

- (void)setAccountProperty:(id)arg1 forKey:(id)arg2;

- (void)setEnabled:(_Bool)arg1 forDataclass:(id)arg2;

- (void)setUseCellular:(_Bool)arg1 forDataclass:(id)arg2;

@property(copy, nonatomic) NSString *username;

- (void)setupChildMailAccountAndEnable:(_Bool)arg1 withEmail:(id)arg2;

- (void)signInWithHandler:(id)arg1;

@property(readonly, nonatomic) NSArray *supportedDataclasses;

@property(readonly, nonatomic) NSString *syncStoreIdentifier;

- (void)updateAccountPropertiesWithHandler:(id)arg1;

- (void)updateAccountWithProvisioningResponse:(id)arg1;

- (_Bool)useCellularForDataclass:(id)arg1;



@end

