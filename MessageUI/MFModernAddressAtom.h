/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */



#import "UIControl.h"



@class MFModernAtomView, NSString, UIFont;



@interface MFModernAddressAtom : UIControl

{

    id <MFModernAddressAtomDelegate> _delegate;

    MFModernAtomView *_atomView;

    void *_person;

    NSString *_fullAddress;

    NSString *_displayString;

    unsigned int _maxWidth;

    int _identifier;

    unsigned int _addressIsPhoneNumber:1;

    unsigned int _updatedABPerson:1;

    unsigned int _isDisplayStringFromAddressBook:1;

    void *_addressBook;

}



+ (id)copyDisplayStringForAddress:(id)arg1 usingAddressBook:(void *)arg2 useAbbreviatedName:(_Bool)arg3;

- (void *)ABPerson;

- (int)ABPropertyType;

- (void)_displayStringDidChange;

- (struct CGRect)_highlightBounds;

- (void)_updateABPerson;

- (void)_updateDisplayStringIncludingABPerson:(_Bool)arg1;

- (void)addressBookDidChange:(id)arg1;

@property(retain, nonatomic) UIFont *atomFont;

@property(readonly, nonatomic) struct CGPoint baselinePoint;

- (void)dealloc;

- (id)displayString;

@property(readonly, nonatomic) struct UIEdgeInsets edgeInsets;

- (id)emailAddress;

@property(nonatomic) _Bool hidesVIPIndicator;

- (int)identifier;

- (id)initWithAddress:(id)arg1 presentationOptions:(unsigned long long)arg2 isPhoneNumber:(_Bool)arg3 maxWidth:(double)arg4 addressBook:(void *)arg5;

- (_Bool)isDisplayStringFromAddressBook;

@property(nonatomic) _Bool isPrimaryAddressAtom;

- (void)layoutSubviews;

@property(nonatomic) unsigned long long presentationOptions;

@property(nonatomic) double scale;

@property(nonatomic) int separatorStyle;

- (void)setAddress:(id)arg1;

- (void)setDelegate:(id)arg1;

- (void)setFrame:(struct CGRect)arg1;

- (void)setHighlighted:(_Bool)arg1;

- (void)setMaxWidth:(unsigned int)arg1;

- (void)setOpaque:(_Bool)arg1;

- (struct CGSize)sizeThatFits:(struct CGSize)arg1;

- (id)unmodifiedAddressString;



@end


