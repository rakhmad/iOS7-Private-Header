/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */



#import "CABasicAnimation.h"


@interface CASpringAnimation : CABasicAnimation

{

}



+ (id)defaultValueForKey:(id)arg1;

- (struct Animation *)_copyRenderAnimationForLayer:(id)arg1;

- (unsigned int)_propertyFlagsForLayer:(id)arg1;

- (_Bool)_setCARenderAnimation:(struct Animation *)arg1 layer:(id)arg2;

- (double)_timeFunction:(double)arg1;

@property double damping;

- (double)durationForEpsilon:(double)arg1;

@property double mass;

@property double stiffness;

@property double velocity;



@end


