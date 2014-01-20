/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */





#import "NSCopying.h"

#import "NSMutableCopying.h"



__attribute__((visibility("hidden")))

@interface TSDLayoutGeometry : NSObject <NSCopying, NSMutableCopying>

{

    struct CGSize mSize;

    struct CGAffineTransform mTransform;

}



+ (id)geometryFromFullTransform:(struct CGAffineTransform)arg1;

- (struct CGPoint)center;

- (id)copyWithZone:(struct _NSZone *)arg1;

- (id)description;

- (_Bool)differsInMoreThanTranslationFrom:(id)arg1;

- (struct CGRect)frame;

- (struct CGAffineTransform)fullTransform;

- (id)geometryByOutsettingBy:(struct CGSize)arg1;

- (id)geometryByTransformingBy:(struct CGAffineTransform)arg1;

- (id)geometryByTranslatingBy:(struct CGPoint)arg1;

- (id)infoGeometry;

- (id)init;

- (id)initWithFrame:(struct CGRect)arg1;

- (id)initWithInfoGeometry:(id)arg1;

- (id)initWithSize:(struct CGSize)arg1 transform:(struct CGAffineTransform)arg2;

- (struct CGAffineTransform)inverseTransform;

- (_Bool)isEqual:(id)arg1;

- (id)mutableCopyWithZone:(struct _NSZone *)arg1;

@property(readonly, nonatomic) struct CGSize size; // @synthesize size=mSize;

@property(readonly, nonatomic) struct CGAffineTransform transform; // @synthesize transform=mTransform;

- (struct CGAffineTransform)transformByConcatenatingTransformTo:(struct CGAffineTransform)arg1;



@end

