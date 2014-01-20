/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */





@class NSData;



__attribute__((visibility("hidden")))

@interface TSMTraceFileParser : NSObject

{

    NSData *mData;

    struct TSMTraceRecord_s *mRecordBuffer;

    unsigned long long mOffset;

    unsigned long long mDataLength;

}



+ (_Bool)dataIsTraceFile:(id)arg1;

+ (id)parserWithData:(id)arg1;

- (void)dealloc;

- (id)initWithData:(id)arg1;

- (struct TSMTraceRecord_s *)nextTraceRecord;



@end

