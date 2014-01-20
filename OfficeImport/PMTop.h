/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */



#import "CMTop.h"


#import "OIProgressiveReaderDelegate.h"



@class CMArchiveManager, PMPresentationMapper, PMState;



__attribute__((visibility("hidden")))

@interface PMTop : CMTop <OIProgressiveReaderDelegate>

{

    CMArchiveManager *_archiver;

    PMState *_state;

    PMPresentationMapper *_mapper;

    _Bool _xml;

}



+ (void)fillHTMLArchiveForPowerPointData:(id)arg1 fileName:(id)arg2 xmlFlag:(_Bool)arg3 archiver:(id)arg4;

+ (void)fillHTMLArchiveForPowerPointFile:(id)arg1 xmlFlag:(_Bool)arg2 archiver:(id)arg3;

+ (void)fillHTMLArchiveForPowerPointFrom:(id)arg1 inMemory:(_Bool)arg2 xmlFlag:(_Bool)arg3 archiver:(id)arg4;

- (void)dealloc;

- (_Bool)isCancelled;

- (void)readData:(id)arg1 fileName:(id)arg2 xmlFlag:(_Bool)arg3 archiver:(id)arg4;

- (void)readFile:(id)arg1 xmlFlag:(_Bool)arg2 archiver:(id)arg3;

- (void)readFrom:(id)arg1 inMemory:(_Bool)arg2 xmlFlag:(_Bool)arg3 archiver:(id)arg4;

- (void)readerDidEndDocument:(id)arg1;

- (void)readerDidReadElement:(id)arg1 atIndex:(unsigned int)arg2 inDocument:(id)arg3 isLastElement:(_Bool)arg4;

- (void)readerDidStartDocument:(id)arg1 withElementCount:(long long)arg2;



@end

