/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */





#import "NSXPCConnectionDelegate.h"

#import "_UIViewServiceDeputyDelegate.h"

#import "_UIViewServiceSession_HostInterface.h"

#import "_UIViewServiceViewControllerOperatorDelegate.h"



@class NSLock, NSMutableDictionary, NSMutableSet, NSObject<OS_dispatch_queue>, NSXPCConnection, _UIAsyncInvocation;



__attribute__((visibility("hidden")))

@interface _UIViewServiceSession : NSObject <_UIViewServiceDeputyDelegate, NSXPCConnectionDelegate, _UIViewServiceViewControllerOperatorDelegate, _UIViewServiceSession_HostInterface>

{

    NSObject<OS_dispatch_queue> *_queue;

    NSXPCConnection *_connection;

    NSMutableDictionary *_connectionHandlers;

    NSLock *_connectionHandlersLock;

    _UIAsyncInvocation *_invalidationInvocation;

    NSMutableSet *_deputies;

    id _terminationHandler;

    int __automatic_invalidation_retainCount;

    _Bool __automatic_invalidation_invalidated;

}



+ (id)exportedInterfaceSupportingDeputyInterfaces:(id)arg1;

+ (id)sessionWithConnection:(id)arg1;

- (int)__automatic_invalidation_logic;

- (void)__prototype_requestConnectionToDeputyFromHostObject:(id)arg1 replyHandler:(id)arg2;

- (void)__requestConnectionToDeputyOfClass:(Class)arg1 fromHostObject:(byref id)arg2 replyHandler:(id)arg3;

- (void)__requestConnectionToDeputyOfType:(id)arg1 withReplyHandler:(id)arg2;

- (Class)_deputyClassForConnectionSelector:(SEL)arg1;

- (void)_invalidateUnconditionallyThen:(id)arg1;

- (_Bool)_isDeallocating;

- (_Bool)_tryRetain;

- (void)checkDeputyForRotation:(id)arg1;

- (void)connection:(id)arg1 handleInvocation:(id)arg2 isReply:(_Bool)arg3;

- (void)dealloc;

- (void)deputy:(id)arg1 didFailWithError:(id)arg2;

- (void)forwardInvocation:(id)arg1;

- (id)methodSignatureForSelector:(SEL)arg1;

- (void)registerDeputyClass:(Class)arg1 withConnectionHandler:(id)arg2;

- (oneway void)release;

- (id)retain;

- (unsigned long long)retainCount;

@property(copy, nonatomic) id terminationHandler; // @synthesize terminationHandler=_terminationHandler;

- (void)unregisterDeputyClass:(Class)arg1;

- (void)viewControllerOperator:(id)arg1 didCreateServiceViewControllerOfClass:(Class)arg2;



@end

