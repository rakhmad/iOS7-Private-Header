/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */



#import "NSString.h"



@interface NSString (TSCEAdditions)

+ (id)stringWithCellID:(CDStruct_0441cfb5)arg1 stickyBits:(unsigned char)arg2;

+ (id)stringWithCellRange:(struct)arg1 stickyBits:(unsigned char)arg2;

+ (id)stringWithCellReference:(CDStruct_78b871e1)arg1 stickyBits:(unsigned char)arg2;

+ (id)stringWithSignedCellID:(CDStruct_f2a491fb)arg1 stickyBits:(unsigned char)arg2;

- (CDStruct_0441cfb5)coordinateValue;

- (CDStruct_0441cfb5)coordinateValueGettingStickyBits:(char *)arg1;

- (_Bool)hasBoolValue:(_Bool *)arg1;

- (id)initWithCellID:(CDStruct_f2a491fb)arg1 stickyBits:(unsigned char)arg2;

- (_Bool)isSingleQuoted;

- (_Bool)needsReferenceSingleQuoteEscaping;

- (id)newStringByAddingDoubleQuoteEscapesIfNecessary;

- (id)newStringByAddingSingleQuoteEscapesIfNecessary;

- (id)newStringByForcingSingleQuoteEscapes:(_Bool)arg1;

- (void)p_initializeQuotes;

- (id)p_referenceComponentsSeparatedByCharacterInSet:(id)arg1;

- (id)referenceComponentsSeparatedByColon;

- (id)referenceComponentsSeparatedByPathDelimiter;

- (id)referenceComponentsSeparatedBySpace;

- (id)stringByAddingSingleQuoteEscapes;

- (id)stringByAddingSingleQuoteEscapesIfNecessary;

- (id)stringByFoldingForNamedReferenceMatchingWithLocale:(id)arg1;

- (id)stringByForcingSingleQuoteEscapes:(_Bool)arg1;

- (id)stringByRemovingNewlines;

- (id)stringByReplacingTabsAndNewlinesWithASingleSpace;

- (id)stringByUnescapingPartialQuotedString;

- (id)stringByUnescapingPartialQuotedStringWithEmptyQuotedStringOK:(_Bool)arg1;

- (id)stringByUnescapingPartialQuotedStringWithEmptyQuotedStringOK:(_Bool)arg1 preserveTrailingUnquotedWhitespace:(_Bool)arg2;

- (id)stringByUnescapingSingleQuotes;

- (id)stringByUnescapingSingleQuotesAndGettingTrailingWhitespaceCount:(unsigned long long *)arg1;

@end

