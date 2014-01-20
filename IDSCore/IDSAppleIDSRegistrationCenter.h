/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */





#import "IMSystemMonitorListener.h"



@class FTMessageDelivery, IDSPushHandler, NSDate, NSMutableArray, NSMutableDictionary, NSMutableSet;



@interface IDSAppleIDSRegistrationCenter : NSObject <IMSystemMonitorListener>

{

    NSMutableArray *_queuedRegistrations;

    NSMutableArray *_queuedAuthentications;

    NSMutableArray *_currentAuthentications;

    NSMutableArray *_currentRegistrations;

    NSMutableArray *_handlers;

    _Bool _pendingDequeue;

    _Bool _pendingDeregistration;

    NSMutableDictionary *_currentGetDependentRegistrationBlocks;

    NSMutableSet *_currentGetDependentRegistrations;

    NSMutableDictionary *_currentGetHandlesBlocks;

    NSMutableSet *_currentGetHandlesRegistrations;

    NSMutableArray *_successfulRegistrations;

    NSDate *_dateLastRegistered;

    NSDate *_accountingHour;

    unsigned long long _registrations;

    FTMessageDelivery *_httpMessageDelivery;

    IDSPushHandler *_pushHandler;

}



+ (id)sharedInstance;

- (void)__abisntheCleanupTimerHit;

- (void)__cleanupValidationInfo;

- (void)__failValidationQueue;

- (void)__flushValidationQueue;

- (void)__queueValidationMessage:(id)arg1;

- (void)__reallySendDeregistration;

- (void)__reallySendRegistration;

- (_Bool)_checkOverRegistrations;

- (void)_clearAbisntheCleanupTimer;

- (void)_dequeuePendingRequestsIfNecessary;

- (_Bool)_hasOngoingAuthentications;

- (_Bool)_hasRegistration:(id)arg1 inQueue:(id)arg2;

- (void)_noteRegistration;

- (void)_notifyAllSuccessfulRegistrations:(id)arg1;

- (void)_notifyEmailQueryFailure:(id)arg1 error:(long long)arg2 info:(id)arg3;

- (void)_notifyEmailQuerySuccess:(id)arg1 emailInfo:(id)arg2;

- (void)_notifyIDSAuthenticationSuccess:(id)arg1;

- (void)_notifyProvisionFailure:(id)arg1 error:(long long)arg2 fatal:(_Bool)arg3 info:(id)arg4;

- (void)_notifyRegistrationFailure:(id)arg1 error:(long long)arg2 info:(id)arg3;

- (void)_notifyRegistrationSuccess:(id)arg1;

- (void)_processGetHandlesMessage:(id)arg1 deliveredWithError:(id)arg2 resultCode:(long long)arg3 resultDictionary:(id)arg4 allowPasswordPrompt:(_Bool)arg5;

- (void)_processRegistrationMessage:(id)arg1 sentRegistrations:(id)arg2 descriptionString:(id)arg3 actionID:(id)arg4 actionString:(id)arg5 isDeregister:(_Bool)arg6 deliveredWithError:(id)arg7 resultCode:(long long)arg8 resultDictionary:(id)arg9;

- (_Bool)_queryValidatedEmailsForRegistration:(id)arg1 allowPasswordPrompt:(_Bool)arg2 completionBlock:(id)arg3;

- (_Bool)_queueBuildingValidationDataIfNecessaryForMessage:(id)arg1;

- (void)_sendAbsintheValidationCertRequestIfNeeded;

- (void)_sendAuthenticateRegistration:(id)arg1;

- (void)_sendDeregistration:(id)arg1;

- (void)_sendRegistrationAsDeregister:(_Bool)arg1;

- (void)_setAbisntheCleanupTimer;

- (id)activeRegistrations;

- (void)addListener:(id)arg1;

- (_Bool)authenticateRegistration:(id)arg1;

- (void)buildValidationCredentialsIfNeeded;

- (void)cancelActionsForRegistrationInfo:(id)arg1;

- (void)cancelRegisterActionsForRegistrationInfo:(id)arg1;

- (id)dateLastRegistered;

- (void)dealloc;

- (_Bool)getDependentRegistrations:(id)arg1 completionBlock:(id)arg2;

- (id)init;

- (_Bool)isRegistering:(id)arg1;

- (_Bool)queryValidatedEmailsForRegistration:(id)arg1 allowPasswordPrompt:(_Bool)arg2 completionBlock:(id)arg3;

- (void)removeListener:(id)arg1;

- (_Bool)sendDeregistration:(id)arg1;

- (_Bool)sendRegistration:(id)arg1;

- (_Bool)sendRequest:(id)arg1;



@end

