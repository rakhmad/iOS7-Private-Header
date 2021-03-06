/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */



#import "CALayer.h"



@class NSMutableArray;



__attribute__((visibility("hidden")))

@interface _UITextTiledLayer : CALayer

{

    NSMutableArray *_reusableTiles;

    struct CGRect _gridBounds;

    struct {

        unsigned int disableTiling:1;

        unsigned int ditchAllTiles:1;

        unsigned int suspendLayout:4;

    } _tcTiledLayerFlags;

    struct CGSize _tileSize;

}



- (void)_buildTilesForRect:(struct CGRect)arg1;

- (void)_cullAndAddLayers:(struct CGRect)arg1;

- (void)_hideAndShowTiles:(struct CGRect)arg1 visibleBounds:(struct CGRect)arg2;

- (void)_validateTiles;

- (void)dealloc;

- (void)drawDirtyLayer:(id)arg1 intoContext:(struct CGContext *)arg2;

- (id)init;

- (void)layoutSublayers;

- (void)renderInContext:(struct CGContext *)arg1;

- (void)resumeTiling;

- (void)setBounds:(struct CGRect)arg1;

- (void)setNeedsDisplayInRect:(struct CGRect)arg1;

@property(nonatomic) struct CGSize tileSize; // @synthesize tileSize=_tileSize;

@property(nonatomic) _Bool usesTiledLayers;

- (void)suspendTiling;



@end


