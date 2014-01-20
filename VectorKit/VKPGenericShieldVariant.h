/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */



#import "PBCodable.h"



@class NSString;



__attribute__((visibility("hidden")))

@interface VKPGenericShieldVariant : PBCodable

{

    CDStruct_e9f6a06b *_layers;

    unsigned long long _layersCount;

    unsigned long long _layersSpace;

    NSString *_fontName;

    float _fontSize;

    float _leftCapWidth;

    float _leftPadding;

    float _lineSpacing;

    unsigned int _numberOfLines;

    float _rightCapWidth;

    float _rightPadding;

    float _textBaseLine;

    struct {

        unsigned int fontSize:1;

        unsigned int leftCapWidth:1;

        unsigned int leftPadding:1;

        unsigned int lineSpacing:1;

        unsigned int numberOfLines:1;

        unsigned int rightCapWidth:1;

        unsigned int rightPadding:1;

        unsigned int textBaseLine:1;

    } _has;

}



- (struct CGSize)_imageSizeWithTextureAtlases:(id)arg1;

- (void)addLayer:(CDStruct_e9f6a06b)arg1;

- (void)clearLayers;

- (void)copyTo:(id)arg1;

- (void)dealloc;

- (id)description;

- (id)dictionaryRepresentation;

@property(retain, nonatomic) NSString *fontName; // @synthesize fontName=_fontName;

@property(nonatomic) float fontSize; // @synthesize fontSize=_fontSize;

@property(readonly, nonatomic) _Bool hasFontName;

@property(nonatomic) _Bool hasFontSize;

@property(nonatomic) _Bool hasLeftCapWidth;

@property(nonatomic) _Bool hasLeftPadding;

@property(nonatomic) _Bool hasLineSpacing;

@property(nonatomic) _Bool hasNumberOfLines;

@property(nonatomic) _Bool hasRightCapWidth;

@property(nonatomic) _Bool hasRightPadding;

@property(nonatomic) _Bool hasTextBaseLine;

- (unsigned long long)hash;

- (_Bool)isEqual:(id)arg1;

- (CDStruct_e9f6a06b)layerAtIndex:(unsigned long long)arg1;

@property(readonly, nonatomic) CDStruct_e9f6a06b *layers;

@property(readonly, nonatomic) unsigned long long layersCount;

@property(nonatomic) float leftCapWidth; // @synthesize leftCapWidth=_leftCapWidth;

@property(nonatomic) float leftPadding; // @synthesize leftPadding=_leftPadding;

@property(nonatomic) float lineSpacing; // @synthesize lineSpacing=_lineSpacing;

- (struct CGImage *)newImageWithBackgroundColor:(struct CGColor *)arg1 borderColor:(struct CGColor *)arg2 textureAtlases:(id)arg3 contentScale:(double)arg4;

@property(nonatomic) unsigned int numberOfLines; // @synthesize numberOfLines=_numberOfLines;

- (_Bool)readFrom:(id)arg1;

@property(nonatomic) float rightCapWidth; // @synthesize rightCapWidth=_rightCapWidth;

@property(nonatomic) float rightPadding; // @synthesize rightPadding=_rightPadding;

- (void)setLayers:(CDStruct_e9f6a06b *)arg1 count:(unsigned long long)arg2;

@property(nonatomic) float textBaseLine; // @synthesize textBaseLine=_textBaseLine;

- (void)writeTo:(id)arg1;



@end

