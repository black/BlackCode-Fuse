// This file was generated based on 'C:\ProgramData\Uno\Packages\FuseCore\0.19.3\Input\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Input.PointerLeftArgs.h>
#include <Fuse.Input.PointerLeftHandler.h>
#include <Fuse.NodeEvent-2.h>
namespace g{namespace Fuse{namespace Input{struct PointerLeft;}}}

namespace g{
namespace Fuse{
namespace Input{

// internal sealed class PointerLeft :849
// {
::g::Fuse::NodeEvent_type* PointerLeft_typeof();
void PointerLeft__ctor_1_fn(PointerLeft* __this);
void PointerLeft__Invoke_fn(PointerLeft* __this, uDelegate* handler, uObject* sender, ::g::Fuse::Input::PointerLeftArgs* args);
void PointerLeft__New1_fn(PointerLeft** __retval);

struct PointerLeft : ::g::Fuse::NodeEvent
{
    void ctor_1();
    static PointerLeft* New1();
};
// }

}}} // ::g::Fuse::Input
