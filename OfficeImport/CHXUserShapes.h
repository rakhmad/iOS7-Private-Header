/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */





__attribute__((visibility("hidden")))

@interface CHXUserShapes : NSObject

{

}



+ (id)readAbsoluteSizeAnchor:(struct _xmlNode *)arg1 drawingState:(id)arg2;

+ (id)readDrawable:(struct _xmlNode *)arg1 anchor:(id)arg2 drawingState:(id)arg3;

+ (void)readFromCharSpaceNode:(struct _xmlNode *)arg1 state:(id)arg2;

+ (float)readRealCoordinate:(struct _xmlNode *)arg1;

+ (struct CGPoint)readRealPoint:(struct _xmlNode *)arg1;

+ (id)readRelativeSizeAnchor:(struct _xmlNode *)arg1 drawingState:(id)arg2;



@end


