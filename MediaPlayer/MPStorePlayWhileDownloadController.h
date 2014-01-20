/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */





#import "SSDownloadHandlerDelegate.h"

#import "UIAlertViewDelegate.h"



@class NSMutableArray, NSMutableSet, NSObject<OS_dispatch_queue>, SSDownloadHandler, SSDownloadManager;



@interface MPStorePlayWhileDownloadController : NSObject <SSDownloadHandlerDelegate, UIAlertViewDelegate>

{

    NSMutableSet *_cellularRestrictedAlertViews;

    SSDownloadHandler *_downloadHandler;

    SSDownloadManager *_downloadManager;

    NSObject<OS_dispatch_queue> *_downloadSessionQueue;

    NSMutableArray *_downloadSessions;

}



+ (id)sharedController;

- (void).cxx_destruct;

- (void)_closeSessionForAsset:(id)arg1;

- (id)_downloadSessionWithID:(id)arg1;

- (id)_init;

- (id)_openSessionWithProperties:(id)arg1 options:(id)arg2;

- (id)_openSessionWithProperties:(id)arg1 style:(long long *)arg2;

- (_Bool)_showCellularRestrictedDialogForMediaItem:(id)arg1;

- (_Bool)_showNoNetworkDialogForMediaItem:(id)arg1;

- (void)alertView:(id)arg1 didDismissWithButtonIndex:(long long)arg2;

- (_Bool)canOpenSessionWithMediaItem:(id)arg1;

- (void)dealloc;

- (void)downloadHandler:(id)arg1 cancelSession:(id)arg2;

- (void)downloadHandler:(id)arg1 handleSession:(id)arg2;

- (id)init;

- (_Bool)isSessionRequiredToPlayMediaItem:(id)arg1;

- (id)openSessionWithMediaItem:(id)arg1 options:(id)arg2;

- (_Bool)showNetworkConstraintDialogForMediaItem:(id)arg1;



@end

