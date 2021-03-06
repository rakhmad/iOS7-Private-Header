/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */





#import "NSCopying.h"



@class AVTextStyleRuleInternal, NSDictionary, NSString;



@interface AVTextStyleRule : NSObject <NSCopying>

{

    AVTextStyleRuleInternal *_textStyleRule;

}



+ (id)propertyListForTextStyleRules:(id)arg1;

+ (id)textStyleRuleWithTextMarkupAttributes:(id)arg1;

+ (id)textStyleRuleWithTextMarkupAttributes:(id)arg1 textSelector:(id)arg2;

+ (id)textStyleRulesFromPropertyList:(id)arg1;

- (id)_dictionaryPlistRepresentation;

- (id)copyWithZone:(struct _NSZone *)arg1;

- (void)dealloc;

- (void)finalize;

- (unsigned long long)hash;

- (id)initWithTextMarkupAttributes:(id)arg1;

- (id)initWithTextMarkupAttributes:(id)arg1 textSelector:(id)arg2;

- (_Bool)isEqual:(id)arg1;

@property(readonly, nonatomic) NSDictionary *textMarkupAttributes;

@property(readonly, nonatomic) NSString *textSelector;



@end


