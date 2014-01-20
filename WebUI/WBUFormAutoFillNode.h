/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */





#import "WBSFormAutoFillNode.h"



@class DOMNode;



@interface WBUFormAutoFillNode : NSObject <WBSFormAutoFillNode>

{

    DOMNode *_domNode;

}



+ (id)autoFillNodeWithDOMNode:(id)arg1;

- (void)dealloc;

@property(readonly, nonatomic) DOMNode *domNode; // @synthesize domNode=_domNode;

- (struct CGRect)elementBounds;

- (id)htmlTableCellElementCellAbove;

- (id)initWithDOMNode:(id)arg1;

- (id)initWithJSWrapper:(struct OpaqueJSValue *)arg1 inContext:(struct OpaqueJSContext *)arg2;

- (_Bool)isHTMLInputElementAutofilled;

- (_Bool)isHTMLInputElementUserEdited;

- (_Bool)isHTMLTextAreaElementUserEdited;

- (void)setHTMLInputElementAutofilled:(_Bool)arg1;



@end

