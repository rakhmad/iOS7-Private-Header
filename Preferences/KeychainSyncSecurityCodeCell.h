/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */



#import "PSEditableTableCell.h"


@class NSString;



@interface KeychainSyncSecurityCodeCell : PSEditableTableCell

{

    int _securityCodeType;

    int _mode;

    NSString *_firstPasscodeEntry;

}



- (void)dealloc;

@property(retain, nonatomic) NSString *firstPasscodeEntry; // @synthesize firstPasscodeEntry=_firstPasscodeEntry;

@property(nonatomic) int mode; // @synthesize mode=_mode;

@property(nonatomic) int securityCodeType; // @synthesize securityCodeType=_securityCodeType;

- (_Bool)textField:(id)arg1 shouldChangeCharactersInRange:(struct _NSRange)arg2 replacementString:(id)arg3;

- (_Bool)textFieldShouldBeginEditing:(id)arg1;



@end

