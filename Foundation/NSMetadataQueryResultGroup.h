/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */





@interface NSMetadataQueryResultGroup : NSObject

{

    id _private[9];

    unsigned long long _private2[1];

    void *_reserved;

}



- (void)_addResult:(unsigned long long)arg1;

- (id)_init:(id)arg1 attributes:(id)arg2 index:(unsigned long long)arg3 value:(id)arg4;

- (void)_zapResultArray;

- (id)attribute;

- (void)dealloc;

- (id)resultAtIndex:(unsigned long long)arg1;

- (unsigned long long)resultCount;

- (id)results;

- (id)subgroups;

- (id)value;



@end

