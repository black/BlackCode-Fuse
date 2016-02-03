// This file was generated based on 'C:\ProgramData\Uno\Packages\FuseCore\0.19.3\Input\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Input.FocusLostArgs.h>
#include <Fuse.Input.FocusLostHandler.h>
#include <Fuse.NodeEvent-2.h>
namespace g{namespace Fuse{namespace Input{struct FocusLost;}}}

namespace g{
namespace Fuse{
namespace Input{

// internal sealed class FocusLost :34
// {
::g::Fuse::NodeEvent_type* FocusLost_typeof();
void FocusLost__ctor_1_fn(FocusLost* __this);
void FocusLost__Invoke_fn(FocusLost* __this, uDelegate* handler, uObject* sender, ::g::Fuse::Input::FocusLostArgs* args);
void FocusLost__New1_fn(FocusLost** __retval);

struct FocusLost : ::g::Fuse::NodeEvent
{
    void ctor_1();
    static FocusLost* New1();
};
// }

}}} // ::g::Fuse::Input
