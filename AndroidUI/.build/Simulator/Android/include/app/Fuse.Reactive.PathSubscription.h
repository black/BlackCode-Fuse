// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Reactive\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_FUSE_REACTIVE_PATH_SUBSCRIPTION_H__
#define __APP_FUSE_REACTIVE_PATH_SUBSCRIPTION_H__

#include <app/Fuse.Reactive.IObserver.h>
#include <app/Uno.IDisposable.h>
#include <app/Uno.Object.h>
#include <Uno.h>
namespace app { namespace Fuse { namespace Reactive { struct Binding; } } }

namespace app {
namespace Fuse {
namespace Reactive {

struct PathSubscription;

struct PathSubscription__uType : ::uClassType
{
    ::app::Fuse::Reactive::IObserver __interface_0;
    ::app::Uno::IDisposable __interface_1;
};

PathSubscription__uType* PathSubscription__typeof();

void PathSubscription___ObjInit(PathSubscription* __this, ::app::Fuse::Reactive::Binding* b, ::uObject* dc, ::uString* path);
void PathSubscription___ObjInit_1(PathSubscription* __this, ::app::Fuse::Reactive::Binding* b, ::uString* path);
::uString* PathSubscription__CombineKeyAndPath(::uStatic* __this, ::uString* key, ::uString* path);
void PathSubscription__Dispose(PathSubscription* __this);
void PathSubscription__HandleNewDataContext(PathSubscription* __this, ::uObject* val);
void PathSubscription__HandleObject(PathSubscription* __this, ::uObject* obj);
void PathSubscription__HandleObjectCallback(PathSubscription* __this, ::uObject* val);
void PathSubscription__HandlePath(PathSubscription* __this, ::uObject* dc, ::uString* path);
PathSubscription* PathSubscription__New_1(::uStatic* __this, ::app::Fuse::Reactive::Binding* b, ::uObject* dc, ::uString* path);
PathSubscription* PathSubscription__New_2(::uStatic* __this, ::app::Fuse::Reactive::Binding* b, ::uString* path);
void PathSubscription__OnAdd(PathSubscription* __this, ::uObject* addedValue);
void PathSubscription__OnFailed(PathSubscription* __this, ::uString* message);
void PathSubscription__OnNewAll(PathSubscription* __this, int length);
void PathSubscription__OnNewAt(PathSubscription* __this, int index, ::uObject* newValue);
void PathSubscription__OnRemove(PathSubscription* __this, ::uObject* value, int index);
void PathSubscription__OnSet(PathSubscription* __this, ::uObject* value);
::uString* PathSubscription__TakeKeyFromPath(::uStatic* __this, ::uString** path);

struct PathSubscription : ::uObject
{
    ::uStrong< ::app::Fuse::Reactive::Binding*> _b;
    ::uStrong< ::uString*> _key;
    ::uStrong< ::uObject*> _subscription;
    ::uStrong< PathSubscription*> _next;
    ::uStrong< ::uString*> _unhandledPath;
    bool _isInnerLink;
    bool _isDisposed;

    void _ObjInit(::app::Fuse::Reactive::Binding* b, ::uObject* dc, ::uString* path) { PathSubscription___ObjInit(this, b, dc, path); }
    void _ObjInit_1(::app::Fuse::Reactive::Binding* b, ::uString* path) { PathSubscription___ObjInit_1(this, b, path); }
    void Dispose() { PathSubscription__Dispose(this); }
    void HandleNewDataContext(::uObject* val) { PathSubscription__HandleNewDataContext(this, val); }
    void HandleObject(::uObject* obj) { PathSubscription__HandleObject(this, obj); }
    void HandleObjectCallback(::uObject* val) { PathSubscription__HandleObjectCallback(this, val); }
    void HandlePath(::uObject* dc, ::uString* path) { PathSubscription__HandlePath(this, dc, path); }
    void OnAdd(::uObject* addedValue) { PathSubscription__OnAdd(this, addedValue); }
    void OnFailed(::uString* message) { PathSubscription__OnFailed(this, message); }
    void OnNewAll(int length) { PathSubscription__OnNewAll(this, length); }
    void OnNewAt(int index, ::uObject* newValue) { PathSubscription__OnNewAt(this, index, newValue); }
    void OnRemove(::uObject* value, int index) { PathSubscription__OnRemove(this, value, index); }
    void OnSet(::uObject* value) { PathSubscription__OnSet(this, value); }
};

}}}


#endif
