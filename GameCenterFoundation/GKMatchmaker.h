/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */





@class GKDiscovery, GKMatch, NSDate, NSMutableDictionary, NSObject<OS_dispatch_queue>, NSSet;



@interface GKMatchmaker : NSObject

{

    NSObject<OS_dispatch_queue> *_lookForInviteQueue;

    _Bool _nearbyBrowsing;

    _Bool _nearbyAdvertising;

    _Bool _wasNearbyBrowsing;

    int _matching;

    id _inviteHandler;

    GKMatch *_match;

    id _inviteeResponseHandler;

    NSSet *_invitees;

    id _nearbyPlayerHandler;

    NSMutableDictionary *_nearbyPlayers;

    NSMutableDictionary *_nearbyInvites;

    GKDiscovery *_nearbyDiscovery;

    NSDate *_nearbyQueryLastCheckDate;

    NSSet *_nearbyCompatibileHashes;

    double _nearbyQueryAllowance;

}



+ (id)sharedMatchmaker;

+ (id)syncQueue;

- (void)acceptNearbyInvite:(id)arg1 connectionData:(id)arg2;

- (void)addPlayersForHostedMatchRequest:(id)arg1 existingPlayerIDs:(id)arg2 completionHandler:(id)arg3;

- (void)addPlayersToMatch:(id)arg1 matchRequest:(id)arg2 completionHandler:(id)arg3;

- (void)applicationDidEnterBackgroundNotification:(id)arg1;

- (void)applicationWillEnterForegroundNotification:(id)arg1;

- (void)applicationWillTerminateNotification:(id)arg1;

- (void)cancel;

- (void)cancelInviteToPlayer:(id)arg1;

- (void)cancelNearbyInvitesToPlayers:(id)arg1;

- (void)cancelPendingInvitesAndMarkInviteComplete:(_Bool)arg1;

- (void)cancelSentNearbyInvites;

- (_Bool)compatibilityMatrix:(id)arg1 includesAppWithBundleID:(id)arg2 version:(id)arg3;

- (long long)currentEnvironment;

- (void)dealloc;

- (void)declineNearbyInviteFromPlayer:(id)arg1 participantID:(id)arg2 deviceID:(id)arg3 reason:(long long)arg4;

- (void)declineReceivedNearbyInvites;

- (id)descriptionForNearbyDictionary:(id)arg1;

- (void)determineIfShouldRespondToNearbyPlayer:(id)arg1 handler:(id)arg2;

- (void)doneMatchmaking;

- (void)findMatchForRequest:(id)arg1 withCompletionHandler:(id)arg2;

- (void)findPlayersForHostedMatchRequest:(id)arg1 withCompletionHandler:(id)arg2;

- (void)findRematchForMatch:(id)arg1 completionHandler:(id)arg2;

- (void)finishMatchmakingForMatch:(id)arg1;

- (void)finishedAuthenticating;

- (void)foundNearbyParticipant:(id)arg1 deviceID:(id)arg2 discoveryInfo:(id)arg3;

- (void)generateHashedCompatibiltySet;

- (void)handleNearbyInvite:(id)arg1 fromPlayer:(id)arg2 participantID:(id)arg3 deviceID:(id)arg4;

- (void)handleNearbyInviteResponse:(id)arg1 fromPlayer:(id)arg2 participantID:(id)arg3 deviceID:(id)arg4;

- (void)handleNearbyProfileQuery:(id)arg1 fromPlayer:(id)arg2 participantID:(id)arg3 deviceID:(id)arg4;

- (void)handleNearbyProfileResponse:(id)arg1 fromPlayer:(id)arg2 participantID:(id)arg3 deviceID:(id)arg4;

@property(readonly, nonatomic) _Bool hasInviteListener;

- (id)hashForBundleID:(id)arg1 version:(id)arg2;

- (id)hashForCurrentGame;

- (id)init;

- (void)inviteAnyNearbyPlayersWithRequest:(id)arg1;

@property(copy, nonatomic) id inviteHandler; // @synthesize inviteHandler=_inviteHandler;

- (void)invitePlayersWithRequest:(id)arg1 serverHosted:(_Bool)arg2 completionHandler:(id)arg3;

- (void)invitePlayersWithRequest:(id)arg1 serverHosted:(_Bool)arg2 onlineConnectionData:(id)arg3 completionHandler:(id)arg4;

- (void)inviteeAcceptedNotification:(id)arg1;

- (void)inviteeDeclinedNotification:(id)arg1;

@property(copy, nonatomic) id inviteeResponseHandler; // @synthesize inviteeResponseHandler=_inviteeResponseHandler;

@property(retain, nonatomic) NSSet *invitees; // @synthesize invitees=_invitees;

- (void)loadCompatabilityMatrixAsDictionaryWithHandler:(id)arg1;

- (void)loadConnectivitySettingsWithCompletionHandler:(id)arg1;

- (void)loadPhotoDataDictionaryWithHandler:(id)arg1;

- (void)localPlayerAcceptedGameInvite:(id)arg1;

- (void)localPlayerAcceptedNearbyInvite:(id)arg1;

- (void)localPlayerRespondedToNearbyInvite:(id)arg1;

