/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */



#import "AVAudioOutputSettings.h"


#import "AVDecodedAudioSettingsForFig.h"

#import "AVReencodedAudioSettingsForFig.h"



@interface AVAVAudioSettingsAudioOutputSettings : AVAudioOutputSettings <AVReencodedAudioSettingsForFig, AVDecodedAudioSettingsForFig>

{

}



+ (id)_audioOutputSettingsWithAudioSettingsDictionary:(id)arg1 exceptionReason:(id *)arg2;

+ (id)eligibleOutputSettingsDictionaryKeys;

- (id)audioOptions;

- (_Bool)canFullySpecifyOutputFormatReturningReason:(id *)arg1;

- (struct AudioChannelLayout *)copyAudioChannelLayoutForSourceFormatDescription:(struct opaqueCMFormatDescription *)arg1 audioChannelLayoutSize:(unsigned long long *)arg2;

- (void)getAudioStreamBasicDescription:(struct AudioStreamBasicDescription *)arg1 forAudioFileTypeID:(unsigned int)arg2 sourceFormatDescription:(struct opaqueCMFormatDescription *)arg3;

- (id)initWithAVAudioSettingsDictionary:(id)arg1 exceptionReason:(id *)arg2;

- (id)initWithTrustedAVAudioSettingsDictionary:(id)arg1;

- (_Bool)isCodecAvailableOnCurrentSystem;

- (_Bool)willYieldCompressedSamples;



@end


