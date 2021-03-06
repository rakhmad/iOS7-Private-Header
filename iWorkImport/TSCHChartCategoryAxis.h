/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */



#import "TSCHChartAxis.h"


__attribute__((visibility("hidden")))

@interface TSCHChartCategoryAxis : TSCHChartAxis

{

    int mRangeContinuousCache;

}



+ (id)axisForInfo:(id)arg1;

- (id)computeMajorGridlinesFromMinMaxInAnalysis:(id)arg1;

- (void)dealloc;

- (id)defaultProperties;

- (id)g_genericToSpecificPropertyMap;

- (unsigned long long)indexForSelectionPathLabelIndex:(unsigned long long)arg1;

- (_Bool)isCategory;

- (_Bool)isRangeContinuous;

- (pair_952e027e)labelEnumeratorPair;

- (id)p_getGenericToCategoryPropertyMap;

- (id)p_getGenericToCategoryPropertyMapForMultiData;

- (id)p_getGenericToCategoryPropertyMapForNonMultiData;

- (unsigned long long)selectionPathLabelIndexForIndex:(unsigned long long)arg1;

- (int)specificPropertyForGeneric:(int)arg1;



@end


