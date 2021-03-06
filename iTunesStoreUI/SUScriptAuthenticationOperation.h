/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */



#import "ISOperation.h"



@class NSNumber, SSMutableAuthenticationContext;



@interface SUScriptAuthenticationOperation : ISOperation

{

    NSNumber *_authenticatedDSID;

    SSMutableAuthenticationContext *_authenticationContext;

}



- (id)authenticatedAccountDSID;

@property(retain) NSNumber *authenticatedDSID; // @synthesize authenticatedDSID=_authenticatedDSID;

- (void)dealloc;

- (id)init;

- (id)initWithAccountIdentifier:(id)arg1;

- (void)run;

- (void)sendCompletionCallback:(id)arg1;

- (void)setScriptOptions:(id)arg1;



@end


