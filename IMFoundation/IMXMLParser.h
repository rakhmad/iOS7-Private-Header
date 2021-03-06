/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */





#import "NSXMLParserDelegate.h"



@class IMXMLParserContext, IMXMLParserFrame, NSMutableArray, NSXMLParser;



@interface IMXMLParser : NSObject <NSXMLParserDelegate>

{

    NSXMLParser *_parser;

    IMXMLParserContext *_context;

    IMXMLParserFrame *_topFrame;

    NSMutableArray *_otherFrames;

    struct _TidyDoc *_tidyDoc;

    struct __CFDictionary *_framespace;

}



+ (id)sharedInstance;

- (id)_newDataByTidyingData:(id)arg1;

- (void)_setupTidy;

- (void)_teardownTidy;

- (_Bool)parseContext:(id)arg1;

- (void)parser:(id)arg1 didEndElement:(id)arg2 namespaceURI:(id)arg3 qualifiedName:(id)arg4;

- (void)parser:(id)arg1 didStartElement:(id)arg2 namespaceURI:(id)arg3 qualifiedName:(id)arg4 attributes:(id)arg5;

- (void)parser:(id)arg1 foundCharacters:(id)arg2;

- (void)parser:(id)arg1 foundIgnorableWhitespace:(id)arg2;

- (void)parser:(id)arg1 parseErrorOccurred:(id)arg2;



@end


