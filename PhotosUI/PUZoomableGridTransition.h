/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */





#import "UIViewControllerInteractiveTransitioning.h"



@class NSIndexPath, PUMomentsZoomLevelManager, UICollectionView, UICollectionViewTransitionLayout;



@interface PUZoomableGridTransition : NSObject <UIViewControllerInteractiveTransitioning>

{

    UICollectionView *_collectionView;

    _Bool _interactive;

    PUMomentsZoomLevelManager *_zoomLevelManager;

    unsigned long long _originZoomLevel;

    unsigned long long _targetZoomLevel;

    unsigned long long _transitionState;

    NSIndexPath *_anchorItemIndexPath;

    double _currentInteractiveProgress;

    UICollectionViewTransitionLayout *__transitionLayout;

    id <UIViewControllerContextTransitioning> _transitionContext;

    struct CGSize _currentInteractiveCenterOffset;

}



- (void).cxx_destruct;

- (void)_setCurrentInteractiveCenterOffset:(struct CGSize)arg1;

- (void)_setCurrentInteractiveProgress:(double)arg1;

- (void)_setOriginZoomLevel:(unsigned long long)arg1;

- (void)_setTargetZoomLevel:(unsigned long long)arg1;

@property(retain, nonatomic, setter=_setTransitionLayout:) UICollectionViewTransitionLayout *_transitionLayout; // @synthesize _transitionLayout=__transitionLayout;

- (void)_setTransitionState:(unsigned long long)arg1;

@property(retain, nonatomic) NSIndexPath *anchorItemIndexPath; // @synthesize anchorItemIndexPath=_anchorItemIndexPath;

- (void)cancelInteractiveTransitionAnimated;

@property(nonatomic) struct CGSize currentInteractiveCenterOffset; // @synthesize currentInteractiveCenterOffset=_currentInteractiveCenterOffset;

@property(nonatomic) double currentInteractiveProgress; // @synthesize currentInteractiveProgress=_currentInteractiveProgress;

- (void)finishInteractiveTransitionAnimated;

- (id)initWithOriginLevel:(unsigned long long)arg1 targetLevel:(unsigned long long)arg2 zoomLevelManager:(id)arg3 interactive:(_Bool)arg4;

@property(readonly, nonatomic, getter=isInteractive) _Bool interactive; // @synthesize interactive=_interactive;

@property(nonatomic) unsigned long long originZoomLevel; // @synthesize originZoomLevel=_originZoomLevel;

@property(retain, nonatomic) id <UIViewControllerContextTransitioning> transitionContext; // @synthesize transitionContext=_transitionContext;

- (void)startInteractiveTransition:(id)arg1;

@property(nonatomic) unsigned long long targetZoomLevel; // @synthesize targetZoomLevel=_targetZoomLevel;

@property(nonatomic) unsigned long long transitionState; // @synthesize transitionState=_transitionState;

- (void)updateInteractiveTransitionForProgress:(double)arg1 centerOffset:(struct CGSize)arg2;

@property(readonly, nonatomic) PUMomentsZoomLevelManager *zoomLevelManager; // @synthesize zoomLevelManager=_zoomLevelManager;



@end


