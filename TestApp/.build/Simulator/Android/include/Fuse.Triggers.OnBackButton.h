// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Triggers\0.18.8\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Triggers.OnKeyPress.h>
namespace g{namespace Fuse{namespace Triggers{struct OnBackButton;}}}
namespace g{namespace Fuse{struct Node;}}

namespace g{
namespace Fuse{
namespace Triggers{

// public sealed class OnBackButton :1871
// {
::g::Fuse::Triggers::Trigger_type* OnBackButton_typeof();
void OnBackButton__ctor_3_fn(OnBackButton* __this);
void OnBackButton__New2_fn(OnBackButton** __retval);
void OnBackButton__OnRooted_fn(OnBackButton* __this, ::g::Fuse::Node* parentNode);

struct OnBackButton : ::g::Fuse::Triggers::OnKeyPress
{
    void ctor_3();
    static OnBackButton* New2();
};
// }

}}} // ::g::Fuse::Triggers
