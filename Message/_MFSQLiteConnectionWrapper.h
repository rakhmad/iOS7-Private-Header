/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */





@class MFSQLiteConnection;



@interface _MFSQLiteConnectionWrapper : NSObject

{

    MFSQLiteConnection *_connection;

    unsigned long long _generation;

    unsigned long long _type;

}



@property(readonly, nonatomic) MFSQLiteConnection *connection; // @synthesize connection=_connection;

- (void)dealloc;

@property(readonly, nonatomic) unsigned long long generation; // @synthesize generation=_generation;

- (id)initWithConnection:(id)arg1 generation:(unsigned long long)arg2;

@property(nonatomic) unsigned long long type; // @synthesize type=_type;



@end

