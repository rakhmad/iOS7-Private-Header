/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */





__attribute__((visibility("hidden")))

@interface OAVStroke : NSObject

{

}



+ (int)readCapStyle:(id)arg1;

+ (int)readCompoundType:(id)arg1;

+ (void)readDashStyleFromManager:(id)arg1 toStroke:(id)arg2;

+ (void)readFillStyleFromManager:(id)arg1 toStroke:(id)arg2;

+ (id)readFromManager:(id)arg1;

+ (void)readJoinStyleFromManager:(id)arg1 toStroke:(id)arg2;

+ (void)readLineEnd:(id)arg1 type:(id)arg2 width:(id)arg3 length:(id)arg4;

+ (int)readLineEndLength:(id)arg1;

+ (int)readLineEndType:(id)arg1;

+ (int)readLineEndWidth:(id)arg1;

+ (int)readPresetDashStyle:(id)arg1;

+ (id)targetFgColorWithManager:(id)arg1;



@end


