/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */





@class CIBurstImageSet, NSDate, NSObject<OS_dispatch_queue>, NSObject<OS_dispatch_source>, NSString, PLManagedAsset;



@interface CAMAvalancheSession : NSObject

{

    long long _type;

    id <CAMAvalancheSessionDelegate> _delegate;

    long long _state;

    NSString *_uuid;

    unsigned long long _numberOfPhotos;

    PLManagedAsset *_possibleAvalancheAsset;

    NSDate *__expirationDate;

    NSObject<OS_dispatch_source> *__expirationTimer;

    NSObject<OS_dispatch_queue> *__expirationQueue;

    CIBurstImageSet *__burstImageSet;

}



@property(readonly, nonatomic) CIBurstImageSet *_burstImageSet; // @synthesize _burstImageSet=__burstImageSet;

- (void)_didTransitionToState:(long long)arg1;

- (_Bool)_ensureValidStateChange:(long long)arg1;

@property(retain, nonatomic, setter=_setExpirationDate:) NSDate *_expirationDate; // @synthesize _expirationDate=__expirationDate;

@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *_expirationQueue; // @synthesize _expirationQueue=__expirationQueue;

@property(readonly, nonatomic) NSObject<OS_dispatch_source> *_expirationTimer; // @synthesize _expirationTimer=__expirationTimer;

- (void)_expirationTimerFired;

- (void)_setPossibleAvalancheAsset:(id)arg1;

- (void)_setState:(long long)arg1;

- (void)_setUUID:(id)arg1;

- (void)_setupExpirationTimer;

- (void)_teardownExpirationTimer;

- (void)_transitionToState:(long long)arg1;

- (id)allAssetIdentifiers;

- (id)bestAssetIndentifiers;

- (void)dealloc;

@property(nonatomic) id <CAMAvalancheSessionDelegate> delegate; // @synthesize delegate=_delegate;

- (_Bool)extend;

- (void)finalizeWithAnalysis:(_Bool)arg1;

- (id)init;

- (id)initWithType:(long long)arg1;

@property(readonly, nonatomic) unsigned long long numberOfPhotos; // @synthesize numberOfPhotos=_numberOfPhotos;

@property(retain, nonatomic) PLManagedAsset *possibleAvalancheAsset; // @synthesize possibleAvalancheAsset=_possibleAvalancheAsset;

- (id)stackAssetIdentifier;

@property(nonatomic) long long state; // @synthesize state=_state;

@property(readonly, nonatomic) long long type; // @synthesize type=_type;

@property(copy, nonatomic) NSString *uuid; // @synthesize uuid=_uuid;



@end

