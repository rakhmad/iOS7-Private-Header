/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */



#import "CalDAVCalendarServerResourceChangeElement.h"


@interface CalDAVCalendarServerCollectionChangesElement : CalDAVCalendarServerResourceChangeElement

{

    long long _created;

    long long _updated;

    long long _deleted;

}



- (id)copyParseRules;

@property long long created; // @synthesize created=_created;

@property long long deleted; // @synthesize deleted=_deleted;

- (id)init;

- (void)setCreatedItem:(id)arg1;

- (void)setDeletedItem:(id)arg1;

@property long long updated; // @synthesize updated=_updated;

- (void)setUpdatedItem:(id)arg1;



@end


