/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */



#import "TPNumberPad.h"


@class UIButton;



@interface TPSimpleNumberPad : TPNumberPad

{

    UIButton *_deleteButton;

    _Bool _showsDeleteButton;

    id <TPSimpleNumberPadDelegate> _delegate;

}



+ (id)_numberPadCharacters;

- (void)_deleteButtonClicked:(id)arg1 withEvent:(id)arg2;

- (void)_updateDeleteButton;

- (void)buttonUp:(id)arg1;

- (void)dealloc;

@property id <TPSimpleNumberPadDelegate> delegate; // @synthesize delegate=_delegate;

- (id)initWithButtons:(id)arg1;

- (id)initWithFrame:(struct CGRect)arg1;

- (void)setNumberButtonsEnabled:(_Bool)arg1;

@property(nonatomic) _Bool showsDeleteButton; // @synthesize showsDeleteButton=_showsDeleteButton;



@end

