// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Scripting.V8\0.18.8\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <include/v8-debug.h>
#include <Uno.Object.h>
namespace g{namespace Fuse{namespace Scripting{namespace V8{struct Debugger__Connected;}}}}
namespace g{namespace Fuse{namespace Scripting{namespace V8{struct Debugger__ConnectedMessageHandler;}}}}
namespace g{namespace Uno{namespace IO{struct TextWriter;}}}

namespace g{
namespace Fuse{
namespace Scripting{
namespace V8{

// private sealed class Debugger.ConnectedMessageHandler :498
// {
uType* Debugger__ConnectedMessageHandler_typeof();
void Debugger__ConnectedMessageHandler__ctor__fn(Debugger__ConnectedMessageHandler* __this, ::g::Fuse::Scripting::V8::Debugger__Connected* state, ::g::Uno::IO::TextWriter* writer);
void Debugger__ConnectedMessageHandler__MessageHandler_fn(Debugger__ConnectedMessageHandler* __this, ::v8::Debug::Message** message);
void Debugger__ConnectedMessageHandler__New1_fn(::g::Fuse::Scripting::V8::Debugger__Connected* state, ::g::Uno::IO::TextWriter* writer, Debugger__ConnectedMessageHandler** __retval);

struct Debugger__ConnectedMessageHandler : uObject
{
    uStrong< ::g::Fuse::Scripting::V8::Debugger__Connected*> _state;
    uStrong< ::g::Uno::IO::TextWriter*> _writer;

    void ctor_(::g::Fuse::Scripting::V8::Debugger__Connected* state, ::g::Uno::IO::TextWriter* writer);
    void MessageHandler(::v8::Debug::Message* message);
    static Debugger__ConnectedMessageHandler* New1(::g::Fuse::Scripting::V8::Debugger__Connected* state, ::g::Uno::IO::TextWriter* writer);
};
// }

}}}} // ::g::Fuse::Scripting::V8
