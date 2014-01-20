/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */



#import "SKUITableViewCell.h"


#import "SKUICellLayoutParentView.h"



@class SKUIItemCellLayout;



@interface SKUIItemTableViewCell : SKUITableViewCell <SKUICellLayoutParentView>

{

    _Bool _layoutNeedsLayout;

}



- (void)configureForItem:(id)arg1 rowIndex:(long long)arg2;

@property(readonly, nonatomic) SKUIItemCellLayout *layout;

- (void)layoutSubviews;

- (void)prepareForReuse;

- (void)setBackgroundColor:(id)arg1;

- (void)setCellLayoutNeedsLayout;

- (void)setHighlighted:(_Bool)arg1 animated:(_Bool)arg2;

- (void)setSelected:(_Bool)arg1 animated:(_Bool)arg2;



@end

