/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */



#import "NSProtocolChecker.h"


@class NSObject, Protocol;



__attribute__((visibility("hidden")))

@interface NSConcreteProtocolChecker : NSProtocolChecker

{

    NSObject *_target;

    Protocol *_protocol;

}



- (void)dealloc;

- (id)initWithTarget:(id)arg1 protocol:(id)arg2;

- (id)protocol;

- (id)target;



@end

