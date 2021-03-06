/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */





#import "NSCoding.h"

#import "NSCopying.h"



__attribute__((visibility("hidden")))

@interface TSDBezierPath : NSObject <NSCopying, NSCoding>

{

    long long sfr_elementCount;

    long long sfr_elementMax;

    struct PATHSEGMENT *sfr_head;

    double *sfr_elementLength;

    double sfr_totalLength;

    long long sfr_lastSubpathIndex;

    void *sfr_extraSegments;

    double sfr_lineWidth;

    struct CGRect sfr_controlPointBounds;

    double sfr_miterLimit;

    double sfr_flatness;

    double *sfr_dashedLinePattern;

    unsigned long long sfr_dashedLineCount;

    double sfr_dashedLinePhase;

    void *sfr_path;

    long long sfr_extraSegmentCount;

    long long sfr_extraSegmentMax;

    struct {

        unsigned int sfr_flags:8;

        unsigned int sfr_pathState:2;

        unsigned int sfr_calculatedLengths:1;

        unsigned int sfr_unused:21;

    } sfr_bpFlags;

}



+ (id)appendBezierPaths:(id)arg1;

+ (id)bezierPath;

+ (id)bezierPathWithCGPath:(struct CGPath *)arg1;

+ (id)bezierPathWithConvexHullOfPoints:(struct CGPoint *)arg1 count:(unsigned long long)arg2;

+ (id)bezierPathWithOvalInRect:(struct CGRect)arg1;

+ (id)bezierPathWithRect:(struct CGRect)arg1;

+ (id)bezierPathWithRoundedRect:(struct CGRect)arg1 cornerRadius:(double)arg2;

+ (id)bezierPathWithStart:(struct CGPoint)arg1 end:(struct CGPoint)arg2;

+ (void)clipRect:(struct CGRect)arg1;

+ (double)defaultFlatness;

+ (unsigned long long)defaultLineCapStyle;

+ (unsigned long long)defaultLineJoinStyle;

+ (double)defaultLineWidth;

+ (double)defaultMiterLimit;

+ (unsigned long long)defaultWindingRule;

+ (id)excludeBezierPaths:(id)arg1;

+ (id)exteriorOfBezierPath:(id)arg1;

+ (void)fillRect:(struct CGRect)arg1;

+ (double)flatness;

+ (void)initialize;

+ (id)intersectBezierPaths:(id)arg1;

+ (unsigned long long)lineCapStyle;

+ (unsigned long long)lineJoinStyle;

+ (double)lineWidth;

+ (double)miterLimit;

+ (id)outlineBezierPath:(id)arg1;

+ (id)outlineBezierPath:(id)arg1 withThreshold:(double)arg2;

+ (id)outsideEdgeOfBezierPath:(id)arg1;

+ (Path_1b135553 *)p_bezierToPath:(id)arg1;

+ (id)p_booleanWithBezierPaths:(id)arg1 operation:(int)arg2;

+ (id)p_pathToBezier:(Path_1b135553 *)arg1;

+ (struct CGRect)p_pathToBounds:(Path_1b135553 *)arg1;

+ (void)setDefaultFlatness:(double)arg1;

+ (void)setDefaultLineCapStyle:(unsigned long long)arg1;

+ (void)setDefaultLineJoinStyle:(unsigned long long)arg1;

+ (void)setDefaultLineWidth:(double)arg1;

+ (void)setDefaultMiterLimit:(double)arg1;

+ (void)setDefaultWindingRule:(unsigned long long)arg1;

+ (void)setFlatness:(double)arg1;

+ (void)setLineCapStyle:(unsigned long long)arg1;

+ (void)setLineJoinStyle:(unsigned long long)arg1;

+ (void)setLineWidth:(double)arg1;

+ (void)setMiterLimit:(double)arg1;

+ (void)setWindingRule:(unsigned long long)arg1;

+ (id)smoothBezierPath:(id)arg1 withThreshold:(double)arg2;

+ (void)strokeLineFromPoint:(struct CGPoint)arg1 toPoint:(struct CGPoint)arg2;

