// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Reactive\0.18.8\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Scripting.IEventSerializer.h>
#include <Uno.Object.h>
namespace g{namespace Fuse{namespace Reactive{struct CallObjectEventHandler;}}}
namespace g{namespace Fuse{namespace Reactive{struct ScriptEventArgs;}}}
namespace g{namespace Fuse{namespace Reactive{struct ThreadWorker;}}}
namespace g{namespace Fuse{namespace Scripting{struct Object;}}}

namespace g{
namespace Fuse{
namespace Reactive{

// internal sealed class CallObjectEventHandler :352
// {
struct CallObjectEventHandler_type : uType
{
    ::g::Fuse::Scripting::IEventSerializer interface0;
};

CallObjectEventHandler_type* CallObjectEventHandler_typeof();
void CallObjectEventHandler__ctor__fn(CallObjectEventHandler* __this, ::g::Fuse::Reactive::ThreadWorker* worker, ::g::Fuse::Scripting::Object* obj, ::g::Fuse::Reactive::ScriptEventArgs* args);
void CallObjectEventHandler__AddBool_fn(CallObjectEventHandler* __this, uString* key, bool* value);
void CallObjectEventHandler__AddDouble_fn(CallObjectEventHandler* __this, uString* key, double* value);
void CallObjectEventHandler__AddInt_fn(CallObjectEventHandler* __this, uString* key, int* value);
void CallObjectEventHandler__AddObject_fn(CallObjectEventHandler* __this, uString* key, uObject* value);
void CallObjectEventHandler__AddString_fn(CallObjectEventHandler* __this, uString* key, uString* value);
void CallObjectEventHandler__New1_fn(::g::Fuse::Reactive::ThreadWorker* worker, ::g::Fuse::Scripting::Object* obj, ::g::Fuse::Reactive::ScriptEventArgs* args, CallObjectEventHandler** __retval);
void CallObjectEventHandler__Run_fn(CallObjectEventHandler* __this);
void CallObjectEventHandler__SetObservable_fn(CallObjectEventHandler* __this, ::g::Fuse::Scripting::Object* obs, uObject* value);

struct CallObjectEventHandler : uObject
{
    uStrong< ::g::Fuse::Reactive::ScriptEventArgs*> _args;
    uStrong< ::g::Fuse::Scripting::Object*> _obj;
    uStrong< ::g::Fuse::Reactive::ThreadWorker*> _worker;

    void ctor_(::g::Fuse::Reactive::ThreadWorker* worker, ::g::Fuse::Scripting::Object* obj, ::g::Fuse::Reactive::ScriptEventArgs* args);
    void AddBool(uString* key, bool value);
    void AddDouble(uString* key, double value);
    void AddInt(uString* key, int value);
    void AddObject(uString* key, uObject* value);
    void AddString(uString* key, uString* value);
    void Run();
    void SetObservable(::g::Fuse::Scripting::Object* obs, uObject* value);
    static CallObjectEventHandler* New1(::g::Fuse::Reactive::ThreadWorker* worker, ::g::Fuse::Scripting::Object* obj, ::g::Fuse::Reactive::ScriptEventArgs* args);
};
// }

}}} // ::g::Fuse::Reactive
