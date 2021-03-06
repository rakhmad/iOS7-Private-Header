/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */



#import "RadioSyncRequest.h"


@class NSArray, NSString, RadioStation;



@interface RadioUpdateStationRequest : RadioSyncRequest

{

    RadioStation *_station;

    NSString *_name;

    NSString *_stationDescription;

    NSArray *_seeds;

    long long _songMixType;

}



- (void).cxx_destruct;

- (id)_updatedStationDictionary;

- (id)changeList;

- (id)init;

- (id)initWithStation:(id)arg1;

@property(copy, nonatomic) NSString *name; // @synthesize name=_name;

@property(copy, nonatomic) NSArray *seeds; // @synthesize seeds=_seeds;

@property(nonatomic) long long songMixType; // @synthesize songMixType=_songMixType;

@property(copy, nonatomic) NSString *stationDescription; // @synthesize stationDescription=_stationDescription;

- (void)startWithCompletionHandler:(id)arg1;



@end


