// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Scripting\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_FUSE_SCRIPTING_NATIVE_PROMISE2_CONTEXT_CLOSURE__BOOL__BOOL_H__
#define __APP_FUSE_SCRIPTING_NATIVE_PROMISE2_CONTEXT_CLOSURE__BOOL__BOOL_H__

#include <app/Uno.Object.h>
#include <Uno.h>
namespace app { namespace Fuse { namespace Scripting { struct Context; } } }

namespace app {
namespace Fuse {
namespace Scripting {

struct NativePromise2_ContextClosure__bool__bool;

struct NativePromise2_ContextClosure__bool__bool__uType : ::uClassType
{
};

NativePromise2_ContextClosure__bool__bool__uType* NativePromise2_ContextClosure__bool__bool__typeof();

void NativePromise2_ContextClosure__bool__bool___ObjInit(NativePromise2_ContextClosure__bool__bool* __this, ::app::Fuse::Scripting::Context* c, ::uDelegate* factory, ::uDelegate* converter);
::uObject* NativePromise2_ContextClosure__bool__bool__CreatePromise(NativePromise2_ContextClosure__bool__bool* __this, ::uArray* args);
NativePromise2_ContextClosure__bool__bool* NativePromise2_ContextClosure__bool__bool__New_1(::uStatic* __this, ::app::Fuse::Scripting::Context* c, ::uDelegate* factory, ::uDelegate* converter);

struct NativePromise2_ContextClosure__bool__bool : ::uObject
{
    ::uStrong< ::app::Fuse::Scripting::Context*> _c;
    ::uStrong< ::uDelegate*> _factory;
    ::uStrong< ::uDelegate*> _converter;

    void _ObjInit(::app::Fuse::Scripting::Context* c, ::uDelegate* factory, ::uDelegate* converter) { NativePromise2_ContextClosure__bool__bool___ObjInit(this, c, factory, converter); }
    ::uObject* CreatePromise(::uArray* args) { return NativePromise2_ContextClosure__bool__bool__CreatePromise(this, args); }
};

}}}


#endif
