/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */



#import "TSPObject.h"


#import "KNInspectableAnimation.h"

#import "NSCopying.h"

#import "TSKTransformableObject.h"



@class KNAnimationInfo, KNAnimationPluginMenu, KNBuildAttributes, KNSlide, NSArray, NSSet, NSString, TSDDrawableInfo, TSDEditableBezierPathSource, TSUColor;



__attribute__((visibility("hidden")))

@interface KNBuild : TSPObject <NSCopying, TSKTransformableObject, KNInspectableAnimation>

{

    TSDDrawableInfo *mDrawable;

    NSString *mDelivery;

    KNBuildAttributes *mAttributes;

    KNSlide *mSlide;

}



+ (id)buildWithEffect:(id)arg1 animationType:(int)arg2 drawable:(id)arg3;

+ (id)menuAnimationInfosForDrawableInfo:(id)arg1 animationType:(int)arg2;

+ (id)p_drawableFromInfo:(id)arg1;

+ (_Bool)p_shouldExcludeAnimationName:(id)arg1 forDrawable:(id)arg2;

+ (id)supportedAnimationInfosForDrawableInfo:(id)arg1 animationType:(int)arg2;

@property(readonly, nonatomic) unsigned long long actionAcceleration;

@property(readonly, nonatomic) TSDEditableBezierPathSource *actionMotionPathSource;

@property(readonly, nonatomic) double actionOpacity;

@property(readonly, nonatomic) double actionRotationAngle;

@property(readonly, nonatomic) unsigned long long actionRotationDirection;

@property(readonly, nonatomic) double actionScale;

@property(readonly, nonatomic) struct _NSRange activeChunkRange;

@property(readonly, nonatomic) NSString *animationFilter;

@property(readonly, nonatomic) KNAnimationInfo *animationInfo;

@property(readonly, nonatomic) int animationType;

@property(copy, nonatomic) KNBuildAttributes *attributes;

@property(readonly, nonatomic) NSString *buildImageTitle;

@property(readonly, nonatomic) _Bool canEditAnimations;

@property(readonly, nonatomic) unsigned long long chunkCount;

@property(readonly, nonatomic) NSArray *chunks;

@property(readonly, nonatomic) TSUColor *color;

- (id)commandForTransformingByTransform:(struct CGAffineTransform)arg1 context:(id)arg2 transformedObjects:(id)arg3 inBounds:(struct CGRect)arg4;

- (id)copyWithZone:(struct _NSZone *)arg1;

- (id)createNewChunks;

@property(readonly, nonatomic) float custom3DChartRotation;

@property(readonly, nonatomic) _Bool customBounce;

@property(readonly, nonatomic) _Bool customDecay;

@property(readonly, nonatomic) unsigned long long customDeliveryOption;

@property(readonly, nonatomic) unsigned long long customJiggleIntensity;

@property(readonly, nonatomic) unsigned long long customRepeatCount;

@property(readonly, nonatomic) unsigned long long customScale;

@property(readonly, nonatomic) long long customTextDelivery;

- (void)dealloc;

@property(readonly, nonatomic) double delay;

- (id)deliveriesLocalized:(_Bool)arg1;

@property(copy, nonatomic) NSString *delivery;

@property(readonly, nonatomic) unsigned long long deliveryStyle;

@property(readonly, nonatomic) NSString *deliveryWithoutDowngrading;

- (id)description;

@property(readonly, nonatomic) unsigned long long direction;

@property(readonly, nonatomic) KNAnimationPluginMenu *directionMenu;

@property(readonly, nonatomic) unsigned long long directionType;

@property(readonly, nonatomic) _Bool downgradesDelivery;

@property(retain, nonatomic) TSDDrawableInfo *drawable;

@property(readonly, nonatomic) double duration;

@property(readonly, nonatomic) NSString *effect;

- (unsigned long long)endChunkIndexFromEndOffset:(unsigned long long)arg1;

@property(readonly, nonatomic) unsigned long long endOffset;

@property(readonly, nonatomic) unsigned long long eventTrigger;

@property(readonly, nonatomic) unsigned long long firstChunkIndexOnSlide;

@property(readonly, nonatomic) _Bool hasComplement;

- (_Bool)hasComplementInBuilds:(id)arg1;

@property(readonly, nonatomic) unsigned long long index;

@property(readonly, nonatomic) unsigned long long indexOrderedByFirstChunk;

- (id)initFromUnarchiver:(id)arg1;

- (id)initWithSlide:(id)arg1 effect:(id)arg2 buildType:(int)arg3 context:(id)arg4;

@property(readonly, nonatomic) NSSet *inspectableAttributes;

@property(readonly, nonatomic) _Bool isActionBuild;

@property(readonly, nonatomic) _Bool isEmphasisBuild;

@property(readonly, nonatomic) _Bool isFirst;

@property(readonly, nonatomic) unsigned long long lastChunkIndexOnSlide;

- (void)loadFromArchive:(const struct BuildArchive *)arg1 unarchiver:(id)arg2;

@property(readonly, nonatomic) NSString *localizedEffect;

- (id)p_chunkAtIndex:(unsigned long long)arg1;

- (_Bool)p_supportsCustomTextDeliveryOptionsForAttributes:(id)arg1;

- (void)saveToArchive:(struct BuildArchive *)arg1 archiver:(id)arg2;

- (void)saveToArchiver:(id)arg1;

@property(nonatomic) KNSlide *slide; // @synthesize slide=mSlide;

@property(readonly, nonatomic) unsigned long long startOffset;

@property(readonly, nonatomic) _Bool supportsBounce;

@property(readonly, nonatomic) _Bool supportsCustomTextDelivery;

@property(readonly, nonatomic) _Bool supportsDelivery;

@property(readonly, nonatomic) _Bool supportsDirection;

@property(readonly, nonatomic) _Bool supportsDuration;

@property(readonly, nonatomic) NSString *title;



@end


