// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Scripting.Duktape\0.18.8\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Scripting.Array.h>
namespace g{namespace Fuse{namespace Scripting{namespace Duktape{struct Context;}}}}
namespace g{namespace Fuse{namespace Scripting{namespace Duktape{struct JSArray;}}}}

namespace g{
namespace Fuse{
namespace Scripting{
namespace Duktape{

// public sealed extern class JSArray :10
// {
::g::Fuse::Scripting::Array_type* JSArray_typeof();
void JSArray__ctor_1_fn(JSArray* __this, ::g::Fuse::Scripting::Duktape::Context* ctx, void** handle);
void JSArray__Equals2_fn(JSArray* __this, ::g::Fuse::Scripting::Array* a, bool* __retval);
void JSArray__Get_fn(JSArray* __this, int* index, uObject** __retval);
void JSArray__get_Handle_fn(JSArray* __this, void** __retval);
void JSArray__get_Item_fn(JSArray* __this, int* index, uObject** __retval);
void JSArray__set_Item_fn(JSArray* __this, int* index, uObject* value);
void JSArray__get_Length_fn(JSArray* __this, int* __retval);
void JSArray__New1_fn(::g::Fuse::Scripting::Duktape::Context* ctx, void** handle, JSArray** __retval);
void JSArray__Set_fn(JSArray* __this, int* index, uObject* value);

struct JSArray : ::g::Fuse::Scripting::Array
{
    uStrong< ::g::Fuse::Scripting::Duktape::Context*> _ctx;
    void* _handle;
    uStrong<uString*> _stashKey;

    void ctor_1(::g::Fuse::Scripting::Duktape::Context* ctx, void* handle);
    uObject* Get(int index);
    void* Handle();
    void Set(int index, uObject* value);
    static JSArray* New1(::g::Fuse::Scripting::Duktape::Context* ctx, void* handle);
};
// }

}}}} // ::g::Fuse::Scripting::Duktape
