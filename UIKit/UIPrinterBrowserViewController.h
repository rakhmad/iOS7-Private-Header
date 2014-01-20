/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */



#import "UITableViewController.h"


#import "PKPrinterBrowserDelegate.h"



@class NSArray, NSMutableArray, PKPrinter, PKPrinterBrowser, UIPrintPanelViewController, UIPrinterSearchingView;



__attribute__((visibility("hidden")))

@interface UIPrinterBrowserViewController : UITableViewController <PKPrinterBrowserDelegate>

{

    UIPrintPanelViewController *_printPanelViewController;

    PKPrinterBrowser *_printerBrowser;

    NSMutableArray *_preferredPrinters;

    NSMutableArray *_otherPrinters;

    NSArray *_lastUsedPrinters;

    PKPrinter *_lockedPrinter;

    _Bool _loaded;

    UIPrinterSearchingView *_searchingView;

    _Bool _clearCurrentPrinter;

}



- (void)addPrinter:(id)arg1 moreComing:(_Bool)arg2;

- (void)adjustPopoverSize;

- (void)dealloc;

- (id)initWithPrintPanelViewController:(id)arg1;

- (void)loadView;

- (long long)numberOfSectionsInTableView:(id)arg1;

- (id)printerAtIndexPath:(id)arg1;

- (void)removePrinter:(id)arg1 moreGoing:(_Bool)arg2;

- (void)selectPrinter:(id)arg1;

- (_Bool)shouldAutorotateToInterfaceOrientation:(long long)arg1;

- (void)startPrinterBrowser;

- (void)stopPrinterBrowser;

- (unsigned long long)supportedInterfaceOrientations;

- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;

- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;

- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;

- (id)tableView:(id)arg1 titleForHeaderInSection:(long long)arg2;

- (void)updateSearching;

- (void)viewDidDisappear:(_Bool)arg1;

- (void)viewWillAppear:(_Bool)arg1;

- (void)viewWillDisappear:(_Bool)arg1;

- (void)willEnterForeground;



@end

