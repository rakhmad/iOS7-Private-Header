/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */





#import "NSXPCProxyCreating.h"



@class NSObject<OS_dispatch_queue>, NSString, NSXPCInterface, NSXPCListenerEndpoint;



@interface NSXPCConnection : NSObject <NSXPCProxyCreating>

{

    void *_xconnection;

    id _incomingReplyInfo;

    NSObject<OS_dispatch_queue> *_userQueue;

    unsigned int _state;

    unsigned int _state2;

    id _interruptionHandler;

    id _invalidationHandler;

    id _exportInfo;

    id _replyInfo;

    id _importInfo;

    id <NSObject> _otherInfo;

    id _reserved1;

    id _lock;

    NSXPCInterface *_remoteObjectInterface;

    NSString *_serviceName;

    NSXPCListenerEndpoint *_endpoint;

    id _eCache;

    id _dCache;

}



+ (void)beginTransaction;

+ (id)currentConnection;

+ (void)endTransaction;

- (void)_addClassToDecodeCache:(Class)arg1;

- (void)_addClassToEncodeCache:(Class)arg1;

- (void)_addImportedProxy:(unsigned long long)arg1;

- (void)_decodeAndInvokeMessageWithData:(id)arg1;

- (void)_decodeAndInvokeReplyBlockWithData:(id)arg1;

- (_Bool)_decodeCacheContainsClass:(Class)arg1;

- (_Bool)_encodeCacheContainsClass:(Class)arg1;

- (id)_exportTable;

- (id)_initWithPeerConnection:(id)arg1 name:(id)arg2 options:(unsigned long long)arg3;

- (void)_invalidate:(_Bool)arg1;

- (id)_queue;

- (void)_removeImportedProxy:(unsigned long long)arg1;

- (void)_sendDesistForProxyNumber:(unsigned long long)arg1;

- (void)_sendInvocation:(id)arg1 proxyNumber:(unsigned long long)arg2 remoteInterface:(id)arg3;

- (void)_sendInvocation:(id)arg1 proxyNumber:(unsigned long long)arg2 remoteInterface:(id)arg3 withErrorHandler:(id)arg4;

- (void)_sendInvocation:(id)arg1 proxyNumber:(unsigned long long)arg2 remoteInterface:(id)arg3 withErrorHandler:(id)arg4 timeout:(void)arg5;

- (void)_sendInvocation:(id)arg1 proxyNumber:(unsigned long long)arg2 remoteInterface:(id)arg3 withErrorHandler:(id)arg4 timeout:(void)arg5 userInfo:(double)arg6;

- (void)_setQueue:(id)arg1;

- (void)_setUUID:(id)arg1;

- (void)addBarrierBlock:(id)arg1;

@property(readonly) int auditSessionIdentifier;

- (CDStruct_6ad76789)auditToken;

- (void)dealloc;

- (id)debugDescription;

- (id)delegate;

@property(readonly) unsigned int effectiveGroupIdentifier;

@property(readonly) unsigned int effectiveUserIdentifier;

@property(readonly) NSXPCListenerEndpoint *endpoint;

@property(retain) NSXPCInterface *exportedInterface;

@property(retain) id exportedObject;

- (void)finalize;

- (id)init;

- (id)initWithEndpoint:(id)arg1;

- (id)initWithListenerEndpoint:(id)arg1;

- (id)initWithMachServiceName:(id)arg1;

- (id)initWithMachServiceName:(id)arg1 options:(unsigned long long)arg2;

- (id)initWithServiceName:(id)arg1;

- (id)initWithServiceName:(id)arg1 options:(unsigned long long)arg2;

@property(copy) id interruptionHandler;

- (void)invalidate;

@property(copy) id invalidationHandler;

@property(readonly) int processIdentifier;

@property(retain) NSXPCInterface *remoteObjectInterface; // @synthesize remoteObjectInterface=_remoteObjectInterface;

- (id)remoteObjectProxy;

- (id)remoteObjectProxyWithErrorHandler:(id)arg1;

- (id)remoteObjectProxyWithTimeout:(double)arg1 errorHandler:(id)arg2;

- (id)remoteObjectProxyWithUserInfo:(id)arg1 errorHandler:(id)arg2;

- (id)replacementObjectForEncoder:(id)arg1 object:(id)arg2;

- (void)resume;

@property(readonly) NSString *serviceName;

- (void)setDelegate:(id)arg1;

- (void)setOptions:(unsigned long long)arg1;

- (void)setUserInfo:(id)arg1;

- (void)start;

- (void)stop;

- (void)suspend;

- (id)userInfo;

- (id)valueForEntitlement:(id)arg1;



@end


