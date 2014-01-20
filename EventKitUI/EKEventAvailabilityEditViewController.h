/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */



#import "EKEditItemViewController.h"


#import "UITableViewDataSource.h"

#import "UITableViewDelegate.h"



@class NSMutableArray, UITableView;



__attribute__((visibility("hidden")))

@interface EKEventAvailabilityEditViewController : EKEditItemViewController <UITableViewDataSource, UITableViewDelegate>

{

    int _availability;

    unsigned long long _supportedAvailabilities;

    NSMutableArray *_choices;

    UITableView *_table;

}



- (void).cxx_destruct;

- (void)_selectRow:(unsigned long long)arg1;

@property(nonatomic) int availability; // @synthesize availability=_availability;

- (id)initWithFrame:(struct CGRect)arg1;

- (void)loadView;

@property(nonatomic) unsigned long long supportedAvailabilities;

- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;

- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;

- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;



@end

