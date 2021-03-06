/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */





@class IMHandle, NSArray, NSDate, NSDictionary, NSString;



@interface IMAVChatProxy : NSObject

{

    NSDictionary *_info;

}



@property(readonly, nonatomic) NSString *GUID;

- (_Bool)_isProxy;

- (void)acceptInvitation;

- (id)account;

@property(readonly, nonatomic) long long callID;

- (void)cancelInvitation;

@property(readonly, nonatomic) NSString *conferenceID;

@property(nonatomic) double connectionTimeoutTime;

@property(readonly, nonatomic) NSDate *dateConnected;

@property(readonly, nonatomic) NSDate *dateEnded;

- (void)dealloc;

- (void)declineInvitation;

- (id)description;

- (void)endChat;

@property(readonly, nonatomic) int endedError;

@property(readonly, nonatomic) unsigned int endedReason;

- (void)finalUpdate;

- (void)forwardInvocation:(id)arg1;

@property(readonly, nonatomic) IMHandle *initiatorIMHandle;

@property(nonatomic) double invitationTimeoutTime;

- (void)invite:(id)arg1 additionalPeers:(id)arg2;

- (void)inviteAll;

@property(readonly, nonatomic) _Bool isActive;

@property(readonly, nonatomic) _Bool isCaller;

@property(readonly, nonatomic) _Bool isStateFinal;

@property(readonly, nonatomic) _Bool isVideo;

- (id)methodSignatureForSelector:(SEL)arg1;

@property(readonly, nonatomic) IMHandle *otherIMHandle;

@property(readonly, nonatomic) NSArray *remoteParticipants;

@property(readonly, nonatomic) unsigned int sessionID;

@property(readonly, nonatomic) unsigned int state;

- (void)updateWithInfo:(id)arg1;



@end


