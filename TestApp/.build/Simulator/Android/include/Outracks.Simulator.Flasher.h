// This file was generated based on 'C:\ProgramData\Uno\Packages\Outracks.Simulator.Client.Uno\0.1.0\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Animations.IResize.h>
#include <Fuse.Controls.Panel.h>
#include <Fuse.IActualPlacement.h>
#include <Fuse.Navigation.INavigationPanel.h>
#include <Fuse.Node.h>
#include <Fuse.Scripting.INameScope.h>
#include <Fuse.Triggers.Actions.ICollapse.h>
#include <Fuse.Triggers.Actions.IHide.h>
#include <Fuse.Triggers.Actions.IShow.h>
#include <Fuse.Triggers.IAddRemove-1.h>
namespace g{namespace Outracks{namespace Simulator{struct Flasher;}}}

namespace g{
namespace Outracks{
namespace Simulator{

// internal sealed class Flasher :272
// {
::g::Fuse::Controls::Panel_type* Flasher_typeof();
void Flasher__ctor_4_fn(Flasher* __this, uString* text);
void Flasher__get_AnimationParameter_fn(Flasher* __this, double* __retval);
void Flasher__IsExpired_fn(Flasher* __this, bool* __retval);
void Flasher__New2_fn(uString* text, Flasher** __retval);
void Flasher__OnRooted_fn(Flasher* __this);
void Flasher__OnUnrooted_fn(Flasher* __this);
void Flasher__OnUpdate_fn(Flasher* __this);

struct Flasher : ::g::Fuse::Controls::Panel
{
    double _lastRooted;

    void ctor_4(uString* text);
    double AnimationParameter();
    bool IsExpired();
    void OnUpdate();
    static Flasher* New2(uString* text);
};
// }

}}} // ::g::Outracks::Simulator
