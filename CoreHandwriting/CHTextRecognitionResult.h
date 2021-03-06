/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */



#import "CHRecognitionResult.h"


@class NSArray, NSString;



@interface CHTextRecognitionResult : CHRecognitionResult

{

    double _score;

    NSString *_string;

    _Bool _rare;

    NSArray *_wordRanges;

    NSArray *_wordIDs;

}



- (void)dealloc;

- (id)initWithString:(id)arg1 score:(double)arg2 rare:(_Bool)arg3 wordRanges:(id)arg4 wordIDs:(id)arg5;

@property(readonly) _Bool rare; // @synthesize rare=_rare;

@property(readonly) double score; // @synthesize score=_score;

@property(readonly) NSString *string; // @synthesize string=_string;

@property(readonly) NSArray *wordIDs; // @synthesize wordIDs=_wordIDs;

@property(readonly) NSArray *wordRanges; // @synthesize wordRanges=_wordRanges;



@end


