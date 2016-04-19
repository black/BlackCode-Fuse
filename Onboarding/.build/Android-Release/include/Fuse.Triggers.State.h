// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Triggers\0.19.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Triggers.Trigger.h>
namespace g{namespace Fuse{namespace Triggers{struct State;}}}
namespace g{namespace Fuse{struct Node;}}

namespace g{
namespace Fuse{
namespace Triggers{

// public sealed class State :358
// {
::g::Fuse::Triggers::Trigger_type* State_typeof();
void State__get_On_fn(State* __this, bool* __retval);
void State__set_On_fn(State* __this, bool* value);
void State__OnRooted_fn(State* __this, ::g::Fuse::Node* parentNode);
void State__get_Progress1_fn(State* __this, double* __retval);

struct State : ::g::Fuse::Triggers::Trigger
{
    bool _on;

    bool On();
    void On(bool value);
    double Progress1();
};
// }

}}} // ::g::Fuse::Triggers
