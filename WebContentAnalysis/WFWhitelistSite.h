/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */





@class NSString, NSURL;



__attribute__((visibility("hidden")))

@interface WFWhitelistSite : NSObject

{

    NSString *urlString;

    NSURL *url;

    NSString *domainName;

    NSString *normalizedURLString;

}



- (void)dealloc;

- (id)description;

@property(readonly) NSString *domainName; // @synthesize domainName;

- (_Bool)hasMetasitePrefix:(id)arg1;

- (unsigned long long)hash;

- (id)initWithURLString:(id)arg1;

- (_Bool)isEqual:(id)arg1;

@property(copy) NSURL *url; // @synthesize url;

@property(copy) NSString *urlString; // @synthesize urlString;



@end

