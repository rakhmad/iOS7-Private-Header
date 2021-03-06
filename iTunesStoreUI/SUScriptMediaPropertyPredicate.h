/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */



#import "SUScriptObject.h"


@class MPMediaPropertyPredicate, NSString;



@interface SUScriptMediaPropertyPredicate : SUScriptObject

{

    NSString *_comparisonType;

    NSString *_property;

    id _value;

}



+ (void)initialize;

+ (id)webScriptNameForKeyName:(id)arg1;

- (id)_className;

- (id)_playlistAttributesForScriptArray:(id)arg1;

- (id)attributeKeys;

@property(readonly) NSString *comparisonType;

- (void)dealloc;

- (id)initWithProperty:(id)arg1 value:(id)arg2 comparisonType:(id)arg3;

@property(readonly, nonatomic) MPMediaPropertyPredicate *nativePredicate;

@property(readonly) NSString *property;

- (id)scriptAttributeKeys;

@property(readonly) id value;



@end


