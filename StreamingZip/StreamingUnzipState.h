/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */





@class NSArray, NSDictionary, NSMutableData, NSString;



__attribute__((visibility("hidden")))

@interface StreamingUnzipState : NSObject

{

    struct z_stream_s _zlibState;

    unsigned long long _lastResumptionSavedOffset;

    unsigned long long _hashedChunkSize;

    unsigned long long _bytesHashedInChunk;

    unsigned long long _uncompressedBytesOutput;

    NSString *_unzipPath;

    NSArray *_md5Hashes;

    unsigned long long _currentLFRecordAllocationSize;

    struct CC_MD5state_st _md5Context;

    NSDictionary *_streamInfoDict;

    NSString *_lastChunkPartialHash;

    NSMutableData *_unsureData;

    NSMutableData *_incompleteData;

    NSMutableData *_unfinishedCompressedData;

    CDStruct_6e051504 *_currentLFRecord;

    unsigned long long _thisStageBytesComplete;

    unsigned long long _currentOffset;

    unsigned long long _outputFileOffsetAtLastBlockEnd;

    unsigned long long _recordsProcessed;

    unsigned long long _totalRecordCount;

    unsigned long long _currentCRC32;

    int _currentOutputFD;

    unsigned short _currentLFMode;

    unsigned char _streamState;

    unsigned char _lastBlockEndNumUnusedBits;

    unsigned char _lastBlockEndLastByte;

    _Bool _currentLFIsStreamMetadata;

}



+ (id)unzipStateWithPath:(id)arg1 md5Hashes:(id)arg2 hashedChunkSize:(unsigned long long)arg3 error:(id *)arg4;

- (void).cxx_destruct;

- (id)_checkHashForOffset:(unsigned long long)arg1;

- (void)_internalSetStreamState:(unsigned char)arg1;

@property(readonly, nonatomic) unsigned long long bytesHashedInChunk; // @synthesize bytesHashedInChunk=_bytesHashedInChunk;

- (id)checkLastChunkPartialHash;

- (void)clearSavedState;

@property(nonatomic) unsigned long long currentCRC32; // @synthesize currentCRC32=_currentCRC32;

@property(nonatomic) _Bool currentLFIsStreamMetadata; // @synthesize currentLFIsStreamMetadata=_currentLFIsStreamMetadata;

@property(nonatomic) unsigned short currentLFMode; // @synthesize currentLFMode=_currentLFMode;

@property(nonatomic) CDStruct_6e051504 *currentLFRecord; // @synthesize currentLFRecord=_currentLFRecord;

@property(nonatomic) unsigned long long currentLFRecordAllocationSize; // @synthesize currentLFRecordAllocationSize=_currentLFRecordAllocationSize;

@property(nonatomic) unsigned long long currentOffset; // @synthesize currentOffset=_currentOffset;

@property(nonatomic) int currentOutputFD; // @synthesize currentOutputFD=_currentOutputFD;

- (void)dealloc;

- (id)finishStream;

@property(readonly, nonatomic) unsigned long long hashedChunkSize; // @synthesize hashedChunkSize=_hashedChunkSize;

@property(retain, nonatomic) NSMutableData *incompleteData; // @synthesize incompleteData=_incompleteData;

- (id)init;

- (id)initWithPath:(id)arg1 md5Hashes:(id)arg2 hashedChunkSize:(unsigned long long)arg3 error:(id *)arg4;

@property(retain, nonatomic) NSString *lastChunkPartialHash; // @synthesize lastChunkPartialHash=_lastChunkPartialHash;

- (void)markResumptionPoint;

- (void)markResumptionPointWithLastCompressedByte:(unsigned char)arg1;

@property(nonatomic) unsigned long long recordsProcessed; // @synthesize recordsProcessed=_recordsProcessed;

- (id)serializeState;

@property(retain, nonatomic) NSDictionary *streamInfoDict; // @synthesize streamInfoDict=_streamInfoDict;

@property(nonatomic) unsigned char streamState; // @synthesize streamState=_streamState;

@property(nonatomic) unsigned long long thisStageBytesComplete; // @synthesize thisStageBytesComplete=_thisStageBytesComplete;

@property(nonatomic) unsigned long long totalRecordCount; // @synthesize totalRecordCount=_totalRecordCount;

@property(nonatomic) unsigned long long uncompressedBytesOutput; // @synthesize uncompressedBytesOutput=_uncompressedBytesOutput;

@property(retain, nonatomic) NSMutableData *unfinishedCompressedData; // @synthesize unfinishedCompressedData=_unfinishedCompressedData;

@property(retain, nonatomic) NSMutableData *unsureData; // @synthesize unsureData=_unsureData;

@property(readonly, nonatomic) NSString *unzipPath; // @synthesize unzipPath=_unzipPath;

- (id)updateMD5HashFromOffset:(unsigned long long)arg1 withBytes:(const void *)arg2 length:(unsigned long long)arg3;

- (id)updateMD5HashFromOffset:(unsigned long long)arg1 withBytes:(const void *)arg2 length:(unsigned long long)arg3 onlyFinishCurrentChunk:(_Bool)arg4;

@property(readonly, nonatomic) struct z_stream_s *zlibState;



@end

