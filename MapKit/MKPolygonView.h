/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */



#import "MKOverlayPathView.h"


@class MKPolygon;



@interface MKPolygonView : MKOverlayPathView

{

}



- (void)createPath;

- (void)fillPath:(struct CGPath *)arg1 inContext:(struct CGContext *)arg2;

- (id)initWithPolygon:(id)arg1;

@property(readonly, nonatomic) MKPolygon *polygon;



@end


