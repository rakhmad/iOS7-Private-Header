/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */





#import "NSCopying.h"



__attribute__((visibility("hidden")))

@interface TSUDuration : NSObject <NSCopying>

{

    double mTimeInterval;

}



+ (id)durationWithTimeInterval:(double)arg1;

- (id)copyWithZone:(struct _NSZone *)arg1;

- (unsigned long long)hash;

- (id)initWithTimeInterval:(double)arg1;

- (_Bool)isEqual:(id)arg1;

- (double)timeInterval;



@end

