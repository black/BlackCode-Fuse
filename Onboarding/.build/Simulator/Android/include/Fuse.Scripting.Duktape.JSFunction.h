// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Scripting.Duktape\0.19.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Scripting.Function.h>
namespace g{namespace Fuse{namespace Scripting{namespace Duktape{struct Context;}}}}
namespace g{namespace Fuse{namespace Scripting{namespace Duktape{struct JSFunction;}}}}
namespace g{namespace Fuse{namespace Scripting{struct Object;}}}

namespace g{
namespace Fuse{
namespace Scripting{
namespace Duktape{

// public sealed extern class JSFunction :1054
// {
::g::Fuse::Scripting::Function_type* JSFunction_typeof();
void JSFunction__ctor_1_fn(JSFunction* __this, ::g::Fuse::Scripting::Duktape::Context* ctx, void** handle);
void JSFunction__Call_fn(JSFunction* __this, uArray* args, uObject** __retval);
void JSFunction__Construct_fn(JSFunction* __this, uArray* args, ::g::Fuse::Scripting::Object** __retval);
void JSFunction__Equals2_fn(JSFunction* __this, ::g::Fuse::Scripting::Function* a, bool* __retval);
void JSFunction__get_Handle_fn(JSFunction* __this, void** __retval);
void JSFunction__New1_fn(::g::Fuse::Scripting::Duktape::Context* ctx, void** handle, JSFunction** __retval);

struct JSFunction : ::g::Fuse::Scripting::Function
{
    uStrong< ::g::Fuse::Scripting::Duktape::Context*> _ctx;
    void* _handle;
    uStrong<uString*> _stashKey;

    void ctor_1(::g::Fuse::Scripting::Duktape::Context* ctx, void* handle);
    void* Handle();
    static JSFunction* New1(::g::Fuse::Scripting::Duktape::Context* ctx, void* handle);
};
// }

}}}} // ::g::Fuse::Scripting::Duktape
