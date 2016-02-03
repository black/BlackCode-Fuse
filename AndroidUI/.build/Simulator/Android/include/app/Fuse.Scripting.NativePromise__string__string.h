// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Scripting\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_FUSE_SCRIPTING_NATIVE_PROMISE__STRING__STRING_H__
#define __APP_FUSE_SCRIPTING_NATIVE_PROMISE__STRING__STRING_H__

#include <app/Fuse.Scripting.NativeMember.h>
#include <Uno.h>
namespace app { namespace Fuse { namespace Scripting { struct Context; } } }
namespace app { namespace Uno { namespace Threading { struct Future__string; } } }

namespace app {
namespace Fuse {
namespace Scripting {

struct NativePromise__string__string;

struct NativePromise__string__string__uType : ::app::Fuse::Scripting::NativeMember__uType
{
};

NativePromise__string__string__uType* NativePromise__string__string__typeof();

void NativePromise__string__string___ObjInit_1(NativePromise__string__string* __this, ::uString* name, ::uDelegate* futureFactory, ::uDelegate* resultConverter);
void NativePromise__string__string___ObjInit_2(NativePromise__string__string* __this, ::uString* name, ::uDelegate* func, ::uDelegate* resultConverter);
::uObject* NativePromise__string__string__CreateObject(NativePromise__string__string* __this, ::app::Fuse::Scripting::Context* c);
::app::Uno::Threading::Future__string* NativePromise__string__string__Factory(NativePromise__string__string* __this, ::uArray* args);
NativePromise__string__string* NativePromise__string__string__New_1(::uStatic* __this, ::uString* name, ::uDelegate* futureFactory, ::uDelegate* resultConverter);
NativePromise__string__string* NativePromise__string__string__New_2(::uStatic* __this, ::uString* name, ::uDelegate* func, ::uDelegate* resultConverter);

struct NativePromise__string__string : ::app::Fuse::Scripting::NativeMember
{
    ::uStrong< ::uDelegate*> _futureFactory;
    ::uStrong< ::uDelegate*> _resultConverter;
    ::uStrong< ::uDelegate*> _func;

    void _ObjInit_1(::uString* name, ::uDelegate* futureFactory, ::uDelegate* resultConverter) { NativePromise__string__string___ObjInit_1(this, name, futureFactory, resultConverter); }
    void _ObjInit_2(::uString* name, ::uDelegate* func, ::uDelegate* resultConverter) { NativePromise__string__string___ObjInit_2(this, name, func, resultConverter); }
    ::app::Uno::Threading::Future__string* Factory(::uArray* args) { return NativePromise__string__string__Factory(this, args); }
};

}}}


#endif
