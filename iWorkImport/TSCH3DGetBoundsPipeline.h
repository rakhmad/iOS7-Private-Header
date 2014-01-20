/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */



#import "TSCH3DSceneRenderPipeline.h"


__attribute__((visibility("hidden")))

@interface TSCH3DGetBoundsPipeline : TSCH3DSceneRenderPipeline

{

}



+ (id)pipelineWithScene:(id)arg1;

+ (id)pipelineWithScene:(id)arg1 renderProcessor:(id)arg2;

@property(readonly, nonatomic) const struct ObjectBounds *bounds;

- (id)boundsProcessor;

- (void)extend2DProjectedBounds:(const box_a3bd9649 *)arg1;

- (void)get3DBounds:(id)arg1;

- (void)getBounds:(id)arg1;

- (void)getProjectedBounds:(id)arg1;

- (id)initWithScene:(id)arg1;

- (id)initWithScene:(id)arg1 renderProcessor:(id)arg2;

- (Class)labelsMeshRendererClassForLabelsRenderer:(id)arg1;

- (void)resetBounds;

- (_Bool)run;

- (void)runScene:(id)arg1 selector:(SEL)arg2;

- (void)set2DProjectedRenderingMode:(_Bool)arg1;

- (void)setObjectRenderMode:(int)arg1;

- (_Bool)shouldSkipLabelsIfHidden;

- (_Bool)useIndividualBounds;



@end

