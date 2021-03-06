/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */





#import "_UIScreenBasedObject.h"



@class NSMutableDictionary, UIScreen;



__attribute__((visibility("hidden")))

@interface UIKBGraphCache : NSObject <_UIScreenBasedObject>

{

    UIScreen *_screen;

    NSMutableDictionary *_graphCache;

}



+ (id)graphCacheForScreen:(id)arg1;

- (id)_initWithScreen:(id)arg1 options:(id)arg2;

@property(readonly) UIScreen *_intendedScreen;

- (_Bool)_matchingOptions:(id)arg1;

- (void)dealloc;

@property(readonly, nonatomic) NSMutableDictionary *graphCache; // @synthesize graphCache=_graphCache;



@end


