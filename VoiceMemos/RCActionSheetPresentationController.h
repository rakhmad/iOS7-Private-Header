/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */





#import "UIActionSheetDelegate.h"



@class UIActionSheet;



@interface RCActionSheetPresentationController : NSObject <UIActionSheetDelegate>

{

    UIActionSheet *_actionSheet;

    id _dismissHandlerBlock;

}



- (void).cxx_destruct;

- (void)_beginActionSheetAssociation;

- (void)_endActionSheetAssociation;

@property(readonly, nonatomic) UIActionSheet *actionSheet; // @synthesize actionSheet=_actionSheet;

- (void)actionSheet:(id)arg1 clickedButtonAtIndex:(long long)arg2;

- (void)actionSheet:(id)arg1 didDismissWithButtonIndex:(long long)arg2;

- (void)dealloc;

@property(readonly, nonatomic) id dismissHandlerBlock; // @synthesize dismissHandlerBlock=_dismissHandlerBlock;

- (id)initWithActionSheet:(id)arg1 dismissHandlerBlock:(id)arg2;

- (void)showInView:(id)arg1;



@end

