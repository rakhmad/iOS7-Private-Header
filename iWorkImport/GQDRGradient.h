/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */





#import "GQDNameMappable.h"



__attribute__((visibility("hidden")))

@interface GQDRGradient : NSObject <GQDNameMappable>

{

    struct __CFArray *mStops;

    int mType;

    float mOpacity;

    float mAngle;

    struct CGPoint mStart;

    struct CGPoint mEnd;

}



+ (const struct StateSpec *)stateForReading;

- (id).cxx_construct;

- (float)angle;

- (void)dealloc;

- (struct CGPoint)end;

- (float)opacity;

- (int)readAttributesFromReader:(struct _xmlTextReader *)arg1;

- (struct CGPoint)start;

- (struct __CFArray *)stops;

- (int)type;



@end

