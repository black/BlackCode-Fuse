// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Controls\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_FUSE_CONTROLS_ELLIPSE_H__
#define __APP_FUSE_CONTROLS_ELLIPSE_H__

#include <app/Fuse.Animations.IResize.h>
#include <app/Fuse.Controls.Shape.h>
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

struct Ellipse;

struct Ellipse__uType : ::app::Fuse::Controls::Shape__uType
{
};

Ellipse__uType* Ellipse__typeof();

void Ellipse___ObjInit_5(Ellipse* __this);
Ellipse* Ellipse__New_2(::uStatic* __this);

struct Ellipse : ::app::Fuse::Controls::Shape
{
    void _ObjInit_5() { Ellipse___ObjInit_5(this); }
};

}}}


#endif
