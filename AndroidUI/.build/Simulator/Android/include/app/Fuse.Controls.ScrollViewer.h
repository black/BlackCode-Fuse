// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Controls\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_FUSE_CONTROLS_SCROLL_VIEWER_H__
#define __APP_FUSE_CONTROLS_SCROLL_VIEWER_H__

#include <app/Fuse.Animations.IResize.h>
#include <app/Fuse.Controls.ScrollView.h>
#include <app/Fuse.IActualPlacement.h>
#include <app/Fuse.Scripting.INameScope.h>
#include <app/Fuse.Triggers.Actions.ICollapse.h>
#include <app/Fuse.Triggers.Actions.IHide.h>
#include <app/Fuse.Triggers.Actions.IShow.h>
#include <Uno.h>

namespace app {
namespace Fuse {
namespace Controls {

struct ScrollViewer;

struct ScrollViewer__uType : ::app::Fuse::Controls::ScrollView__uType
{
};

ScrollViewer__uType* ScrollViewer__typeof();

void ScrollViewer___ObjInit_5(ScrollViewer* __this);
ScrollViewer* ScrollViewer__New_3(::uStatic* __this);

struct ScrollViewer : ::app::Fuse::Controls::ScrollView
{
    void _ObjInit_5() { ScrollViewer___ObjInit_5(this); }
};

}}}


#endif
