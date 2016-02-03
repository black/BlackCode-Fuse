// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Android.Views\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_FUSE_ANDROID_MAP_VIEW_H__
#define __APP_FUSE_ANDROID_MAP_VIEW_H__

#include <app/Fuse.Android.ControlView__Fuse_Controls_MapView.h>
#include <app/Fuse.Scripting.INameScope.h>
#include <Uno.h>
namespace app { namespace Android { namespace android { namespace view { struct View; } } } }

namespace app {
namespace Fuse {
namespace Android {

struct MapView;

struct MapView__uType : ::app::Fuse::Android::ControlView__Fuse_Controls_MapView__uType
{
};

MapView__uType* MapView__typeof();

void MapView___ObjInit_3(MapView* __this);
void MapView__Attach(MapView* __this);
::app::Android::android::view::View* MapView__CreateInternal(MapView* __this);
void MapView__Detach(MapView* __this);
MapView* MapView__New_1(::uStatic* __this);

struct MapView : ::app::Fuse::Android::ControlView__Fuse_Controls_MapView
{
    void _ObjInit_3() { MapView___ObjInit_3(this); }
};

}}}


#endif
