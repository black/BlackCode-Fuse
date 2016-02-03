// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Scripting.V8\0.19.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Scripting.V8.Debugger.State.h>
#include <Uno.Object.h>
namespace g{namespace Fuse{namespace Scripting{namespace V8{struct Debugger;}}}}
namespace g{namespace Fuse{namespace Scripting{namespace V8{struct Debugger__Disconnected;}}}}

namespace g{
namespace Fuse{
namespace Scripting{
namespace V8{

// private sealed class Debugger.Disconnected :454
// {
struct Debugger__Disconnected_type : uType
{
    ::g::Fuse::Scripting::V8::Debugger__State interface0;
};

Debugger__Disconnected_type* Debugger__Disconnected_typeof();
void Debugger__Disconnected__ctor__fn(Debugger__Disconnected* __this, ::g::Fuse::Scripting::V8::Debugger* parent);
void Debugger__Disconnected__New1_fn(::g::Fuse::Scripting::V8::Debugger* parent, Debugger__Disconnected** __retval);
void Debugger__Disconnected__Run_fn(Debugger__Disconnected* __this, uObject** __retval);

struct Debugger__Disconnected : uObject
{
    uStrong< ::g::Fuse::Scripting::V8::Debugger*> _parent;

    void ctor_(::g::Fuse::Scripting::V8::Debugger* parent);
    uObject* Run();
    static Debugger__Disconnected* New1(::g::Fuse::Scripting::V8::Debugger* parent);
};
// }

}}}} // ::g::Fuse::Scripting::V8
