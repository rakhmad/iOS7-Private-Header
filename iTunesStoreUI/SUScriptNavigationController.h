/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */



#import "SUScriptViewController.h"


@class SUScriptNavigationBar, UINavigationController;



@interface SUScriptNavigationController : SUScriptViewController

{

    UINavigationController *_navController;

}



+ (void)initialize;

+ (id)webScriptNameForKeyName:(id)arg1;

+ (id)webScriptNameForSelector:(SEL)arg1;

- (id)_className;

- (id)_copyNativeViewControllersFromScriptViewControllers:(id)arg1;

- (id)_filteredViewControllers;

- (id)_navigationController;

- (void)_popToRootViewControllerAnimated:(_Bool)arg1;

- (void)_popViewControllerAnimated:(_Bool)arg1;

- (void)_pushViewController:(id)arg1 animated:(_Bool)arg2;

- (void)_setViewControllers:(id)arg1 animated:(_Bool)arg2;

- (id)attributeKeys;

- (void)dealloc;

- (void)didPerformBatchedInvocations;

- (id)initWithRootScriptViewController:(id)arg1 clientInterface:(id)arg2;

@property(readonly) SUScriptNavigationBar *navigationBar;

@property _Bool navigationBarHidden;

- (id)newNativeViewController;

- (void)popToRootViewControllerAnimated:(_Bool)arg1;

- (void)popViewControllerAnimated:(_Bool)arg1;

- (void)pushViewController:(id)arg1 animated:(_Bool)arg2;

- (id)scriptAttributeKeys;

- (void)setNavigationBar:(id)arg1;

- (void)setNavigationBarHidden:(_Bool)arg1 animated:(_Bool)arg2;

@property(copy) id toolbarHidden;

- (void)setToolbarHidden:(_Bool)arg1 animated:(_Bool)arg2;

- (void)setTopViewController:(id)arg1;

@property(retain) id viewControllers;

- (void)setViewControllers:(id)arg1 animated:(_Bool)arg2;

@property(readonly) SUScriptViewController *topViewController;

- (void)willPerformBatchedInvocations;



@end

