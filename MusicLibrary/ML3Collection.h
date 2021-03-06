/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */



#import "ML3Entity.h"


@interface ML3Collection : ML3Entity

{

}



+ (id)artworkCacheIDProperty;

+ (_Bool)canonicalizeCollectionRepresentativeItemsWithWriteConnection:(id)arg1;

+ (id)foreignPropertyForProperty:(id)arg1 entityClass:(Class)arg2;

+ (void)initialize;

+ (_Bool)libraryContentsChangeForProperty:(id)arg1;

+ (id)propertiesForGroupingKey;

+ (id)trackForeignPersistentID;

+ (_Bool)updateRepresentativeItemPersistentIDsInLibrary:(id)arg1 persistentIDs:(const long long *)arg2 count:(unsigned long long)arg3;

- (id)initWithDictionary:(id)arg1 inLibrary:(id)arg2 cachedNameOrders:(id)arg3;

- (void)updateCloudStatus;

- (void)updateRepresentativeCollectionValues:(id)arg1 existingRepresentativePersistentID:(unsigned long long)arg2 forUpdateTrackValues:(id)arg3;

- (void)updateRepresentativeItem:(id)arg1 inLibrary:(id)arg2 withArtworkCacheID:(id)arg3;

- (void)updateTrackValues:(id)arg1;



@end


