// This file was generated based on 'C:\ProgramData\Uno\Packages\Uno.Threading\0.13.2\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_UNO_THREADING_FUTURE1_CLOSURE__FUSE_CAMERA_PICTURE_RESULT__FUSE__D4C36D5E_H__
#define __APP_UNO_THREADING_FUTURE1_CLOSURE__FUSE_CAMERA_PICTURE_RESULT__FUSE__D4C36D5E_H__

#include <app/Uno.Object.h>
#include <Uno.h>
namespace app { namespace Fuse { namespace Camera { struct PictureResult; } } }

namespace app {
namespace Uno {
namespace Threading {

struct Future1_Closure__Fuse_Camera_PictureResult__Fuse_Camera_PictureResult;

struct Future1_Closure__Fuse_Camera_PictureResult__Fuse_Camera_PictureResult__uType : ::uClassType
{
};

Future1_Closure__Fuse_Camera_PictureResult__Fuse_Camera_PictureResult__uType* Future1_Closure__Fuse_Camera_PictureResult__Fuse_Camera_PictureResult__typeof();

void Future1_Closure__Fuse_Camera_PictureResult__Fuse_Camera_PictureResult___ObjInit(Future1_Closure__Fuse_Camera_PictureResult__Fuse_Camera_PictureResult* __this, ::uDelegate* action, ::app::Fuse::Camera::PictureResult* result);
Future1_Closure__Fuse_Camera_PictureResult__Fuse_Camera_PictureResult* Future1_Closure__Fuse_Camera_PictureResult__Fuse_Camera_PictureResult__New_1(::uStatic* __this, ::uDelegate* action, ::app::Fuse::Camera::PictureResult* result);
void Future1_Closure__Fuse_Camera_PictureResult__Fuse_Camera_PictureResult__Run(Future1_Closure__Fuse_Camera_PictureResult__Fuse_Camera_PictureResult* __this);

struct Future1_Closure__Fuse_Camera_PictureResult__Fuse_Camera_PictureResult : ::uObject
{
    ::uStrong< ::uDelegate*> _action;
    ::uStrong< ::app::Fuse::Camera::PictureResult*> _result;

    void _ObjInit(::uDelegate* action, ::app::Fuse::Camera::PictureResult* result) { Future1_Closure__Fuse_Camera_PictureResult__Fuse_Camera_PictureResult___ObjInit(this, action, result); }
    void Run() { Future1_Closure__Fuse_Camera_PictureResult__Fuse_Camera_PictureResult__Run(this); }
};

}}}


#endif
