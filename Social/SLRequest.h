/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */





@class ACAccount, NSData, NSDictionary, NSMutableArray, NSMutableDictionary, NSString, NSURL, OACredential, SLService;



@interface SLRequest : NSObject

{

    ACAccount *_account;

    OACredential *_OAuthCredential;

    long long _requestMethod;

    NSURL *_url;

    NSMutableDictionary *_parameters;

    NSMutableArray *_multiParts;

    NSString *_multiPartBoundary;

    int _callingPID;

    NSString *_applicationID;

    NSString *_contentType;

    NSData *_payload;

    SLService *_service;

}



+ (id)requestForServiceType:(id)arg1 requestMethod:(long long)arg2 URL:(id)arg3 parameters:(id)arg4;

- (void).cxx_destruct;

- (id)OAuthCredential;

@property(readonly, nonatomic) NSURL *URL; // @synthesize URL=_url;

- (id)_HTTPMethodName;

- (void)_addAuthenticationParameters:(id)arg1;

- (id)_allParameters;

- (void)_appendCoreSig1Signature;

- (id)_commandName;

- (id)_parameterString;

- (id)_preparedURL;

- (_Bool)_requiresAuthorization;

- (_Bool)_shouldAppendTencentWeiboParametersToRequest;

- (_Bool)_shouldRetryAfterCount:(int)arg1 delay:(float *)arg2;

- (id)_urlEncodedString:(id)arg1;

@property(retain, nonatomic) ACAccount *account;

- (void)addMultiPart:(id)arg1;

- (void)addMultipartData:(id)arg1 withName:(id)arg2 type:(id)arg3;

- (void)addMultipartData:(id)arg1 withName:(id)arg2 type:(id)arg3 filename:(id)arg4;

- (int)callingPID;

- (id)completeMultiParts;

- (id)dictionaryRepresentationForJSONSerialization;

- (id)init;

- (id)initWithServiceType:(id)arg1 URL:(id)arg2 parameters:(id)arg3 requestMethod:(long long)arg4;

- (id)multiPartBodyData;

- (id)multiPartBoundary;

- (id)multiParts;

- (id)parameterForKey:(id)arg1;

@property(readonly, nonatomic) NSDictionary *parameters; // @synthesize parameters=_parameters;

- (void)performJSONRequestWithHandler:(id)arg1;

- (void)performJSONRequestWithHandler:(id)arg1 retryCount:(void)arg2;

- (void)performRequestWithHandler:(id)arg1;

- (id)preparedURLRequest;

- (void)removeParameterForKey:(id)arg1;

@property(readonly, nonatomic) long long requestMethod; // @synthesize requestMethod=_requestMethod;

- (void)setApplicationID:(id)arg1;

- (void)setCallingPID:(int)arg1;

- (void)setContentType:(id)arg1;

- (void)setMultiPartBoundary:(id)arg1;

- (void)setOAuthCredential:(id)arg1;

- (void)setParameterValue:(id)arg1 forKey:(id)arg2;

- (void)setPayload:(id)arg1;

- (_Bool)shouldIncludeParameterString;



@end


