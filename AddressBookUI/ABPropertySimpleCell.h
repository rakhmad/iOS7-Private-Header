/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */



#import "ABPropertyCell.h"


#import "ABPickerControllerDelegate.h"

#import "UITextFieldDelegate.h"



@class ABPropertyAction, ABTransportButton, UIButton, UIColor, UIImageView, UITextField, UIView;



@interface ABPropertySimpleCell : ABPropertyCell <ABPickerControllerDelegate, UITextFieldDelegate>

{

    _Bool _allowsActions;

    UIButton *_labelButton;

    UITextField *_textField;

    UIView *_vseparator;

    UIImageView *_star;

    ABTransportButton *_transportIcon1;

    ABTransportButton *_transportIcon2;

    ABPropertyAction *_transportAction1;

    ABPropertyAction *_transportAction2;

    double _labelValueSpacing;

    UIColor *_actionsColor;

    UIImageView *_chevron;

}



- (id)_constraintsToOverlapView:(id)arg1 onView:(id)arg2;

- (void)_setupEditingViews;

- (void)_updateView;

@property(retain, nonatomic) UIColor *actionsColor; // @synthesize actionsColor=_actionsColor;

@property(nonatomic) _Bool allowsActions; // @synthesize allowsActions=_allowsActions;

@property(retain, nonatomic) UIImageView *chevron; // @synthesize chevron=_chevron;

- (id)contentViewConstraints;

- (id)contentViewEditingConstraints;

- (void)dealloc;

- (id)firstResponderItem;

- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@property(readonly, nonatomic) UIButton *labelButton; // @synthesize labelButton=_labelButton;

- (void)labelButtonClicked:(id)arg1;

@property(nonatomic) double labelValueSpacing; // @synthesize labelValueSpacing=_labelValueSpacing;

- (void)picker:(id)arg1 didPickItem:(id)arg2;

- (void)pickerDidCancel:(id)arg1;

- (void)setEditing:(_Bool)arg1 animated:(_Bool)arg2;

- (void)setLabelTextAttributes:(id)arg1;

@property(retain, nonatomic) UIImageView *star; // @synthesize star=_star;

@property(retain, nonatomic) UITextField *textField; // @synthesize textField=_textField;

@property(retain, nonatomic) ABPropertyAction *transportAction1; // @synthesize transportAction1=_transportAction1;

@property(retain, nonatomic) ABPropertyAction *transportAction2; // @synthesize transportAction2=_transportAction2;

- (void)setValueTextAttributes:(id)arg1;

@property(retain, nonatomic) UIView *vseparator; // @synthesize vseparator=_vseparator;

- (void)textFieldChanged:(id)arg1;

- (void)transportButtonClicked:(id)arg1;

@property(readonly, nonatomic) ABTransportButton *transportIcon1; // @synthesize transportIcon1=_transportIcon1;

@property(readonly, nonatomic) ABTransportButton *transportIcon2; // @synthesize transportIcon2=_transportIcon2;

- (void)updateTransportButtons;

- (void)updateWithPropertyItem:(id)arg1;



@end


