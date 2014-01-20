/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */



#import "CoreDAVGetAccountPropertiesTaskGroup.h"



@class CalDAVServerVersion, NSSet, NSURL;



@interface CalDAVGetAccountPropertiesTaskGroup : CoreDAVGetAccountPropertiesTaskGroup

{

    NSSet *_calendarHomes;

    NSSet *_userAddresses;

    NSSet *_originalUserAddresses;

    NSURL *_inboxURL;

    NSURL *_outboxURL;

    NSURL *_dropboxURL;

    NSURL *_notificationURL;

    NSURL *_delegatePrincipalURL;

    NSURL *_updatedPrincipalURL;

    _Bool _supportsCalendarUserSearch;

    CalDAVServerVersion *_serverVersion;

}



- (id)_copyAccountPropertiesPropFindElements;

- (void)_setPropertiesFromParsedResponses:(id)arg1;

@property(readonly) NSSet *calendarHomes; // @synthesize calendarHomes=_calendarHomes;

- (void)dealloc;

@property(retain) NSURL *delegatePrincipalURL; // @synthesize delegatePrincipalURL=_delegatePrincipalURL;

- (id)description;

@property(readonly) NSURL *dropboxURL; // @synthesize dropboxURL=_dropboxURL;

- (_Bool)forceOptionsRequest;

- (id)homeSet;

@property(readonly) NSURL *inboxURL; // @synthesize inboxURL=_inboxURL;

@property(readonly) NSURL *notificationURL; // @synthesize notificationURL=_notificationURL;

@property(readonly) NSSet *originalUserAddresses; // @synthesize originalUserAddresses=_originalUserAddresses;

@property(readonly) NSURL *outboxURL; // @synthesize outboxURL=_outboxURL;

- (void)processPrincipalHeaders:(id)arg1;

@property(readonly) CalDAVServerVersion *serverVersion; // @synthesize serverVersion=_serverVersion;

- (void)startTaskGroup;

@property(readonly) _Bool supportsCalendarUserSearch; // @synthesize supportsCalendarUserSearch=_supportsCalendarUserSearch;

@property(readonly) NSURL *updatedPrincipalURL; // @synthesize updatedPrincipalURL=_updatedPrincipalURL;

@property(readonly) NSSet *userAddresses; // @synthesize userAddresses=_userAddresses;



@end

