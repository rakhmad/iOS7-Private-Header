/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */



#import "PKPassImages.h"


@class PKImage;



@interface PKPassPlaceHolderImages : PKPassImages

{

    PKImage *_placeHolderImage;

    struct CGRect _logoRect;

}



+ (id)archiveName;

+ (long long)currentVersion;

+ (long long)imageSet;

+ (_Bool)supportsSecureCoding;

- (void)dealloc;

- (void)encodeWithCoder:(id)arg1;

- (id)initWithCardURL:(id)arg1 displayProfile:(id)arg2;

- (id)initWithCoder:(id)arg1;

@property(nonatomic) struct CGRect logoRect; // @synthesize logoRect=_logoRect;

@property(retain, nonatomic) PKImage *placeHolderImage; // @synthesize placeHolderImage=_placeHolderImage;

- (void)preheatImages;



@end


