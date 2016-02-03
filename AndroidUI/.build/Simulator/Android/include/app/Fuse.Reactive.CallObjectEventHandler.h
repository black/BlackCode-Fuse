// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Reactive\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_FUSE_REACTIVE_CALL_OBJECT_EVENT_HANDLER_H__
#define __APP_FUSE_REACTIVE_CALL_OBJECT_EVENT_HANDLER_H__

#include <app/Fuse.Scripting.IEventSerializer.h>
#include <app/Uno.Object.h>
#include <Uno.h>
namespace app { namespace Fuse { namespace Reactive { struct ScriptEventArgs; } } }
namespace app { namespace Fuse { namespace Reactive { struct ThreadWorker; } } }
namespace app { namespace Fuse { namespace Scripting { struct Object; } } }

namespace app {
namespace Fuse {
namespace Reactive {

struct CallObjectEventHandler;

struct CallObjectEventHandler__uType : ::uClassType
{
    ::app::Fuse::Scripting::IEventSerializer __interface_0;
};

CallObjectEventHandler__uType* CallObjectEventHandler__typeof();

void CallObjectEventHandler___ObjInit(CallObjectEventHandler* __this, ::app::Fuse::Reactive::ThreadWorker* worker, ::app::Fuse::Scripting::Object* obj, ::app::Fuse::Reactive::ScriptEventArgs* args);
void CallObjectEventHandler__AddBool(CallObjectEventHandler* __this, ::uString* key, bool value);
void CallObjectEventHandler__AddDouble(CallObjectEventHandler* __this, ::uString* key, double value);
void CallObjectEventHandler__AddInt(CallObjectEventHandler* __this, ::uString* key, int value);
void CallObjectEventHandler__AddObject(CallObjectEventHandler* __this, ::uString* key, ::uObject* value);
void CallObjectEventHandler__AddString(CallObjectEventHandler* __this, ::uString* key, ::uString* value);
CallObjectEventHandler* CallObjectEventHandler__New_1(::uStatic* __this, ::app::Fuse::Reactive::ThreadWorker* worker, ::app::Fuse::Scripting::Object* obj, ::app::Fuse::Reactive::ScriptEventArgs* args);
void CallObjectEventHandler__Run(CallObjectEventHandler* __this);
void CallObjectEventHandler__SetObservable(CallObjectEventHandler* __this, ::app::Fuse::Scripting::Object* obs, ::uObject* value);

struct CallObjectEventHandler : ::uObject
{
    ::uStrong< ::app::Fuse::Reactive::ThreadWorker*> _worker;
    ::uStrong< ::app::Fuse::Scripting::Object*> _obj;
    ::uStrong< ::app::Fuse::Reactive::ScriptEventArgs*> _args;

    void _ObjInit(::app::Fuse::Reactive::ThreadWorker* worker, ::app::Fuse::Scripting::Object* obj, ::app::Fuse::Reactive::ScriptEventArgs* args) { CallObjectEventHandler___ObjInit(this, worker, obj, args); }
    void AddBool(::uString* key, bool value) { CallObjectEventHandler__AddBool(this, key, value); }
    void AddDouble(::uString* key, double value) { CallObjectEventHandler__AddDouble(this, key, value); }
    void AddInt(::uString* key, int value) { CallObjectEventHandler__AddInt(this, key, value); }
    void AddObject(::uString* key, ::uObject* value) { CallObjectEventHandler__AddObject(this, key, value); }
    void AddString(::uString* key, ::uString* value) { CallObjectEventHandler__AddString(this, key, value); }
    void Run() { CallObjectEventHandler__Run(this); }
    void SetObservable(::app::Fuse::Scripting::Object* obs, ::uObject* value) { CallObjectEventHandler__SetObservable(this, obs, value); }
};

}}}


#endif
