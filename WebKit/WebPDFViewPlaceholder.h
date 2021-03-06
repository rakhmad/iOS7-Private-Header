/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */



#import "WAKView.h"



#import "WebPDFDocumentRepresentation.h"

#import "WebPDFDocumentView.h"



@class NSArray, NSObject<WebPDFViewPlaceholderDelegate>, NSString, WebDataSource;



@interface WebPDFViewPlaceholder : WAKView <WebPDFDocumentView, WebPDFDocumentRepresentation>

{

    NSString *_title;

    NSArray *_pageRects;

    NSArray *_pageYOrigins;

    struct CGPDFDocument *_document;

    WebDataSource *_dataSource;

    NSObject<WebPDFViewPlaceholderDelegate> *_delegate;

    _Bool _didFinishLoadAndMemoryMap;

    struct CGSize _containerSize;

    _Bool _didCompleteLayout;

}



+ (Class)_representationClassForWebFrame:(id)arg1;

+ (void)setAsPDFDocRepAndView;

+ (id)supportedMIMETypes;

- (id).cxx_construct;

- (struct CGSize)_computePageRects:(struct CGPDFDocument *)arg1;

- (void)_doPostLoadOrUnlockTasks;

- (void)_evaluateJSForDocument:(struct CGPDFDocument *)arg1;

- (struct CGRect)_getPDFPageBounds:(struct CGPDFPage *)arg1;

- (void)_notifyDidCompleteLayout;

- (void)_updateTitleForDocumentIfAvailable;

- (void)_updateTitleForURL:(id)arg1;

- (_Bool)canProvideDocumentSource;

- (void)clearDocument;

@property struct CGSize containerSize; // @synthesize containerSize=_containerSize;

- (void)dataSourceMemoryMapFailed;

- (void)dataSourceMemoryMapped;

- (void)dataSourceUpdated:(id)arg1;

- (void)dealloc;

@property NSObject<WebPDFViewPlaceholderDelegate> *delegate; // @synthesize delegate=_delegate;

@property(readonly, nonatomic) _Bool didCompleteLayout; // @synthesize didCompleteLayout=_didCompleteLayout;

- (void)didUnlockDocument;

@property(readonly) struct CGPDFDocument *doc;

@property(readonly) struct CGPDFDocument *document; // @synthesize document=_document;

- (id)documentSource;

- (void)finishedLoadingWithDataSource:(id)arg1;

- (void)layout;

@property(retain) NSArray *pageRects; // @synthesize pageRects=_pageRects;

@property(retain) NSArray *pageYOrigins; // @synthesize pageYOrigins=_pageYOrigins;

- (void)receivedData:(id)arg1 withDataSource:(id)arg2;

- (void)receivedError:(id)arg1 withDataSource:(id)arg2;

- (struct CGRect)rectForPageNumber:(unsigned long long)arg1;

- (void)setDataSource:(id)arg1;

- (void)setDocument:(struct CGPDFDocument *)arg1;

@property(retain) NSString *title; // @synthesize title=_title;

- (void)simulateClickOnLinkToURL:(id)arg1;

@property(readonly) unsigned long long totalPages;

- (void)viewDidMoveToHostWindow;

- (void)viewWillMoveToHostWindow:(id)arg1;



@end


