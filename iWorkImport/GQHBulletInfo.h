/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */





@class GQDSStyle;



__attribute__((visibility("hidden")))

@interface GQHBulletInfo : NSObject

{

    int mType;

    int mBulletIndent;

    int mTextIndent;

    struct __CFString *mChar;

    _Bool mHasNumber;

    int mNumber;

    int mLabelType;

    GQDSStyle *mStyle;

}



- (struct __CFString *)bulletChar;

- (int)bulletIndent;

- (struct __CFString *)createTierStringNumber;

- (void)dealloc;

- (_Bool)hasNumber;

- (int)labelType;

- (int)number;

- (void)setBulletChar:(struct __CFString *)arg1;

- (void)setBulletIndent:(int)arg1;

- (void)setHasNumber:(_Bool)arg1;

- (void)setLabelType:(int)arg1;

- (void)setNumber:(int)arg1;

- (void)setStyle:(id)arg1;

- (void)setTextIndent:(int)arg1;

- (void)setType:(int)arg1;

- (id)style;

- (int)textIndent;

- (int)type;



@end

