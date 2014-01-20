/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */





@class AXLangMap, AXLanguageManager, NSCharacterSet, NSLocale, NSString;



@interface AXDialectMap : NSObject

{

    AXLangMap *_langMap;

    NSString *_voiceName;

    NSLocale *_locale;

    NSString *_specificLanguageID;

    NSCharacterSet *_speakableCharacters;

    NSCharacterSet *_secondaryLanguageRange;

}



- (id)basicDescription;

- (_Bool)canSpeakCharacter:(unsigned short)arg1;

- (_Bool)canSpeakLongCharacter:(unsigned int)arg1;

- (_Bool)canSpeakString:(id)arg1;

- (void)dealloc;

- (id)debugDescription;

- (id)description;

- (id)initWithLocale:(id)arg1 voiceName:(id)arg2 specificLanguageID:(id)arg3 speakableCharacters:(id)arg4 secondaryLanguageRange:(id)arg5;

- (_Bool)isDialectSecondaryForCharacter:(unsigned short)arg1;

@property(readonly, nonatomic) AXLanguageManager *langManager;

@property(nonatomic) AXLangMap *langMap; // @synthesize langMap=_langMap;

@property(readonly, nonatomic) NSString *languageNameAndLocaleInCurrentLocale;

@property(readonly, nonatomic) NSString *languageNameAndLocaleInNativeLocale;

@property(readonly, nonatomic) NSString *languageNameInCurrentLocale;

@property(readonly, nonatomic) NSString *languageNameInNativeLocale;

@property(retain, nonatomic) NSLocale *locale; // @synthesize locale=_locale;

@property(readonly, nonatomic) NSString *localeNameInCurrentLocale;

@property(readonly, nonatomic) NSString *regionID;

@property(retain, nonatomic) NSCharacterSet *secondaryLanguageRange; // @synthesize secondaryLanguageRange=_secondaryLanguageRange;

@property(retain, nonatomic) NSCharacterSet *speakableCharacters; // @synthesize speakableCharacters=_speakableCharacters;

@property(copy, nonatomic) NSString *specificLanguageID; // @synthesize specificLanguageID=_specificLanguageID;

@property(copy, nonatomic) NSString *voiceName; // @synthesize voiceName=_voiceName;



@end

