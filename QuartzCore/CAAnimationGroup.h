/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */



#import "CAAnimation.h"


@class NSArray;



@interface CAAnimationGroup : CAAnimation

{

}



- (void)CA_prepareRenderValue;

- (struct Animation *)_copyRenderAnimationForLayer:(id)arg1;

- (unsigned int)_propertyFlagsForLayer:(id)arg1;

@property(copy) NSArray *animations;

- (void)applyForTime:(double)arg1 presentationObject:(id)arg2 modelObject:(id)arg3;

- (void)setDefaultDuration:(double)arg1;



@end

