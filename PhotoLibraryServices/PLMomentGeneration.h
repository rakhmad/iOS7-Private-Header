/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */





@class NSMutableDictionary, NSMutableSet, NSObject<OS_dispatch_queue>;



@interface PLMomentGeneration : NSObject

{

    NSMutableSet *_pendingInsertsAndUpdates;

    NSMutableDictionary *_pendingDeletes;

    NSObject<OS_dispatch_queue> *_pendingIsolation;

}



+ (_Bool)_deleteAllMomentDataInManagedObjectContext:(id)arg1 incremental:(_Bool)arg2 error:(id *)arg3;

+ (id)_insertMegaMomentListsForMoments:(id)arg1 inManagedObjectContext:(id)arg2;

+ (id)_insertMomentsForAssets:(id)arg1 inManagedObjectContext:(id)arg2;

+ (id)_insertYearMomentListsForMoments:(id)arg1 earliestDate:(id)arg2 latestDate:(id)arg3 inManagedObjectContext:(id)arg4;

+ (_Bool)_rebuildAllMomentListsInManagedObjectContext:(id)arg1 error:(id *)arg2;

+ (_Bool)_rebuildAllMomentsInManagedObjectContext:(id)arg1 error:(id *)arg2;

+ (void)_setManagedObjectContextMomentarilyBlessed:(id)arg1;

+ (id)generator;

+ (_Bool)isManagedObjectContextMomentarilyBlessed:(id)arg1;

+ (_Bool)rebuildAllMomentsForOfflineStore:(id)arg1 error:(id *)arg2;

- (id)_insertMegaMomentListsForMoments:(id)arg1 inManagedObjectContext:(id)arg2;

- (id)_insertMomentsForAssets:(id)arg1 inManagedObjectContext:(id)arg2;

- (id)_insertYearMomentListsForMoments:(id)arg1 earliestDate:(id)arg2 latestDate:(id)arg3 inManagedObjectContext:(id)arg4;

- (_Bool)_isAsset:(id)arg1 identicalToAssetForMoments:(id)arg2;

- (id)_newPublicGlobalUUIDsToAssetsMappingWithAssets:(id)arg1;

- (id)affectedMomentsForAssetDateCreated:(id)arg1 inContext:(id)arg2;

- (void)dealloc;

- (id)fetchMomentsForEarliestDate:(id)arg1 latestDate:(id)arg2 sorted:(_Bool)arg3 inContext:(id)arg4;

- (void)generateWithAssetInsertsAndUpdates:(id)arg1 andDeletes:(id)arg2 completionHandler:(id)arg3;

- (void)generateWithIncrementalDataCompletionHandler:(id)arg1;

- (id)init;

- (id)momentPhotoLibrary;

- (void)rebuildAllMomentLists:(id)arg1;

- (void)rebuildAllMomentsIncremental:(_Bool)arg1 completionHandler:(id)arg2;

- (void)saveChangesForAssetInsertsAndUpdates:(id)arg1 andDeletes:(id)arg2;



@end


