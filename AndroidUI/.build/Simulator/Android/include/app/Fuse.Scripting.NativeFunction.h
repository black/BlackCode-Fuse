// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Scripting\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_FUSE_SCRIPTING_NATIVE_FUNCTION_H__
#define __APP_FUSE_SCRIPTING_NATIVE_FUNCTION_H__

#include <app/Fuse.Scripting.NativeMember.h>
#include <Uno.h>
namespace app { namespace Fuse { namespace Scripting { struct Context; } } }

namespace app {
namespace Fuse {
namespace Scripting {

struct NativeFunction;

struct NativeFunction__uType : ::app::Fuse::Scripting::NativeMember__uType
{
};

NativeFunction__uType* NativeFunction__typeof();

void NativeFunction___ObjInit_1(NativeFunction* __this, ::uString* name, ::uDelegate* callback);
::uObject* NativeFunction__CreateObject(NativeFunction* __this, ::app::Fuse::Scripting::Context* c);
NativeFunction* NativeFunction__New_1(::uStatic* __this, ::uString* name, ::uDelegate* callback);

struct NativeFunction : ::app::Fuse::Scripting::NativeMember
{
    ::uStrong< ::uDelegate*> _nativeCallback;

    void _ObjInit_1(::uString* name, ::uDelegate* callback) { NativeFunction___ObjInit_1(this, name, callback); }
};

}}}


#endif
