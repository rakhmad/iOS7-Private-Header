/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */





@class NSString;



__attribute__((visibility("hidden")))

@interface SLFacebookFriendList : NSObject

{

    NSString *_identifier;

    NSString *_name;

    NSString *_type;

}



+ (id)friendListWithDictionary:(id)arg1;

+ (id)friendListsWithResponseData:(id)arg1;

- (void).cxx_destruct;

@property(retain) NSString *identifier; // @synthesize identifier=_identifier;

- (id)initWithFriendListDictionary:(id)arg1;

@property(retain) NSString *name; // @synthesize name=_name;

@property(retain) NSString *type; // @synthesize type=_type;



@end


