/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */



#import "UIControl.h"



@class UILabel;



@interface SULinkControl : UIControl

{

    UILabel *_label;

    _Bool _shouldDrawUnderline;

    unsigned int _sizeIsDirty:1;

    long long _style;

}



- (id)_label;

- (void)_updateLabel;

- (void)dealloc;

- (void)drawRect:(struct CGRect)arg1;

- (void)layoutSubviews;

- (void)setHighlighted:(_Bool)arg1;

@property(nonatomic) _Bool shouldDrawUnderline; // @synthesize shouldDrawUnderline=_shouldDrawUnderline;

- (void)setStyle:(long long)arg1;

- (void)setText:(id)arg1;

- (void)sizeToFit;



@end


