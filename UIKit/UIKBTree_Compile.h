/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */



#import "UIKBTree.h"


@class NSArray, NSMutableDictionary;



@interface UIKBTree_Compile : UIKBTree

{

    NSMutableDictionary *symbols;

    NSMutableDictionary *refs;

}



+ (id)stringEnumForType:(int)arg1;

+ (id)treeOfType:(int)arg1;

+ (int)typeForString:(id)arg1;

+ (id)uniqueNameWithType:(int)arg1;

- (_Bool)_needsScaling;

- (id)attributeSet:(_Bool)arg1;

- (id)copyWithZone:(struct _NSZone *)arg1;

- (id)geometrySet:(_Bool)arg1;

- (int)indexOfSubtreeWithName:(id)arg1 rows:(id)arg2;

- (int)indexOfSubtreeWithType:(int)arg1;

- (id)initWithType:(int)arg1;

- (_Bool)isSameAsTree:(id)arg1;

- (_Bool)isSymbolType;

- (id)listAtIndex:(int)arg1;

- (void)mergePropertiesWithOthers:(id)arg1;

- (void)mergePropertiesWithSubtreeRange:(struct _NSRange)arg1 properties:(id)arg2;

- (void)mergeSubtreesWithOthers:(id)arg1;

- (void)mergeSymbolsWithOthers:(id)arg1;

@property(readonly, nonatomic) NSArray *refList;

@property(retain, nonatomic) NSMutableDictionary *refs; // @synthesize refs;

- (void)setAttributeSet:(id)arg1;

- (void)setGeometrySet:(id)arg1;

@property(retain, nonatomic) NSMutableDictionary *symbols; // @synthesize symbols;

- (void)setTarget:(id)arg1 forReference:(id)arg2;

@property(nonatomic) _Bool variable;

- (int)shapeHash;

- (id)simpleName;

- (int)subtreeHash;

- (int)symbolHash:(id)arg1;

- (id)symbolValues:(id)arg1 withSymbols:(id)arg2;

- (void)uniquifyName;

- (_Bool)usesSymbols;



@end


