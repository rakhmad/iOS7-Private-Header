/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */





@class AVExternalDevice, NSString;



@interface AVExternalDeviceScreenBorrowToken : NSObject

{

    AVExternalDevice *_externalDevice;

    NSString *_client;

    NSString *_reason;

}



@property(readonly, nonatomic) NSString *client; // @synthesize client=_client;

- (void)dealloc;

@property(readonly, nonatomic) AVExternalDevice *externalDevice; // @synthesize externalDevice=_externalDevice;

- (void)finalize;

- (id)init;

- (id)initWithExternalDevice:(id)arg1 client:(id)arg2 reason:(id)arg3;

@property(readonly, nonatomic) NSString *reason; // @synthesize reason=_reason;



@end


