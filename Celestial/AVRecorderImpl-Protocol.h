/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */





@protocol AVRecorderImpl <NSObject>

- (_Bool)activate:(id *)arg1;

- (id)attributeForKey:(id)arg1;

- (_Bool)audioCurrentAverageDecibelLevels:(float *)arg1 andPeakDecibelLevels:(float *)arg2;

- (_Bool)audioCurrentAverageVolumeLevels:(float *)arg1 andPeakVolumeLevels:(float *)arg2;

- (unsigned long long)audioNumDeviceChannels;

- (_Bool)autoFocusAtPoint:(struct CGPoint)arg1;

- (void)deactivate;

- (id)filePath;

- (id)init;

- (_Bool)isActive;

- (_Bool)isRecording;

- (float)micVolume;

- (double)recordedDuration;

- (long long)recordedFileSizeInBytes;

- (void)setAttribute:(id)arg1 forKey:(id)arg2;

- (void)setFilePath:(id)arg1;

- (void)setMicVolume:(float)arg1;

- (_Bool)start;

- (void)stop;

- (_Bool)takePhoto;

@end

