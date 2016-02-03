// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Scripting.Duktape\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_FUSE_SCRIPTING_DUKTAPE_J_S_OBJECT_H__
#define __APP_FUSE_SCRIPTING_DUKTAPE_J_S_OBJECT_H__

#include <app/Fuse.Scripting.Object.h>
#include <Uno.h>
namespace app { namespace Fuse { namespace Scripting { namespace Duktape { struct Context; } } } }
namespace app { namespace Fuse { namespace Scripting { struct Function; } } }

namespace app {
namespace Fuse {
namespace Scripting {
namespace Duktape {

struct JSObject;

struct JSObject__uType : ::app::Fuse::Scripting::Object__uType
{
};

JSObject__uType* JSObject__typeof();

void JSObject___ObjInit_1(JSObject* __this, ::app::Fuse::Scripting::Duktape::Context* ctx, void* handle);
::uObject* JSObject__CallMethod(JSObject* __this, ::uString* name, ::uArray* args);
bool JSObject__ContainsKey(JSObject* __this, ::uString* key);
bool JSObject__Equals_2(JSObject* __this, ::app::Fuse::Scripting::Object* obj);
void* JSObject__get_Handle(JSObject* __this);
::uObject* JSObject__get_Item(JSObject* __this, ::uString* key);
::uArray* JSObject__get_Keys(JSObject* __this);
bool JSObject__InstanceOf(JSObject* __this, ::app::Fuse::Scripting::Function* type);
JSObject* JSObject__New_1(::uStatic* __this, ::app::Fuse::Scripting::Duktape::Context* ctx, void* handle);
void JSObject__set_Item(JSObject* __this, ::uString* key, ::uObject* value);

struct JSObject : ::app::Fuse::Scripting::Object
{
    void* _handle;
    ::uStrong< ::app::Fuse::Scripting::Duktape::Context*> _ctx;
    ::uStrong< ::uString*> _stashKey;

    void _ObjInit_1(::app::Fuse::Scripting::Duktape::Context* ctx, void* handle) { JSObject___ObjInit_1(this, ctx, handle); }
    void* Handle() { return JSObject__get_Handle(this); }
};

}}}}


#endif
