/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */



#import "UIView.h"



@class NSArray, UIColor;



__attribute__((visibility("hidden")))

@interface EKEventDetailAttendeesListView : UIView

{

    _Bool _highlighted;

    _Bool _groupsNames;

    NSArray *_acceptedNames;

    NSArray *_maybeNames;

    NSArray *_declinedNames;

    NSArray *_noReplyNames;

    NSArray *_ungroupedNames;

    UIColor *_textColor;

    UIColor *_highlightedTextColor;

}



- (void).cxx_destruct;

- (void)_drawColumnOfStrings:(id)arg1 inRange:(struct _NSRange)arg2 startingAtPoint:(struct CGPoint)arg3 givenWidth:(double)arg4;

- (double)_heightForGroupOfAttendeeNames:(id)arg1;

@property(retain, nonatomic) NSArray *acceptedNames; // @synthesize acceptedNames=_acceptedNames;

@property(retain, nonatomic) NSArray *declinedNames; // @synthesize declinedNames=_declinedNames;

- (void)drawInvitees:(id)arg1 withStatus:(id)arg2 startingAtPoint:(struct CGPoint)arg3 givenWidth:(double)arg4;

- (void)drawRect:(struct CGRect)arg1;

@property(nonatomic) _Bool groupsNames; // @synthesize groupsNames=_groupsNames;

@property(retain, nonatomic) UIColor *highlightedTextColor; // @synthesize highlightedTextColor=_highlightedTextColor;

@property(nonatomic, getter=isHighlighted) _Bool highlighted; // @synthesize highlighted=_highlighted;

@property(retain, nonatomic) NSArray *maybeNames; // @synthesize maybeNames=_maybeNames;

@property(retain, nonatomic) NSArray *noReplyNames; // @synthesize noReplyNames=_noReplyNames;

@property(retain, nonatomic) UIColor *textColor; // @synthesize textColor=_textColor;

@property(retain, nonatomic) NSArray *ungroupedNames; // @synthesize ungroupedNames=_ungroupedNames;

- (struct CGSize)sizeThatFits:(struct CGSize)arg1;



@end


