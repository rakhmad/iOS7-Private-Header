/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */





#import "MSServerSideConfigProtocolDelegate.h"



@class MSMediaStreamDaemon, MSServerSideConfigProtocol, NSDictionary, NSString;



@interface MSServerSideConfigManager : NSObject <MSServerSideConfigProtocolDelegate>

{

    NSString *_personID;

    NSDictionary *_config;

    MSMediaStreamDaemon *_daemon;

    NSString *_configPath;

    MSServerSideConfigProtocol *_protocol;

    int _state;

}



+ (void)abortAllActivities;

+ (id)configManagerForPersonID:(id)arg1;

+ (double)doubleValueForParameter:(id)arg1 forPersonID:(id)arg2 defaultValue:(double)arg3;

+ (id)existingConfigManagerForPersonID:(id)arg1;

+ (void)forgetPersonID:(id)arg1;

+ (int)intValueForParameter:(id)arg1 forPersonID:(id)arg2 defaultValue:(int)arg3;

+ (long long)longLongValueForParameter:(id)arg1 forPersonID:(id)arg2 defaultValue:(long long)arg3;

+ (long long)longValueForParameter:(id)arg1 forPersonID:(id)arg2 defaultValue:(long long)arg3;

+ (id)objectForKey:(id)arg1 forPersonID:(id)arg2 defaultValue:(id)arg3;

- (void).cxx_destruct;

- (void)abort;

@property(retain, nonatomic) NSDictionary *config;

@property(nonatomic) MSMediaStreamDaemon *daemon; // @synthesize daemon=_daemon;

- (void)dealloc;

- (id)initWithPersonID:(id)arg1 baseURL:(id)arg2;

@property(readonly, nonatomic) NSString *personID; // @synthesize personID=_personID;

- (void)refreshConfiguration;

- (void)serverSideConfigProtocol:(id)arg1 didFinishWithConfiguration:(id)arg2 error:(id)arg3;

- (void)serverSideConfigProtocol:(id)arg1 didReceiveAuthenticationError:(id)arg2;



@end

