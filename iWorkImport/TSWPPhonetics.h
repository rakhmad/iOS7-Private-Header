/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */





@class NSDictionary;



__attribute__((visibility("hidden")))

@interface TSWPPhonetics : NSObject

{

    NSDictionary *_transcribers;

}



+ (id)_singletonAlloc;

+ (id)allocWithZone:(struct _NSZone *)arg1;

+ (id)sharedDictionary;

- (id)autorelease;

- (id)copyWithZone:(struct _NSZone *)arg1;

- (void)dealloc;

- (id)init;

- (id)pronunciationForBaseText:(id)arg1 locale:(id)arg2 inputLanguage:(id)arg3;

- (oneway void)release;

- (id)retain;

- (unsigned long long)retainCount;

- (id)transcriberWithIdentifier:(id)arg1;



@end

