/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */





@class NSArray;



@interface NSUndoManager : NSObject

{

    id _undoStack;

    id _redoStack;

    NSArray *_runLoopModes;

    unsigned long long _NSUndoManagerPrivate1;

    id _target;

    id _proxy;

    void *_NSUndoManagerPrivate2;

    void *_NSUndoManagerPrivate3;

}



+ (void)_endTopLevelGroupings;

+ (void)_setEndsTopLevelGroupingsAfterRunLoopIterations:(_Bool)arg1;

- (void)_cancelAutomaticTopLevelGroupEnding;

- (void)_commitUndoGrouping;

- (void)_delayAutomaticTermination:(double)arg1;

- (_Bool)_endUndoGroupRemovingIfEmpty:(_Bool)arg1;

- (void)_forwardTargetInvocation:(id)arg1;

- (id)_methodSignatureForTargetSelector:(SEL)arg1;

- (void)_postCheckpointNotification;

- (void)_prepareEventGrouping;

- (void)_processEndOfEventNotification:(id)arg1;

- (void)_registerUndoObject:(id)arg1;

- (void)_rollbackUndoGrouping;

- (void)_scheduleAutomaticTopLevelGroupEnding;

- (void)_setGroupIdentifier:(id)arg1;

- (_Bool)_shouldCoalesceTypingForText:(id)arg1:(id)arg2;

- (id)_undoStack;

- (void)beginUndoGrouping;

- (_Bool)canRedo;

- (_Bool)canUndo;

- (void)dealloc;

- (void)disableUndoRegistration;

- (void)enableUndoRegistration;

- (void)endUndoGrouping;

- (void)finalize;

- (long long)groupingLevel;

- (_Bool)groupsByEvent;

- (id)init;

- (_Bool)isRedoing;

- (_Bool)isUndoRegistrationEnabled;

- (_Bool)isUndoing;

- (unsigned long long)levelsOfUndo;

- (id)prepareWithInvocationTarget:(id)arg1;

- (void)redo;

- (_Bool)redoActionIsDiscardable;

- (id)redoActionName;

- (id)redoMenuItemTitle;

- (id)redoMenuTitleForUndoActionName:(id)arg1;

- (void)registerUndoWithTarget:(id)arg1 selector:(SEL)arg2 object:(id)arg3;

- (void)removeAllActions;

- (void)removeAllActionsWithTarget:(id)arg1;

- (id)runLoopModes;

- (void)setActionIsDiscardable:(_Bool)arg1;

- (void)setActionName:(id)arg1;

- (void)setGroupsByEvent:(_Bool)arg1;

- (void)setLevelsOfUndo:(unsigned long long)arg1;

- (void)setRunLoopModes:(id)arg1;

- (void)undo;

- (_Bool)undoActionIsDiscardable;

- (id)undoActionName;

- (id)undoMenuItemTitle;

- (id)undoMenuTitleForUndoActionName:(id)arg1;

- (void)undoNestedGroup;



@end


