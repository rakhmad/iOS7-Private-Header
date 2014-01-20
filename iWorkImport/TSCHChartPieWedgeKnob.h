/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */



#import "TSDKnob.h"


@class NSIndexSet;



__attribute__((visibility("hidden")))

@interface TSCHChartPieWedgeKnob : TSDKnob

{

    NSIndexSet *mCandidateSeriesIndices;

    NSIndexSet *mSelectedSeriesIndices;

    struct CGPoint mDistanceFromCenter;

}



- (struct CGPoint)adjustPointForHitLocation:(struct CGPoint)arg1;

@property(readonly, nonatomic) NSIndexSet *candidateSeriesIndices; // @synthesize candidateSeriesIndices=mCandidateSeriesIndices;

- (void)dealloc;

@property(readonly, nonatomic) struct CGPoint distanceFromCenter; // @synthesize distanceFromCenter=mDistanceFromCenter;

- (int)dragType;

- (id)initWithSeriesIndices:(id)arg1 onRep:(id)arg2;

- (_Bool)isHitByUnscaledPoint:(struct CGPoint)arg1 andRep:(id)arg2 returningDistance:(double *)arg3;

- (_Bool)isHitByUnscaledPoint:(struct CGPoint)arg1 andRep:(id)arg2 returningDistance:(double *)arg3 seriesIndexHit:(unsigned long long *)arg4;

- (id)layer;

- (_Bool)obscuresKnob:(id)arg1;

- (_Bool)overlapsWithKnob:(id)arg1;

@property(readonly, nonatomic) NSIndexSet *selectedSeriesIndices; // @synthesize selectedSeriesIndices=mSelectedSeriesIndices;



@end

