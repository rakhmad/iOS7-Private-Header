/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */



#import "NSSQLIntermediate.h"


@class NSSQLWhereIntermediate;



__attribute__((visibility("hidden")))

@interface NSSQLHavingIntermediate : NSSQLIntermediate

{

    NSSQLWhereIntermediate *_whereClause;

}



- (void)dealloc;

- (id)generateSQLStringInContext:(id)arg1;

- (id)initWithPredicate:(id)arg1 inScope:(id)arg2 inContext:(id)arg3;

- (_Bool)isHavingScoped;



@end

