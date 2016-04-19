// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Vibration\0.19.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Triggers.Actions.TriggerAction.h>
namespace g{namespace Fuse{namespace Vibration{struct Vibrate;}}}
namespace g{namespace Fuse{struct Node;}}

namespace g{
namespace Fuse{
namespace Vibration{

// public sealed class Vibrate :45
// {
::g::Fuse::Triggers::Actions::TriggerAction_type* Vibrate_typeof();
void Vibrate__get_Duration_fn(Vibrate* __this, double* __retval);
void Vibrate__set_Duration_fn(Vibrate* __this, double* value);
void Vibrate__Perform_fn(Vibrate* __this, ::g::Fuse::Node* target);

struct Vibrate : ::g::Fuse::Triggers::Actions::TriggerAction
{
    double _Duration;

    double Duration();
    void Duration(double value);
};
// }

}}} // ::g::Fuse::Vibration
