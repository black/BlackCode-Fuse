// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Gestures\0.11.3\Internal\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_FUSE_GESTURES_CLICKER_TRIGGER_H__
#define __APP_FUSE_GESTURES_CLICKER_TRIGGER_H__

#include <app/Fuse.Triggers.Trigger.h>
#include <Uno.h>
namespace app { namespace Fuse { namespace Gestures { struct Clicker; } } }
namespace app { namespace Fuse { struct Node; } }

namespace app {
namespace Fuse {
namespace Gestures {

struct ClickerTrigger;

struct ClickerTrigger__uType : ::app::Fuse::Triggers::Trigger__uType
{
};

ClickerTrigger__uType* ClickerTrigger__typeof();

void ClickerTrigger___ObjInit_2(ClickerTrigger* __this);
void ClickerTrigger__OnRooted(ClickerTrigger* __this, ::app::Fuse::Node* elm);
void ClickerTrigger__OnUnrooted(ClickerTrigger* __this, ::app::Fuse::Node* elm);

struct ClickerTrigger : ::app::Fuse::Triggers::Trigger
{
    ::uStrong< ::app::Fuse::Gestures::Clicker*> Clicker;

    void _ObjInit_2() { ClickerTrigger___ObjInit_2(this); }
};

}}}


#endif
