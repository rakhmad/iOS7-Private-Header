/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */



#import "SUTableViewController.h"


@class SUDocumentInteractionSession;



@interface SUItemTableViewController : SUTableViewController

{

    SUDocumentInteractionSession *_documentInteractionSession;

}



- (void)_chooseApplicationToOpenDocumentAtIndexPath:(id)arg1 withCompletionHandler:(id)arg2;

- (void)_hidePurchaseConfirmationForButton:(id)arg1;

- (id)_preferredApplicationFromCandidates:(id)arg1;

- (void)_promptToOpenUTI:(id)arg1 fromIndexPath:(id)arg2 withCompletionHandler:(id)arg3;

- (void)_purchasedItemSetChangedNotification:(id)arg1;

- (void)_removeTouchCaptureView;

- (void)_restrictionsChangedNotification:(id)arg1;

- (void)_showPurchaseConfirmationForButton:(id)arg1;

- (id)_tableCellForButton:(id)arg1;

- (void)_touchCaptureAction:(id)arg1;

- (void)dealloc;

- (id)init;

- (id)itemAtIndexPath:(id)arg1;

- (void)itemOfferButtonAction:(id)arg1;

- (_Bool)openDocumentForItemAtIndexPath:(id)arg1 withApplication:(id)arg2;

- (_Bool)purchaseItemAtIndexPath:(id)arg1;

- (void)reloadData;

- (void)viewWillDisappear:(_Bool)arg1;



@end


