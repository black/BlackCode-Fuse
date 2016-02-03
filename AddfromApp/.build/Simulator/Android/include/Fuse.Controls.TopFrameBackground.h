// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Controls\0.19.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Animations.IResize.h>
#include <Fuse.Controls.Control.h>
#include <Fuse.IActualPlacement.h>
#include <Fuse.Scripting.INameScope.h>
#include <Fuse.Triggers.Actions.ICollapse.h>
#include <Fuse.Triggers.Actions.IHide.h>
#include <Fuse.Triggers.Actions.IShow.h>
namespace g{namespace Fuse{namespace Controls{struct TopFrameBackground;}}}
namespace g{namespace Uno{namespace Platform{struct SystemUIWillResizeEventArgs;}}}
namespace g{namespace Uno{struct Float2;}}

namespace g{
namespace Fuse{
namespace Controls{

// public class TopFrameBackground :4363
// {
::g::Fuse::Controls::Control_type* TopFrameBackground_typeof();
void TopFrameBackground__ctor_3_fn(TopFrameBackground* __this);
void TopFrameBackground__GetContentSize_fn(TopFrameBackground* __this, ::g::Uno::Float2* fillSize, int* fillSet, ::g::Uno::Float2* __retval);
void TopFrameBackground__New1_fn(TopFrameBackground** __retval);
void TopFrameBackground__OnFrameResized_fn(TopFrameBackground* __this, uObject* sender, ::g::Uno::Platform::SystemUIWillResizeEventArgs* args);
void TopFrameBackground__OnRooted_fn(TopFrameBackground* __this);
void TopFrameBackground__OnUnrooted_fn(TopFrameBackground* __this);

struct TopFrameBackground : ::g::Fuse::Controls::Control
{
    void ctor_3();
    void OnFrameResized(uObject* sender, ::g::Uno::Platform::SystemUIWillResizeEventArgs* args);
    static TopFrameBackground* New1();
};
// }

}}} // ::g::Fuse::Controls
