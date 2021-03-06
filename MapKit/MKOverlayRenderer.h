/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */





@interface MKOverlayRenderer : NSObject

{

    id <MKOverlay> _overlay;

    CDStruct_02837cd9 _boundingMapRect;

    id _canDrawCache;

    id _renderer;

    double _contentScaleFactor;

    double _alpha;

}



- (id).cxx_construct;

- (CDStruct_90e2a262)_boundingMapRect;

- (_Bool)_cachingCanDrawMapRect:(CDStruct_90e2a262)arg1 zoomScale:(double)arg2;

- (id)_canDrawCache;

- (id)_mk_overlayLayer;

- (id)_mk_overlayView;

- (CDStruct_c3b9c2ee)_originMapPoint;

- (id)_renderer;

@property double alpha; // @synthesize alpha=_alpha;

- (_Bool)canDrawMapRect:(CDStruct_90e2a262)arg1 zoomScale:(double)arg2;

@property(readonly) double contentScaleFactor;

- (void)dealloc;

- (void)drawMapRect:(CDStruct_90e2a262)arg1 zoomScale:(double)arg2 inContext:(struct CGContext *)arg3;

- (id)initWithOverlay:(id)arg1;

- (CDStruct_c3b9c2ee)mapPointForPoint:(struct CGPoint)arg1;

- (CDStruct_90e2a262)mapRectForRect:(struct CGRect)arg1;

@property(readonly, nonatomic) id <MKOverlay> overlay; // @synthesize overlay=_overlay;

- (_Bool)overlay:(id)arg1 canDrawKey:(const CDStruct_32a7f38a *)arg2;

- (void)overlay:(id)arg1 drawKey:(const CDStruct_32a7f38a *)arg2 inContext:(struct CGContext *)arg3;

- (struct CGPoint)pointForMapPoint:(CDStruct_c3b9c2ee)arg1;

- (struct CGRect)rectForMapRect:(CDStruct_90e2a262)arg1;

- (void)setContentScaleFactor:(double)arg1;

- (void)setNeedsDisplay;

- (void)setNeedsDisplayInMapRect:(CDStruct_90e2a262)arg1;

- (void)setNeedsDisplayInMapRect:(CDStruct_90e2a262)arg1 zoomScale:(double)arg2;

- (void)set_boundingMapRect:(CDStruct_90e2a262)arg1;

- (void)set_renderer:(id)arg1;



@end


