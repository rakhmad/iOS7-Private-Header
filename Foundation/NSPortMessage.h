/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */





@class NSMutableArray, NSPort;



@interface NSPortMessage : NSObject

{

    NSPort *localPort;

    NSPort *remotePort;

    NSMutableArray *components;

    unsigned int msgid;

    void *reserved2;

    void *reserved;

}



- (id)components;

- (id)copyWithZone:(struct _NSZone *)arg1;

- (void)dealloc;

- (id)initWithReceivePort:(id)arg1 sendPort:(id)arg2 components:(id)arg3;

- (id)initWithSendPort:(id)arg1 receivePort:(id)arg2 components:(id)arg3;

- (unsigned int)msgid;

- (id)receivePort;

- (_Bool)sendBeforeDate:(id)arg1;

- (id)sendPort;

- (void)setMsgid:(unsigned int)arg1;



@end


