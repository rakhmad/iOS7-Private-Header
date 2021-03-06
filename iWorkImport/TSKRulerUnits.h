/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */





@class NSFormatter;



__attribute__((visibility("hidden")))

@interface TSKRulerUnits : NSObject

{

    int _rulerUnits;

    _Bool _showRulerAsPercentage;

    _Bool _centerRulerOrigin;

    int _preferredPixelUnit;

    NSFormatter *_formatter;

    NSFormatter *_lenientFormatter;

    NSFormatter *_highPrecisionFormatter;

    NSFormatter *_lenientHighPrecisionFormatter;

}



+ (id)formatterForRulerUnits:(int)arg1 decimalPlaces:(int)arg2 trailingZeros:(_Bool)arg3 lenient:(_Bool)arg4;

+ (id)instance;

@property(nonatomic) _Bool centerRulerOrigin; // @synthesize centerRulerOrigin=_centerRulerOrigin;

- (id)compatibleRulerUnits;

- (double)convertPointsToRulerUnits:(double)arg1;

- (double)convertRulerUnitsToPoints:(double)arg1;

- (void)dealloc;

- (id)formatter:(_Bool)arg1 lenient:(_Bool)arg2;

- (id)init;

- (id)localizedCompatibleRulerUnits;

@property(nonatomic) int preferredPixelUnit; // @synthesize preferredPixelUnit=_preferredPixelUnit;

@property(nonatomic) int rulerUnits; // @synthesize rulerUnits=_rulerUnits;

@property(nonatomic) _Bool showRulerAsPercentage; // @synthesize showRulerAsPercentage=_showRulerAsPercentage;



@end


