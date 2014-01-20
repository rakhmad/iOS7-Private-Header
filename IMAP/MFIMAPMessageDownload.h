/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */



#import "MFIMAPCompoundDownload.h"


@class MFBufferedDataConsumer, MFMessage, MFMimePart;



@interface MFIMAPMessageDownload : MFIMAPCompoundDownload

{

    MFMessage *_message;

    MFMimePart *_topLevelPart;

    MFBufferedDataConsumer *_headerConsumer;

    MFBufferedDataConsumer *_textConsumer;

    unsigned int _allowsPartialDownloads:1;

    unsigned int _usingPartialDownloads:1;

    unsigned int _startedFetch:1;

    unsigned int _fetchingMessageContents:1;

    unsigned int _fetchingBodyText:1;

    unsigned int _doneAddingSubdownloads:1;

    unsigned int _fetchBodyData:1;

}



- (void)addCommandsToPipeline:(id)arg1 withCache:(id)arg2;

- (_Bool)allowsPartialDownloads;

- (id)data;

- (void)dealloc;

- (_Bool)fetchBodyData;

- (void)handleFetchResult:(id)arg1;

- (id)initWithMessage:(id)arg1;

- (_Bool)isComplete;

- (id)message;

- (_Bool)partial;

- (void)processResults;

- (void)setAllowsPartialDownloads:(_Bool)arg1;

- (void)setFetchBodyData:(_Bool)arg1;

- (void)setTopLevelPart:(id)arg1;

- (id)topLevelPart;



@end

