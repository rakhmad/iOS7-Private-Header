/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */





@interface ASPolicyManager : NSObject

{

    id _delegate;

    _Bool _updatingPolicy;

}



- (id)currentPolicyKey;

@property id <ASPolicyManagerDelegate> delegate; // @synthesize delegate=_delegate;

- (id)initWithAccount:(id)arg1;

- (void)policyKeyChanged:(id)arg1;

- (void)requestPolicyUpdate;

- (_Bool)updatingPolicy;



@end


