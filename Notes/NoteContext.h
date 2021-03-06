/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */





@class CPExclusiveLock, NSManagedObjectContext, NSManagedObjectModel, NSMutableDictionary, NSNumber, NSPersistentStoreCoordinator, NSPredicate, NSString, NoteAccountObject, NoteStoreObject;



@interface NoteContext : NSObject

{

    NSManagedObjectModel *_managedObjectModel;

    NSManagedObjectContext *_managedObjectContext;

    NSPersistentStoreCoordinator *_persistentStoreCoordinator;

    NSPredicate *_searchPredicate;

    NoteStoreObject *_localStore;

    NoteAccountObject *_localAccount;

    struct __CXIndex *__SharedNoteStoreSearchIndex;

    CPExclusiveLock *__SharedNoteStoreSearchIndexLock;

    int __SharedNoteStoreSearchIndexCount;

    _Bool _isIndexing;

    NSManagedObjectContext *_nextIdContext;

    CPExclusiveLock *_nextIdLock;

    NSNumber *_nextId;

    CPExclusiveLock *_objectCreationLock;

    unsigned long long _notificationCount;

    _Bool _logChanges;

    _Bool _indexInBatches;

    _Bool _hasPriorityInSaveConflicts;

    _Bool _inMigrator;

    NSString *_testingFilePrefix;

    NSString *_testingFilePath;

    NSMutableDictionary *_notePropertyObjectsRealized;

}



+ (_Bool)databaseIsCorrupt:(id)arg1;

+ (_Bool)shouldLogIndexing;

- (void).cxx_destruct;

- (void)_createLocalAccount:(id *)arg1 andStore:(id *)arg2;

- (id)_notePropertyObjectForKey:(id)arg1;

- (id)accountForAccountId:(id)arg1;

- (id)allAccounts;

- (id)allNotes;

- (id)allNotesInCollection:(id)arg1;

- (id)allNotesMatchingPredicate:(id)arg1;

- (id)allNotesWithoutBodiesInCollection:(id)arg1;

- (id)allStores;

- (id)allVisibleNotes;

- (id)allVisibleNotesInCollection:(id)arg1;

- (id)allVisibleNotesMatchingPredicate:(id)arg1;

- (void)cleanUpLocks;

- (void)clearCaches;

- (id)collectionForInfo:(id)arg1;

- (id)collectionForObjectID:(id)arg1;

- (id)copyNotesForSearch:(void *)arg1 complete:(char *)arg2;

- (id)copyNotesForSearch:(void *)arg1 predicate:(id)arg2 complete:(char *)arg3;

- (unsigned long long)countOfNotes;

- (unsigned long long)countOfNotesInCollection:(id)arg1;

- (unsigned long long)countOfNotesMatchingPredicate:(id)arg1;

- (unsigned long long)countOfStores;

- (unsigned long long)countOfVisibleNotes;

- (unsigned long long)countOfVisibleNotesInCollection:(id)arg1;

- (unsigned long long)countOfVisibleNotesMatchingPredicate:(id)arg1;

- (void)dealloc;

- (id)defaultStoreForNewNote;

- (_Bool)deleteAccount:(id)arg1;

- (void)deleteChanges:(id)arg1;

- (_Bool)deleteIndexFile;

- (void)deleteNote:(id)arg1;

- (void)deleteNoteRegardlessOfConstraints:(id)arg1;

- (_Bool)deleteStore:(id)arg1;

- (void)destroySearchIndex;

- (void)enableChangeLogging:(_Bool)arg1;

- (id)findNotesWithText:(id)arg1 betweenDate:(id)arg2 andDate:(id)arg3;

- (_Bool)forceDeleteAccount:(id)arg1;

- (void)forceSetUpUniqueObjects;

- (id)getNextIdObject;

- (void)handleMigration;

- (_Bool)hasMultipleEnabledStores;

- (void)indexInBatches:(_Bool)arg1;

- (void)indexNotes:(id)arg1;

- (id)init;

- (id)initForMigrator;

- (id)initWithTestingFilePrefix:(id)arg1;

- (id)initWithTestingFilePrefix:(id)arg1 atPath:(id)arg2 inMigrator:(_Bool)arg3;

- (id)initWithTestingFilePrefix:(id)arg1 inMigrator:(_Bool)arg2;

- (void)invalidate;

@property(readonly, nonatomic) _Bool isIndexing; // @synthesize isIndexing=_isIndexing;

- (id)liveNotesNeedingBodiesPredicate;

- (id)localAccount;

- (id)localStore;

@property(readonly, nonatomic) NSManagedObjectContext *managedObjectContext;

- (id)managedObjectModel;

- (id)newFRCForCollection:(id)arg1 delegate:(id)arg2;

- (id)newFetchRequestForNotes;

- (void *)newSearchContextWithText:(id)arg1;

- (id)newlyAddedAccount;

- (id)newlyAddedNote;

- (id)newlyAddedStore;

- (id)nextIndex;

- (id)noteChangeWithType:(int)arg1 store:(id)arg2;

- (id)noteForObjectID:(id)arg1;

- (_Bool)noteIsSafeToAccess:(id)arg1;

- (id)notesForIntegerIds:(id)arg1;

- (id)notesToResumeIndexing;

- (id)pathForIndex;

- (id)pathForPersistentStore;

- (id)persistentStoreCoordinator;

- (id)propertyValueForKey:(id)arg1;

- (void)receiveDarwinNotificationWithChangeLogging:(_Bool)arg1;

- (void)removeConflictingSqliteAndIdxFiles;

- (void)removeSqliteAndIdxFiles;

- (void)resetNotificationCount;

- (void)resumeIndexing;

- (id)rootDirectory;

- (_Bool)save:(id *)arg1;

- (void)saveNotesToResumeIndexing:(id)arg1;

- (_Bool)saveOutsideApp:(id *)arg1;

- (_Bool)saveSilently:(id *)arg1;

- (struct __CXIndex *)searchIndex:(char *)arg1;

- (void)setHasPriorityInSaveConflicts:(_Bool)arg1;

- (void)setPropertyValue:(id)arg1 forKey:(id)arg2;

- (void)setUpCoreDataStack;

- (_Bool)setUpLastIndexTid;

- (_Bool)setUpLocalAccountAndStore;

- (void)setUpUniqueObjects;

- (_Bool)shouldDisableLocalStore;

- (_Bool)shouldResumeIndexing;

- (void)sortNotes:(id)arg1;

- (id)storeForObjectID:(id)arg1;

- (id)storeOptions;

- (void)tearDownCoreDataStack;

- (void)trackChanges:(id)arg1;

- (void)updateSearchIndex:(id)arg1;

- (id)urlForPersistentStore;

- (id)visibleNoteForObjectID:(id)arg1;

- (id)visibleNotesForIntegerIds:(id)arg1;

- (id)visibleNotesPredicate;

- (void)wrapUpIndexing;



@end