- (void)lookForInvite;

- (void)lostNearbyParticipant:(id)arg1 deviceID:(id)arg2;

@property(retain, nonatomic) GKMatch *match; // @synthesize match=_match;

- (void)matchForInvite:(id)arg1 completionHandler:(id)arg2;

- (void)matchForNearbyInvite:(id)arg1 handler:(id)arg2;

- (void)matchForRemoteInvite:(id)arg1 completionHandler:(id)arg2;

- (void)matchWithRequest:(id)arg1 currentMatch:(id)arg2 currentPlayerIDs:(id)arg3 serverHosted:(_Bool)arg4 rematchID:(id)arg5 completionHandler:(id)arg6;

@property int matching; // @synthesize matching=_matching;

@property(nonatomic) _Bool nearbyAdvertising; // @synthesize nearbyAdvertising=_nearbyAdvertising;

@property(nonatomic) _Bool nearbyBrowsing; // @synthesize nearbyBrowsing=_nearbyBrowsing;

@property(retain, nonatomic) NSSet *nearbyCompatibileHashes; // @synthesize nearbyCompatibileHashes=_nearbyCompatibileHashes;

- (id)nearbyDeviceWithDeviceID:(id)arg1;

- (id)nearbyDevicesForPlayer:(id)arg1 withState:(long long)arg2;

@property(retain, nonatomic) GKDiscovery *nearbyDiscovery; // @synthesize nearbyDiscovery=_nearbyDiscovery;

- (id)nearbyInviteFromPlayerID:(id)arg1;

- (void)nearbyInviteWasCancelled:(id)arg1 fromPlayer:(id)arg2 participantID:(id)arg3 deviceID:(id)arg4;

@property(retain, nonatomic) NSMutableDictionary *nearbyInvites; // @synthesize nearbyInvites=_nearbyInvites;

@property(copy, nonatomic) id nearbyPlayerHandler; // @synthesize nearbyPlayerHandler=_nearbyPlayerHandler;

@property(retain, nonatomic) NSMutableDictionary *nearbyPlayers; // @synthesize nearbyPlayers=_nearbyPlayers;

@property(nonatomic) double nearbyQueryAllowance; // @synthesize nearbyQueryAllowance=_nearbyQueryAllowance;

@property(retain, nonatomic) NSDate *nearbyQueryLastCheckDate; // @synthesize nearbyQueryLastCheckDate=_nearbyQueryLastCheckDate;

- (int)numberOfNearbyDevicesForPlayer:(id)arg1 withState:(long long)arg2;

- (void)performSync:(id)arg1;

- (void)presentNearbyInvite:(id)arg1 fromPlayer:(id)arg2 participantID:(id)arg3 deviceID:(id)arg4;

- (id)profileDictionaryForLocalPlayer;

- (void)queryActivityWithCompletionHandler:(id)arg1;

- (void)queryPlayerGroupActivity:(unsigned long long)arg1 withCompletionHandler:(id)arg2;

- (void)receivedData:(id)arg1 fromNearbyParticipant:(id)arg2 deviceID:(id)arg3;

- (void)registeredListentersChanged;

- (_Bool)removeInvitee:(id)arg1;

- (void)removeNearbyInviteFromPlayerID:(id)arg1;

- (void)reportResponse:(long long)arg1 forInvitees:(id)arg2;

- (void)respondToHostedInvite:(id)arg1 completionHandler:(id)arg2;

- (long long)responseForDeclineReason:(long long)arg1;

- (void)saveNearbyInvite:(id)arg1 fromPlayerID:(id)arg2;

- (void)sendDictionary:(id)arg1 toNearbyParticipant:(id)arg2 deviceID:(id)arg3;

- (void)sendProfileResponseToParticipant:(id)arg1 deviceID:(id)arg2;

- (void)setConnectivitySettings:(id)arg1;

- (void)setNearbyPlayer:(id)arg1 deviceID:(id)arg2 reachable:(_Bool)arg3;

- (void)setNearbyPlayerAccepted:(id)arg1 connectionData:(id)arg2;

- (void)setNearbyPlayerAccepted:(id)arg1 deviceID:(id)arg2 connectionData:(id)arg3;

- (void)setNearbyPlayerDeclined:(id)arg1 deviceID:(id)arg2 reason:(long long)arg3;

- (void)setNearbyPlayerDeclined:(id)arg1 reason:(long long)arg2;

- (void)setNearbyPlayerFailed:(id)arg1;

- (void)setNearbyPlayerFailed:(id)arg1 deviceID:(id)arg2;

@property(nonatomic) _Bool wasNearbyBrowsing; // @synthesize wasNearbyBrowsing=_wasNearbyBrowsing;

- (void)setupNearbyDiscovery;

- (_Bool)shouldRespondToNearbyQuery;

- (void)startBrowsingForNearbyPlayersWithReachableHandler:(id)arg1;

- (void)startNearbyAdvertising;

- (void)startNearbyBrowsing;

- (void)stopBrowsingForNearbyPlayers;

- (void)stopNearbyAdvertising;

- (void)stopNearbyBrowsing;

- (void)updateNearbyAdvertising;



@end


