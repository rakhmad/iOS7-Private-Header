/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */





@class NSDictionary;



@interface RUIElement : NSObject

{

    NSDictionary *_attributes;

}



- (id)URLAttributeForImageName:(id)arg1 getScale:(double *)arg2;

- (int)_horizontalAlignmentForString:(id)arg1;

@property(retain, nonatomic) NSDictionary *attributes; // @synthesize attributes=_attributes;

- (void)dealloc;

- (void)imageLoaded:(id)arg1;

- (_Bool)loadImage;

- (void)populatePostbackDictionary:(id)arg1;

- (void)setImage:(id)arg1;

- (void)setImageAlignment:(int)arg1;

- (void)setImageSize:(struct CGSize)arg1;

- (id)sourceURL;



@end


