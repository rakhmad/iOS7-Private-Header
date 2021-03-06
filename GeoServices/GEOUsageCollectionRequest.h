/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */



#import "PBRequest.h"



#import "NSCopying.h"



@class NSMutableArray;



@interface GEOUsageCollectionRequest : PBRequest <NSCopying>

{

    NSMutableArray *_directionsFeedbackCollections;

    NSMutableArray *_mapsUsageFeedbackCollections;

    NSMutableArray *_placeSearchFeedbackCollections;

    NSMutableArray *_suggestionsFeedbackCollections;

    NSMutableArray *_transitAppLaunchFeedbackCollections;

    NSMutableArray *_usageCollections;

}



- (void)addDirectionsFeedbackCollection:(id)arg1;

- (void)addMapsUsageFeedbackCollection:(id)arg1;

- (void)addPlaceSearchFeedbackCollection:(id)arg1;

- (void)addSuggestionsFeedbackCollection:(id)arg1;

- (void)addTransitAppLaunchFeedbackCollection:(id)arg1;

- (void)addUsageCollection:(id)arg1;

- (void)clearDirectionsFeedbackCollections;

- (void)clearMapsUsageFeedbackCollections;

- (void)clearPlaceSearchFeedbackCollections;

- (void)clearSuggestionsFeedbackCollections;

- (void)clearTransitAppLaunchFeedbackCollections;

- (void)clearUsageCollections;

- (void)copyTo:(id)arg1;

- (id)copyWithZone:(struct _NSZone *)arg1;

- (void)dealloc;

- (id)description;

- (id)dictionaryRepresentation;

- (id)directionsFeedbackCollectionAtIndex:(unsigned long long)arg1;

@property(retain, nonatomic) NSMutableArray *directionsFeedbackCollections; // @synthesize directionsFeedbackCollections=_directionsFeedbackCollections;

- (unsigned long long)directionsFeedbackCollectionsCount;

- (unsigned long long)hash;

- (_Bool)isEqual:(id)arg1;

- (id)mapsUsageFeedbackCollectionAtIndex:(unsigned long long)arg1;

@property(retain, nonatomic) NSMutableArray *mapsUsageFeedbackCollections; // @synthesize mapsUsageFeedbackCollections=_mapsUsageFeedbackCollections;

- (unsigned long long)mapsUsageFeedbackCollectionsCount;

- (id)placeSearchFeedbackCollectionAtIndex:(unsigned long long)arg1;

@property(retain, nonatomic) NSMutableArray *placeSearchFeedbackCollections; // @synthesize placeSearchFeedbackCollections=_placeSearchFeedbackCollections;

- (unsigned long long)placeSearchFeedbackCollectionsCount;

- (_Bool)readFrom:(id)arg1;

- (unsigned int)requestTypeCode;

- (Class)responseClass;

@property(retain, nonatomic) NSMutableArray *suggestionsFeedbackCollections; // @synthesize suggestionsFeedbackCollections=_suggestionsFeedbackCollections;

@property(retain, nonatomic) NSMutableArray *transitAppLaunchFeedbackCollections; // @synthesize transitAppLaunchFeedbackCollections=_transitAppLaunchFeedbackCollections;

@property(retain, nonatomic) NSMutableArray *usageCollections; // @synthesize usageCollections=_usageCollections;

- (id)suggestionsFeedbackCollectionAtIndex:(unsigned long long)arg1;

- (unsigned long long)suggestionsFeedbackCollectionsCount;

- (id)transitAppLaunchFeedbackCollectionAtIndex:(unsigned long long)arg1;

- (unsigned long long)transitAppLaunchFeedbackCollectionsCount;

- (id)usageCollectionAtIndex:(unsigned long long)arg1;

- (unsigned long long)usageCollectionsCount;

- (void)writeTo:(id)arg1;



@end


