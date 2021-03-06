/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */



#import "PLDaemonJob.h"


@class NSArray, NSString;



@interface PLUserActivityDaemonJob : PLDaemonJob

{

    long long _actionType;

    NSString *_albumUUID;

    NSArray *_assetUUIDs;

    long long _cloudFeedContent;

}



+ (void)userDidDeleteSharedAlbum:(id)arg1;

+ (void)userDidDeleteSharedAssets:(id)arg1;

+ (void)userDidLeavePhotosApplication;

+ (void)userDidNavigateAwayFromAllSharedAlbums;

+ (void)userDidNavigateAwayFromSharedAlbum:(id)arg1;

+ (void)userDidNavigateIntoImagePickerSharedAlbum:(id)arg1;

+ (void)userDidNavigateIntoSharedAlbum:(id)arg1;

+ (void)userDidReadCommentOnSharedAsset:(id)arg1;

+ (void)userDidViewCloudFeedContent:(long long)arg1;

@property long long actionType; // @synthesize actionType=_actionType;

@property(copy, nonatomic) NSString *albumUUID; // @synthesize albumUUID=_albumUUID;

@property(retain, nonatomic) NSArray *assetUUIDs; // @synthesize assetUUIDs=_assetUUIDs;

@property(nonatomic) long long cloudFeedContent; // @synthesize cloudFeedContent=_cloudFeedContent;

- (long long)daemonOperation;

- (void)dealloc;

- (void)encodeToXPCObject:(id)arg1;

- (id)initFromXPCObject:(id)arg1;

- (void)run;

- (void)runDaemonSide;



@end


