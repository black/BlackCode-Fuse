// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Scripting.V8\0.19.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Scripting.Context.h>
#include <Fuse.Scripting.V8.Internal.Value.h>
#include <Uno.IDisposable.h>
namespace g{namespace Fuse{namespace Scripting{namespace V8{struct Context;}}}}
namespace g{namespace Fuse{namespace Scripting{namespace V8{struct Debugger;}}}}
namespace g{namespace Fuse{namespace Scripting{namespace V8{struct Function;}}}}
namespace g{namespace Fuse{namespace Scripting{struct Object;}}}

namespace g{
namespace Fuse{
namespace Scripting{
namespace V8{

// public sealed extern class Context :112
// {
::g::Fuse::Scripting::Context_type* Context_typeof();
void Context__ctor_1_fn(Context* __this, uObject* ownerThread);
void Context__get__context_fn(Context* __this, ::v8::Local< ::v8::Context>* __retval);
void Context__Dispose_fn(Context* __this);
void Context__Evaluate1_fn(Context* __this, uString* fileName, uString* code, uObject** __retval);
void Context__get_GlobalObject_fn(Context* __this, ::g::Fuse::Scripting::Object** __retval);
void Context__New1_fn(uObject* ownerThread, Context** __retval);

struct Context : ::g::Fuse::Scripting::Context
{
    uStrong< ::g::Fuse::Scripting::V8::Debugger*> _debugger;
    static uSStrong< ::g::Fuse::Scripting::V8::Function*> _instanceOf_;
    static uSStrong< ::g::Fuse::Scripting::V8::Function*>& _instanceOf() { return _instanceOf_; }
    static ::v8::Isolate* _isolate_;
    static ::v8::Isolate*& _isolate() { return _isolate_; }
    ::v8::Persistent< ::v8::Context>* _persistentContext;
    ::v8::Platform* _platform;

    void ctor_1(uObject* ownerThread);
    ::v8::Local< ::v8::Context> _context();
    static Context* New1(uObject* ownerThread);
};
// }

}}}} // ::g::Fuse::Scripting::V8
