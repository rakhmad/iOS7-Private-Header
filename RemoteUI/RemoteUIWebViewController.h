/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */



#import "UIViewController.h"



#import "UIWebViewDelegate.h"



@class UIToolbar, UIWebView;



@interface RemoteUIWebViewController : UIViewController <UIWebViewDelegate>

{

    UIWebView *_webView;

    UIToolbar *_toolbar;

    id _delegate;

    _Bool _scalesPageToFit;

}



- (void)dealloc;

- (void)donePressed:(id)arg1;

- (void)loadURL:(id)arg1;

- (void)loadView;

@property(nonatomic) _Bool scalesPageToFit; // @synthesize scalesPageToFit=_scalesPageToFit;

- (void)setDelegate:(id)arg1;

@property(readonly, nonatomic) UIToolbar *toolbar; // @synthesize toolbar=_toolbar;

- (void)viewDidLayoutSubviews;

@property(readonly, nonatomic) UIWebView *webView; // @synthesize webView=_webView;



@end


