/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */





#import "TSWPStorageObserver.h"



@class TSWPCTTypesetterCache, TSWPStorage;



__attribute__((visibility("hidden")))

@interface TSWPLayoutManager : NSObject <TSWPStorageObserver>

{

    id <TSWPLayoutOwner> _owner;

    TSWPStorage *_storage;

    _Bool _isObservingStorage;

    _Bool _useLigatures;

    long long _delta;

    struct _NSRange _dirtyRange;

    TSWPCTTypesetterCache *_typesetterCache;

    struct TSWPTopicNumberHints _cachedTopicNumbers;

}



+ (void)fixColumnBoundsForTarget:(id)arg1 storage:(id)arg2 charIndex:(unsigned long long)arg3 firstColumnIndex:(unsigned long long)arg4 precedingHeight:(double)arg5 height:(double)arg6 alreadyHasMargins:(_Bool)arg7 styleProvider:(id)arg8 vertical:(_Bool)arg9;

- (id).cxx_construct;

- (void).cxx_destruct;

- (void)clearOwner;

- (void)clearTypesetterCache;

- (void)dealloc;

- (void)deflateTarget:(id)arg1 intoHints:(vector_b76bc591 *)arg2 childHints:(id [2])arg3 anchoredAttachmentPositions:(id *)arg4 topicNumbers:(struct TSWPTopicNumberHints *)arg5 layoutState:(void *)arg6;

- (void)destroyLayoutState:(void *)arg1;

@property(readonly, nonatomic) struct _NSRange dirtyRange; // @synthesize dirtyRange=_dirtyRange;

- (void)inflateTarget:(id)arg1 fromHints:(const vector_b76bc591 *)arg2 childHint:(id)arg3 anchoredAttachmentPositions:(id)arg4 topicNumbers:(const struct TSWPTopicNumberHints *)arg5;

- (id)initWithStorage:(id)arg1 owner:(id)arg2;

- (void *)layoutIntoTarget:(id)arg1 withLayoutState:(void *)arg2 outSync:(_Bool *)arg3;

- (void *)layoutStateForLayoutAfterHint:(const CDStruct_6026ced1 *)arg1 childHint:(id)arg2 topicNumbers:(const struct TSWPTopicNumberHints *)arg3 textIsVertical:(_Bool)arg4;

- (_Bool)needsLayoutInColumn:(id)arg1;

@property(readonly, nonatomic) id <TSWPLayoutOwner> owner; // @synthesize owner=_owner;

- (int)p_layoutConfigFlagsForTarget:(id)arg1;

@property(readonly, nonatomic) TSWPStorage *storage; // @synthesize storage=_storage;

- (void)storage:(id)arg1 didChangeRange:(struct _NSRange)arg2 delta:(long long)arg3 broadcastKind:(int)arg4;

- (id)styleProvider;

@property(readonly, nonatomic) TSWPCTTypesetterCache *typesetterCache;



@end


