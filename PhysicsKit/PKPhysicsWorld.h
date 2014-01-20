/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */





#import "NSCoding.h"



@class NSMutableArray;



@interface PKPhysicsWorld : NSObject <NSCoding>

{

    struct b2World *_world;

    struct b2Vec2 _gravity;

    _Bool _doSleep;

    double _accumulatedDt;

    struct PKContactListener _contactListener;

    float _speed;

    NSMutableArray *_bodies;

    NSMutableArray *_joints;

    NSMutableArray *_postStepBlocks;

}



+ (id)world;

- (id).cxx_construct;

- (void).cxx_destruct;

@property(retain, nonatomic) NSMutableArray *_bodies;

@property(nonatomic) _Bool _doSleep;

@property(nonatomic) struct b2Vec2 _gravity;

- (void)_runBlockOutsideOfTimeStep:(id)arg1;

@property(nonatomic) struct b2World *_world;

- (void)addBody:(id)arg1;

- (void)addJoint:(id)arg1;

- (id)bodies;

- (id)bodyAlongRayStart:(struct CGPoint)arg1 end:(struct CGPoint)arg2;

- (id)bodyAtPoint:(struct CGPoint)arg1;

- (id)bodyInRect:(struct CGRect)arg1;

- (id)collisionDelegate;

@property(nonatomic) id <PKPhysicsContactDelegate> contactDelegate;

- (id)copy;

- (id)copyWithZone:(struct _NSZone *)arg1;

- (void)dealloc;

- (void)encodeWithCoder:(id)arg1;

- (void)enumerateBodiesAlongRayStart:(struct CGPoint)arg1 end:(struct CGPoint)arg2 usingBlock:(id)arg3;

- (void)enumerateBodiesAtPoint:(struct CGPoint)arg1 usingBlock:(id)arg2;

- (void)enumerateBodiesInRect:(struct CGRect)arg1 usingBlock:(id)arg2;

@property(nonatomic) struct CGVector gravity;

- (_Bool)hasBodies;

- (id)init;

- (id)initWithCoder:(id)arg1;

- (void)removeAllBodies;

- (void)removeAllJoints;

- (void)removeBody:(id)arg1;

- (void)removeJoint:(id)arg1;

- (void)setCollisionDelegate:(id)arg1;

@property(nonatomic) double speed;

@property(nonatomic) double velocityThreshold;

- (_Bool)stepWithTime:(double)arg1 velocityIterations:(unsigned long long)arg2 positionIterations:(unsigned long long)arg3;



@end

