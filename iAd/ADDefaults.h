/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */





@class NSMutableDictionary;



@interface ADDefaults : NSObject

{

    NSMutableDictionary *_factoryDefaults;

    struct __CFString *_defaultsBundleID;

}



+ (id)_defaultValueForKey:(id)arg1 valueClass:(Class)arg2;

+ (void)_setDefaultValue:(id)arg1 forKey:(id)arg2;

+ (void)addFactoryDefaults:(id)arg1;

+ (_Bool)boolForKey:(id)arg1;

+ (double)doubleForKey:(id)arg1;

+ (long long)integerForKey:(id)arg1;

+ (void)setBool:(_Bool)arg1 forKey:(id)arg2;

+ (void)setDouble:(double)arg1 forKey:(id)arg2;

+ (void)setInteger:(long long)arg1 forKey:(id)arg2;

+ (void)setString:(id)arg1 forKey:(id)arg2;

+ (id)sharedInstance;

+ (id)stringForKey:(id)arg1;

@property(nonatomic) struct __CFString *defaultsBundleID; // @synthesize defaultsBundleID=_defaultsBundleID;

@property(retain, nonatomic) NSMutableDictionary *factoryDefaults; // @synthesize factoryDefaults=_factoryDefaults;

- (id)init;



@end

