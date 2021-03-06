/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */





#import "NSURLConnectionDelegate.h"



@class DAStatusReport, NSDate, NSFileHandle, NSMutableData, NSString, NSTimer, NSURL, NSURLConnection;



@interface SubCalURLRequest : NSObject <NSURLConnectionDelegate>

{

    NSURL *_url;

    id <SubCalURLRequestDelegate> _delegate;

    NSString *_username;

    NSString *_password;

    double _timestamp;

    NSURLConnection *_connection;

    NSMutableData *_connectionData;

    _Bool _useFileCache;

    NSString *_filePath;

    NSFileHandle *_fileHandle;

    _Bool _sendDataUpdateCallback;

    NSDate *_startTime;

    DAStatusReport *_statusReport;

    NSTimer *_idleTimer;

    NSString *_startRunloopDescriptionString;

}



+ (id)_cachedICSFilesDirectory;

+ (void)_initializeFileCache;

- (void)_cancelIdleTimer;

- (void)_createIdleTimer;

- (void)_extendIdleTimer;

- (void)_finishWithError:(id)arg1;

- (void)_idleTimerFired;

- (void)_markEndTime;

- (void)_markStartTime;

- (void)_openFileHandle;

- (void)_receivedDataForFile:(id)arg1;

- (void)_respondToChallenge:(id)arg1 withCredential:(id)arg2 noCredentialBehavior:(int)arg3;

- (void)_setHeadersOnRequest:(id)arg1;

- (void)cancel;

- (_Bool)connection:(id)arg1 canAuthenticateAgainstProtectionSpace:(id)arg2;

- (void)connection:(id)arg1 didFailWithError:(id)arg2;

- (void)connection:(id)arg1 didReceiveAuthenticationChallenge:(id)arg2;

- (void)connection:(id)arg1 didReceiveData:(id)arg2;

- (void)connection:(id)arg1 didReceiveResponse:(id)arg2;

- (id)connection:(id)arg1 willSendRequest:(id)arg2 redirectResponse:(id)arg3;

@property(retain, nonatomic) NSMutableData *connectionData; // @synthesize connectionData=_connectionData;

- (void)connectionDidFinishLoading:(id)arg1;

- (void)dealloc;

@property(nonatomic) id <SubCalURLRequestDelegate> delegate; // @synthesize delegate=_delegate;

@property(readonly, nonatomic) NSString *filePath; // @synthesize filePath=_filePath;

- (id)initWithURL:(id)arg1;

@property(copy, nonatomic) NSString *password; // @synthesize password=_password;

@property(retain, nonatomic) DAStatusReport *statusReport; // @synthesize statusReport=_statusReport;

@property double timestamp; // @synthesize timestamp=_timestamp;

@property _Bool useFileCache; // @synthesize useFileCache=_useFileCache;

@property(copy, nonatomic) NSString *username; // @synthesize username=_username;

- (void)startConnection;

@property(readonly, nonatomic) NSURL *url; // @synthesize url=_url;



@end


