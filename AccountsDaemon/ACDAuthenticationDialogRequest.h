/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */





@class ACAccount, NSURL;



@interface ACDAuthenticationDialogRequest : NSObject

{

    _Bool _confirmationRequired;

    NSURL *_url;

    ACAccount *_account;

    id _completion;

}



- (void).cxx_destruct;

@property(retain, nonatomic) ACAccount *account; // @synthesize account=_account;

@property(copy, nonatomic) id completion; // @synthesize completion=_completion;

@property(nonatomic) _Bool confirmationRequired; // @synthesize confirmationRequired=_confirmationRequired;

@property(copy, nonatomic) NSURL *url; // @synthesize url=_url;



@end


