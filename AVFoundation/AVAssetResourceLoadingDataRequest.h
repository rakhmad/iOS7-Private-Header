/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */





@class AVAssetResourceLoadingDataRequestInternal;



@interface AVAssetResourceLoadingDataRequest : NSObject

{

    AVAssetResourceLoadingDataRequestInternal *_dataRequest;

}



- (id)_loadingRequest;

@property(readonly, nonatomic) long long currentOffset;

- (void)dealloc;

- (id)description;

- (void)finalize;

- (id)initWithLoadingRequest:(id)arg1 requestedOffset:(long long)arg2 requestedLength:(long long)arg3 canSupplyIncrementalDataImmediately:(_Bool)arg4;

@property(readonly, nonatomic) long long requestedLength;

@property(readonly, nonatomic) long long requestedOffset;

- (void)respondWithData:(id)arg1;



@end


