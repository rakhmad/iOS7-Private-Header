/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */



#import "CMLogItem.h"


@interface CMOnBodyStatus : CMLogItem

{

    int fResult;

    int fConfidence;

}



@property(readonly, nonatomic) long long confidence;

- (id)initWithOnBodyResult:(int)arg1 confidence:(int)arg2 timestamp:(double)arg3;

@property(readonly, nonatomic) long long result;



@end