+ (void)strokeRect:(struct CGRect)arg1;

+ (id)subtractBezierPaths:(id)arg1;

+ (id)tracedPathForImage:(struct CGImage *)arg1 alphaThreshold:(double)arg2 pointSpacing:(double)arg3;

+ (id)tracedPathForInstantAlphaBinaryBitmap:(id)arg1 pointSpacing:(double)arg2;

+ (id)uniteBezierPaths:(id)arg1;

+ (unsigned long long)windingRule;

- (struct CGPath *)CGPath;

- (struct CGRect)_addMitersFromSegments:(id)arg1 toRect:(struct CGRect)arg2;

- (void)_addPathSegment:(long long)arg1 point:(struct CGPoint)arg2;

- (void)_appendArcSegmentWithCenter:(struct CGPoint)arg1 radius:(double)arg2 angle1:(double)arg3 angle2:(double)arg4;

- (void)_appendToPath:(id)arg1;

- (id)_copyFlattenedPath;

- (void)_deviceClosePath;

- (void)_deviceCurveToPoint:(struct CGPoint)arg1 controlPoint1:(struct CGPoint)arg2 controlPoint2:(struct CGPoint)arg3;

- (void)_deviceLineToPoint:(struct CGPoint)arg1;

- (void)_deviceMoveToPoint:(struct CGPoint)arg1;

- (void)_doPath;

- (void)addClip;

- (void)addIntersectionsWithLine:(struct CGPoint [2])arg1 to:(id)arg2;

- (void)addIntersectionsWithPath:(id)arg1 to:(id)arg2;

- (void)addIntersectionsWithPath:(id)arg1 to:(id)arg2 allIntersections:(_Bool)arg3 reversed:(_Bool)arg4;

- (void)addPathToContext:(struct CGContext *)arg1;

- (id)aliasedPathInContext:(struct CGContext *)arg1 effectiveStrokeWidth:(float)arg2;

- (id)aliasedPathWithViewScale:(float)arg1 effectiveStrokeWidth:(float)arg2;

- (void)alignBoundsToOrigin;

- (void)appendBezierPath:(id)arg1;

- (void)appendBezierPath:(id)arg1 fromSegment:(long long)arg2 t:(double)arg3 toSegment:(long long)arg4 t:(double)arg5 withoutMove:(_Bool)arg6;

- (void)appendBezierPath:(id)arg1 fromSegment:(long long)arg2 toSegment:(long long)arg3;

- (void)appendBezierPathWithArcFromPoint:(struct CGPoint)arg1 toPoint:(struct CGPoint)arg2 radius:(double)arg3;

- (void)appendBezierPathWithArcWithCenter:(struct CGPoint)arg1 radius:(double)arg2 startAngle:(double)arg3 endAngle:(double)arg4;

- (void)appendBezierPathWithArcWithCenter:(struct CGPoint)arg1 radius:(double)arg2 startAngle:(double)arg3 endAngle:(double)arg4 clockwise:(_Bool)arg5;

- (void)appendBezierPathWithArcWithEllipseBounds:(struct CGRect)arg1 startAngle:(double)arg2 swingAngle:(double)arg3 angleType:(int)arg4 startNewPath:(_Bool)arg5;

- (void)appendBezierPathWithArcWithEllipseBounds:(struct CGRect)arg1 startRadialVector:(struct CGPoint)arg2 endRadialVector:(struct CGPoint)arg3 angleSign:(int)arg4 startNewPath:(_Bool)arg5;

- (void)appendBezierPathWithOvalInRect:(struct CGRect)arg1;

- (void)appendBezierPathWithPoints:(struct CGPoint *)arg1 count:(long long)arg2;

- (void)appendBezierPathWithRect:(struct CGRect)arg1;

- (id)bezierPathByFittingCurve;

- (id)bezierPathByFittingCurve:(id)arg1;

- (id)bezierPathByFlatteningPath;

- (id)bezierPathByOffsettingPath:(double)arg1 joinStyle:(unsigned long long)arg2 withThreshold:(double)arg3;

