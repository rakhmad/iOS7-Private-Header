/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */



#import "UITextView.h"



@class UILabel;



@interface EKPlaceholderTextView : UITextView

{

    UILabel *_placeholder;

    _Bool _showingPlaceholder;

}



- (void).cxx_destruct;

- (id)_placeholderLabel;

- (void)_updatePlaceholder;

- (void)dealloc;

- (id)initWithFrame:(struct CGRect)arg1;

- (void)layoutSubviews;

- (id)placeholder;

- (void)setPlaceholder:(id)arg1;

- (void)setText:(id)arg1;

- (void)textChanged:(id)arg1;



@end


