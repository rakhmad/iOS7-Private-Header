/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */



#import "CMDiagramShapeMapper.h"


__attribute__((visibility("hidden")))

@interface CMDiagramShapeMatrixMapper : CMDiagramShapeMapper

{

    int mColumnCount;

    int mRowCount;

    float mRectWidth;

    float mRectHeight;

    _Bool mHasArrows;

    _Bool mIsSnake;

    _Bool mIsHorizontal;

    _Bool mIsLinear;

}



- (struct CGRect)circumscribedBounds;

- (int)columnCount;

- (double)gapRatio;

- (struct CGSize)gapSize;

- (id)initWithOddDiagram:(id)arg1 drawingContext:(id)arg2 orientedBounds:(id)arg3 identifier:(id)arg4 parent:(id)arg5;

- (void)mapChildrenAt:(id)arg1 withState:(id)arg2;

- (void)setColumnsAndRowsCount;

- (struct CGSize)sizeForNode:(id)arg1 atIndex:(unsigned long long)arg2;



@end

