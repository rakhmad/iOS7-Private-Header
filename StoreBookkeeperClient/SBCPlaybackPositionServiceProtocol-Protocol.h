/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */





@protocol SBCPlaybackPositionServiceProtocol <NSObject>

- (oneway void)beginUsingPlaybackPositions;

- (oneway void)endUsingPlaybackPositions;

- (oneway void)noteChangedNowPlayingTrackPersistentID:(long long)arg1;

- (oneway void)noteChangedPlaybackPositionMetadataForTrackPersistentID:(long long)arg1 isCheckpoint:(_Bool)arg2;

- (oneway void)setClientConfiguration:(id)arg1;

- (oneway void)synchronizeImmediately;

- (oneway void)synchronizeLocalChangesSoon;

- (oneway void)updateMusicLibraryByApplyingUbiquitousBookmarkMetadataToTrackWithPersistentID:(long long)arg1;

- (oneway void)updateUbiquitousDatabaseByRemovingUbiquitousMetadataFromTrackWithPersistentID:(long long)arg1;

@end


