/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */





@class JSContext;



__attribute__((visibility("hidden")))

@interface JSObjCClassInfo : NSObject

{

    JSContext *m_context;

    Class m_class;

    _Bool m_block;

    struct OpaqueJSClass *m_classRef;

    struct Weak<JSC::JSObject> m_prototype;

    struct Weak<JSC::JSObject> m_constructor;

}



- (id).cxx_construct;

- (void).cxx_destruct;

- (void)allocateConstructorAndPrototypeWithSuperClassInfo:(id)arg1;

- (id)constructor;

- (void)dealloc;

- (id)initWithContext:(id)arg1 forClass:(Class)arg2 superClassInfo:(id)arg3;

- (void)reallocateConstructorAndOrPrototype;

- (id)wrapperForObject:(id)arg1;



@end

