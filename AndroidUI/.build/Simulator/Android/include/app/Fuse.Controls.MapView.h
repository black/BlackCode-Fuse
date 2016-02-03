// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Controls\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_FUSE_CONTROLS_MAP_VIEW_H__
#define __APP_FUSE_CONTROLS_MAP_VIEW_H__

#include <app/Fuse.Animations.IResize.h>
#include <app/Fuse.Controls.Panel.h>
#include <app/Fuse.IActualPlacement.h>
#include <app/Fuse.Navigation.INavigationPanel.h>
#include <app/Fuse.Scripting.INameScope.h>
#include <app/Fuse.Triggers.Actions.ICollapse.h>
#include <app/Fuse.Triggers.Actions.IHide.h>
#include <app/Fuse.Triggers.Actions.IShow.h>
#include <app/Fuse.Triggers.IAddRemove__Fuse_Node.h>
#include <Uno.h>

namespace app {
namespace Fuse {
namespace Controls {

struct MapView;

struct MapView__uType : ::app::Fuse::Controls::Panel__uType
{
};

MapView__uType* MapView__typeof();

void MapView___ObjInit_4(MapView* __this);
MapView* MapView__New_2(::uStatic* __this);

struct MapView : ::app::Fuse::Controls::Panel
{
    void _ObjInit_4() { MapView___ObjInit_4(this); }
};

}}}


#endif
