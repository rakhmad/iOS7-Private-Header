/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */



#import "DTXMessageParser.h"


@class NSMutableArray;



@interface DTXLegacyMessageParser : DTXMessageParser

{

    NSMutableArray *_savedKeyArrays;

}



+ (void)initialize;

- (void)dealloc;

- (id)initWithMessageHandler:(id)arg1;

- (id)parseMessage;



@end

