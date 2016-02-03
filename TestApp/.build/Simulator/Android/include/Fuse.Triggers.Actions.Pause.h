// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Triggers\0.18.8\Actions\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Triggers.Actions.PlaybackAction.h>
namespace g{namespace Fuse{namespace Triggers{namespace Actions{struct Pause;}}}}
namespace g{namespace Fuse{struct Node;}}

namespace g{
namespace Fuse{
namespace Triggers{
namespace Actions{

// public sealed class Pause :144
// {
::g::Fuse::Triggers::Actions::TriggerAction_type* Pause_typeof();
void Pause__ctor_2_fn(Pause* __this);
void Pause__New1_fn(Pause** __retval);
void Pause__Perform_fn(Pause* __this, ::g::Fuse::Node* target);

struct Pause : ::g::Fuse::Triggers::Actions::PlaybackAction
{
    void ctor_2();
    static Pause* New1();
};
// }

}}}} // ::g::Fuse::Triggers::Actions
