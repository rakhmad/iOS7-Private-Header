/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */



#import "TSCH3DFramebufferAccumulationPipeline.h"


__attribute__((visibility("hidden")))

@interface TSCH3DComponent16FramebufferAccumulationPipeline : TSCH3DFramebufferAccumulationPipeline

{

}



- (_Bool)accumulate;

- (id)component16Accumulator;

- (id)component16Resolver;

- (id)initWithProcessor:(id)arg1 session:(id)arg2;

- (_Bool)resolve;

- (void)setFactor:(float)arg1;

- (void)setFramebufferSize:(tvec2_3b141483 *)arg1;



@end

