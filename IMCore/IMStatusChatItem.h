/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */



#import "IMChatItem.h"


@class NSArray, NSString;



@interface IMStatusChatItem : IMChatItem

{

}



- (id)description;

@property(readonly, nonatomic) NSString *formatString;

@property(readonly, nonatomic) NSArray *handles;

- (id)initWithFormat:(id)arg1 handles:(id)arg2 date:(id)arg3 statusType:(long long)arg4;

- (id)initWithString:(id)arg1 date:(id)arg2 statusType:(long long)arg3;

@property(readonly, nonatomic) long long statusType;

- (id)stringValue;



@end

