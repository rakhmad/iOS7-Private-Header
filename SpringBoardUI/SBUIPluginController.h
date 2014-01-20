/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */





#import "SBPluginBundleController.h"



@interface SBUIPluginController : NSObject <SBPluginBundleController>

{

    id <SBUIPluginControllerHost> _host;

    _Bool _isVisible;

}



- (void)cancelPendingActivationEvent:(int)arg1;

- (_Bool)handleActivationEvent:(int)arg1 context:(void *)arg2;

- (void)handleBluetoothDismissal;

- (_Bool)handledMenuButtonDownEvent;

- (_Bool)handledMenuButtonTap;

- (_Bool)handledPasscodeUnlockWithCompletion:(id)arg1;

- (_Bool)handledWiredMicButtonTap;

@property(nonatomic) id <SBUIPluginControllerHost> host; // @synthesize host=_host;

@property(nonatomic, getter=isVisible) _Bool visible; // @synthesize visible=_isVisible;

- (void)noteInterruption;

- (void)prepareForActivationEvent:(int)arg1 afterInterval:(double)arg2;

- (void)registeredWithHost;

- (_Bool)supportedAndEnabled;

- (id)viewControllerForActivationContext:(id)arg1;

- (_Bool)wantsActivationEvent:(int)arg1 interval:(double *)arg2;



@end

