/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */



#import "TSDMediaLayout.h"


__attribute__((visibility("hidden")))

@interface TSDAudioLayout : TSDMediaLayout

{

}



- (struct CGRect)alignmentFrame;

- (_Bool)allowsConnections;

- (_Bool)canAspectRatioLockBeChangedByUser;

- (_Bool)canFlip;

- (struct CGRect)computeAlignmentFrameInRoot:(_Bool)arg1;

- (id)initWithInfo:(id)arg1;

- (id)layoutGeometryFromInfo;

- (id)movieInfo;

- (_Bool)resizeMayChangeAspectRatio;

- (_Bool)shouldDisplayGuides;

- (_Bool)supportsRotation;

- (int)wrapType;



@end

