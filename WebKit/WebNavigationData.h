/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */





@class WebNavigationDataPrivate;



__attribute__((visibility("hidden")))

@interface WebNavigationData : NSObject

{

    WebNavigationDataPrivate *_private;

}



- (id)clientRedirectSource;

- (void)dealloc;

- (_Bool)hasSubstituteData;

- (id)initWithURLString:(id)arg1 title:(id)arg2 originalRequest:(id)arg3 response:(id)arg4 hasSubstituteData:(_Bool)arg5 clientRedirectSource:(id)arg6;

- (id)originalRequest;

- (id)response;

- (id)title;

- (id)url;



@end


