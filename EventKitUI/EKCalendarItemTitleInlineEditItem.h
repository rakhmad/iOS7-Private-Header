/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */



#import "EKCalendarItemEditItem.h"


#import "UITextFieldDelegate.h"



@class UITableViewCell;



__attribute__((visibility("hidden")))

@interface EKCalendarItemTitleInlineEditItem : EKCalendarItemEditItem <UITextFieldDelegate>

{

    UITableViewCell *_titleCell;

    UITableViewCell *_locationCell;

    unsigned int _showsLocation:1;

}



- (void).cxx_destruct;

- (id)_makeCell:(unsigned long long)arg1;

- (void)addStylingToCell:(id)arg1 forSubitemAtIndex:(unsigned long long)arg2 inSubsection:(unsigned long long)arg3;

- (id)cellForSubitemAtIndex:(unsigned long long)arg1 inSubsection:(unsigned long long)arg2;

- (double)defaultCellHeightForSubitemAtIndex:(unsigned long long)arg1 inSubsection:(unsigned long long)arg2 forWidth:(double)arg3;

- (id)init;

- (id)initWithLocation:(_Bool)arg1;

- (_Bool)isInline;

- (unsigned long long)numberOfSubitemsInSubsection:(unsigned long long)arg1;

- (void)reset;

- (_Bool)saveAndDismissWithForce:(_Bool)arg1;

- (_Bool)textField:(id)arg1 shouldChangeCharactersInRange:(struct _NSRange)arg2 replacementString:(id)arg3;

- (void)textFieldDidBeginEditing:(id)arg1;

- (void)textFieldDidEndEditing:(id)arg1;

- (_Bool)textFieldShouldReturn:(id)arg1;



@end


