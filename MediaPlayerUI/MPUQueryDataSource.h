/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */



#import "MPUDataSource.h"


@class MPMediaQuery, MPMediaQuerySectionInfo, NSArray, NSURL;



@interface MPUQueryDataSource : MPUDataSource

{

    NSArray *_entities;

    _Bool _invalidateWhenEnteringForeground;

    MPMediaQuerySectionInfo *_sectionInfo;

    MPMediaQuery *_query;

}



- (void).cxx_destruct;

- (void)_applicationWillEnterForegroundNotification:(id)arg1;

- (void)_defaultMediaLibraryDidChangeNotification:(id)arg1;

- (_Bool)_deleteHidesFromCloudForIndex:(unsigned long long)arg1 hidesAll:(out _Bool *)arg2;

- (void)_isCloudEnabledDidChangeNotification:(id)arg1;

- (void)_mediaLibraryDidChangeNotification:(id)arg1;

- (void)_mediaLibraryDisplayValuesDidChangeNotification:(id)arg1;

- (void)_mediaLibraryDynamicPropertiesDidChangeNotification:(id)arg1;

- (void)_postInvalidationNotification;

- (id)_sectionInfo;

@property(readonly, nonatomic) NSURL *bestStoreURL;

- (_Bool)canEditEntityAtIndex:(unsigned long long)arg1;

- (_Bool)canSelectEntityAtIndex:(unsigned long long)arg1;

- (unsigned long long)count;

- (id)dataSourceFromEntityAtIndex:(unsigned long long)arg1 entityType:(long long)arg2;

- (void)dealloc;

- (void)deleteEntityAtIndex:(unsigned long long)arg1;

- (long long)editingTypeForEntityAtIndex:(unsigned long long)arg1;

- (void)encodeWithCoder:(id)arg1;

- (id)entities;

- (unsigned long long)indexOfSectionForSectionTitleAtIndex:(unsigned long long)arg1;

- (id)initWithCoder:(id)arg1;

- (id)initWithEntityType:(long long)arg1;

- (id)initWithQuery:(id)arg1 entityType:(long long)arg2;

- (void)invalidateCalculatedEntities;

- (_Bool)isEmpty;

- (id)localizedSectionIndexTitles;

- (id)localizedSectionTitleAtIndex:(unsigned long long)arg1;

- (unsigned long long)numberOfSections;

@property(readonly, nonatomic) MPMediaQuery *query; // @synthesize query=_query;

- (struct _NSRange)rangeOfSectionAtIndex:(unsigned long long)arg1;

- (_Bool)showsEntityCountFooter;

- (_Bool)showsIndexBar;

- (id)titleForGlobalHeader;



@end

