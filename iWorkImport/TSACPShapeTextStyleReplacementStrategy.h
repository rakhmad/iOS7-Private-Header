/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */



#import "TSACPTextStyleReplacementStrategy.h"


@class TSSStyle;



__attribute__((visibility("hidden")))

@interface TSACPShapeTextStyleReplacementStrategy : TSACPTextStyleReplacementStrategy

{

    TSSStyle *mShapeStyle;

}



- (void)dealloc;

- (id)initWithChangePropagationVisitor:(id)arg1 storage:(id)arg2 shapeStyle:(id)arg3 forLockedObject:(_Bool)arg4;

- (void)populateStyleReplacements:(id)arg1 forParagraphStyle:(id)arg2 listStyle:(id)arg3 parIndex:(unsigned long long)arg4;

@property(readonly, nonatomic) TSSStyle *shapeStyle; // @synthesize shapeStyle=mShapeStyle;



@end

