/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */





#import "NSCopying.h"



@class NSError;



@interface SUPlayerStatus : NSObject <NSCopying>

{

    double _currentTime;

    double _duration;

    NSError *_error;

    long long _state;

}



- (id)copyWithZone:(struct _NSZone *)arg1;

@property(nonatomic) double currentTime; // @synthesize currentTime=_currentTime;

- (void)dealloc;

- (id)description;

@property(nonatomic) double duration; // @synthesize duration=_duration;

@property(retain, nonatomic) NSError *error; // @synthesize error=_error;

@property(nonatomic) long long playerState; // @synthesize playerState=_state;



@end

