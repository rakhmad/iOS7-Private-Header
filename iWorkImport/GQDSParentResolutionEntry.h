/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */





@class GQDSStyle;



__attribute__((visibility("hidden")))

@interface GQDSParentResolutionEntry : NSObject

{

    char *mParentIdentifier;

    GQDSStyle *mStyle;

}



- (void)dealloc;

- (id)initWithStyle:(id)arg1 parentIdentifier:(const char *)arg2;

- (const char *)parentIdentifier;

- (id)style;



@end

