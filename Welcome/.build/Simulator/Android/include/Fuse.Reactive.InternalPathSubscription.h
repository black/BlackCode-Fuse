// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Reactive\0.19.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Reactive.IObserver.h>
#include <Uno.IDisposable.h>
#include <Uno.Object.h>
namespace g{namespace Fuse{namespace Reactive{struct Binding;}}}
namespace g{namespace Fuse{namespace Reactive{struct InternalPathSubscription;}}}

namespace g{
namespace Fuse{
namespace Reactive{

// internal sealed class InternalPathSubscription :2428
// {
struct InternalPathSubscription_type : uType
{
    ::g::Fuse::Reactive::IObserver interface0;
    ::g::Uno::IDisposable interface1;
};

InternalPathSubscription_type* InternalPathSubscription_typeof();
void InternalPathSubscription__ctor__fn(InternalPathSubscription* __this, ::g::Fuse::Reactive::Binding* b, uString* path, uDelegate* failCallback);
void InternalPathSubscription__ctor_1_fn(InternalPathSubscription* __this, ::g::Fuse::Reactive::Binding* b, uDelegate* failCallback);
void InternalPathSubscription__CombineKeyAndPath_fn(uString* key, uString* path, uString** __retval);
void InternalPathSubscription__Dispose_fn(InternalPathSubscription* __this);
void InternalPathSubscription__HandleNewDataContext_fn(InternalPathSubscription* __this, uObject* val);
void InternalPathSubscription__HandleObject_fn(InternalPathSubscription* __this, uObject* obj);
void InternalPathSubscription__HandleObjectCallback_fn(InternalPathSubscription* __this, uObject* val);
void InternalPathSubscription__HandlePath_fn(InternalPathSubscription* __this, uObject* dc, uString* path);
void InternalPathSubscription__Init_fn(InternalPathSubscription* __this, uObject* dc, uString* path);
void InternalPathSubscription__New1_fn(::g::Fuse::Reactive::Binding* b, uString* path, uDelegate* failCallback, InternalPathSubscription** __retval);
void InternalPathSubscription__New2_fn(::g::Fuse::Reactive::Binding* b, uDelegate* failCallback, InternalPathSubscription** __retval);
void InternalPathSubscription__OnAdd_fn(InternalPathSubscription* __this, uObject* addedValue);
void InternalPathSubscription__OnFailed_fn(InternalPathSubscription* __this, uString* message);
void InternalPathSubscription__OnInsertAt_fn(InternalPathSubscription* __this, int* index, uObject* value);
void InternalPathSubscription__OnNewAll_fn(InternalPathSubscription* __this, int* length);
void InternalPathSubscription__OnNewAt_fn(InternalPathSubscription* __this, int* index, uObject* newValue);
void InternalPathSubscription__OnRemove_fn(InternalPathSubscription* __this, uObject* value, int* index);
void InternalPathSubscription__OnSet_fn(InternalPathSubscription* __this, uObject* value);
void InternalPathSubscription__TakeKeyFromPath_fn(uString** path, uString** __retval);

struct InternalPathSubscription : uObject
{
    uStrong< ::g::Fuse::Reactive::Binding*> _b;
    uStrong<uDelegate*> _failCallback;
    bool _isDisposed;
    bool _isInnerLink;
    uStrong<uString*> _key;
    uStrong<InternalPathSubscription*> _next;
    uStrong<uObject*> _subscription;
    uStrong<uString*> _unhandledPath;

    void ctor_(::g::Fuse::Reactive::Binding* b, uString* path, uDelegate* failCallback);
    void ctor_1(::g::Fuse::Reactive::Binding* b, uDelegate* failCallback);
    void Dispose();
    void HandleNewDataContext(uObject* val);
    void HandleObject(uObject* obj);
    void HandleObjectCallback(uObject* val);
    void HandlePath(uObject* dc, uString* path);
    void Init(uObject* dc, uString* path);
    void OnAdd(uObject* addedValue);
    void OnFailed(uString* message);
    void OnInsertAt(int index, uObject* value);
    void OnNewAll(int length);
    void OnNewAt(int index, uObject* newValue);
    void OnRemove(uObject* value, int index);
    void OnSet(uObject* value);
    static uString* CombineKeyAndPath(uString* key, uString* path);
    static InternalPathSubscription* New1(::g::Fuse::Reactive::Binding* b, uString* path, uDelegate* failCallback);
    static InternalPathSubscription* New2(::g::Fuse::Reactive::Binding* b, uDelegate* failCallback);
    static uString* TakeKeyFromPath(uString** path);
};
// }

}}} // ::g::Fuse::Reactive
