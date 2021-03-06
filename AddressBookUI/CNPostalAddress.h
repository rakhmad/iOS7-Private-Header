/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */





#import "NSCopying.h"

#import "NSMutableCopying.h"



@class NSMutableDictionary, NSString;



@interface CNPostalAddress : NSObject <NSCopying, NSMutableCopying>

{

    NSMutableDictionary *_addressDictionary;

}



+ (id)addressFormatsDictionary;

+ (id)defaultCountryCode;

+ (id)localizedAddressFormatDictionaryForCountryCode:(id)arg1;

+ (id)localizedCountryNameForCountryCode:(id)arg1;

+ (id)postalAddress;

+ (id)postalAddressWithDictionary:(id)arg1;

@property(readonly) NSString *ISOCountryCode;

- (_Bool)_isAddressFieldEqual:(id)arg1 toField:(id)arg2;

@property(retain) NSMutableDictionary *addressDictionary;

@property(readonly) NSString *city;

- (id)copyWithZone:(struct _NSZone *)arg1;

@property(readonly) NSString *country;

- (void)dealloc;

- (id)description;

@property(readonly, nonatomic) NSString *formattedAddress;

@property(readonly, nonatomic) NSString *formattedAddressSinleLine;

- (id)init;

- (id)initWithDictionary:(id)arg1;

- (_Bool)isEqual:(id)arg1;

- (id)keyboardSettingsForAddressPart:(id)arg1;

- (id)mutableCopyWithZone:(struct _NSZone *)arg1;

@property(readonly) NSString *postalCode;

@property(readonly) NSString *state;

@property(readonly) NSString *street;

@property(readonly) NSString *subAdministrativeArea;

@property(readonly) NSString *subLocality;



@end


