/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */





@class NSObject<OS_dispatch_source>, NSString;



@interface IMPingTest : NSObject

{

    NSString *_address;

    _Bool _usesWifi;

    id _collector;

    _Bool _isRunning;

    NSObject<OS_dispatch_source> *_sendTimer;

    NSObject<OS_dispatch_source> *_socketReadSource;

    double _secondsToRun;

}



- (void)_doPingWithSocket:(int)arg1 address:(struct sockaddr_in)arg2 timeToRunTestInSeconds:(double)arg3 pingTimeout:(double)arg4 queue:(id)arg5 completionHandler:(id)arg6;

- (int)_setupAndPerformPing:(double)arg1 queue:(id)arg2 completionHandler:(id)arg3;

- (void)_setupReadSource:(int)arg1 address:(struct sockaddr_in)arg2 icmID:(unsigned short)arg3 queue:(id)arg4 completionHander:(id)arg5;

- (void)dealloc;

- (id)initWithAddress:(id)arg1 wifi:(_Bool)arg2;

- (double)longTimeInterval;

- (id)pingStats;

- (id)pingStats:(double)arg1;

@property(readonly, nonatomic) double secondsToRun; // @synthesize secondsToRun=_secondsToRun;

- (void)startWithTimeout:(double)arg1 queue:(id)arg2 completionHandler:(id)arg3;

- (void)stop;

- (_Bool)writeResultsToFile:(id)arg1 error:(id *)arg2;



@end


