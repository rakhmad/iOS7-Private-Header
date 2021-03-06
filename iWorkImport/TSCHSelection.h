/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */



#import "TSKSelection.h"


#import "NSCopying.h"



@class NSArray, TSCHChartDrawableInfo, TSCHSelectionPath;



__attribute__((visibility("hidden")))

@interface TSCHSelection : TSKSelection <NSCopying>

{

    TSCHChartDrawableInfo *mInfo;

    NSArray *mPaths;

}



+ (Class)archivedSelectionClass;

@property(readonly, nonatomic) TSCHChartDrawableInfo *chartInfo; // @synthesize chartInfo=mInfo;

- (id)copyWithZone:(struct _NSZone *)arg1;

- (void)dealloc;

@property(readonly, nonatomic) TSCHSelectionPath *firstPath;

- (id)init;

- (id)initFromArchive:(const struct ChartSelectionArchive *)arg1 unarchiver:(id)arg2;

- (id)initWithChartInfo:(id)arg1 path:(id)arg2;

- (id)initWithChartInfo:(id)arg1 paths:(id)arg2;

- (_Bool)isEqual:(id)arg1;

@property(readonly, nonatomic) NSArray *paths; // @synthesize paths=mPaths;

@property(readonly, nonatomic) _Bool returnChartFrameForAutoscroll;

- (void)saveToArchive:(struct ChartSelectionArchive *)arg1 archiver:(id)arg2;



@end


