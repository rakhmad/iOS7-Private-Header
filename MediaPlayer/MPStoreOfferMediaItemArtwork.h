/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */



#import "MPMediaItemArtwork.h"


@class NSArray, NSString;



@interface MPStoreOfferMediaItemArtwork : MPMediaItemArtwork

{

    long long _itemPersistentID;

    NSArray *_screenshotDictionaries;

    NSArray *_itemArtworkDictionaries;

    NSArray *_containerArtworkDictionaries;

    unsigned long long _hash;

    NSString *_cacheID;

}



- (void).cxx_destruct;

- (id)_bestImageURLForSize:(struct CGSize)arg1 artworkDictionaries:(id)arg2;

- (id)_imageWithURL:(id)arg1;

- (id)albumImageDataWithSize:(struct CGSize)arg1;

- (id)albumImageWithSize:(struct CGSize)arg1;

@property(readonly, nonatomic) NSString *cacheID; // @synthesize cacheID=_cacheID;

- (_Bool)hasArtworkAvailable;

- (unsigned long long)hash;

- (id)imageDataWithSize:(struct CGSize)arg1 atPlaybackTime:(double)arg2;

- (id)imageWithFormat:(long long)arg1 artworkCacheID:(id)arg2 canUseSurfaceBackedImage:(_Bool)arg3;

- (id)imageWithSize:(struct CGSize)arg1;

- (id)imageWithSize:(struct CGSize)arg1 artworkCacheID:(id)arg2;

- (id)imageWithSize:(struct CGSize)arg1 atPlaybackTime:(double)arg2;

- (id)initWithItemPersistentID:(long long)arg1 screenshotDictionaries:(id)arg2 itemArtworkDictionaries:(id)arg3 containerArtworkDictionaries:(id)arg4;

- (_Bool)shouldAsynchrounouslyLoadArtworkForItemWithIdentifier:(long long)arg1 artworkFormat:(long long)arg2 artworkCacheID:(id)arg3;

- (_Bool)shouldAsynchrounouslyLoadArtworkForItemWithIdentifier:(long long)arg1 artworkSize:(struct CGSize)arg2 artworkCacheID:(id)arg3;



@end

