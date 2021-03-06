/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */



#import "TSTWPTokenAttachment.h"


@class NSString, TSTReferenceNode, TSUColor;



__attribute__((visibility("hidden")))

@interface TSTCompletionToken : TSTWPTokenAttachment

{

    NSString *mCompletionText;

    struct _NSRange mPrefixRange;

    int mRenderAsTokenType;

    TSTReferenceNode *mEditingReferenceNode;

    TSUColor *mReferenceColor;

    id <TSTCanvasReferenceProvider> mCanvasReferenceProvider;

}



- (id).cxx_construct;

@property(nonatomic) id <TSTCanvasReferenceProvider> canvasReferenceProvider; // @synthesize canvasReferenceProvider=mCanvasReferenceProvider;

@property(retain, nonatomic) NSString *completionText; // @synthesize completionText=mCompletionText;

- (id)copyIntoContext:(id)arg1 bakeModes:(_Bool)arg2;

- (void)dealloc;

- (id)description;

@property(retain, nonatomic) TSTReferenceNode *editingReferenceNode; // @synthesize editingReferenceNode=mEditingReferenceNode;

- (id)initFromArchive:(const struct CompletionTokenAttachmentArchive *)arg1 unarchiver:(id)arg2;

- (id)initFromUnarchiver:(id)arg1;

- (id)initWithContext:(id)arg1 completionText:(id)arg2;

- (id)initWithContext:(id)arg1 expressionNode:(id)arg2;

- (void)makeTokenReflectChoice:(id)arg1;

- (void)p_createCanvasReference;

- (void)p_removeCanvasReference;

@property(nonatomic) struct _NSRange prefixRange; // @synthesize prefixRange=mPrefixRange;

@property(retain, nonatomic) TSUColor *referenceColor; // @synthesize referenceColor=mReferenceColor;

@property(readonly, nonatomic) int renderAsTokenType; // @synthesize renderAsTokenType=mRenderAsTokenType;

- (void)saveToArchive:(struct CompletionTokenAttachmentArchive *)arg1 archiver:(id)arg2;

- (void)saveToArchiver:(id)arg1;

- (void)setExpressionNode:(id)arg1;

- (id)tokenText;



@end


