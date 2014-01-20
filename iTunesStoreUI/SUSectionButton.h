/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */





#import "NSCopying.h"



@class NSString, NSURL, UIImage;



@interface SUSectionButton : NSObject <NSCopying>

{

    NSString *_accessibilityTitle;

    NSString *_displayTitle;

    UIImage *_image;

    struct UIEdgeInsets _imageInsets;

    NSURL *_imageURL;

    float _imageURLScale;

    long long _tag;

}



@property(copy, nonatomic) NSString *accessibilityTitle; // @synthesize accessibilityTitle=_accessibilityTitle;

- (void)applyToBarButtonItem:(id)arg1;

- (id)copyWithZone:(struct _NSZone *)arg1;

- (void)dealloc;

@property(copy, nonatomic) NSString *displayTitle; // @synthesize displayTitle=_displayTitle;

@property(retain, nonatomic) UIImage *image; // @synthesize image=_image;

@property(nonatomic) struct UIEdgeInsets imageInsets; // @synthesize imageInsets=_imageInsets;

@property(copy, nonatomic) NSURL *imageURL; // @synthesize imageURL=_imageURL;

@property(nonatomic) float imageURLScale; // @synthesize imageURLScale=_imageURLScale;

- (id)initWithSectionButtonDictionary:(id)arg1;

@property(nonatomic) long long tag; // @synthesize tag=_tag;



@end

