/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */





#import "WebBookmarksXPCConnectionDelegate.h"



@class NSObject<OS_dispatch_queue>, NSObject<OS_xpc_object>, WebBookmarksXPCConnection;



@interface SSReadingList : NSObject <WebBookmarksXPCConnectionDelegate>

{

    WebBookmarksXPCConnection *_connection;

    NSObject<OS_dispatch_queue> *_serialQueue;

    NSObject<OS_xpc_object> *_batchedReadingListItems;

    _Bool _batchScheduled;

}



+ (id)defaultReadingList;

+ (_Bool)supportsURL:(id)arg1;

- (void)_addReadingListItemWithURL:(id)arg1 title:(id)arg2 previewText:(id)arg3;

- (id)_init;

- (void)_sendBatchedReadingListItems;

- (_Bool)addReadingListItemWithURL:(id)arg1 title:(id)arg2 previewText:(id)arg3 error:(id *)arg4;

- (void)connection:(id)arg1 didCloseWithError:(id)arg2;

- (void)dealloc;

- (id)init;



@end

