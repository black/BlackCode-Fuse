// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Gestures\0.18.8\Internal\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Triggers.WhileTrigger.h>
namespace g{namespace Fuse{namespace Gestures{struct Clicker;}}}
namespace g{namespace Fuse{namespace Gestures{struct WhileClickerTrigger;}}}
namespace g{namespace Fuse{struct Node;}}

namespace g{
namespace Fuse{
namespace Gestures{

// public abstract class WhileClickerTrigger :30
// {
::g::Fuse::Triggers::Trigger_type* WhileClickerTrigger_typeof();
void WhileClickerTrigger__ctor_3_fn(WhileClickerTrigger* __this);
void WhileClickerTrigger__OnRooted_fn(WhileClickerTrigger* __this, ::g::Fuse::Node* parentNode);
void WhileClickerTrigger__OnUnrooted_fn(WhileClickerTrigger* __this, ::g::Fuse::Node* parentNode);

struct WhileClickerTrigger : ::g::Fuse::Triggers::WhileTrigger
{
    uStrong< ::g::Fuse::Gestures::Clicker*> Clicker;

    void ctor_3();
};
// }

}}} // ::g::Fuse::Gestures
