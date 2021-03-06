/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */





__attribute__((visibility("hidden")))

@interface CIBurstFaceScoreEntry : NSObject

{

    float maxScore;

    float minScore;

    float sumScores;

    float sumSqScores;

    int numScores;

}



- (void)addScore:(float)arg1;

- (float)computeAverage;

- (float)computeStandardDeviation;

- (id)initWithScore:(float)arg1;

@property float maxScore; // @synthesize maxScore;

@property float minScore; // @synthesize minScore;



@end


