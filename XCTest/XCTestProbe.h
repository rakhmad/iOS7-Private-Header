/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */





@interface XCTestProbe : NSObject

{

}



+ (void)_applicationFinishedLaunching:(id)arg1;

+ (void)initialize;

+ (_Bool)isInverseTestScope;

+ (_Bool)isLoadedFromApplication;

+ (_Bool)isLoadedFromTool;

+ (_Bool)isProcessActingAsTestRig;

+ (_Bool)isTesting;

+ (void)load;

+ (id)multiTestSuiteForScope:(id)arg1 inverse:(_Bool)arg2;

+ (void)resumeAppSleep:(id)arg1;

+ (void)runTests:(id)arg1;

+ (void)runTestsAtUnitPath:(id)arg1 scope:(id)arg2;

+ (id)specifiedTestSuite;

+ (id)suspendAppSleep;

+ (id)testCaseNamesForScopeNames:(id)arg1;

+ (id)testScope;

+ (id)testedBundlePath;



@end

