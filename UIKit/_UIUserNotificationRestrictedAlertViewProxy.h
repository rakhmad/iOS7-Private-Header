/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */



#import "_UITargetedProxy.h"


#import "UIAlertViewDelegate.h"



__attribute__((visibility("hidden")))

@interface _UIUserNotificationRestrictedAlertViewProxy : _UITargetedProxy <UIAlertViewDelegate>

{

    id _delegate;

}



+ (id)restrictedProxyForAlertView:(id)arg1;

- (id)delegate;

- (void)forwardInvocation:(id)arg1;

- (id)methodSignatureForSelector:(SEL)arg1;

- (_Bool)respondsToSelector:(SEL)arg1;

- (void)setDelegate:(id)arg1;



@end

