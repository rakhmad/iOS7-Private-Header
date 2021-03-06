/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */



#import "OADProperties.h"


#import "NSCopying.h"



__attribute__((visibility("hidden")))

@interface OADLineEnd : OADProperties <NSCopying>

{

    unsigned char mType;

    unsigned char mWidth;

    unsigned char mLength;

    unsigned int mIsTypeOverridden:1;

    unsigned int mIsWidthOverridden:1;

    unsigned int mIsLengthOverridden:1;

}



+ (id)defaultProperties;

- (id)copyWithZone:(struct _NSZone *)arg1;

- (unsigned long long)hash;

- (id)initWithDefaults;

- (id)initWithType:(int)arg1 width:(int)arg2 length:(int)arg3;

- (_Bool)isEqual:(id)arg1;

- (_Bool)isLengthOverridden;

- (_Bool)isTypeOverridden;

- (_Bool)isWidthOverridden;

- (int)length;

- (void)setLength:(int)arg1;

- (void)setType:(int)arg1;

- (void)setWidth:(int)arg1;

- (int)type;

- (int)width;



@end


