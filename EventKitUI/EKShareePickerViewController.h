/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */



#import "UIViewController.h"



#import "EKEventAttendeePickerDelegate.h"



@class EKCalendarShareePicker, NSArray;



@interface EKShareePickerViewController : UIViewController <EKEventAttendeePickerDelegate>

{

    EKCalendarShareePicker *_picker;

    id <EKShareePickerViewControllerDelegate> _delegate;

}



- (void).cxx_destruct;

- (id)_recipientFromSharee:(id)arg1;

- (id)_shareeFromRecipient:(id)arg1;

- (void)add;

- (void)cancel;

@property(nonatomic) __weak id <EKShareePickerViewControllerDelegate> delegate; // @synthesize delegate=_delegate;

- (void)eventAttendeePicker:(id)arg1 cacheValidationStatus:(int)arg2 forEmail:(id)arg3;

- (int)eventAttendeePicker:(id)arg1 getValidationStatusForEmailAddress:(id)arg2;

- (id)initWithFrame:(struct CGRect)arg1;

- (struct CGSize)preferredContentSize;

- (void)setSearchAccountID:(id)arg1;

@property(copy, nonatomic) NSArray *sharees;

- (void)viewDidLoad;

- (void)willAnimateRotationToInterfaceOrientation:(long long)arg1 duration:(double)arg2;



@end

