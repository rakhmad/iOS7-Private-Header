/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */



#import "TSCH3DFramebufferCopyPipeline.h"


__attribute__((visibility("hidden")))

@interface TSCH3DBlurCopyPipeline : TSCH3DFramebufferCopyPipeline

{

    tvec2_84d5962d mOffset;

}



+ (id)pipelineWithProcessor:(id)arg1 session:(id)arg2 offset:(tvec2_84d5962d)arg3;

- (id).cxx_construct;

- (void)dealloc;

- (id)initWithProcessor:(id)arg1 session:(id)arg2 offset:(tvec2_84d5962d)arg3;

@property(nonatomic) tvec2_84d5962d offset; // @synthesize offset=mOffset;

- (void)updateShaderEffectsStates;



@end

