/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */





@class NSString, WFWhitelistSiteBuffer;



__attribute__((visibility("hidden")))

@interface WFWhitelistUserPreferences : NSObject

{

    WFWhitelistSiteBuffer *filterWhitelist;

    WFWhitelistSiteBuffer *filterBlacklist;

    WFWhitelistSiteBuffer *webWhitelist;

    _Bool filterEnabled;

    _Bool whitelistEnabled;

    _Bool alwaysAllowHTTPS;

    NSString *username;

}



+ (id)_arrayByConvertingLinesInStringsAtPath:(id)arg1;

+ (id)_cachedWhitelistForPath:(id)arg1 username:(id)arg2;

+ (_Bool)_isURLMetasite:(id)arg1;

+ (id)_metasiteDomainNamesArray;

+ (id)_modificationDateForFileAtPath:(id)arg1;

+ (id)_sharedMetasiteDomainNamesDictionary;

+ (id)_sharedMetasiteExceptionsDomainNamesArray;

+ (id)defaultWhitelistForUser:(id)arg1;

+ (id)metasitesExceptionPath;

+ (id)metasitesPath;

+ (id)preferencesPathForUsername:(id)arg1;

+ (id)whitelistForUser:(id)arg1;

+ (id)whitelistWithPreferences:(id)arg1;

@property _Bool alwaysAllowHTTPS; // @synthesize alwaysAllowHTTPS;

- (void)dealloc;

- (id)description;

@property(readonly) WFWhitelistSiteBuffer *filterBlacklist; // @synthesize filterBlacklist;

@property _Bool filterEnabled; // @synthesize filterEnabled;

@property(readonly) WFWhitelistSiteBuffer *filterWhitelist; // @synthesize filterWhitelist;

- (id)init;

- (id)initWithPreferences:(id)arg1;

- (_Bool)isURL:(id)arg1 onList:(id)arg2;

- (_Bool)isURLAllowed:(id)arg1;

- (_Bool)isURLAllowed:(id)arg1 reason:(id *)arg2 shouldFilter:(_Bool *)arg3 foundOnList:(_Bool *)arg4;

- (id)pronounceOnPageURLString:(id)arg1 shouldFilter:(_Bool *)arg2;

@property(retain) NSString *username; // @synthesize username;

@property _Bool whitelistEnabled; // @synthesize whitelistEnabled;

@property(readonly) WFWhitelistSiteBuffer *webWhitelist; // @synthesize webWhitelist;



@end

