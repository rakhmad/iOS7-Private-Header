/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */



#import "NSMutableSet.h"



@class NSLock;



@interface MFWeakSet : NSMutableSet

{

    NSLock *_lock;

    unsigned long long _gen;

    struct __CFDictionary *_objects;

}



+ (id)set;

+ (id)setWithArray:(id)arg1;

+ (id)setWithCapacity:(unsigned long long)arg1;

+ (id)setWithObject:(id)arg1;

+ (id)setWithObjects:(id)arg1;

+ (id)setWithObjects:(const id *)arg1 count:(unsigned long long)arg2;

+ (id)setWithSet:(id)arg1;

- (id)_copyAllItems;

- (void)addObject:(id)arg1;

- (void)addObjectsFromArray:(id)arg1;

- (id)allObjects;

- (id)anyObject;

- (_Bool)containsObject:(id)arg1;

- (id)copyWithZone:(struct _NSZone *)arg1;

- (unsigned long long)count;

- (unsigned long long)countByEnumeratingWithState:(CDStruct_58648341 *)arg1 objects:(id *)arg2 count:(unsigned long long)arg3;

- (void)dealloc;

- (id)description;

- (id)descriptionWithLocale:(id)arg1;

- (void)encodeWithCoder:(id)arg1;

- (void)enumerateObjectsUsingBlock:(id)arg1;

- (void)enumerateObjectsWithOptions:(unsigned long long)arg1 usingBlock:(id)arg2;

- (id)init;

- (id)initWithArray:(id)arg1;

- (id)initWithCapacity:(unsigned long long)arg1;

- (id)initWithCoder:(id)arg1;

- (id)initWithObjects:(id)arg1;

- (id)initWithObjects:(const id *)arg1 count:(unsigned long long)arg2;

- (id)initWithSet:(id)arg1;

- (id)initWithSet:(id)arg1 copyItems:(_Bool)arg2;

- (void)intersectSet:(id)arg1;

- (_Bool)intersectsSet:(id)arg1;

- (_Bool)isEqualToSet:(id)arg1;

- (_Bool)isSubsetOfSet:(id)arg1;

- (void)makeObjectsPerformSelector:(SEL)arg1;

- (void)makeObjectsPerformSelector:(SEL)arg1 withObject:(id)arg2;

- (id)member:(id)arg1;

- (void)minusSet:(id)arg1;

- (id)mutableCopyWithZone:(struct _NSZone *)arg1;

- (id)objectEnumerator;

- (id)objectsPassingTest:(id)arg1;

- (id)objectsWithOptions:(unsigned long long)arg1 passingTest:(id)arg2;

- (void)removeAllObjects;

- (void)removeObject:(id)arg1;

- (id)setByAddingObject:(id)arg1;

- (id)setByAddingObjectsFromArray:(id)arg1;

- (id)setByAddingObjectsFromSet:(id)arg1;

- (void)setSet:(id)arg1;

- (void)unionSet:(id)arg1;



@end

