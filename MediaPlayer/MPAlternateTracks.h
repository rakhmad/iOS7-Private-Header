/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */





#import "AVPlayerItemLegibleOutputPushDelegate.h"



@class AVPlayerItemLegibleOutput, MPAVItem, MPAlternateTextTrack, NSArray, NSDictionary, NSMutableDictionary;



@interface MPAlternateTracks : NSObject <AVPlayerItemLegibleOutputPushDelegate>

{

    MPAVItem *_item;

    NSDictionary *_alternateTracks;

    NSMutableDictionary *_trackChangeDictionary;

    _Bool _disableAlternateTextTrackRendering;

    AVPlayerItemLegibleOutput *_legibleOutput;

    MPAlternateTextTrack *_currentTextTrack;

    NSArray *_outOfBandTextTracks;

}



+ (id)accessibleSubtitleCharacteristics;

+ (id)subtitleLanguages;

- (void).cxx_destruct;

- (id)_currentTextTrackAccordingToAVF;

- (id)_keyForTrackType:(unsigned long long)arg1;

- (void)_suppressAVFSubtitleRendering;

- (void)beginTrackChanges;

- (void)commitTrackChanges;

- (id)currentTrackForType:(unsigned long long)arg1;

@property(nonatomic) _Bool disableAlternateTextTrackRendering; // @synthesize disableAlternateTextTrackRendering=_disableAlternateTextTrackRendering;

- (void)enableLegibleOutputIfNecessary;

- (_Bool)hasTracksForTypes:(unsigned long long)arg1;

- (unsigned long long)indexOfCurrentTrackForType:(unsigned long long)arg1;

- (id)initWithItem:(id)arg1;

@property(readonly, nonatomic, getter=isLoaded) _Bool loaded;

- (void)legibleOutput:(id)arg1 didOutputAttributedStrings:(id)arg2 nativeSampleBuffers:(id)arg3 forItemTime:(CDStruct_1b6d18a9)arg4;

@property(retain, nonatomic) NSArray *outOfBandTextTracks; // @synthesize outOfBandTextTracks=_outOfBandTextTracks;

- (void)reloadData;

- (void)reloadDataWithChangedCaptionDisplayType:(_Bool)arg1;

@property(retain, nonatomic) MPAlternateTextTrack *selectedAlternateTextTrack;

- (void)setTrack:(id)arg1 forType:(unsigned long long)arg2;

- (unsigned long long)trackCountForTypes:(unsigned long long)arg1;

- (id)tracksForType:(unsigned long long)arg1;



@end


