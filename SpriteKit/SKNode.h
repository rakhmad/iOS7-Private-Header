/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */



#import "UIResponder.h"



#import "NSCoding.h"

#import "NSCopying.h"



@class NSArray, NSMutableArray, NSMutableDictionary, NSString, SKPhysicsBody, SKScene;



@interface SKNode : UIResponder <NSCopying, NSCoding>

{

    _Bool _spritesNeedsRemove;

    NSMutableArray *_actionsToRemove;

    NSMutableArray *_spritesToRemove;

    void *csprite;

    SKNode *_parent;

    NSMutableArray *_children;

    NSMutableArray *_actions;

    NSMutableDictionary *_keyedActions;

    NSMutableDictionary *_keyedSubSprites;

    NSMutableDictionary *_info;

    _Bool _needsDelete;

    NSMutableArray *_deleteList;

    NSString *_name;

    NSMutableDictionary *_userData;

}



+ (id)node;

- (void).cxx_destruct;

@property(nonatomic) struct CGPoint _anchorPoint;

- (void)_enumerateChildNodesWithName:(id)arg1 usingBlock:(id)arg2 stopPointer:(void)arg3;

- (void)_flippedChangedFrom:(_Bool)arg1 to:(_Bool)arg2;

@property(retain, nonatomic) NSMutableDictionary *_info;

- (id)_parent;

- (void)_performCleanup;

- (void)_scaleFactorChangedFrom:(float)arg1 to:(float)arg2;

@property(nonatomic) _Bool _showBounds;

@property(readonly, nonatomic) struct CGSize _size;

@property(readonly, nonatomic) struct CGRect _untransformedBounds;

- (void)_update:(double)arg1;

- (id)actionForKey:(id)arg1;

- (void)addChild:(id)arg1;

- (void)addChild:(id)arg1 withKey:(id)arg2;

- (id)allIntersectionsWithNode:(id)arg1 useAlphaTest:(_Bool)arg2;

@property(nonatomic) double alpha;

- (struct CGRect)calculateAccumulatedFrame;

- (id)childNodeWithName:(id)arg1;

@property(readonly, nonatomic) NSArray *children;

- (id)childrenInRect:(struct CGRect)arg1;

- (id)containingView;

- (_Bool)containsPoint:(struct CGPoint)arg1;

- (_Bool)containsPoint:(struct CGPoint)arg1 withRadius:(double)arg2;

- (struct CGPoint)convertPoint:(struct CGPoint)arg1 fromNode:(id)arg2;

- (struct CGPoint)convertPoint:(struct CGPoint)arg1 toNode:(id)arg2;

- (struct CGPoint)convertPointFromParent:(struct CGPoint)arg1;

- (struct CGPoint)convertPointToParent:(struct CGPoint)arg1;

- (id)copy;

- (id)copyWithZone:(struct _NSZone *)arg1;

- (struct SKCSprite *)csprite;

- (void)dealloc;

- (id)description;

- (void)encodeWithCoder:(id)arg1;

- (void)enumerateChildNodesWithName:(id)arg1 usingBlock:(id)arg2;

@property(readonly, nonatomic) struct CGRect frame;

- (_Bool)hasActions;

- (_Bool)hasChildren;

- (_Bool)hasUniformAlphaAndIsVisible;

- (_Bool)inParentHierarchy:(id)arg1;

- (id)init;

- (id)initWithCoder:(id)arg1;

- (void)insertChild:(id)arg1 atIndex:(long long)arg2;

- (_Bool)intersectsNode:(id)arg1;

- (_Bool)intersectsNode:(id)arg1 useAlphaTest:(_Bool)arg2;

@property(nonatomic, getter=isHidden) _Bool hidden;

@property(nonatomic, getter=isPaused) _Bool paused;

@property(getter=isUserInteractionEnabled) _Bool userInteractionEnabled;

@property(copy, nonatomic) NSString *name; // @synthesize name=_name;

- (_Bool)needsUpdate;

- (id)nodeAtPoint:(struct CGPoint)arg1;

- (id)nodeAtPoint:(struct CGPoint)arg1 recursive:(_Bool)arg2;

- (id)nodesAtPoint:(struct CGPoint)arg1;

@property(readonly, nonatomic) SKNode *parent;

@property(retain, nonatomic) SKPhysicsBody *physicsBody;

@property(nonatomic) struct CGPoint position;

- (void)removeAction:(id)arg1;

- (void)removeActionForKey:(id)arg1;

- (void)removeAllActions;

- (void)removeAllChildren;

- (void)removeChild:(id)arg1;

- (void)removeChildAtIndex:(long long)arg1;

- (void)removeChildrenInArray:(id)arg1;

- (void)removeFromParent;

- (void)runAction:(id)arg1;

- (void)runAction:(id)arg1 completion:(id)arg2;

- (void)runAction:(id)arg1 withKey:(id)arg2;

@property(readonly, nonatomic) SKScene *scene;

- (void)setParent:(id)arg1;

- (void)setScale:(double)arg1;

@property(nonatomic) double speed;

@property(retain, nonatomic) NSMutableDictionary *userData; // @synthesize userData=_userData;

@property(nonatomic) double xRotation;

@property(nonatomic) double xScale;

@property(nonatomic) double yRotation;

@property(nonatomic) double yScale;

@property(nonatomic) double zPosition;

@property(nonatomic) double zRotation;



@end

