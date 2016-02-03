// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Triggers\0.19.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Triggers.Trigger.h>
namespace g{namespace Fuse{namespace Triggers{struct OnKeyPress;}}}
namespace g{namespace Fuse{struct Node;}}
namespace g{namespace Uno{namespace Platform{struct KeyEventArgs;}}}

namespace g{
namespace Fuse{
namespace Triggers{

// public class OnKeyPress :1848
// {
::g::Fuse::Triggers::Trigger_type* OnKeyPress_typeof();
void OnKeyPress__ctor_2_fn(OnKeyPress* __this);
void OnKeyPress__get_Key_fn(OnKeyPress* __this, int* __retval);
void OnKeyPress__set_Key_fn(OnKeyPress* __this, int* value);
void OnKeyPress__New1_fn(OnKeyPress** __retval);
void OnKeyPress__OnKeyPressed_fn(OnKeyPress* __this, uObject* sender, ::g::Uno::Platform::KeyEventArgs* args);
void OnKeyPress__OnRooted_fn(OnKeyPress* __this, ::g::Fuse::Node* parentNode);
void OnKeyPress__OnUnrooted_fn(OnKeyPress* __this, ::g::Fuse::Node* parentNode);

struct OnKeyPress : ::g::Fuse::Triggers::Trigger
{
    int _Key;

    void ctor_2();
    int Key();
    void Key(int value);
    void OnKeyPressed(uObject* sender, ::g::Uno::Platform::KeyEventArgs* args);
    static OnKeyPress* New1();
};
// }

}}} // ::g::Fuse::Triggers
