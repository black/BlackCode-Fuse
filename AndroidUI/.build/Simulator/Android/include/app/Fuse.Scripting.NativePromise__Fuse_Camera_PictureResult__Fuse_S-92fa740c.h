// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Scripting\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_FUSE_SCRIPTING_NATIVE_PROMISE__FUSE_CAMERA_PICTURE_RESULT__FUSE_S_92FA740C_H__
#define __APP_FUSE_SCRIPTING_NATIVE_PROMISE__FUSE_CAMERA_PICTURE_RESULT__FUSE_S_92FA740C_H__

#include <app/Fuse.Scripting.NativeMember.h>
#include <Uno.h>
namespace app { namespace Fuse { namespace Scripting { struct Context; } } }
namespace app { namespace Uno { namespace Threading { struct Future__Fuse_Camera_PictureResult; } } }

namespace app {
namespace Fuse {
namespace Scripting {

struct NativePromise__Fuse_Camera_PictureResult__Fuse_Scripting_Object;

struct NativePromise__Fuse_Camera_PictureResult__Fuse_Scripting_Object__uType : ::app::Fuse::Scripting::NativeMember__uType
{
};

NativePromise__Fuse_Camera_PictureResult__Fuse_Scripting_Object__uType* NativePromise__Fuse_Camera_PictureResult__Fuse_Scripting_Object__typeof();

void NativePromise__Fuse_Camera_PictureResult__Fuse_Scripting_Object___ObjInit_1(NativePromise__Fuse_Camera_PictureResult__Fuse_Scripting_Object* __this, ::uString* name, ::uDelegate* futureFactory, ::uDelegate* resultConverter);
void NativePromise__Fuse_Camera_PictureResult__Fuse_Scripting_Object___ObjInit_2(NativePromise__Fuse_Camera_PictureResult__Fuse_Scripting_Object* __this, ::uString* name, ::uDelegate* func, ::uDelegate* resultConverter);
::uObject* NativePromise__Fuse_Camera_PictureResult__Fuse_Scripting_Object__CreateObject(NativePromise__Fuse_Camera_PictureResult__Fuse_Scripting_Object* __this, ::app::Fuse::Scripting::Context* c);
::app::Uno::Threading::Future__Fuse_Camera_PictureResult* NativePromise__Fuse_Camera_PictureResult__Fuse_Scripting_Object__Factory(NativePromise__Fuse_Camera_PictureResult__Fuse_Scripting_Object* __this, ::uArray* args);
NativePromise__Fuse_Camera_PictureResult__Fuse_Scripting_Object* NativePromise__Fuse_Camera_PictureResult__Fuse_Scripting_Object__New_1(::uStatic* __this, ::uString* name, ::uDelegate* futureFactory, ::uDelegate* resultConverter);
NativePromise__Fuse_Camera_PictureResult__Fuse_Scripting_Object* NativePromise__Fuse_Camera_PictureResult__Fuse_Scripting_Object__New_2(::uStatic* __this, ::uString* name, ::uDelegate* func, ::uDelegate* resultConverter);

struct NativePromise__Fuse_Camera_PictureResult__Fuse_Scripting_Object : ::app::Fuse::Scripting::NativeMember
{
    ::uStrong< ::uDelegate*> _futureFactory;
    ::uStrong< ::uDelegate*> _resultConverter;
    ::uStrong< ::uDelegate*> _func;

    void _ObjInit_1(::uString* name, ::uDelegate* futureFactory, ::uDelegate* resultConverter) { NativePromise__Fuse_Camera_PictureResult__Fuse_Scripting_Object___ObjInit_1(this, name, futureFactory, resultConverter); }
    void _ObjInit_2(::uString* name, ::uDelegate* func, ::uDelegate* resultConverter) { NativePromise__Fuse_Camera_PictureResult__Fuse_Scripting_Object___ObjInit_2(this, name, func, resultConverter); }
    ::app::Uno::Threading::Future__Fuse_Camera_PictureResult* Factory(::uArray* args) { return NativePromise__Fuse_Camera_PictureResult__Fuse_Scripting_Object__Factory(this, args); }
};

}}}


#endif
