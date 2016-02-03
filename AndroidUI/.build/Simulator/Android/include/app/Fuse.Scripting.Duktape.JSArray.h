// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Scripting.Duktape\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_FUSE_SCRIPTING_DUKTAPE_J_S_ARRAY_H__
#define __APP_FUSE_SCRIPTING_DUKTAPE_J_S_ARRAY_H__

#include <app/Fuse.Scripting.Array.h>
#include <Uno.h>
namespace app { namespace Fuse { namespace Scripting { namespace Duktape { struct Context; } } } }

namespace app {
namespace Fuse {
namespace Scripting {
namespace Duktape {

struct JSArray;

struct JSArray__uType : ::app::Fuse::Scripting::Array__uType
{
};

JSArray__uType* JSArray__typeof();

void JSArray___ObjInit_1(JSArray* __this, ::app::Fuse::Scripting::Duktape::Context* ctx, void* handle);
bool JSArray__Equals_2(JSArray* __this, ::app::Fuse::Scripting::Array* a);
::uObject* JSArray__Get(JSArray* __this, int index);
void* JSArray__get_Handle(JSArray* __this);
::uObject* JSArray__get_Item(JSArray* __this, int index);
int JSArray__get_Length(JSArray* __this);
JSArray* JSArray__New_1(::uStatic* __this, ::app::Fuse::Scripting::Duktape::Context* ctx, void* handle);
void JSArray__Set(JSArray* __this, int index, ::uObject* value);
void JSArray__set_Item(JSArray* __this, int index, ::uObject* value);

struct JSArray : ::app::Fuse::Scripting::Array
{
    void* _handle;
    ::uStrong< ::app::Fuse::Scripting::Duktape::Context*> _ctx;
    ::uStrong< ::uString*> _stashKey;

    void _ObjInit_1(::app::Fuse::Scripting::Duktape::Context* ctx, void* handle) { JSArray___ObjInit_1(this, ctx, handle); }
    ::uObject* Get(int index) { return JSArray__Get(this, index); }
    void* Handle() { return JSArray__get_Handle(this); }
    void Set(int index, ::uObject* value) { JSArray__Set(this, index, value); }
};

}}}}


#endif
