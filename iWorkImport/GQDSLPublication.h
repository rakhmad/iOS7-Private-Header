/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */



#import "GQDRoot.h"


@class GQDSLPageMargins, GQDSStylesheet;



__attribute__((visibility("hidden")))

@interface GQDSLPublication : GQDRoot

{

    struct CGSize mPageSize;

    GQDSLPageMargins *mPageMargins;

    GQDSStylesheet *mStylesheet;

    _Bool mHasBody;

    _Bool mIsOldTemplateNameMapInitialized;

    struct __CFDictionary *mOldTemplateNameMap;

    _Bool mShowOutliner;

    _Bool mHasHeaders;

    _Bool mHasFooters;

}



+ (struct _xmlNs *)appNamespace;

- (id).cxx_construct;

- (struct __CFString *)createFixedPathForOldAppBundleResourcePath:(struct __CFString *)arg1;

- (struct __CFArray *)createUpgradedPathComponentsFromOldTemplatePathComponents:(struct __CFArray *)arg1;

- (struct __CFString *)createUpgradedPathForOldAssetPath:(struct __CFString *)arg1;

- (struct __CFURL *)createUrlToAppBundleResource:(struct __CFString *)arg1 processorBundle:(struct __CFBundle *)arg2;

- (void)dealloc;

- (_Bool)hasBody;

- (_Bool)hasFooters;

- (_Bool)hasHeaders;

- (id)init;

- (void)initializeAppBundleResourcesUrl;

- (id)pageMargins;

- (struct CGSize)pageSize;

- (int)readAttributesFromReader:(struct _xmlTextReader *)arg1;

- (void)setPageMargins:(id)arg1;

- (void)setStylesheet:(id)arg1;

- (_Bool)showOutliner;

- (id)stylesheet;



@end


