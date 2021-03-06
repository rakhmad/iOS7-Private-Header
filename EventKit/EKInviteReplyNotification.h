/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */



#import "EKObject.h"


@class EKCalendar, NSDate, NSString;



__attribute__((visibility("hidden")))

@interface EKInviteReplyNotification : EKObject

{

}



- (id)_persistentInviteReplyNotification;

@property(readonly, nonatomic) _Bool alerted;

@property(readonly, nonatomic) EKCalendar *calendar;

@property(readonly, nonatomic) NSString *calendarName;

- (void)clearAlertedStatus;

@property(readonly, nonatomic) NSDate *creationDate;

- (id)lazyLoadRelationForKey:(id)arg1;

@property(readonly, nonatomic) NSString *shareeAddress;

@property(readonly, nonatomic) NSString *shareeDisplayName;

@property(readonly, nonatomic) NSString *shareeFirstName;

@property(readonly, nonatomic) NSString *shareeLastName;

@property(readonly, nonatomic) int status;



@end


