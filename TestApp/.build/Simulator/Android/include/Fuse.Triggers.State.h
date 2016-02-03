// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Triggers\0.18.8\$.uno'.
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
void State__ctor_2_fn(State* __this);
void State__get_Name_fn(State* __this, uString** __retval);
void State__set_Name_fn(State* __this, uString* value);
void State__New1_fn(State** __retval);
void State__get_On_fn(State* __this, bool* __retval);
void State__set_On_fn(State* __this, bool* value);
void State__OnRooted_fn(State* __this, ::g::Fuse::Node* parentNode);
void State__get_Progress1_fn(State* __this, double* __retval);

struct State : ::g::Fuse::Triggers::Trigger
{
    bool _on;
    uStrong<uString*> _Name;

    void ctor_2();
    uString* Name();
    void Name(uString* value);
    bool On();
    void On(bool value);
    double Progress1();
    static State* New1();
};
// }

}}} // ::g::Fuse::Triggers
