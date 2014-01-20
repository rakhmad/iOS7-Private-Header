/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */





@interface IMService : NSObject

{

}



+ (id)aimService;

+ (id)allServices;

+ (id)allServicesNonBlocking;

+ (id)callService;

+ (id)canonicalFormOfID:(id)arg1 withIDSensitivity:(int)arg2;

+ (id)facetimeService;

+ (void)forgetStatusImageAppearance;

+ (id)iMessageService;

+ (id)imageNameForStatus:(unsigned long long)arg1;

+ (id)imageURLForStatus:(unsigned long long)arg1;

+ (_Bool)isEmailAddress:(id)arg1 inDomains:(id)arg2;

+ (id)jabberService;

+ (id)myIdleTime;

+ (unsigned long long)myStatus;

+ (id)notificationCenter;

+ (id)serviceWithName:(id)arg1;

+ (id)smsService;

+ (unsigned long long)statusForABPerson:(id)arg1;

+ (unsigned long long)statusForIMPerson:(id)arg1;

+ (id)subnetService;

- (id)canonicalFormOfID:(id)arg1;

- (id)copyWithZone:(struct _NSZone *)arg1;

- (id)infoForAllPeople;

- (id)infoForAllScreenNames;

- (id)infoForDisplayedPeople;

- (id)infoForPerson:(id)arg1;

- (id)infoForPreferredScreenNames;

- (id)infoForScreenName:(id)arg1;

- (_Bool)initialSyncPerformed;

- (_Bool)isEnabled;

- (id)localizedName;

- (id)localizedShortName;

- (void)login;

- (void)logout;

- (id)myScreenNames;

- (id)name;

- (id)peopleWithScreenName:(id)arg1;

- (id)screenNamesForPerson:(id)arg1;

- (unsigned long long)status;



@end

