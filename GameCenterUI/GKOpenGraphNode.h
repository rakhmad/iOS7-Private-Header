/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */





@class NSError, NSURL;



@interface GKOpenGraphNode : NSObject

{

    _Bool _liked;

    NSURL *_url;

    unsigned long long _numberOfFriendLikes;

    unsigned long long _numberOfLikes;

    NSError *_error;

}



+ (void)openGraphNodeForURL:(id)arg1 handler:(id)arg2;

- (void)clearErrorAndRefetchLikeStatusWithCompletionHandler:(id)arg1;

- (void)dealloc;

- (id)description;

@property(retain, nonatomic) NSError *error; // @synthesize error=_error;

- (void)fetchLikeStatusWithCompletionHandler:(id)arg1;

- (id)initWithOpenGraphURL:(id)arg1;

@property(nonatomic) _Bool liked; // @synthesize liked=_liked;

@property(nonatomic) unsigned long long numberOfFriendLikes; // @synthesize numberOfFriendLikes=_numberOfFriendLikes;

@property(nonatomic) unsigned long long numberOfLikes; // @synthesize numberOfLikes=_numberOfLikes;

- (void)sendDislikeEventWithCompletionHandler:(id)arg1;

- (void)sendLikeEventWithCompletionHandler:(id)arg1;

- (void)toggleLikeStatusWithCompletionHandler:(id)arg1;

@property(readonly, nonatomic) NSURL *url; // @synthesize url=_url;



@end

