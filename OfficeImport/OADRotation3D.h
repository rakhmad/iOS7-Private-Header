/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */





#import "NSCopying.h"



__attribute__((visibility("hidden")))

@interface OADRotation3D : NSObject <NSCopying>

{

    float mLatitude;

    float mLongitude;

    float mRevolution;

}



- (id)copyWithZone:(struct _NSZone *)arg1;

- (unsigned long long)hash;

- (id)initWithLatitude:(float)arg1 longitude:(float)arg2 revolution:(float)arg3;

- (_Bool)isEqual:(id)arg1;

- (float)latitude;

- (float)longitude;

- (float)revolution;



@end

