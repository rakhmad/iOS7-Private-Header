/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */



#import "SUScriptNativeObject.h"


@class SUDOMElement, UIBarButtonItem;



@interface SUScriptPopOverNativeObject : SUScriptNativeObject

{

    _Bool _redisplayAfterRotation;

    UIBarButtonItem *_sourceButtonItem;

    SUDOMElement *_sourceDOMElement;

}



- (_Bool)_isAffectedByWindowNotification:(id)arg1;

- (void)_windowDidRotateNotification:(id)arg1;

- (void)_windowWillRotateNotification:(id)arg1;

- (void)dealloc;

- (void)destroyNativeObject;

@property(retain, nonatomic) UIBarButtonItem *sourceButtonItem; // @synthesize sourceButtonItem=_sourceButtonItem;

@property(retain, nonatomic) SUDOMElement *sourceDOMElement; // @synthesize sourceDOMElement=_sourceDOMElement;

- (void)setupNativeObject;



@end


