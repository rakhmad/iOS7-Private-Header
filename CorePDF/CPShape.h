/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */



#import "CPGraphicObject.h"


#import "CPDisposable.h"



@interface CPShape : CPGraphicObject <CPDisposable>

{

    unsigned int pdfObjectID;

    struct CGPath *path;

    _Bool isUprightRectangle;

    int windingRule;

    double lineWidth;

    double miterLimit;

    int lineCap;

    int lineJoin;

    struct CGColor *fillColor;

    struct CGColor *strokeColor;

    union CGPDFObject *fillObject;

    union CGPDFObject *strokeObject;

    struct CGAffineTransform paintTransform;

    _Bool boundsComputed;

    _Bool renderedBoundsComputed;

}



- (void)accept:(id)arg1;

- (void)addShape:(id)arg1;

- (id)attributes;

- (struct CGRect)bounds;

- (_Bool)canCombineWith:(id)arg1;

- (id)copyWithZone:(struct _NSZone *)arg1;

- (void)dealloc;

- (void)dispose;

- (struct CGColor *)fillColor;

- (union CGPDFObject *)fillObject;

- (void)finalize;

- (_Bool)hasFill;

- (_Bool)hasSamePathAs:(id)arg1;

- (_Bool)hasStroke;

- (id)init;

- (id)initWithPDFShape:(struct CPPDFShape *)arg1;

- (struct CGRect)innerBounds;

- (_Bool)isStrokeFor:(id)arg1;

- (_Bool)isUprightRectangle;

- (_Bool)isVisible;

- (int)lineCap;

- (int)lineJoin;

- (double)lineWidth;

- (void)makeLineFromVertex:(struct CGPoint)arg1 toVertex:(struct CGPoint)arg2;

- (double)miterLimit;

- (struct CGAffineTransform)paintTransform;

- (struct CGPath *)path;

- (unsigned int)pathElementCount;

- (unsigned int)pdfObjectID;

- (void)recomputeBounds;

- (void)recomputeRenderedBounds;

- (struct CGRect)renderedBounds;

- (void)setFillColor:(struct CGColor *)arg1;

- (void)setFillObject:(union CGPDFObject *)arg1;

- (void)setLineCap:(int)arg1;

- (void)setLineJoin:(int)arg1;

- (void)setLineWidth:(double)arg1;

- (void)setMiterLimit:(double)arg1;

- (void)setPaintTransform:(struct CGAffineTransform)arg1;

- (void)setPath:(struct CGPath *)arg1;

- (void)setPdfObjectID:(unsigned int)arg1;

- (void)setStrokeColor:(struct CGColor *)arg1;

- (void)setStrokeObject:(union CGPDFObject *)arg1;

- (void)setWindingRule:(int)arg1;

- (id)string;

- (struct CGColor *)strokeColor;

- (union CGPDFObject *)strokeObject;

- (int)windingRule;

- (long long)zOrder;



@end

