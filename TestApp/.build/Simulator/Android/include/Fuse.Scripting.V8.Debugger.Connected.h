// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Scripting.V8\0.18.8\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Scripting.V8.Debugger.State.h>
#include <Uno.Object.h>
namespace g{namespace Fuse{namespace Scripting{namespace V8{struct Debugger;}}}}
namespace g{namespace Fuse{namespace Scripting{namespace V8{struct Debugger__Connected;}}}}
namespace g{namespace Uno{namespace IO{struct TextReader;}}}

namespace g{
namespace Fuse{
namespace Scripting{
namespace V8{

// private sealed class Debugger.Connected :524
// {
struct Debugger__Connected_type : uType
{
    ::g::Fuse::Scripting::V8::Debugger__State interface0;
};

Debugger__Connected_type* Debugger__Connected_typeof();
void Debugger__Connected__ctor__fn(Debugger__Connected* __this, ::g::Fuse::Scripting::V8::Debugger* parent, ::g::Uno::IO::TextReader* reader);
void Debugger__Connected__Dispose_fn(Debugger__Connected* __this);
void Debugger__Connected__New1_fn(::g::Fuse::Scripting::V8::Debugger* parent, ::g::Uno::IO::TextReader* reader, Debugger__Connected** __retval);
void Debugger__Connected__Reconnect_fn(Debugger__Connected* __this);
void Debugger__Connected__Run_fn(Debugger__Connected* __this, uObject** __retval);

struct Debugger__Connected : uObject
{
    uStrong< ::g::Fuse::Scripting::V8::Debugger*> _parent;
    uStrong< ::g::Uno::IO::TextReader*> _reader;
    bool _reconnect;

    void ctor_(::g::Fuse::Scripting::V8::Debugger* parent, ::g::Uno::IO::TextReader* reader);
    void Dispose();
    void Reconnect();
    uObject* Run();
    static Debugger__Connected* New1(::g::Fuse::Scripting::V8::Debugger* parent, ::g::Uno::IO::TextReader* reader);
};
// }

}}}} // ::g::Fuse::Scripting::V8
