/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */





__attribute__((visibility("hidden")))

@interface VKLandmarkIconGenerator : NSObject

{

}



+ (id)sharedGenerator;

- (_Bool)canHandleStyle:(CDStruct_cf20f7af *)arg1;

- (id)keyForName:(id)arg1 style:(CDStruct_cf20f7af *)arg2;

- (id)newIconWithMask:(struct CGImage *)arg1 outlineMask:(struct CGImage *)arg2 style:(CDStruct_cf20f7af *)arg3 scale:(double)arg4;



@end

