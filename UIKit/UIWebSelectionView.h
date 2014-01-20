/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */



#import "UIView.h"


@class NSTimer, UIWebDocumentView, UIWebSelection, UIWebSelectionGraph, UIWebSelectionHandle, UIWebSelectionNode, UIWebSelectionOutline, UIWebTextRangeView;



__attribute__((visibility("hidden")))

@interface UIWebSelectionView : UIView

{

    UIView *_center;

    struct CGRect _selectionFrame;

    UIWebSelectionHandle *_top;

    UIWebSelectionHandle *_right;

    UIWebSelectionHandle *_bottom;

    UIWebSelectionHandle *_left;

    UIWebSelectionOutline *_outline;

    UIWebTextRangeView *_textRangeView;

    UIWebDocumentView *_documentView;

    UIWebSelectionNode *_selectionNode;

    UIWebSelectionGraph *_selectionGraph;

    double _growThreshold;

    double _shrinkThreshold;

    struct {

        UIWebSelectionHandle *scrollingHandle;

        double startTime;

        int direction;

        NSTimer *timer;

    } _autoscrollData;

    struct {

        UIWebSelectionHandle *activeHandle;

        struct CGPoint handleCenterStart;

        double handleOffset;

    } _blockSelectionData;

    struct {

        UIWebSelectionHandle *start;

        UIWebSelectionHandle *end;

        struct CGSize startingOffset;

        _Bool anchorAtStart;

        struct {

            _Bool flipPossible;

            _Bool rectsChanged;

            struct CGRect originalSelectionRect;

        } flipData;

    } _rangedSelectionData;

    _Bool _creatingSelection;

    int _nestedLayoutCalls;

    _Bool _calloutBarIsHiddenBeforeRotation;

    _Bool _rotating;

    int _selectionInFixedPosition;

}



- (void)_didScroll;

- (void)_subscribeToScrollNotificationsIfNecessary:(id)arg1;

- (id)activeHandle;

- (_Bool)activelyManipulatingBlockSelectionHandle;

- (_Bool)activelyManipulatingTextSelectionHandle;

- (void)animateSloppyReleaseOfHandleInText:(id)arg1 withMagnifier:(id)arg2;

- (int)autoscrollDirectionsForHandle:(id)arg1;

- (void)autoscrollTimerFired:(id)arg1;

- (void)calloutBar:(id)arg1 selectedCommand:(id)arg2;

- (_Bool)canFlip;

- (void)clearSelection;

- (void)computeExpandAndContractThresholdsForActiveHandle;

- (void)considerFlipping;

- (void)contractForActiveHandle;

- (void)dealloc;

- (struct CGRect)desiredBox;

- (void)didEndScrollingOrZoomingPage;

- (void)didEndScrollingOverflow;

- (void)endSelectionCreationWithPoint:(struct CGPoint)arg1;

- (void)expandForActiveHandle;

- (struct CGRect)fetchSelectionBoundingRect;

- (struct CGRect)fetchSelectionBoundingTextSelectionRect;

- (id)handleWithPosition:(int)arg1;

- (id)handles;

- (void)hideControls;

- (void)hideControlsBeforeRotation;

- (void)hideCopyCallout;

- (id)hitTest:(struct CGPoint)arg1 withEvent:(id)arg2;

- (id)initWithWebDocumentView:(id)arg1;

- (_Bool)isHorizontalWritingMode;

- (void)layoutChangedByScrolling:(_Bool)arg1;

- (id)nodeInPristineGraphAtPoint:(struct CGPoint)arg1;

- (void)onAfterScrollOrZoomShowingSelection:(_Bool)arg1;

- (void)onBeforeScrollOrZoomHidingSelection:(_Bool)arg1;

- (void)removeFromSuperview;

- (void)resetSelection;

- (void)scaleChanged;

@property(readonly, nonatomic) UIWebSelection *selection;

- (void)selectionChanged;

@property(nonatomic) struct CGRect selectionFrame;

@property(retain, nonatomic) UIWebSelectionNode *selectionNode; // @synthesize selectionNode=_selectionNode;

- (void)setHandleCenters;

- (void)setOrientationOfMagnifier:(id)arg1 forHandleInText:(id)arg2;

- (void)setSelectionFrame:(struct CGRect)arg1 animated:(_Bool)arg2;

- (void)shiftWebRangeSelectionAnimationDidStop:(id)arg1 finished:(id)arg2;

- (_Bool)shouldContractForActiveHandle;

- (_Bool)shouldExpandForActiveHandle;

- (_Bool)shouldSwitchToBlockModeForHandle:(id)arg1;

- (void)showControls;

- (void)showControlsAfterRotation;

- (void)showCopyCalloutWithAnimation:(_Bool)arg1;

- (void)startSelectionCreationWithPoint:(struct CGPoint)arg1;

- (void)stopAnyAutoscrolling;

- (void)switchToBlockModeForHandle:(id)arg1;

- (void)switchToTextModeForHandle:(id)arg1;

- (id)tintView;

- (void)touchChanged:(id)arg1 forHandle:(id)arg2;

- (void)touchChanged:(id)arg1 forHandleInText:(id)arg2;

- (void)updateAutoscrollForHandle:(id)arg1;

- (void)updateForChangedLayoutWhileManipulatingBlockSelectionHandle;

- (void)updateForChangedLayoutWhileManipulatingTextSelectionHandle;

- (void)updateFrameAndHandlesWithAnimation:(_Bool)arg1;

- (_Bool)updateRectForCalloutBar:(id)arg1 inWindow:(id)arg2;

- (void)updateSelectionCreationWithPoint:(struct CGPoint)arg1;

- (void)updateSelectionRects;

- (void)updateTextRangeViewSelectionRects;

- (void)willStartScrollingOrZoomingPage;

- (void)willStartScrollingOverflow;



@end

