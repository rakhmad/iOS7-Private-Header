/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */



#import "CMMapper.h"


@class WDTableCell;



__attribute__((visibility("hidden")))

@interface WMTableCellMapper : CMMapper

{

    WDTableCell *mWdTableCell;

    unsigned int mColSpan;

    double mHeight;

    double mWidth;

    double mLeftPadding;

    double mRightPadding;

}



- (unsigned int)colSpan;

- (id)initWithWDTableCell:(id)arg1 atIndex:(unsigned int)arg2 parent:(id)arg3;

- (void)mapAt:(id)arg1 withState:(id)arg2;

- (void)mapCellStyleAt:(id)arg1;

- (id)tableMapper;



@end


