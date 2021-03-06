/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */



#import "PUFeedViewControllerSpec.h"


@interface PUFeedViewControllerPhoneSpec : PUFeedViewControllerSpec

{

}



- (void)configureCommentSeparatorMetrics:(inout struct PUFeedSeparatorMetrics *)arg1;

- (void)configureFeedCollectionViewLayout:(id)arg1 forCollectionViewType:(long long)arg2;

- (void)configureImageCell:(id)arg1 forSectionHeaderBackgroundInCollectionViewType:(long long)arg2;

- (void)configureSeparatorMetrics:(inout struct PUFeedSeparatorMetrics *)arg1 betweenSectionWithInfo:(id)arg2 andSectionWithInfo:(id)arg3 joined:(_Bool)arg4 collectionViewType:(long long)arg5;

- (void)configureTextCell:(id)arg1 forCaption:(id)arg2;

- (void)configureTextCell:(id)arg1 forCommentWithDescriptionPhrase:(id)arg2;

- (void)configureTextCell:(id)arg1 forEventWithDescriptionPhrase:(id)arg2;

- (void)configureTextCell:(id)arg1 forLikesWithDescriptionPhrase:(id)arg2;

- (void)configureTextCell:(id)arg1 forSectionFooterWithActionText:(id)arg2 collectionViewType:(long long)arg3;

- (void)configureTextCell:(id)arg1 forSectionGroupHeaderWithText:(id)arg2 collectionViewType:(long long)arg3;

- (void)configureTextCell:(id)arg1 forSectionHeaderWithDescriptionPhrase:(id)arg2 streamAffordanceLabel:(id)arg3 actionText:(id)arg4 buttonType:(long long)arg5 collectionViewType:(long long)arg6 animated:(_Bool)arg7;

- (struct UIEdgeInsets)contentInsetsForSectionType:(long long)arg1 collectionViewType:(long long)arg2;

- (id)defaultTextAttributesForCollectionViewType:(long long)arg1;

- (id)emphasizedTextAttributesForCollectionViewType:(long long)arg1;

- (void)getReferenceMaximumLength:(double *)arg1 minimumNumberOfTilesToOmit:(long long *)arg2 forSectionType:(long long)arg3 collectionViewType:(long long)arg4;

- (id)gridSpec;

- (long long)largeNumberOfSubjectsForLikes;

- (struct CGSize)minimumVideoTileSize;

- (id)photoBrowserSpec;

- (id)photosPickerSpec;

- (long long)promptType;

- (_Bool)shouldHideBarsInLandscape;

- (_Bool)shouldShowLikeButtonForCollectionViewType:(long long)arg1;

- (_Bool)shouldShowSeeAllInSectionFootersInCollectionViewType:(long long)arg1;

- (_Bool)shouldShowStreamAffordanceInSectionHeaderWithCollectionViewType:(long long)arg1;

- (_Bool)shouldUseFullscreenLayout;

- (double)spacingBetweenSectionWithInfo:(id)arg1 andHeaderWithGroupID:(id)arg2;

- (struct CGSize)thumbnailSize;



@end