- (id)bezierPathByRemovingRedundantElements;

- (id)bezierPathByReversingPath;

- (struct CGRect)bounds;

- (struct CGRect)boundsIncludingStroke;

- (struct CGRect)boundsIncludingStrokeWidth:(double)arg1 joinStyle:(unsigned long long)arg2 capStyle:(unsigned long long)arg3 miterLimit:(double)arg4 needsToExtendJoins:(_Bool)arg5;

- (struct CGRect)boundsIncludingTSDStroke:(id)arg1;

- (const char *)cString;

- (double)calculateLengthOfElement:(long long)arg1;

- (void)calculateLengths;

- (id)chisel;

- (void)clearStroke:(struct CGContext *)arg1;

- (void)closePath;

@property(readonly, nonatomic) _Bool containsClosePathElement;

- (_Bool)containsPoint:(struct CGPoint)arg1;

- (struct CGRect)controlPointBounds;

- (id)copyFromSegment:(int)arg1 t:(float)arg2 toSegment:(int)arg3 t:(float)arg4;

- (id)copyWithZone:(struct _NSZone *)arg1;

- (struct CGPoint)currentPoint;

- (float)curvatureAt:(float)arg1;

- (double)curvatureAt:(double)arg1 fromElement:(int)arg2;

- (void)curveToPoint:(struct CGPoint)arg1 controlPoint1:(struct CGPoint)arg2 controlPoint2:(struct CGPoint)arg3;

- (void)dealloc;

- (id)description;

- (double)distanceToPoint:(struct CGPoint)arg1 elementIndex:(unsigned long long *)arg2 tValue:(double *)arg3 threshold:(double)arg4;

- (unsigned long long)elementAtIndex:(long long)arg1;

- (unsigned long long)elementAtIndex:(long long)arg1 allPoints:(struct CGPoint *)arg2;

- (unsigned long long)elementAtIndex:(long long)arg1 associatedPoints:(struct CGPoint *)arg2;

- (long long)elementCount;

- (long long)elementPercentage:(float *)arg1 forOverallPercentage:(float)arg2;

- (float)elementPercentageFromElement:(int)arg1 forOverallPercentage:(float)arg2;

- (void)encodeWithCoder:(id)arg1;

- (void)fill;

- (void)finalize;

- (double)flatness;

- (void)flattenIntoPath:(id)arg1;

- (void)getLineDash:(double *)arg1 count:(long long *)arg2 phase:(double *)arg3;

- (void)getStartPoint:(struct CGPoint *)arg1 andEndPoint:(struct CGPoint *)arg2;

- (struct CGPoint)gradientAt:(float)arg1;

- (struct CGPoint)gradientAt:(double)arg1 fromElement:(long long)arg2;

- (id)init;

- (id)initWithArchive:(const struct Path *)arg1;

- (id)initWithCString:(const char *)arg1;

- (id)initWithCoder:(id)arg1;

- (id)intersectBezierPath:(id)arg1;

- (_Bool)intersectsRect:(struct CGRect)arg1 hasFill:(_Bool)arg2;

- (_Bool)isCircular;

- (_Bool)isClockwise;

@property(readonly, nonatomic) _Bool isCompound;

- (_Bool)isDiamond;

@property(readonly, nonatomic) _Bool isEffectivelyClosed;

- (_Bool)isEmpty;

- (_Bool)isEqual:(id)arg1;

- (_Bool)isFlat;

@property(readonly, nonatomic) _Bool isLineSegment;

@property(readonly, nonatomic) _Bool isOpen;

- (_Bool)isRectangular;

@property(readonly, nonatomic) _Bool isSelfIntersecting;

- (_Bool)isTriangular;

- (double)length;

- (double)lengthOfElement:(long long)arg1;

- (double)lengthToElement:(long long)arg1;

- (unsigned long long)lineCapStyle;

- (unsigned long long)lineJoinStyle;

- (void)lineToPoint:(struct CGPoint)arg1;

- (double)lineWidth;

- (double)miterLimit;

- (void)moveToPoint:(struct CGPoint)arg1;

