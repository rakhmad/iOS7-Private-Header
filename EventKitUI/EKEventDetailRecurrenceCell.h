/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */



#import "EKEventDetailCell.h"


@class UILabel;



@interface EKEventDetailRecurrenceCell : EKEventDetailCell

{

    UILabel *_recurrenceLabel;

    double _lastLayoutWidth;

}



- (void).cxx_destruct;

- (id)_myTableView;

- (id)_recurrenceLabel;

- (double)height;

- (void)layoutForWidth:(double)arg1 position:(int)arg2;

- (void)layoutSubviews;

- (void)setRecurrenceString:(id)arg1;



@end

