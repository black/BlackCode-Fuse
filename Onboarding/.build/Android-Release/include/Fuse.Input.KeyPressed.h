// This file was generated based on 'C:\ProgramData\Uno\Packages\FuseCore\0.19.3\Input\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Input.KeyPressedArgs.h>
#include <Fuse.Input.KeyPressedHandler.h>
#include <Fuse.NodeEvent-2.h>
namespace g{namespace Fuse{namespace Input{struct KeyPressed;}}}

namespace g{
namespace Fuse{
namespace Input{

// internal sealed class KeyPressed :572
// {
::g::Fuse::NodeEvent_type* KeyPressed_typeof();
void KeyPressed__ctor_1_fn(KeyPressed* __this);
void KeyPressed__Invoke_fn(KeyPressed* __this, uDelegate* handler, uObject* sender, ::g::Fuse::Input::KeyPressedArgs* args);
void KeyPressed__New1_fn(KeyPressed** __retval);

struct KeyPressed : ::g::Fuse::NodeEvent
{
    void ctor_1();
    static KeyPressed* New1();
};
// }

}}} // ::g::Fuse::Input
