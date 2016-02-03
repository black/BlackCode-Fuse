// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Scripting.Duktape\0.18.8\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Scripting.Object.h>
namespace g{namespace Fuse{namespace Scripting{namespace Duktape{struct Context;}}}}
namespace g{namespace Fuse{namespace Scripting{namespace Duktape{struct JSObject;}}}}
namespace g{namespace Fuse{namespace Scripting{struct Function;}}}

namespace g{
namespace Fuse{
namespace Scripting{
namespace Duktape{

// public sealed extern class JSObject :1179
// {
::g::Fuse::Scripting::Object_type* JSObject_typeof();
void JSObject__ctor_1_fn(JSObject* __this, ::g::Fuse::Scripting::Duktape::Context* ctx, void** handle);
void JSObject__CallMethod_fn(JSObject* __this, uString* name, uArray* args, uObject** __retval);
void JSObject__ContainsKey_fn(JSObject* __this, uString* key, bool* __retval);
void JSObject__Equals2_fn(JSObject* __this, ::g::Fuse::Scripting::Object* obj, bool* __retval);
void JSObject__get_Handle_fn(JSObject* __this, void** __retval);
void JSObject__InstanceOf_fn(JSObject* __this, ::g::Fuse::Scripting::Function* type, bool* __retval);
void JSObject__get_Item_fn(JSObject* __this, uString* key, uObject** __retval);
void JSObject__set_Item_fn(JSObject* __this, uString* key, uObject* value);
void JSObject__get_Keys_fn(JSObject* __this, uArray** __retval);
void JSObject__New1_fn(::g::Fuse::Scripting::Duktape::Context* ctx, void** handle, JSObject** __retval);

struct JSObject : ::g::Fuse::Scripting::Object
{
    uStrong< ::g::Fuse::Scripting::Duktape::Context*> _ctx;
    void* _handle;
    uStrong<uString*> _stashKey;

    void ctor_1(::g::Fuse::Scripting::Duktape::Context* ctx, void* handle);
    void* Handle();
    static JSObject* New1(::g::Fuse::Scripting::Duktape::Context* ctx, void* handle);
};
// }

}}}} // ::g::Fuse::Scripting::Duktape
