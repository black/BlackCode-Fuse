// This file was generated based on 'C:\ProgramData\Uno\Packages\FuseCore\0.19.3\Input\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Input.IsFocusableChangedArgs.h>
#include <Fuse.Input.IsFocusableChangedHandler.h>
#include <Fuse.NodeEvent-2.h>
namespace g{namespace Fuse{namespace Input{struct IsFocusableChangedEvent;}}}

namespace g{
namespace Fuse{
namespace Input{

// internal sealed class IsFocusableChangedEvent :50
// {
::g::Fuse::NodeEvent_type* IsFocusableChangedEvent_typeof();
void IsFocusableChangedEvent__ctor_1_fn(IsFocusableChangedEvent* __this);
void IsFocusableChangedEvent__Invoke_fn(IsFocusableChangedEvent* __this, uDelegate* handler, uObject* sender, ::g::Fuse::Input::IsFocusableChangedArgs* args);
void IsFocusableChangedEvent__New1_fn(IsFocusableChangedEvent** __retval);

struct IsFocusableChangedEvent : ::g::Fuse::NodeEvent
{
    void ctor_1();
    static IsFocusableChangedEvent* New1();
};
// }

}}} // ::g::Fuse::Input
