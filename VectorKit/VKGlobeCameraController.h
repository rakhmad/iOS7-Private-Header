/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */



#import "VKMapCameraController.h"


#import "VKCameraControllerDelegate.h"



@class VKAnimation, VKGlobeAnnotationTrackingCameraController;



__attribute__((visibility("hidden")))

@interface VKGlobeCameraController : VKMapCameraController <VKCameraControllerDelegate>

{

    struct GlobeView *_globeView;

    VKGlobeAnnotationTrackingCameraController *_globeAnnotationTrackingCameraController;

    id <VKMotionProvider> _motionProvider;

    _Bool _motionActive;

    VKAnimation *_wiggleAnimation;

    VKAnimation *_positionAnimation;

    VKAnimation *_motionAnimation;

    VKAnimation *_decelerationAnimation;

    VKAnimation *_regionAnimation;

    struct CameraManager _cameraManager;

    double _currentDoublePanPitch;

    _Bool _isPitching;

    _Bool _isRotating;

}



- (id).cxx_construct;

- (void).cxx_destruct;

- (void)_animateToStartPosition;

- (struct CGPoint)_centerScreenPoint;

- (struct Vector2i)_cursorFromScreenPoint:(struct CGPoint)arg1;

- (void)_performMotionAnimation;

- (void)_rotateAroundTargetWithDuration:(double)arg1 rotations:(double)arg2;

- (void)_stopAnimations;

- (void)animateToMapRegion:(id)arg1 pitch:(double)arg2 yaw:(double)arg3 duration:(double)arg4 completion:(id)arg5;

- (void)cameraController:(id)arg1 canEnter3DModeDidChange:(_Bool)arg2;

- (void)cameraController:(id)arg1 didBecomePitched:(_Bool)arg2;

- (id)cameraController:(id)arg1 presentationForAnnotation:(id)arg2;

- (void)cameraController:(id)arg1 requestsDisplayRate:(long long)arg2;

- (void)cameraControllerDidChangeCameraState:(id)arg1;

- (void)cameraControllerDidStopRegionAnimation:(id)arg1 completed:(_Bool)arg2;

- (void)cameraControllerWillStartRegionAnimation:(id)arg1;

- (_Bool)canEnter3DMode;

- (_Bool)currentZoomLevelAllowsRotation;

- (void)dealloc;

- (void)didAnimateInAnnotationMarkers:(id)arg1;

- (double)durationToAnimateToMapRegion:(id)arg1;

- (void)enter3DMode;

- (void)exit3DMode;

@property(nonatomic) struct GlobeView *globeView; // @synthesize globeView=_globeView;

- (id)init;

- (_Bool)isAnimatingToTrackAnnotation;

- (_Bool)isFullyPitched;

@property(readonly, nonatomic, getter=isMotionActive) _Bool motionActive;

- (_Bool)isPitched;

- (_Bool)isTrackingHeading;

- (id)mapRegion;

- (id)mapRegionOfInterest;

- (long long)maximumNormalizedZoomLevel;

- (long long)minimumNormalizedZoomLevel;

- (void)moveTo:(CDStruct_c3b9c2ee)arg1 zoom:(double)arg2 rotation:(double)arg3 tilt:(double)arg4 duration:(double)arg5 timingCurve:(id)arg6 completion:(void)arg7;

- (void)pan:(struct CGPoint)arg1;

- (void)panWithOffset:(struct CGPoint)arg1 relativeToScreenPoint:(struct CGPoint)arg2 animated:(_Bool)arg3 duration:(double)arg4 completionHandler:(id)arg5;

- (void)pinch:(struct CGPoint)arg1 oldFactor:(double)arg2 newFactor:(double)arg3;

- (double)pitch;

- (void)pitch:(struct CGPoint)arg1 translation:(double)arg2;

@property(readonly, nonatomic) double pitchThreshold;

- (double)presentationYaw;

- (_Bool)restoreViewportFromInfo:(id)arg1;

- (void)rotate:(double)arg1 atScreenPoint:(struct CGPoint)arg2;

- (void)rotateTo:(double)arg1 animated:(_Bool)arg2;

- (void)runAnimation:(id)arg1;

- (void)setAnnotationTrackingZoomStyle:(long long)arg1;

- (void)setEdgeInsets:(struct VKEdgeInsets)arg1;

- (void)setGesturing:(_Bool)arg1;

- (void)setMapRegion:(id)arg1 pitch:(double)arg2 yaw:(double)arg3 animated:(_Bool)arg4 completion:(id)arg5;

- (void)setYaw:(double)arg1 animated:(_Bool)arg2;

- (void)showPlaceCardAnimationAtCoordinate:(CDStruct_c3b9c2ee)arg1 andDistance:(double)arg2;

- (void)showSearchResultAnimationAtCoordinate:(CDStruct_c3b9c2ee)arg1 withZoom:(double)arg2;

- (void)snapMapIfNecessary:(const struct VKPoint *)arg1 animated:(_Bool)arg2;

- (void)startPanning:(struct CGPoint)arg1;

- (void)startPinching:(struct CGPoint)arg1;

- (void)startPitching:(struct CGPoint)arg1;

- (void)startRotating:(struct CGPoint)arg1;

- (void)startTrackingAnnotation:(id)arg1 trackHeading:(_Bool)arg2 animated:(_Bool)arg3;

- (void)startWithMotionProvider:(id)arg1;

- (void)stopGlobeAnimations;

- (void)stopMotion;

- (void)stopPanning:(struct CGPoint)arg1;

- (void)stopPinching:(struct CGPoint)arg1;

- (void)stopPitching:(struct CGPoint)arg1;

- (void)stopPlaceCardAnimation;

- (void)stopRotating:(struct CGPoint)arg1;

- (void)stopSearchResultAnimation;

- (void)stopTrackingAnnotation;

- (void)tapZoom:(struct CGPoint)arg1 levels:(double)arg2 completionHandler:(id)arg3;

- (long long)tileSize;

- (void)tiltTo:(double)arg1 animated:(_Bool)arg2 exaggerate:(_Bool)arg3;

- (id)trackingAnnotation;

- (void)updateCameraManager;

- (void)updateGlobeFromCamera;

- (void)willAnimateInAnnotationMarkers:(id)arg1;

- (double)yaw;

- (double)zoomForMapRegion:(id)arg1;



@end


