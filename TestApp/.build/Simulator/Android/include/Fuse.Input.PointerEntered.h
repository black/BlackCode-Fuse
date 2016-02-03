// This file was generated based on 'C:\ProgramData\Uno\Packages\FuseCore\0.18.8\Input\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Input.PointerEnteredArgs.h>
#include <Fuse.Input.PointerEnteredHandler.h>
#include <Fuse.NodeEvent-2.h>
namespace g{namespace Fuse{namespace Input{struct PointerEntered;}}}

namespace g{
namespace Fuse{
namespace Input{

// internal sealed class PointerEntered :829
// {
::g::Fuse::NodeEvent_type* PointerEntered_typeof();
void PointerEntered__ctor_1_fn(PointerEntered* __this);
void PointerEntered__Invoke_fn(PointerEntered* __this, uDelegate* handler, uObject* sender, ::g::Fuse::Input::PointerEnteredArgs* args);
void PointerEntered__New1_fn(PointerEntered** __retval);

struct PointerEntered : ::g::Fuse::NodeEvent
{
    void ctor_1();
    static PointerEntered* New1();
};
// }

}}} // ::g::Fuse::Input
