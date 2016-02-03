// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Triggers\0.19.3\Actions\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Triggers.Actions.PlaybackAction.h>
namespace g{namespace Fuse{namespace Triggers{namespace Actions{struct PlayTo;}}}}
namespace g{namespace Fuse{struct Node;}}

namespace g{
namespace Fuse{
namespace Triggers{
namespace Actions{

// public sealed class PlayTo :166
// {
::g::Fuse::Triggers::Actions::TriggerAction_type* PlayTo_typeof();
void PlayTo__ctor_2_fn(PlayTo* __this);
void PlayTo__New1_fn(PlayTo** __retval);
void PlayTo__Perform_fn(PlayTo* __this, ::g::Fuse::Node* target);
void PlayTo__get_Progress_fn(PlayTo* __this, double* __retval);
void PlayTo__set_Progress_fn(PlayTo* __this, double* value);

struct PlayTo : ::g::Fuse::Triggers::Actions::PlaybackAction
{
    double _Progress;

    void ctor_2();
    double Progress();
    void Progress(double value);
    static PlayTo* New1();
};
// }

}}}} // ::g::Fuse::Triggers::Actions
