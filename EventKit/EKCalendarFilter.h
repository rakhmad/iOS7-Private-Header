/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */





#import "NSCopying.h"



@class NSMutableDictionary, NSMutableSet, NSString;



__attribute__((visibility("hidden")))

@interface EKCalendarFilter : NSObject <NSCopying>

{

    struct _opaque_pthread_mutex_t _lock;

    NSMutableSet *_calendarUIDs;

    struct CalDatabase *_database;

    NSMutableDictionary *_queryCache;

    NSString *_searchTerm;

    int _entityType;

}



+ (void)_addCalendarUIDsFromPrefs:(id)arg1 toSet:(id)arg2 database:(struct CalDatabase *)arg3;

+ (void)_addCalendarWithUID:(id)arg1 toSet:(id)arg2 database:(struct CalDatabase *)arg3;

+ (void)_addCalendarsForStoreWithUID:(id)arg1 toSet:(id)arg2 database:(struct CalDatabase *)arg3;

- (id)_UIDAntiSetWithCalendars:(id)arg1;

- (id)_UIDSetWithCalendars:(id)arg1;

- (id)_addFilterToQuery:(id)arg1 creator:(void *)arg2 userInfo:(void *)arg3;

- (id)_calendarUIDsFromPersistentIdentifier:(id)arg1;

- (void)_databaseChanged;

- (id)_generateUIDSetToFilterAllCalendars;

- (id)_generateUIDSetToFilterCalendars:(id)arg1;

- (id)_generateUIDSetToShowCalendarUIDs:(id)arg1;

- (id)_generateUIDSetToShowCalendars:(id)arg1;

- (_Bool)_isFilteringAllWhileLocked;

- (id)calendarIDClauseForQueryWithVariableName:(id)arg1;

- (id)copyWithZone:(struct _NSZone *)arg1;

- (void)dealloc;

- (id)filterQueryForKey:(id)arg1 prefix:(id)arg2 whereClause:(id)arg3 creator:(void *)arg4 userInfo:(void *)arg5;

- (id)filterQueryForQueryString:(id)arg1 creator:(void *)arg2 userInfo:(void *)arg3;

- (id)filteredCalendars;

- (id)initFilteringAllWithDatabase:(struct CalDatabase *)arg1;

- (id)initWithDatabase:(struct CalDatabase *)arg1;

- (id)initWithDatabase:(struct CalDatabase *)arg1 entityType:(int)arg2;

- (id)initWithDatabase:(struct CalDatabase *)arg1 entityType:(int)arg2 calendarUIDs:(id)arg3;

- (id)initWithDatabase:(struct CalDatabase *)arg1 entityType:(int)arg2 showingCalendarsWithUIDs:(id)arg3;

- (id)initWithDatabase:(struct CalDatabase *)arg1 filteringCalendars:(id)arg2;

- (id)initWithDatabase:(struct CalDatabase *)arg1 showingCalendars:(id)arg2;

- (id)initWithDatabase:(struct CalDatabase *)arg1 showingCalendarsWithUIDs:(id)arg2;

- (id)initWithPersistentIdentifier:(id)arg1 database:(struct CalDatabase *)arg2;

- (_Bool)isCalendarUIDVisible:(id)arg1;

- (_Bool)isEqual:(id)arg1;

- (_Bool)isFilteringAll;

- (_Bool)isShowingAll;

- (id)persistentIdentifier;

- (void)removeCalendarWithUID:(id)arg1;

@property(copy, nonatomic) NSString *searchTerm; // @synthesize searchTerm=_searchTerm;

- (void)validate;

- (int)visibleCalendarCountWithOptions:(int)arg1;

- (id)visibleCalendarsWithOptions:(int)arg1;



@end


