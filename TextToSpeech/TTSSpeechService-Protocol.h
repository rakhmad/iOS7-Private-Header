/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */





@protocol TTSSpeechService <NSObject>

- (oneway void)continueSpeechRequest;

- (oneway void)getFootprintsForVoiceName:(id)arg1 languageCode:(id)arg2 reply:(id)arg3;

- (oneway void)getSpeechIsActiveForConnectionReply:(id)arg1;

- (oneway void)getSpeechIsActiveReply:(id)arg1;

- (oneway void)getVoiceNamesForLanguage:(id)arg1 reply:(id)arg2;

- (oneway void)pauseSpeechRequestAtMark:(long long)arg1 reply:(id)arg2;

- (oneway void)startSpeechRequest:(id)arg1;

- (oneway void)stopSpeechRequestAtMark:(long long)arg1 reply:(id)arg2;

@end


