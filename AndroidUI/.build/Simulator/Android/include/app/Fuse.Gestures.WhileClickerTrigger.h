// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Gestures\0.11.3\Internal\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_FUSE_GESTURES_WHILE_CLICKER_TRIGGER_H__
#define __APP_FUSE_GESTURES_WHILE_CLICKER_TRIGGER_H__

#include <app/Fuse.Triggers.WhileTrigger.h>
#include <Uno.h>
namespace app { namespace Fuse { namespace Gestures { struct Clicker; } } }
namespace app { namespace Fuse { struct Node; } }

namespace app {
namespace Fuse {
namespace Gestures {

struct WhileClickerTrigger;

struct WhileClickerTrigger__uType : ::app::Fuse::Triggers::WhileTrigger__uType
{
};

WhileClickerTrigger__uType* WhileClickerTrigger__typeof();

void WhileClickerTrigger___ObjInit_3(WhileClickerTrigger* __this);
void WhileClickerTrigger__OnRooted(WhileClickerTrigger* __this, ::app::Fuse::Node* elm);
void WhileClickerTrigger__OnUnrooted(WhileClickerTrigger* __this, ::app::Fuse::Node* elm);

struct WhileClickerTrigger : ::app::Fuse::Triggers::WhileTrigger
{
    ::uStrong< ::app::Fuse::Gestures::Clicker*> Clicker;

    void _ObjInit_3() { WhileClickerTrigger___ObjInit_3(this); }
};

}}}


#endif
