/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */





#import "SUCollectingDataConsumer.h"



@class NSData, NSMutableData;



@interface SUDataBufferConsumer : NSObject <SUCollectingDataConsumer>

{

    NSMutableData *_buffer;

}



- (int)consumeData:(id)arg1;

@property(readonly, nonatomic) NSData *consumedData;

- (void)finish;

- (id)init;



@end

