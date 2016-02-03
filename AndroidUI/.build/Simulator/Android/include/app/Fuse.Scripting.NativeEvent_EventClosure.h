// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Scripting\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_FUSE_SCRIPTING_NATIVE_EVENT_EVENT_CLOSURE_H__
#define __APP_FUSE_SCRIPTING_NATIVE_EVENT_EVENT_CLOSURE_H__

#include <app/Uno.Object.h>
#include <Uno.h>
namespace app { namespace Fuse { namespace Scripting { struct Function; } } }

namespace app {
namespace Fuse {
namespace Scripting {

struct NativeEvent_EventClosure;

struct NativeEvent_EventClosure__uType : ::uClassType
{
};

NativeEvent_EventClosure__uType* NativeEvent_EventClosure__typeof();

void NativeEvent_EventClosure___ObjInit(NativeEvent_EventClosure* __this, ::app::Fuse::Scripting::Function* jsFunction, ::uArray* args);
void NativeEvent_EventClosure__Call(NativeEvent_EventClosure* __this);
NativeEvent_EventClosure* NativeEvent_EventClosure__New_1(::uStatic* __this, ::app::Fuse::Scripting::Function* jsFunction, ::uArray* args);

struct NativeEvent_EventClosure : ::uObject
{
    ::uStrong< ::uArray*> _args;
    ::uStrong< ::app::Fuse::Scripting::Function*> _jsFunction;

    void _ObjInit(::app::Fuse::Scripting::Function* jsFunction, ::uArray* args) { NativeEvent_EventClosure___ObjInit(this, jsFunction, args); }
    void Call() { NativeEvent_EventClosure__Call(this); }
};

}}}


#endif
