/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */



#import "TSKCommand.h"


#import "TSDCoalesceableInfoPositioningCommmand.h"

#import "TSDPropagatableCommand.h"



@class TSDInfoGeometry, TSPObject<TSDChangeableInfo>;



__attribute__((visibility("hidden")))

@interface TSDInfoGeometryCommand : TSKCommand <TSDCoalesceableInfoPositioningCommmand, TSDPropagatableCommand>

{

    TSPObject<TSDChangeableInfo> *mInfo;

    TSDInfoGeometry *mOldGeometry;

    TSDInfoGeometry *mNewGeometry;

    _Bool mDidMatchObjectPlaceholderGeometry;

    _Bool mShouldClearObjectPlaceholderFlag;

}



- (id)actionString;

- (void)commit;

- (void)dealloc;

@property(readonly, nonatomic) TSPObject<TSDChangeableInfo> *info; // @synthesize info=mInfo;

- (id)initFromUnarchiver:(id)arg1;

- (id)initWithInfo:(id)arg1 newGeometry:(id)arg2 context:(id)arg3;

- (id)initWithInfo:(id)arg1 newGeometry:(id)arg2 shouldClearObjectPlaceholderFlag:(_Bool)arg3 context:(id)arg4;

- (_Bool)modifiesAnyObjectPassingTest:(id)arg1;

@property(readonly, nonatomic) TSDInfoGeometry *newGeometry;

- (void)p_do;

- (void)populateChangePropagationMapAfterCommit:(id)arg1;

- (_Bool)process;

- (void)redo;

- (void)saveToArchiver:(id)arg1;

- (_Bool)shouldBeCoalescedWithInsertionCommandOfInfo:(id)arg1;

- (void)undo;



@end


