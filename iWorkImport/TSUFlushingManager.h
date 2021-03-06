/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */





@class NSCondition, NSThread, TSUMemoryWatcher, TSUPointerKeyDictionary, TSURetainedPointerKeyDictionary;



__attribute__((visibility("hidden")))

@interface TSUFlushingManager : NSObject

{

    TSURetainedPointerKeyDictionary *_objects;

    struct set<TSUFlushableObjectInfo *, TSUFlushableObjectInfoPointerFlushingOrderLess, std::__1::allocator<TSUFlushableObjectInfo *>> *_sortedObjects;

    struct set<TSUFlushableObjectInfo *, TSUFlushableObjectInfoPointerTimeStampLess, std::__1::allocator<TSUFlushableObjectInfo *>> *_sortedNewObjects;

    TSUPointerKeyDictionary *_inactiveObjects;

    unsigned int _clock;

    _Bool _alwaysFlushing;

    _Bool _stopFlushing;

    _Bool _stopFlushingWhenQueueEmpty;

    _Bool _isFlushing;

    id <TSUFlushable> _flushingObject;

    NSCondition *_cond;

    NSCondition *_isFlushingCond;

    TSUMemoryWatcher *_memoryWatcher;

    NSThread *_bgThread;

    unsigned long long _backgroundTransitionTaskId;

    unsigned long long _activeBgThreadTask;

}



+ (id)_singletonAlloc;

+ (id)allocWithZone:(struct _NSZone *)arg1;

+ (id)sharedManager;

- (void)_backgroundThread:(id)arg1;

- (void)_bgTaskFinished;

- (void)_bgTaskStarted;

- (void)_bgThreadActive;

- (void)_bgThreadInactive;

- (void)_didUseObject:(id)arg1;

- (void)_flushAllEligible;

- (void)_startFlushingObjects;

- (void)_stopFlushingObjects;

- (void)addObject:(id)arg1;

- (void)advanceClock;

- (id)autorelease;

- (_Bool)controlsActiveObject:(id)arg1;

- (_Bool)controlsInactiveObject:(id)arg1;

- (id)copyWithZone:(struct _NSZone *)arg1;

- (void)dealloc;

- (void)didEnterBackground;

- (void)didReceiveMemoryWarning;

- (void)doneWithObject:(id)arg1;

- (struct TSUFlushableObjectInfo *)eraseInfoForObject:(id)arg1;

- (id)init;

- (void)insertObjectInfo:(struct TSUFlushableObjectInfo *)arg1;

- (_Bool)isNewObject:(struct TSUFlushableObjectInfo *)arg1;

- (void)memoryLevelDecreased:(int)arg1 was:(int)arg2;

- (void)memoryLevelIncreased:(int)arg1 was:(int)arg2;

- (void)protectObject:(id)arg1;

- (oneway void)release;

- (void)removeObject:(id)arg1;

- (id)retain;

- (unsigned long long)retainCount;

- (void)safeToFlush:(id)arg1 wasAccessed:(_Bool)arg2;

- (void)stopProtectingObject:(id)arg1;

- (void)transferNewObjects;

- (void)unsafeToFlush:(id)arg1;

- (void)willEnterForeground;



@end


