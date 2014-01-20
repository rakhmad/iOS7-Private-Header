/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */





@class BKSSignal, NSArray, NSObject<OS_dispatch_queue>, NSObject<OS_xpc_object>;



@interface BKSApplicationStateMonitor : NSObject

{

    NSObject<OS_xpc_object> *_connection;

    BKSSignal *_invalidationSignal;

    id _handler;

    unsigned int _interestedStates;

    NSArray *_interestedBundleIDs;

    NSObject<OS_dispatch_queue> *_queue;

    NSObject<OS_dispatch_queue> *_messageHandlingQueue;

    NSObject<OS_xpc_object> *_serverEndpoint;

}



- (id)_connection;

- (void)_setEndpoint:(id)arg1;

- (void)applicationInfoForApplication:(id)arg1 completion:(id)arg2;

- (void)applicationInfoForPID:(int)arg1 completion:(id)arg2;

- (unsigned int)applicationStateForApplication:(id)arg1;

- (id)bundleInfoValueForKey:(id)arg1 PID:(int)arg2;

- (void)dealloc;

@property(copy, nonatomic) id handler; // @dynamic handler;

- (id)init;

- (id)initWithBundleIDs:(id)arg1 states:(unsigned int)arg2;

- (id)initWithEndpoint:(id)arg1 bundleIDs:(id)arg2 states:(unsigned int)arg3;

@property(copy, nonatomic) NSArray *interestedBundleIDs; // @dynamic interestedBundleIDs;

@property(nonatomic) unsigned int interestedStates; // @dynamic interestedStates;

- (void)invalidate;

- (_Bool)isApplicationBeingDebugged:(id)arg1;

- (unsigned int)mostElevatedApplicationStateForPID:(int)arg1;

- (void)queue_connectionWasInvalidated;

- (void)queue_handleMessage:(id)arg1;

- (void)queue_invalidate;

- (void)queue_registerWithServer;

- (void)queue_reregister;

- (void)queue_setHandler:(id)arg1;

- (void)queue_setInterestedBundleIDs:(id)arg1;

- (void)queue_setInterestedStates:(unsigned int)arg1;

- (void)queue_updateInterestedStates;

- (void)queue_updateInterestedStates:(_Bool)arg1;

- (void)updateInterestedBundleIDs:(id)arg1;

- (void)updateInterestedBundleIDs:(id)arg1 states:(unsigned int)arg2;

- (void)updateInterestedStates:(unsigned int)arg1;



@end

