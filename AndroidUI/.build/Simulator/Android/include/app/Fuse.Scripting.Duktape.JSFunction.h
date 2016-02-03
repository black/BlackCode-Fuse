// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Scripting.Duktape\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_FUSE_SCRIPTING_DUKTAPE_J_S_FUNCTION_H__
#define __APP_FUSE_SCRIPTING_DUKTAPE_J_S_FUNCTION_H__

#include <app/Fuse.Scripting.Function.h>
#include <Uno.h>
namespace app { namespace Fuse { namespace Scripting { namespace Duktape { struct Context; } } } }
namespace app { namespace Fuse { namespace Scripting { struct Object; } } }

namespace app {
namespace Fuse {
namespace Scripting {
namespace Duktape {

struct JSFunction;

struct JSFunction__uType : ::app::Fuse::Scripting::Function__uType
{
};

JSFunction__uType* JSFunction__typeof();

void JSFunction___ObjInit_1(JSFunction* __this, ::app::Fuse::Scripting::Duktape::Context* ctx, void* handle);
::uObject* JSFunction__Call(JSFunction* __this, ::uArray* args);
::app::Fuse::Scripting::Object* JSFunction__Construct(JSFunction* __this, ::uArray* args);
bool JSFunction__Equals_2(JSFunction* __this, ::app::Fuse::Scripting::Function* a);
void* JSFunction__get_Handle(JSFunction* __this);
JSFunction* JSFunction__New_1(::uStatic* __this, ::app::Fuse::Scripting::Duktape::Context* ctx, void* handle);

struct JSFunction : ::app::Fuse::Scripting::Function
{
    ::uStrong< ::app::Fuse::Scripting::Duktape::Context*> _ctx;
    void* _handle;
    ::uStrong< ::uString*> _stashKey;

    void _ObjInit_1(::app::Fuse::Scripting::Duktape::Context* ctx, void* handle) { JSFunction___ObjInit_1(this, ctx, handle); }
    void* Handle() { return JSFunction__get_Handle(this); }
};

}}}}


#endif