- (struct CGPoint)myGradientAt:(float)arg1;

- (struct CGPoint)myGradientAt:(float)arg1 fromElement:(long long)arg2;

- (struct CGPoint)nearestAngleOnPathToLine:(struct CGPoint [2])arg1;

- (struct CGPoint)nearestPointOnPathToLine:(struct CGPoint [2])arg1;

- (id)outlineStroke;

- (id)p_aliasedPathInContext:(struct CGContext *)arg1 viewScale:(float)arg2 effectiveStrokeWidth:(float)arg3;

- (id)p_beziersFromSegmentIntersections:(id)arg1;

- (id)p_pathAsSegments;

- (id)pathBySplittingAtPointOnPath:(struct CGPoint)arg1;

- (id)pathByWobblingByUpTo:(double)arg1 subdivisions:(unsigned long long)arg2;

- (struct CGPoint)pointAlongPathAtPercentage:(double)arg1;

- (struct CGPoint)pointAt:(double)arg1 fromElement:(long long)arg2;

- (_Bool)pointOnPath:(struct CGPoint)arg1 tolerance:(double)arg2;

- (id)pressure;

- (struct CGPoint)rawGradientAt:(float)arg1 fromElement:(long long)arg2;

- (void)recursiveSubdivideOntoPath:(id)arg1 into:(id)arg2;

- (void)recursiveSubdivideOntoPath:(id)arg1 withScaling:(CDStruct_c3b9c2ee)arg2 inElementRange:(struct _NSRange)arg3 into:(id)arg4;

- (void)recursiveSubdivideOntoPath:(id)arg1 withScaling:(CDStruct_c3b9c2ee)arg2 into:(id)arg3;

- (void)relativeCurveToPoint:(struct CGPoint)arg1 controlPoint1:(struct CGPoint)arg2 controlPoint2:(struct CGPoint)arg3;

- (void)relativeLineToPoint:(struct CGPoint)arg1;

- (void)relativeMoveToPoint:(struct CGPoint)arg1;

- (void)removeAllPoints;

- (struct CGPoint)roundPoint:(struct CGPoint)arg1 inContext:(struct CGContext *)arg2 strokeWidth:(int)arg3;

- (void)saveToArchive:(struct Path *)arg1;

- (void)setAssociatedPoints:(struct CGPoint *)arg1 atIndex:(long long)arg2;

- (void)setFlatness:(double)arg1;

- (void)setLineCapStyle:(unsigned long long)arg1;

- (void)setLineDash:(const double *)arg1 count:(long long)arg2 phase:(double)arg3;

- (void)setLineJoinStyle:(unsigned long long)arg1;

- (void)setLineWidth:(double)arg1;

- (void)setMiterLimit:(double)arg1;

- (void)setWindingRule:(unsigned long long)arg1;

- (void)stroke;

- (void)subdivideBezierWithFlatness:(double)arg1 startPoint:(struct CGPoint)arg2 controlPoint1:(struct CGPoint)arg3 controlPoint2:(struct CGPoint)arg4 endPoint:(struct CGPoint)arg5;

- (id)subtractBezierPath:(id)arg1;

- (void)takeAttributesFromStroke:(id)arg1;

- (void)transformUsingAffineTransform:(struct CGAffineTransform)arg1;

- (struct CGPoint)transformedCoordinate:(struct CGPoint)arg1 withPressure:(id)arg2;

- (struct CGPoint)transformedTotalCoordinate:(struct CGPoint)arg1 betweenElement:(long long)arg2 andElement:(long long)arg3 withPressure:(id)arg4 getElement:(long long *)arg5 getPercentage:(float *)arg6;

- (struct CGPoint)transformedTotalCoordinate:(struct CGPoint)arg1 inElement:(long long)arg2 withPressure:(id)arg3;

- (id)uniteWithBezierPath:(id)arg1;

- (unsigned long long)windingRule;

- (double)yValueFromXValue:(double)arg1;

- (double)yValueFromXValue:(double)arg1 elementIndex:(long long *)arg2 parametricValue:(double *)arg3;



@end


