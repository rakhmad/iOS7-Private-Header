/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */





@class PUAvalancheReviewControllerSpec, PUPhotosSharingViewControllerSpec;



@interface PUPhotoBrowserControllerSpec : NSObject

{

    PUPhotosSharingViewControllerSpec *_photosSharingViewControllerSpec;

    PUAvalancheReviewControllerSpec *_avalancheReviewControllerSpec;

}



- (void).cxx_destruct;

@property(readonly, nonatomic) PUAvalancheReviewControllerSpec *avalancheReviewControllerSpec; // @synthesize avalancheReviewControllerSpec=_avalancheReviewControllerSpec;

@property(readonly, nonatomic) _Bool isInCamera;

- (id)newPhotoBrowserControllerForPhotoAtIndexPath:(id)arg1 inAssetContainerList:(id)arg2;

- (id)newPhotoBrowserZoomTransition;

@property(readonly, nonatomic) int photoThumbnailFormat;

@property(readonly, nonatomic) PUPhotosSharingViewControllerSpec *photosSharingViewControllerSpec; // @synthesize photosSharingViewControllerSpec=_photosSharingViewControllerSpec;

@property(readonly, nonatomic) _Bool shouldShowAirplayItem;

@property(readonly, nonatomic) _Bool shouldShowDeleteItem;

@property(readonly, nonatomic) _Bool shouldShowEditItem;

@property(readonly, nonatomic) _Bool shouldShowPhotoScrubber;

@property(readonly, nonatomic) _Bool shouldShowShareItem;

@property(readonly, nonatomic) _Bool shouldShowSlideshowItem;

@property(readonly, nonatomic) _Bool shouldUsePopovers;

@property(readonly, nonatomic) unsigned long long supportedInterfaceOrientations;



@end

