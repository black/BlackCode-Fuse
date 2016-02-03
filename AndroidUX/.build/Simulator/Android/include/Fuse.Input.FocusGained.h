// This file was generated based on 'C:\ProgramData\Uno\Packages\FuseCore\0.18.8\Input\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Input.FocusGainedArgs.h>
#include <Fuse.Input.FocusGainedHandler.h>
#include <Fuse.NodeEvent-2.h>
namespace g{namespace Fuse{namespace Input{struct FocusGained;}}}

namespace g{
namespace Fuse{
namespace Input{

// internal sealed class FocusGained :16
// {
::g::Fuse::NodeEvent_type* FocusGained_typeof();
void FocusGained__ctor_1_fn(FocusGained* __this);
void FocusGained__Invoke_fn(FocusGained* __this, uDelegate* handler, uObject* sender, ::g::Fuse::Input::FocusGainedArgs* args);
void FocusGained__New1_fn(FocusGained** __retval);

struct FocusGained : ::g::Fuse::NodeEvent
{
    void ctor_1();
    static FocusGained* New1();
};
// }

}}} // ::g::Fuse::Input
