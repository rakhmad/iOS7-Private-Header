/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */





@class NSString;



@interface EAGLSharegroup : NSObject

{

    struct _EAGLSharegroupPrivate *_private;

    NSString *debugLabel;

}



- (unsigned long long)APIs;

- (void)dealloc;

@property(copy, nonatomic) NSString *debugLabel; // @synthesize debugLabel;

- (struct __GLISharedRec *)getGLIShared;

- (id)init;

- (id)initWithAPI:(unsigned long long)arg1;

- (id)initWithAPI:(unsigned long long)arg1 sharedWithCompute:(_Bool)arg2;

- (void)loadGLIPlugin:(struct __GLDPixelFormatRec *)arg1 sharedWithCompute:(_Bool)arg2;



@end

