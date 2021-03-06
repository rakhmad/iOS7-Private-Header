/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */





__attribute__((visibility("hidden")))

@interface OADOrientedBounds : NSObject

{

    struct CGRect mBounds;

    float mRotation;

    unsigned int mFlipX:1;

    unsigned int mFlipY:1;

    int mModeX;

    int mModeY;

}



+ (_Bool)directionCloserToVerticalThanToHorizontal:(float)arg1;

+ (id)orientedBoundsWithBounds:(struct CGRect)arg1;

+ (id)orientedBoundsWithBounds:(struct CGRect)arg1 rotation:(float)arg2 flipX:(_Bool)arg3 flipY:(_Bool)arg4;

- (id).cxx_construct;

- (struct CGRect)bounds;

- (_Bool)flipX;

- (_Bool)flipY;

- (unsigned long long)hash;

- (id)init;

- (id)initWithBounds:(struct CGRect)arg1;

- (id)initWithBounds:(struct CGRect)arg1 rotation:(float)arg2 flipX:(_Bool)arg3 flipY:(_Bool)arg4;

- (_Bool)isEqual:(id)arg1;

- (_Bool)isEqualToOrientedBounds:(id)arg1;

- (float)rotation;

- (void)setBounds:(struct CGRect)arg1;

- (void)setFlipX:(_Bool)arg1;

- (void)setFlipY:(_Bool)arg1;

- (void)setOrientedBounds:(id)arg1;

- (void)setRotation:(float)arg1;

- (void)setXMode:(int)arg1;

- (void)setYMode:(int)arg1;

- (int)xMode;

- (int)yMode;



@end


