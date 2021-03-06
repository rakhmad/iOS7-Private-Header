/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */





@class CUTWeakReference, NSMutableArray;



@interface CUTPowerMonitor : NSObject

{

    CUTWeakReference *_iokitDelegate;

    struct __CFRunLoopSource *_batteryRunLoopSource;

    struct IONotificationPort *_batteryIONotifyPort;

    unsigned int _batteryNotificationRef;

    unsigned int _pmConnection;

    struct IONotificationPort *_pmPort;

    unsigned int _pmNotifier;

    NSMutableArray *_delegates;

    _Bool _isExternalPowerConnected;

    double _currentLevel;

}



+ (id)sharedInstance;

- (void)_handlePowerChangedNotificationWithMessageType:(unsigned int)arg1 notificationID:(void *)arg2;

- (_Bool)_updateBatteryConnectedStateWithBatteryEntry:(unsigned int)arg1;

- (void)addDelegate:(id)arg1;

@property(readonly, nonatomic) double batteryPercentRemaining;

@property(nonatomic) double currentLevel; // @synthesize currentLevel=_currentLevel;

- (void)dealloc;

- (id)init;

@property(nonatomic) _Bool isExternalPowerConnected; // @synthesize isExternalPowerConnected=_isExternalPowerConnected;

- (void)removeDelegate:(id)arg1;

- (void)setExternalPowerConnected:(_Bool)arg1;

- (void)updateBatteryConnectedStateWithBatteryEntry:(unsigned int)arg1;

- (void)updateBatteryLevelWithBatteryEntry:(unsigned int)arg1;



@end


