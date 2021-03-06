/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */



#import "AceObject.h"


#import "SAAceSerializable.h"



@class NSArray, NSDate, NSString, NSURL;



@interface SAAnswerAbstractSocialPost : AceObject <SAAceSerializable>

{

}



+ (id)abstractSocialPost;

+ (id)abstractSocialPostWithDictionary:(id)arg1 context:(id)arg2;

@property(copy, nonatomic) NSString *author;

@property(copy, nonatomic) NSString *authorTitle;

@property(copy, nonatomic) NSArray *comments;

@property(copy, nonatomic) NSDate *dateCreated;

@property(copy, nonatomic) NSDate *dateModified;

- (id)encodedClassName;

- (id)groupIdentifier;

@property(copy, nonatomic) NSURL *icon;

@property(nonatomic) long long rank;

@property(copy, nonatomic) NSString *text;

@property(copy, nonatomic) NSString *title;



@end


