/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */





#import "UINavigationControllerDelegate.h"

#import "UIVideoEditorControllerDelegatePrivate.h"



@class CKMediaObject, UIVideoEditorController;



@interface CKVideoTrimController : NSObject <UIVideoEditorControllerDelegatePrivate, UINavigationControllerDelegate>

{

    id <CKTrimControllerDelegate> _delegate;

    CKMediaObject *_originalMediaObject;

    CKMediaObject *_trimmedMediaObject;

    UIVideoEditorController *_editVideoVC;

}



- (void)dealloc;

@property(nonatomic) id <CKTrimControllerDelegate> delegate; // @synthesize delegate=_delegate;

@property(retain, nonatomic) UIVideoEditorController *editVideoVC; // @synthesize editVideoVC=_editVideoVC;

- (id)initWithMediaObject:(id)arg1 maxTrimDuration:(double)arg2;

@property(retain, nonatomic) CKMediaObject *originalMediaObject; // @synthesize originalMediaObject=_originalMediaObject;

@property(retain, nonatomic) CKMediaObject *trimmedMediaObject; // @synthesize trimmedMediaObject=_trimmedMediaObject;

- (void)videoEditorController:(id)arg1 didFailWithError:(id)arg2;

- (void)videoEditorController:(id)arg1 didSaveEditedVideoToPath:(id)arg2;

- (void)videoEditorController:(id)arg1 didTrimVideoWithOptions:(id)arg2;

- (void)videoEditorControllerDidCancel:(id)arg1;



@end


