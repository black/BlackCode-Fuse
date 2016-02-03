// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Elements\0.19.3\Triggers\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.NodeEvent-2.h>
#include <Fuse.Triggers.LayoutTransitionedArgs.h>
#include <Fuse.Triggers.LayoutTransitionedHandler.h>
namespace g{namespace Fuse{namespace Triggers{struct LayoutTransitioned;}}}

namespace g{
namespace Fuse{
namespace Triggers{

// internal sealed class LayoutTransitioned :17
// {
::g::Fuse::NodeEvent_type* LayoutTransitioned_typeof();
void LayoutTransitioned__ctor_1_fn(LayoutTransitioned* __this);
void LayoutTransitioned__Invoke_fn(LayoutTransitioned* __this, uDelegate* handler, uObject* sender, ::g::Fuse::Triggers::LayoutTransitionedArgs* args);
void LayoutTransitioned__New1_fn(LayoutTransitioned** __retval);

struct LayoutTransitioned : ::g::Fuse::NodeEvent
{
    void ctor_1();
    static LayoutTransitioned* New1();
};
// }

}}} // ::g::Fuse::Triggers
