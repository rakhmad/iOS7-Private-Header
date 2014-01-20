/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */



#import "UIView.h"



@class NSNumber, NSString, PUBackgroundColorView, PUPhotoDecoration, UIImage, UIImageView, UILabel;



@interface PUPhotoView : UIView

{

    PUBackgroundColorView *_photoDecorationBorderView;

    PUBackgroundColorView *_photoDecorationOverlayView;

    UIImageView *_bannerView;

    UIImageView *_bannerImageView;

    UILabel *_bannerLabel;

    _Bool _hasTransform;

    _Bool _isVideoBannerVisible;

    _Bool _avoidsImageViewIfPossible;

    _Bool _slalom;

    long long _fillMode;

    UIImage *_photoImage;

    PUPhotoDecoration *_photoDecoration;

    NSNumber *_videoDuration;

    UIImageView *_photoImageView;

    UIImageView *__crossfadeImageView;

    UIImage *_bannerImage;

    NSString *_bannerText;

    struct CGSize _photoSize;

    struct CGAffineTransform _imageTransform;

}



+ (struct CGRect)_imageContentFrameForBounds:(struct CGRect)arg1 imageSize:(struct CGSize)arg2 fillMode:(long long)arg3;

+ (_Bool)showPhotoStreamBadges;

+ (struct CGSize)sizeThatFits:(struct CGSize)arg1 imageSize:(struct CGSize)arg2 fillMode:(long long)arg3;

- (void).cxx_destruct;

@property(retain, nonatomic) UIImageView *_crossfadeImageView; // @synthesize _crossfadeImageView=__crossfadeImageView;

- (struct CGRect)_photoDecorationBorderViewFrameForImageContentFrame:(struct CGRect)arg1;

- (void)_updateBannerView;

- (void)_updateImageView;

- (void)_updatePhotoDecoration;

- (void)_updateSubviewOrdering;

- (void)animateCrossfadeToImage:(id)arg1;

@property(nonatomic) _Bool avoidsImageViewIfPossible; // @synthesize avoidsImageViewIfPossible=_avoidsImageViewIfPossible;

@property(retain, nonatomic) UIImage *bannerImage; // @synthesize bannerImage=_bannerImage;

@property(copy, nonatomic) NSString *bannerText; // @synthesize bannerText=_bannerText;

@property(nonatomic) long long fillMode; // @synthesize fillMode=_fillMode;

@property(readonly, nonatomic) struct CGRect imageContentFrame;

@property(nonatomic) struct CGAffineTransform imageTransform; // @synthesize imageTransform=_imageTransform;

- (id)initWithFrame:(struct CGRect)arg1;

@property(readonly, nonatomic, getter=isSlalom) _Bool slalom; // @synthesize slalom=_slalom;

@property(readonly, nonatomic, getter=isVideoBannerVisible) _Bool videoBannerVisible; // @synthesize videoBannerVisible=_isVideoBannerVisible;

- (void)layoutSubviews;

@property(copy, nonatomic) PUPhotoDecoration *photoDecoration; // @synthesize photoDecoration=_photoDecoration;

@property(retain, nonatomic) UIImage *photoImage; // @synthesize photoImage=_photoImage;

@property(retain, nonatomic) UIImageView *photoImageView; // @synthesize photoImageView=_photoImageView;

@property(nonatomic) struct CGSize photoSize; // @synthesize photoSize=_photoSize;

- (void)setPhotoStreamBannerVisible:(_Bool)arg1;

- (void)setVideoBannerVisible:(_Bool)arg1 videoDuration:(id)arg2 isSlalom:(_Bool)arg3;

- (struct CGSize)sizeThatFits:(struct CGSize)arg1;

@property(readonly, nonatomic) NSNumber *videoDuration; // @synthesize videoDuration=_videoDuration;



@end

