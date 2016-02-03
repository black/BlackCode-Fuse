// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Reactive\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_FUSE_REACTIVE_CALL_EVENT_HANDLER_H__
#define __APP_FUSE_REACTIVE_CALL_EVENT_HANDLER_H__

#include <app/Fuse.Scripting.IEventSerializer.h>
#include <app/Uno.Object.h>
#include <Uno.h>
namespace app { namespace Fuse { namespace Reactive { struct ScriptEventArgs; } } }
namespace app { namespace Fuse { namespace Reactive { struct ThreadWorker; } } }
namespace app { namespace Fuse { namespace Scripting { struct Function; } } }
namespace app { namespace Fuse { namespace Scripting { struct Object; } } }

namespace app {
namespace Fuse {
namespace Reactive {

struct CallEventHandler;

struct CallEventHandler__uType : ::uClassType
{
    ::app::Fuse::Scripting::IEventSerializer __interface_0;
};

CallEventHandler__uType* CallEventHandler__typeof();

void CallEventHandler___ObjInit(CallEventHandler* __this, ::app::Fuse::Reactive::ThreadWorker* worker, ::app::Fuse::Scripting::Function* function, ::app::Fuse::Reactive::ScriptEventArgs* args);
void CallEventHandler___ObjInit_1(CallEventHandler* __this, ::app::Fuse::Reactive::ThreadWorker* worker, ::uString* function, ::app::Fuse::Reactive::ScriptEventArgs* args);
void CallEventHandler__AddBool(CallEventHandler* __this, ::uString* key, bool value);
void CallEventHandler__AddDouble(CallEventHandler* __this, ::uString* key, double value);
void CallEventHandler__AddInt(CallEventHandler* __this, ::uString* key, int value);
void CallEventHandler__AddObject(CallEventHandler* __this, ::uString* key, ::uObject* value);
void CallEventHandler__AddString(CallEventHandler* __this, ::uString* key, ::uString* value);
CallEventHandler* CallEventHandler__New_1(::uStatic* __this, ::app::Fuse::Reactive::ThreadWorker* worker, ::app::Fuse::Scripting::Function* function, ::app::Fuse::Reactive::ScriptEventArgs* args);
CallEventHandler* CallEventHandler__New_2(::uStatic* __this, ::app::Fuse::Reactive::ThreadWorker* worker, ::uString* function, ::app::Fuse::Reactive::ScriptEventArgs* args);
void CallEventHandler__Run(CallEventHandler* __this);
void CallEventHandler__SetObservable(CallEventHandler* __this, ::app::Fuse::Scripting::Object* obs, ::uObject* value);

struct CallEventHandler : ::uObject
{
    ::uStrong< ::app::Fuse::Reactive::ThreadWorker*> _worker;
    ::uStrong< ::uString*> _function;
    ::uStrong< ::app::Fuse::Scripting::Function*> _func;
    ::uStrong< ::app::Fuse::Reactive::ScriptEventArgs*> _args;
    ::uStrong< ::app::Fuse::Scripting::Object*> _obj;

    void _ObjInit(::app::Fuse::Reactive::ThreadWorker* worker, ::app::Fuse::Scripting::Function* function, ::app::Fuse::Reactive::ScriptEventArgs* args) { CallEventHandler___ObjInit(this, worker, function, args); }
    void _ObjInit_1(::app::Fuse::Reactive::ThreadWorker* worker, ::uString* function, ::app::Fuse::Reactive::ScriptEventArgs* args) { CallEventHandler___ObjInit_1(this, worker, function, args); }
    void AddBool(::uString* key, bool value) { CallEventHandler__AddBool(this, key, value); }
    void AddDouble(::uString* key, double value) { CallEventHandler__AddDouble(this, key, value); }
    void AddInt(::uString* key, int value) { CallEventHandler__AddInt(this, key, value); }
    void AddObject(::uString* key, ::uObject* value) { CallEventHandler__AddObject(this, key, value); }
    void AddString(::uString* key, ::uString* value) { CallEventHandler__AddString(this, key, value); }
    void Run() { CallEventHandler__Run(this); }
    void SetObservable(::app::Fuse::Scripting::Object* obs, ::uObject* value) { CallEventHandler__SetObservable(this, obs, value); }
};

}}}


#endif
