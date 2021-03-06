/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */



#import "OAVState.h"


@class NSMutableDictionary, WDParagraph, WXState;



__attribute__((visibility("hidden")))

@interface WXOAVState : OAVState

{

    WXState *mWxState;

    WDParagraph *mParagraph;

    NSMutableDictionary *mNextVmlShapeIdToTextBoxMap;

}



- (id)currentParagraph;

- (void)dealloc;

- (id)initWithWXState:(id)arg1;

- (id)nextVmlShapeIdToTextBoxMap;

- (void)setCurrentParagraph:(id)arg1;

- (id)wxState;



@end


