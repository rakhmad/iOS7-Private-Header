/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */





@class TSUImage;



__attribute__((visibility("hidden")))

@interface TSDTGContext : NSObject

{

    id <TSDThumbnailConsumer> _consumer;

    id <TSDThumbnailProducer> _producer;

    id <TSDThumbnailIdentifier> _thumbnailId;

    TSUImage *_thumbnail;

    _Bool _continueThumbnailing;

}



@property(readonly, nonatomic) id <TSDThumbnailConsumer> consumer; // @synthesize consumer=_consumer;

@property(nonatomic) _Bool continueThumbnailing; // @synthesize continueThumbnailing=_continueThumbnailing;

- (void)dealloc;

- (id)initWithConsumer:(id)arg1 producer:(id)arg2;

@property(readonly, nonatomic) id <TSDThumbnailProducer> producer; // @synthesize producer=_producer;

@property(retain, nonatomic) TSUImage *thumbnail; // @synthesize thumbnail=_thumbnail;

@property(nonatomic) id <TSDThumbnailIdentifier> thumbnailId; // @synthesize thumbnailId=_thumbnailId;



@end

