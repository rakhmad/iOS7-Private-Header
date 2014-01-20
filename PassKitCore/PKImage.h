/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */





#import "NSSecureCoding.h"



@class NSData, NSObject<OS_dispatch_queue>;



@interface PKImage : NSObject <NSSecureCoding>

{

    NSObject<OS_dispatch_queue> *_queue;

    _Bool _shouldTile;

    _Bool _shouldStretch;

    struct PKEdgeInsets _capInsets;

    NSData *_imageData;

    struct CGImage *_imageRef;

    double _scale;

    long long _orientation;

}



+ (id)URLForImageNamed:(id)arg1 inBundle:(id)arg2 scale:(double *)arg3;

+ (id)hashOfImageNamed:(id)arg1 inBundle:(id)arg2;

+ (id)imageNamed:(id)arg1 inBundle:(id)arg2;

+ (id)passesImageNamed:(id)arg1;

+ (_Bool)supportsSecureCoding;

- (_Bool)_isTiledWhenStretchedToSize:(struct CGSize)arg1;

- (void)_queue_createImageRefIfNecessary;

- (id)blurredImageWithRadius:(unsigned long long)arg1 constraints:(id)arg2;

@property(readonly, nonatomic) struct PKEdgeInsets capInsets;

- (void)dealloc;

- (void)drawInRect:(struct CGRect)arg1 inContext:(struct CGContext *)arg2;

- (void)drawInRect:(struct CGRect)arg1 inContext:(struct CGContext *)arg2 withBlendMode:(int)arg3 alpha:(double)arg4;

- (void)encodeWithCoder:(id)arg1;

@property(readonly, nonatomic) NSData *imageData; // @synthesize imageData=_imageData;

@property(readonly, nonatomic) struct CGImage *imageRef; // @synthesize imageRef=_imageRef;

- (id)init;

- (id)initWithCGImage:(struct CGImage *)arg1 scale:(double)arg2 orientation:(long long)arg3;

- (id)initWithCoder:(id)arg1;

- (id)initWithData:(id)arg1 scale:(double)arg2;

- (id)notificationIconData;

@property(readonly, nonatomic) long long orientation; // @synthesize orientation=_orientation;

- (void)preheatBitmapData;

- (id)resizableImageByStretchingWithCapInsets:(struct PKEdgeInsets)arg1;

- (id)resizableImageByTilingCenterPixel;

- (id)resizableImageByTilingWithCapInsets:(struct PKEdgeInsets)arg1;

- (id)resizedImageWithConstraints:(id)arg1;

@property(readonly, nonatomic) double scale; // @synthesize scale=_scale;

@property(readonly, nonatomic) struct CGSize size;

@property(readonly, nonatomic) _Bool stretches;

@property(readonly, nonatomic) _Bool tiles;



@end

