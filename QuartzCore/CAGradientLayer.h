/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */



#import "CALayer.h"


@class NSArray, NSString;



@interface CAGradientLayer : CALayer

{

}



+ (_Bool)CA_automaticallyNotifiesObservers:(Class)arg1;

+ (_Bool)_hasRenderLayerSubclass;

+ (id)defaultValueForKey:(id)arg1;

- (struct Layer *)_copyRenderLayer:(struct Transaction *)arg1 layerFlags:(unsigned int)arg2 commitFlags:(unsigned int *)arg3;

- (void)_renderBackgroundInContext:(struct CGContext *)arg1;

- (_Bool)_renderLayerDefinesProperty:(unsigned int)arg1;

- (unsigned int)_renderLayerPropertyAnimationFlags:(unsigned int)arg1;

@property(retain) id colorMap;

@property(copy) NSArray *colors;

- (void)didChangeValueForKey:(id)arg1;

@property struct CGPoint endPoint;

- (id)implicitAnimationForKeyPath:(id)arg1;

@property(copy) NSArray *locations;

@property struct CGPoint startPoint;

@property(copy) NSString *type;



@end


