/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */





#import "VSSpeechServiceDelegate.h"



@class VSSpeechConnection, VSSpeechRequest;



@interface VSSpeechConnectionDelegateWrapper : NSObject <VSSpeechServiceDelegate>

{

    id <VSSpeechConnectionDelegate> _delegate;

    VSSpeechRequest *_request;

    VSSpeechConnection *_connection;

}



- (void).cxx_destruct;

@property(nonatomic) __weak VSSpeechConnection *connection; // @synthesize connection=_connection;

@property(nonatomic) __weak id <VSSpeechConnectionDelegate> delegate; // @synthesize delegate=_delegate;

@property(retain, nonatomic) VSSpeechRequest *request; // @synthesize request=_request;

- (oneway void)speechRequestDidContinue;

- (oneway void)speechRequestDidPause;

- (oneway void)speechRequestDidStart;

- (oneway void)speechRequestDidStopWithSuccess:(_Bool)arg1 phonemesSpoken:(id)arg2 error:(id)arg3;

- (oneway void)speechRequestMark:(long long)arg1 didStartForRange:(struct _NSRange)arg2;



@end

