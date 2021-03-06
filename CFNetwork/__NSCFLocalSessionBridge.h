/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */



#import "__NSCFSessionBridge.h"


@class NSObject<OS_dispatch_queue>, __NSCFURLSession;



__attribute__((visibility("hidden")))

@interface __NSCFLocalSessionBridge : __NSCFSessionBridge

{

    __NSCFURLSession *_session;

    unsigned long long _identSeed;

    struct __CFURLConnectionSession *_connectionSession;

    struct __CFDictionary *_tasks;

    NSObject<OS_dispatch_queue> *_invalidateQueue;

    id _invalidateCallback;

}



- (void)_onqueue_checkForCompletion;

- (void)_onqueue_connectUploadTask:(id)arg1 strippedRequest:(id)arg2 bodyStream:(id)arg3 bodyParts:(id)arg4;

- (void)_onqueue_invokeInvalidateCallback;

- (void)_onqueue_withDataTaskForSession:(id)arg1 perform:(id)arg2;

- (void)_onqueue_withDownloadTaskForSession:(id)arg1 perform:(id)arg2;

- (void)bridgeInvalidated:(id)arg1;

- (const struct ClassicConnectionSession *)classicConnectionSession;

- (id)connToTask:(struct _CFURLConnection *)arg1;

- (id)copyTasks;

- (id)dataTaskForRequest:(id)arg1 completion:(id)arg2;

- (void)dealloc;

- (void)demuxv:(struct __CFString *)arg1 args:(struct __va_list_tag [1])arg2;

- (id)downloadTaskForRequest:(id)arg1 resumeData:(id)arg2 completion:(id)arg3;

- (void)flushStorageWithCompletionHandler:(id)arg1;

- (id)initWithConfiguration:(id)arg1 session:(id)arg2 queue:(id)arg3;

- (void)invalidateSession:(_Bool)arg1 withQueue:(id)arg2 completion:(id)arg3;

- (void)operationCompleted:(id)arg1;

- (void)replaceTask:(id)arg1 withDownloadTask:(id)arg2;

- (void)resetStorageWithCompletionHandler:(id)arg1;

- (void)statusMessage:(struct __CFString *)arg1;

- (void)task:(id)arg1 challenged:(struct _CFURLAuthChallenge *)arg2 authCallback:(id)arg3;

- (void)task:(id)arg1 didFinishLoadingWithError:(struct __CFError *)arg2;

- (void)task:(id)arg1 didReceiveData:(id)arg2;

- (void)task:(id)arg1 didReceiveResponse:(struct _CFURLResponse *)arg2;

- (void)task:(id)arg1 request:(struct _CFURLRequest *)arg2 needsNewBodyStreamCallback:(id)arg3;

- (void)task:(id)arg1 sentBodyBytes:(id)arg2 totalBytes:(id)arg3 expectedBytes:(id)arg4;

- (void)task:(id)arg1 wasRedirected:(struct _CFURLResponse *)arg2 newRequest:(struct _CFURLRequest *)arg3 responseCallback:(id)arg4;

- (void)task:(id)arg1 willCacheResponse:(struct _CFCachedURLResponse *)arg2 responseCallback:(id)arg3;

- (void)taskCreated:(id)arg1;

- (void)taskDidFinishLoading:(id)arg1;

- (id)taskForClass:(Class)arg1 request:(id)arg2 uploadFile:(id)arg3 bodyData:(id)arg4 completion:(id)arg5;

- (void)taskTerminating:(id)arg1;

- (id)uploadTaskForRequest:(id)arg1 uploadFile:(id)arg2 bodyData:(id)arg3 completion:(id)arg4;



@end


