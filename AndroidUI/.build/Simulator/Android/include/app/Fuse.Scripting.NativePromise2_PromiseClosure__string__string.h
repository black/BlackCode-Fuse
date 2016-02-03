// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Scripting\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_FUSE_SCRIPTING_NATIVE_PROMISE2_PROMISE_CLOSURE__STRING__STRING_H__
#define __APP_FUSE_SCRIPTING_NATIVE_PROMISE2_PROMISE_CLOSURE__STRING__STRING_H__

#include <app/Uno.Object.h>
#include <Uno.h>
namespace app { namespace Fuse { namespace Scripting { struct Context; } } }
namespace app { namespace Fuse { namespace Scripting { struct Function; } } }
namespace app { namespace Uno { namespace Threading { struct Future__string; } } }
namespace app { namespace Uno { struct Exception; } }

namespace app {
namespace Fuse {
namespace Scripting {

struct NativePromise2_PromiseClosure__string__string;

struct NativePromise2_PromiseClosure__string__string__uType : ::uClassType
{
};

NativePromise2_PromiseClosure__string__string__uType* NativePromise2_PromiseClosure__string__string__typeof();

void NativePromise2_PromiseClosure__string__string___ObjInit(NativePromise2_PromiseClosure__string__string* __this, ::app::Fuse::Scripting::Context* context, ::app::Uno::Threading::Future__string* promise, ::uDelegate* converter);
void NativePromise2_PromiseClosure__string__string__InternalResolve(NativePromise2_PromiseClosure__string__string* __this);
NativePromise2_PromiseClosure__string__string* NativePromise2_PromiseClosure__string__string__New_1(::uStatic* __this, ::app::Fuse::Scripting::Context* context, ::app::Uno::Threading::Future__string* promise, ::uDelegate* converter);
void NativePromise2_PromiseClosure__string__string__Reject(NativePromise2_PromiseClosure__string__string* __this, ::app::Uno::Exception* reason);
void NativePromise2_PromiseClosure__string__string__Resolve(NativePromise2_PromiseClosure__string__string* __this, ::uString* result);
::uObject* NativePromise2_PromiseClosure__string__string__Run(NativePromise2_PromiseClosure__string__string* __this, ::uArray* args);

struct NativePromise2_PromiseClosure__string__string : ::uObject
{
    ::uStrong< ::app::Fuse::Scripting::Context*> _c;
    ::uStrong< ::app::Uno::Threading::Future__string*> _promise;
    ::uStrong< ::app::Fuse::Scripting::Function*> _resolve;
    ::uStrong< ::app::Fuse::Scripting::Function*> _reject;
    ::uStrong< ::uDelegate*> _converter;
    ::uStrong< ::uString*> _result;

    void _ObjInit(::app::Fuse::Scripting::Context* context, ::app::Uno::Threading::Future__string* promise, ::uDelegate* converter) { NativePromise2_PromiseClosure__string__string___ObjInit(this, context, promise, converter); }
    void InternalResolve() { NativePromise2_PromiseClosure__string__string__InternalResolve(this); }
    void Reject(::app::Uno::Exception* reason) { NativePromise2_PromiseClosure__string__string__Reject(this, reason); }
    void Resolve(::uString* result) { NativePromise2_PromiseClosure__string__string__Resolve(this, result); }
    ::uObject* Run(::uArray* args) { return NativePromise2_PromiseClosure__string__string__Run(this, args); }
};

}}}


#endif
