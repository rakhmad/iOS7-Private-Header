/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */



#import "ATVHighSecurityAccountSendCode.h"


@class NSString;



@interface ATVHighSecurityAccountVerifyCode : ATVHighSecurityAccountSendCode

{

    NSString *_hsaCode;

}



+ (Class)responseClass;

- (void).cxx_destruct;

- (id)initWithAccount:(id)arg1 device:(id)arg2 hsaCode:(id)arg3;

- (id)urlRequest;

- (id)urlString;



@end

