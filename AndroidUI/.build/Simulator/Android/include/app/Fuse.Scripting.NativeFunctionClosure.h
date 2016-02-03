// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Scripting\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_FUSE_SCRIPTING_NATIVE_FUNCTION_CLOSURE_H__
#define __APP_FUSE_SCRIPTING_NATIVE_FUNCTION_CLOSURE_H__

#include <app/Uno.Object.h>
#include <Uno.h>
namespace app { namespace Fuse { namespace Scripting { struct Context; } } }

namespace app {
namespace Fuse {
namespace Scripting {

struct NativeFunctionClosure;

struct NativeFunctionClosure__uType : ::uClassType
{
};

NativeFunctionClosure__uType* NativeFunctionClosure__typeof();

void NativeFunctionClosure___ObjInit(NativeFunctionClosure* __this, ::uDelegate* callback, ::app::Fuse::Scripting::Context* context);
::uObject* NativeFunctionClosure__Callback(NativeFunctionClosure* __this, ::uArray* args);
NativeFunctionClosure* NativeFunctionClosure__New_1(::uStatic* __this, ::uDelegate* callback, ::app::Fuse::Scripting::Context* context);

struct NativeFunctionClosure : ::uObject
{
    ::uStrong< ::uDelegate*> _callback;
    ::uStrong< ::app::Fuse::Scripting::Context*> _context;

    void _ObjInit(::uDelegate* callback, ::app::Fuse::Scripting::Context* context) { NativeFunctionClosure___ObjInit(this, callback, context); }
    ::uObject* Callback(::uArray* args) { return NativeFunctionClosure__Callback(this, args); }
};

}}}


#endif
