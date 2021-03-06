/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */





@class AVAudioSessionMediaPlayerOnlyInternal, NSString;



@interface AVAudioSessionMediaPlayerOnly : NSObject

{

    AVAudioSessionMediaPlayerOnlyInternal *_audioSession;

}



+ (void)initialize;

- (void)_addFPListeners;

- (void)_removeFPListeners;

- (void)_setFigPlayer:(struct OpaqueFigPlayer *)arg1;

- (id)_weakReference;

@property(readonly) NSString *category;

@property(readonly) long long currentHardwareInputNumberOfChannels;

@property(readonly) long long currentHardwareOutputNumberOfChannels;

@property(readonly) double currentHardwareSampleRate;

- (void)dealloc;

@property id <AVAudioSessionDelegateMediaPlayerOnly> delegate;

- (id)init;

@property(readonly) _Bool inputIsAvailable;

- (_Bool)isApplicationAudioSession;

@property(readonly) NSString *mode;

@property(readonly) double preferredHardwareSampleRate;

@property(readonly) double preferredIOBufferDuration;

- (_Bool)setActive:(_Bool)arg1 error:(id *)arg2;

- (_Bool)setActive:(_Bool)arg1 withFlags:(long long)arg2 error:(id *)arg3;

- (void)setApplicationAudioSession:(_Bool)arg1;

- (_Bool)setCategory:(id)arg1 error:(id *)arg2;

- (_Bool)setMode:(id)arg1 error:(id *)arg2;

- (_Bool)setPreferredHardwareSampleRate:(double)arg1 error:(id *)arg2;

- (_Bool)setPreferredIOBufferDuration:(double)arg1 error:(id *)arg2;



@end


