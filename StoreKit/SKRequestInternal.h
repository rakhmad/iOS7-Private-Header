/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */





@class SKPaymentQueueClient, SKXPCConnection;



@interface SKRequestInternal : NSObject

{

    long long _backgroundTaskIdentifier;

    SKPaymentQueueClient *_client;

    SKXPCConnection *_connection;

    id <SKRequestDelegate> _delegate;

    int _state;

}



- (void)dealloc;



@end

