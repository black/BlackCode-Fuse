// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Android.Views\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_FUSE_ANDROID_SURFACE_VIEW_H__
#define __APP_FUSE_ANDROID_SURFACE_VIEW_H__

#include <app/Fuse.Android.GraphicsView.h>
#include <Uno.h>
namespace app { namespace Android { namespace android { namespace view { struct View; } } } }

namespace app {
namespace Fuse {
namespace Android {

struct SurfaceView;

struct SurfaceView__uType : ::app::Fuse::Android::GraphicsView__uType
{
};

SurfaceView__uType* SurfaceView__typeof();

void SurfaceView___ObjInit_4(SurfaceView* __this);
::app::Android::android::view::View* SurfaceView__CreateGraphicsView(SurfaceView* __this);
SurfaceView* SurfaceView__New_1(::uStatic* __this);

struct SurfaceView : ::app::Fuse::Android::GraphicsView
{
    void _ObjInit_4() { SurfaceView___ObjInit_4(this); }
};

}}}


#endif
