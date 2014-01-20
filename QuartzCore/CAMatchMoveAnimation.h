/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */



#import "CAAnimation.h"


@class CALayer, NSArray, NSString;



@interface CAMatchMoveAnimation : CAAnimation

{

}



+ (id)defaultValueForKey:(id)arg1;

- (struct Animation *)_copyRenderAnimationForLayer:(id)arg1;

- (unsigned int)_propertyFlagsForLayer:(id)arg1;

- (_Bool)_setCARenderAnimation:(struct Animation *)arg1 layer:(id)arg2;

@property _Bool appliesRotation;

@property _Bool appliesScale;

@property _Bool appliesX;

@property _Bool appliesY;

- (void)applyForTime:(double)arg1 presentationObject:(id)arg2 modelObject:(id)arg3;

@property(getter=isAdditive) _Bool additive;

@property(copy) NSString *keyPath;

@property(retain) CALayer *sourceLayer;

@property(copy) NSArray *sourcePoints;

@property _Bool targetsSuperlayer;



@end

