/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */



#import "PBCodable.h"



#import "NSCopying.h"



__attribute__((visibility("hidden")))

@interface GEOTrafficSegment : PBCodable <NSCopying>

{

    int _speed;

    int _vertexCount;

    int _vertexOffset;

    int _width;

    struct {

        unsigned int speed:1;

        unsigned int width:1;

    } _has;

}



- (void)copyTo:(id)arg1;

- (id)copyWithZone:(struct _NSZone *)arg1;

- (void)dealloc;

- (id)description;

- (id)dictionaryRepresentation;

@property(nonatomic) _Bool hasSpeed;

@property(nonatomic) _Bool hasWidth;

- (unsigned long long)hash;

- (_Bool)isEqual:(id)arg1;

- (_Bool)readFrom:(id)arg1;

@property(nonatomic) int speed; // @synthesize speed=_speed;

@property(nonatomic) int vertexCount; // @synthesize vertexCount=_vertexCount;

@property(nonatomic) int vertexOffset; // @synthesize vertexOffset=_vertexOffset;

@property(nonatomic) int width; // @synthesize width=_width;

- (void)writeTo:(id)arg1;



@end

