/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */





#import "NSCoding.h"

#import "NSCopying.h"



@class NSString;



@interface UIPrintInfo : NSObject <NSCopying, NSCoding>

{

    NSString *_printerID;

    NSString *_jobName;

    long long _outputType;

    long long _orientation;

    long long _duplex;

    long long _copies;

    _Bool _scaleUp;

}



+ (id)printInfo;

+ (id)printInfoWithDictionary:(id)arg1;

- (id)_createPrintSettingsForPrinter:(id)arg1;

- (id)_initWithDictionary:(id)arg1;

- (void)_updateWithPrinter:(id)arg1;

@property(nonatomic) long long copies; // @synthesize copies=_copies;

- (id)copyWithZone:(struct _NSZone *)arg1;

- (void)dealloc;

- (id)dictionaryRepresentation;

@property(nonatomic) long long duplex; // @synthesize duplex=_duplex;

- (void)encodeWithCoder:(id)arg1;

- (id)init;

- (id)initWithCoder:(id)arg1;

@property(copy, nonatomic) NSString *jobName; // @synthesize jobName=_jobName;

@property(nonatomic) long long orientation; // @synthesize orientation=_orientation;

@property(nonatomic) long long outputType; // @synthesize outputType=_outputType;

@property(copy, nonatomic) NSString *printerID; // @synthesize printerID=_printerID;

@property(nonatomic) _Bool scaleUp; // @synthesize scaleUp=_scaleUp;



@end


