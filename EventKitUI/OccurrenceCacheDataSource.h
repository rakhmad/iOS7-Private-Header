/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */





#import "OccurrenceCacheDataSourceProtocol.h"



@class EKEventStore, NSArray, NSMutableDictionary, NSSet;



@interface OccurrenceCacheDataSource : NSObject <OccurrenceCacheDataSourceProtocol>

{

    EKEventStore *_eventStore;

    NSSet *_calendars;

    NSArray *_cachedDays;

    NSMutableDictionary *_cachedOccurrences;

    int _cachedDaysSeed;

}



- (void).cxx_destruct;

- (id)_cachedDays;

- (long long)cachedDayCount;

- (id)cachedOccurrenceAtIndexPath:(id)arg1;

- (_Bool)cachedOccurrencesAreBeingGenerated;

- (_Bool)cachedOccurrencesAreLoaded;

- (long long)countOfOccurrencesAtDayIndex:(long long)arg1;

- (id)dateAtDayIndex:(long long)arg1;

- (void)fetchDaysInBackgroundStartingFromSection:(long long)arg1;

- (id)initWithEventStore:(id)arg1 calendars:(id)arg2;

- (void)invalidate;

- (void)invalidateCachedOccurrences;

- (void)searchWithTerm:(id)arg1;

- (long long)sectionForCachedOccurrencesOnDate:(id)arg1;

- (void)stopSearching;

- (_Bool)supportsFakeTodaySection;

- (_Bool)supportsInvitations;



@end


