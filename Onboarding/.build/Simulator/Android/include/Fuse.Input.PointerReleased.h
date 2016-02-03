// This file was generated based on 'C:\ProgramData\Uno\Packages\FuseCore\0.19.3\Input\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Input.PointerReleasedArgs.h>
#include <Fuse.Input.PointerReleasedHandler.h>
#include <Fuse.NodeEvent-2.h>
namespace g{namespace Fuse{namespace Input{struct PointerReleased;}}}

namespace g{
namespace Fuse{
namespace Input{

// internal sealed class PointerReleased :810
// {
::g::Fuse::NodeEvent_type* PointerReleased_typeof();
void PointerReleased__ctor_1_fn(PointerReleased* __this);
void PointerReleased__Invoke_fn(PointerReleased* __this, uDelegate* handler, uObject* sender, ::g::Fuse::Input::PointerReleasedArgs* args);
void PointerReleased__New1_fn(PointerReleased** __retval);

struct PointerReleased : ::g::Fuse::NodeEvent
{
    void ctor_1();
    static PointerReleased* New1();
};
// }

}}} // ::g::Fuse::Input
