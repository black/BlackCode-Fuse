// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Scripting\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_FUSE_SCRIPTING_NATIVE_PROMISE2_PROMISE_CLOSURE__FUSE_CAMERA_PICTU_68FE7780_H__
#define __APP_FUSE_SCRIPTING_NATIVE_PROMISE2_PROMISE_CLOSURE__FUSE_CAMERA_PICTU_68FE7780_H__

#include <app/Uno.Object.h>
#include <Uno.h>
namespace app { namespace Fuse { namespace Camera { struct PictureResult; } } }
namespace app { namespace Fuse { namespace Scripting { struct Context; } } }
namespace app { namespace Fuse { namespace Scripting { struct Function; } } }
namespace app { namespace Uno { namespace Threading { struct Future__Fuse_Camera_PictureResult; } } }
namespace app { namespace Uno { struct Exception; } }

namespace app {
namespace Fuse {
namespace Scripting {

struct NativePromise2_PromiseClosure__Fuse_Camera_PictureResult__Fuse_Scripting_Object;

struct NativePromise2_PromiseClosure__Fuse_Camera_PictureResult__Fuse_Scripting_Object__uType : ::uClassType
{
};

NativePromise2_PromiseClosure__Fuse_Camera_PictureResult__Fuse_Scripting_Object__uType* NativePromise2_PromiseClosure__Fuse_Camera_PictureResult__Fuse_Scripting_Object__typeof();

void NativePromise2_PromiseClosure__Fuse_Camera_PictureResult__Fuse_Scripting_Object___ObjInit(NativePromise2_PromiseClosure__Fuse_Camera_PictureResult__Fuse_Scripting_Object* __this, ::app::Fuse::Scripting::Context* context, ::app::Uno::Threading::Future__Fuse_Camera_PictureResult* promise, ::uDelegate* converter);
void NativePromise2_PromiseClosure__Fuse_Camera_PictureResult__Fuse_Scripting_Object__InternalResolve(NativePromise2_PromiseClosure__Fuse_Camera_PictureResult__Fuse_Scripting_Object* __this);
NativePromise2_PromiseClosure__Fuse_Camera_PictureResult__Fuse_Scripting_Object* NativePromise2_PromiseClosure__Fuse_Camera_PictureResult__Fuse_Scripting_Object__New_1(::uStatic* __this, ::app::Fuse::Scripting::Context* context, ::app::Uno::Threading::Future__Fuse_Camera_PictureResult* promise, ::uDelegate* converter);
void NativePromise2_PromiseClosure__Fuse_Camera_PictureResult__Fuse_Scripting_Object__Reject(NativePromise2_PromiseClosure__Fuse_Camera_PictureResult__Fuse_Scripting_Object* __this, ::app::Uno::Exception* reason);
void NativePromise2_PromiseClosure__Fuse_Camera_PictureResult__Fuse_Scripting_Object__Resolve(NativePromise2_PromiseClosure__Fuse_Camera_PictureResult__Fuse_Scripting_Object* __this, ::app::Fuse::Camera::PictureResult* result);
::uObject* NativePromise2_PromiseClosure__Fuse_Camera_PictureResult__Fuse_Scripting_Object__Run(NativePromise2_PromiseClosure__Fuse_Camera_PictureResult__Fuse_Scripting_Object* __this, ::uArray* args);

struct NativePromise2_PromiseClosure__Fuse_Camera_PictureResult__Fuse_Scripting_Object : ::uObject
{
    ::uStrong< ::app::Fuse::Scripting::Context*> _c;
    ::uStrong< ::app::Uno::Threading::Future__Fuse_Camera_PictureResult*> _promise;
    ::uStrong< ::app::Fuse::Scripting::Function*> _resolve;
    ::uStrong< ::app::Fuse::Scripting::Function*> _reject;
    ::uStrong< ::uDelegate*> _converter;
    ::uStrong< ::app::Fuse::Camera::PictureResult*> _result;

    void _ObjInit(::app::Fuse::Scripting::Context* context, ::app::Uno::Threading::Future__Fuse_Camera_PictureResult* promise, ::uDelegate* converter) { NativePromise2_PromiseClosure__Fuse_Camera_PictureResult__Fuse_Scripting_Object___ObjInit(this, context, promise, converter); }
    void InternalResolve() { NativePromise2_PromiseClosure__Fuse_Camera_PictureResult__Fuse_Scripting_Object__InternalResolve(this); }
    void Reject(::app::Uno::Exception* reason) { NativePromise2_PromiseClosure__Fuse_Camera_PictureResult__Fuse_Scripting_Object__Reject(this, reason); }
    void Resolve(::app::Fuse::Camera::PictureResult* result) { NativePromise2_PromiseClosure__Fuse_Camera_PictureResult__Fuse_Scripting_Object__Resolve(this, result); }
    ::uObject* Run(::uArray* args) { return NativePromise2_PromiseClosure__Fuse_Camera_PictureResult__Fuse_Scripting_Object__Run(this, args); }
};

}}}


#endif
