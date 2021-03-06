/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */





#import "XPCServiceListenerDelegate.h"



@class NSString, XPCServiceListener;



@interface XPCNSServiceListener : NSObject <XPCServiceListenerDelegate>

{

    XPCServiceListener *_serviceListener;

    id <XPCNSServiceListenerDelegate> _delegate;

}



- (void).cxx_destruct;

- (void)XPCServiceListener:(id)arg1 didReceiveNewConnection:(id)arg2;

- (_Bool)XPCServiceListener:(id)arg1 shouldAcceptNewConnection:(id)arg2;

@property(readonly, nonatomic) id <XPCNSServiceListenerDelegate> delegate; // @synthesize delegate=_delegate;

- (id)initWithServiceName:(id)arg1 queue:(id)arg2 delegate:(id)arg3;

@property(readonly, nonatomic) NSString *serviceName;

- (void)shutDownCompletionBlock:(id)arg1;

- (void)start;



@end


