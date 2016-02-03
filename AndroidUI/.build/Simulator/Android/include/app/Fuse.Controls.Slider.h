// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Controls\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_FUSE_CONTROLS_SLIDER_H__
#define __APP_FUSE_CONTROLS_SLIDER_H__

#include <app/Fuse.Animations.IResize.h>
#include <app/Fuse.Controls.RangeControl.h>
#include <app/Fuse.IActualPlacement.h>
#include <app/Fuse.Navigation.INavigationPanel.h>
#include <app/Fuse.Scripting.INameScope.h>
#include <app/Fuse.Triggers.Actions.ICollapse.h>
#include <app/Fuse.Triggers.Actions.IHide.h>
#include <app/Fuse.Triggers.Actions.IShow.h>
#include <app/Fuse.Triggers.IAddRemove__Fuse_Node.h>
#include <app/Fuse.Triggers.IProgress.h>
#include <Uno.h>

namespace app {
namespace Fuse {
namespace Controls {

struct Slider;

struct Slider__uType : ::app::Fuse::Controls::RangeControl__uType
{
};

Slider__uType* Slider__typeof();

void Slider___ObjInit_5(Slider* __this);
Slider* Slider__New_2(::uStatic* __this);

struct Slider : ::app::Fuse::Controls::RangeControl
{
    void _ObjInit_5() { Slider___ObjInit_5(this); }
};

}}}


#endif
