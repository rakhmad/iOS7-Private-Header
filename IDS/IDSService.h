/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */





@class NSArray, NSSet, _IDSService;



@interface IDSService : NSObject

{

    _IDSService *_internal;

}



@property(readonly, nonatomic) _IDSService *_internal;

@property(readonly, nonatomic) NSSet *accounts;

- (void)addDelegate:(id)arg1 queue:(id)arg2;

- (void)dealloc;

@property(readonly, nonatomic) NSArray *devices;

- (id)initWithService:(id)arg1;

- (id)initWithService:(id)arg1 commands:(id)arg2;

- (void)removeDelegate:(id)arg1;

- (void)requestKeepAlive;

- (_Bool)sendMessage:(id)arg1 fromAccount:(id)arg2 toDestinations:(id)arg3 options:(id)arg4 identifier:(id *)arg5 error:(id *)arg6;

- (_Bool)sendMessage:(id)arg1 fromAccount:(id)arg2 toDestinations:(id)arg3 priority:(long long)arg4 options:(id)arg5 identifier:(id *)arg6 error:(id *)arg7;

- (_Bool)sendServerMessage:(id)arg1 command:(id)arg2 fromAccount:(id)arg3;



@end


