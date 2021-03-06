/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */



#import "UIView.h"



#import "UITextFieldDelegate.h"



@class NSMutableCharacterSet, NSString, UIColor, UITextField;



@interface SBUIPasscodeEntryField : UIView <UITextFieldDelegate>

{

    id <SBUIPasscodeEntryFieldDelegate> _delegate;

    UITextField *_textField;

    NSMutableCharacterSet *_numericTrimmingSet;

    _Bool _ignoreCallbacks;

    _Bool _resigningFirstResponder;

    UIColor *_customBackgroundColor;

}



- (void)_appendString:(id)arg1;

- (void)_autofillForMesaWithCompletion:(id)arg1;

- (_Bool)_baseBecomeFirstResponder;

- (_Bool)_baseResignFirstResponder;

- (void)_deleteLastCharacter;

- (void)_handleKeyUIEvent:(id)arg1 source:(int)arg2;

- (_Bool)_hasAnyCharacters;

- (void)_resetForFailedPasscode:(_Bool)arg1 playUnlockFailedSound:(_Bool)arg2;

- (void)_setLuminosityBoost:(double)arg1;

@property(readonly, nonatomic, getter=_textField) UITextField *textField; // @synthesize textField=_textField;

- (struct CGSize)_viewSize;

- (void)appendString:(id)arg1;

- (_Bool)becomeFirstResponder;

- (_Bool)canBecomeFirstResponder;

@property(retain, nonatomic) UIColor *customBackgroundColor; // @synthesize customBackgroundColor=_customBackgroundColor;

- (void)dealloc;

@property(nonatomic) id <SBUIPasscodeEntryFieldDelegate> delegate; // @synthesize delegate=_delegate;

- (void)deleteLastCharacter;

- (id)initWithDefaultSize;

- (_Bool)isFirstResponder;

- (void)notePasscodeFieldDidAcceptEntry;

- (void)notePasscodeFieldTextDidChange;

- (void)reset;

- (void)resetForFailedPasscode;

- (_Bool)resignFirstResponder;

- (void)setBackgroundAlpha:(double)arg1;

@property(copy, nonatomic) NSString *stringValue; // @dynamic stringValue;

- (_Bool)shouldInsertPasscodeText:(id)arg1;

- (_Bool)textField:(id)arg1 shouldChangeCharactersInRange:(struct _NSRange)arg2 replacementString:(id)arg3;

- (_Bool)textFieldShouldBeginEditing:(id)arg1;

- (_Bool)textFieldShouldReturn:(id)arg1;



@end


