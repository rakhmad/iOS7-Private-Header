/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */





#import "NSCopying.h"



@class OADRotation3D;



__attribute__((visibility("hidden")))

@interface OADCamera : NSObject <NSCopying>

{

    OADRotation3D *mRotation;

    int mCameraType;

    float mFieldOfView;

    float mZoom;

}



- (int)cameraType;

- (id)copyWithZone:(struct _NSZone *)arg1;

- (void)dealloc;

- (float)fieldOfView;

- (unsigned long long)hash;

- (id)init;

- (_Bool)isEqual:(id)arg1;

- (id)rotation;

- (void)setCameraType:(int)arg1;

- (void)setFieldOfView:(float)arg1;

- (void)setRotation:(id)arg1;

- (void)setZoom:(float)arg1;

- (float)zoom;



@end

