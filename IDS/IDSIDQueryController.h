/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */





@class _IDSIDQueryController;



@interface IDSIDQueryController : NSObject

{

    _IDSIDQueryController *_internal;

}



+ (id)sharedInstance;

- (long long)_currentCachedIDStatusForDestination:(id)arg1 service:(id)arg2 listenerID:(id)arg3;

- (_Bool)_flushQueryCacheForService:(id)arg1;

- (_Bool)_hasCacheForService:(id)arg1;

- (_Bool)_warmupQueryCacheForService:(id)arg1;

- (void)addDelegate:(id)arg1 forService:(id)arg2 listenerID:(id)arg3 queue:(id)arg4;

- (void)addDelegate:(id)arg1 queue:(id)arg2;

- (void)addListenerID:(id)arg1 forService:(id)arg2;

- (_Bool)currentIDStatusForDestination:(id)arg1 service:(id)arg2 listenerID:(id)arg3 queue:(id)arg4 completionBlock:(id)arg5;

- (_Bool)currentIDStatusForDestinations:(id)arg1 service:(id)arg2 listenerID:(id)arg3 queue:(id)arg4 completionBlock:(id)arg5;

- (void)dealloc;

- (id)init;

- (_Bool)refreshIDStatusForDestination:(id)arg1 service:(id)arg2 listenerID:(id)arg3 queue:(id)arg4 completionBlock:(id)arg5;

- (_Bool)refreshIDStatusForDestinations:(id)arg1 service:(id)arg2 listenerID:(id)arg3 queue:(id)arg4 completionBlock:(id)arg5;

- (void)removeDelegate:(id)arg1;

- (void)removeDelegate:(id)arg1 forService:(id)arg2 listenerID:(id)arg3;

- (_Bool)removeListenerID:(id)arg1 forService:(id)arg2;

- (_Bool)requestIDStatusForDestination:(id)arg1 service:(id)arg2 listenerID:(id)arg3 queue:(id)arg4 completionBlock:(id)arg5;

- (_Bool)requestIDStatusForDestinations:(id)arg1 service:(id)arg2 listenerID:(id)arg3 queue:(id)arg4 completionBlock:(id)arg5;



@end

