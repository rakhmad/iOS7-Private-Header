/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */





#import "NSCoding.h"

#import "NSCopying.h"

#import "NSSecureCoding.h"



@interface GKInternalRepresentation : NSObject <NSCoding, NSCopying, NSSecureCoding>

{

}



+ (id)codedPropertyKeys;

+ (id)internalRepresentation;

+ (id)secureCodedPropertyKeys;

+ (_Bool)supportsSecureCoding;

- (id)copyWithZone:(struct _NSZone *)arg1;

- (id)description;

- (void)encodeWithCoder:(id)arg1;

- (id)initWithCoder:(id)arg1;

- (void)mergePropertiesFrom:(id)arg1;

- (id)serverRepresentation;



@end


