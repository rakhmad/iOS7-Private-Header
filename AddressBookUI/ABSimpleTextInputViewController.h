/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */



#import "UITableViewController.h"



#import "ABPropertyEditingTableViewCellDelegate.h"



@class NSString;



@interface ABSimpleTextInputViewController : UITableViewController <ABPropertyEditingTableViewCellDelegate>

{

    id <ABSimpleTextInputViewControllerDelegate> _delegate;

    id _value;

    NSString *_placeholder;

    id <ABStyleProvider> _styleProvider;

}



- (_Bool)_allowsAutorotation;

- (_Bool)_isSupportedInterfaceOrientation:(long long)arg1;

- (double)ab_heightToFitForViewInPopoverView;

- (void)cancel:(id)arg1;

- (void)dealloc;

@property(nonatomic) id <ABSimpleTextInputViewControllerDelegate> delegate; // @synthesize delegate=_delegate;

- (id)init;

- (long long)numberOfSectionsInTableView:(id)arg1;

@property(copy, nonatomic) NSString *placeholder; // @synthesize placeholder=_placeholder;

- (void)propertyEditingTableViewCell:(id)arg1 valueDidChange:(id)arg2;

- (void)save:(id)arg1;

@property(copy, nonatomic) NSString *stringValue; // @synthesize stringValue=_value;

@property(retain, nonatomic) id <ABStyleProvider> styleProvider; // @synthesize styleProvider=_styleProvider;

- (void)setTitleLocalizationKey:(id)arg1;

- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;

- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;

- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;

- (id)tableView:(id)arg1 willSelectRowAtIndexPath:(id)arg2;

- (void)updateSaveButton;

- (void)viewDidLoad;

- (void)viewWillAppear:(_Bool)arg1;

- (void)viewWillDisappear:(_Bool)arg1;



@end


