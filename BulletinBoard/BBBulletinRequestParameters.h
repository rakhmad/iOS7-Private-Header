/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */





#import "NSCopying.h"

#import "NSSecureCoding.h"



@class NSSet;



@interface BBBulletinRequestParameters : NSObject <NSCopying, NSSecureCoding>

{

    unsigned long long _publisherDestination;

    long long _maximumCount;

    NSSet *_enabledSectionIDs;

}



+ (id)requestParametersForDestination:(unsigned long long)arg1 withMaximumCount:(long long)arg2 enabledSectionIDs:(id)arg3;

+ (_Bool)supportsSecureCoding;

- (id)copyWithZone:(struct _NSZone *)arg1;

- (void)dealloc;

- (id)description;

@property(readonly, nonatomic) NSSet *enabledSectionIDs;

- (void)encodeWithCoder:(id)arg1;

- (id)initWithCoder:(id)arg1;

- (id)initWithDestination:(unsigned long long)arg1 maximumCount:(long long)arg2 enabledSectionIDs:(id)arg3;

@property(readonly, nonatomic) unsigned long long maximumCount;

@property(readonly, nonatomic) unsigned long long publisherDestination; // @synthesize publisherDestination=_publisherDestination;



@end

