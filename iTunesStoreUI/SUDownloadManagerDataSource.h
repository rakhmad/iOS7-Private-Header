/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */



#import "SUTableDataSource.h"


@class NSArray, SUDownloadManager;



@interface SUDownloadManagerDataSource : SUTableDataSource

{

    SUDownloadManager *_downloadManager;

}



- (_Bool)canDeleteIndexPath:(id)arg1;

- (_Bool)canSelectIndexPath:(id)arg1;

- (id)cellForIndexPath:(id)arg1;

- (void)configureCell:(id)arg1 forIndexPath:(id)arg2;

- (void)dealloc;

- (_Bool)deleteIndexPath:(id)arg1;

- (id)downloadForIndexPath:(id)arg1;

@property(readonly, nonatomic) SUDownloadManager *downloadManager;

@property(readonly, nonatomic) NSArray *downloads;

- (id)initWithDownloadManager:(id)arg1;

- (long long)numberOfRowsInSection:(long long)arg1;

- (long long)numberOfSections;

- (void)reloadData;

- (long long)tableViewStyle;



@end

