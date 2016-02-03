// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Scripting\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_FUSE_SCRIPTING_NATIVE_PROMISE2_PROMISE_CLOSURE__BOOL__BOOL_H__
#define __APP_FUSE_SCRIPTING_NATIVE_PROMISE2_PROMISE_CLOSURE__BOOL__BOOL_H__

#include <app/Uno.Object.h>
#include <Uno.h>
namespace app { namespace Fuse { namespace Scripting { struct Context; } } }
namespace app { namespace Fuse { namespace Scripting { struct Function; } } }
namespace app { namespace Uno { namespace Threading { struct Future__bool; } } }
namespace app { namespace Uno { struct Exception; } }

namespace app {
namespace Fuse {
namespace Scripting {

struct NativePromise2_PromiseClosure__bool__bool;

struct NativePromise2_PromiseClosure__bool__bool__uType : ::uClassType
{
};

NativePromise2_PromiseClosure__bool__bool__uType* NativePromise2_PromiseClosure__bool__bool__typeof();

void NativePromise2_PromiseClosure__bool__bool___ObjInit(NativePromise2_PromiseClosure__bool__bool* __this, ::app::Fuse::Scripting::Context* context, ::app::Uno::Threading::Future__bool* promise, ::uDelegate* converter);
void NativePromise2_PromiseClosure__bool__bool__InternalResolve(NativePromise2_PromiseClosure__bool__bool* __this);
NativePromise2_PromiseClosure__bool__bool* NativePromise2_PromiseClosure__bool__bool__New_1(::uStatic* __this, ::app::Fuse::Scripting::Context* context, ::app::Uno::Threading::Future__bool* promise, ::uDelegate* converter);
void NativePromise2_PromiseClosure__bool__bool__Reject(NativePromise2_PromiseClosure__bool__bool* __this, ::app::Uno::Exception* reason);
void NativePromise2_PromiseClosure__bool__bool__Resolve(NativePromise2_PromiseClosure__bool__bool* __this, bool result);
::uObject* NativePromise2_PromiseClosure__bool__bool__Run(NativePromise2_PromiseClosure__bool__bool* __this, ::uArray* args);

struct NativePromise2_PromiseClosure__bool__bool : ::uObject
{
    ::uStrong< ::app::Fuse::Scripting::Context*> _c;
    ::uStrong< ::app::Uno::Threading::Future__bool*> _promise;
    ::uStrong< ::app::Fuse::Scripting::Function*> _resolve;
    ::uStrong< ::app::Fuse::Scripting::Function*> _reject;
    ::uStrong< ::uDelegate*> _converter;
    bool _result;

    void _ObjInit(::app::Fuse::Scripting::Context* context, ::app::Uno::Threading::Future__bool* promise, ::uDelegate* converter) { NativePromise2_PromiseClosure__bool__bool___ObjInit(this, context, promise, converter); }
    void InternalResolve() { NativePromise2_PromiseClosure__bool__bool__InternalResolve(this); }
    void Reject(::app::Uno::Exception* reason) { NativePromise2_PromiseClosure__bool__bool__Reject(this, reason); }
    void Resolve(bool result) { NativePromise2_PromiseClosure__bool__bool__Resolve(this, result); }
    ::uObject* Run(::uArray* args) { return NativePromise2_PromiseClosure__bool__bool__Run(this, args); }
};

}}}


#endif
