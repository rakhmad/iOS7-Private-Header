/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */





@class NSMutableArray, NSSQLEntity, NSString;



__attribute__((visibility("hidden")))

@interface NSSQLStatement : NSObject

{

    NSSQLEntity *_entity;

    NSMutableArray *_bindVariables;

    NSMutableArray *_bindIntarrays;

    NSString *_sqlString;

    _Bool _isImpossibleCondition;

    NSSQLEntity *_fakeEntityForFetch;

}



- (unsigned int)addBindIntarray:(id)arg1;

- (unsigned int)addBindVariable:(id)arg1;

- (id)bindIntarrays;

- (id)bindVariables;

- (void)cacheFakeEntityForFetch:(id)arg1;

- (void)clearCaches;

- (void)dealloc;

- (id)description;

- (id)entity;

- (id)fakeEntityForFetch;

- (id)initWithEntity:(id)arg1;

- (id)initWithEntity:(id)arg1 sqlString:(id)arg2;

- (_Bool)isImpossibleCondition;

- (_Bool)isReadOnly;

- (void)removeAllBindIntarrays;

- (void)removeAllBindVariables;

- (void)setBindIntarrays:(id)arg1;

- (void)setBindVariables:(id)arg1;

- (void)setImpossibleCondition:(_Bool)arg1;

- (void)setSQLString:(id)arg1;

- (id)sqlString;



@end

