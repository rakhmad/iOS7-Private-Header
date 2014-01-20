/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */



#import "UIImageView.h"


@class UIView;



__attribute__((visibility("hidden")))

@interface _UIBarBackgroundImageView : UIImageView

{

    UIView *_topStripView;

    UIImageView *_customImageContainer;

    _Bool _translucent;

}



- (id)image;

@property(nonatomic, getter=isTranslucent) _Bool translucent; // @synthesize translucent=_translucent;

- (void)removeTopStripView;

- (void)setImage:(id)arg1;

- (id)topStripView;

- (void)updateTopStripViewCreateIfNecessary;



@end

