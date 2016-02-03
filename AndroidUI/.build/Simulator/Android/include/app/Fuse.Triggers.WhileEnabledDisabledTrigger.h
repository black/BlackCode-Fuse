// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Triggers\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_FUSE_TRIGGERS_WHILE_ENABLED_DISABLED_TRIGGER_H__
#define __APP_FUSE_TRIGGERS_WHILE_ENABLED_DISABLED_TRIGGER_H__

#include <app/Fuse.Triggers.WhileTrigger.h>
#include <Uno.h>
namespace app { namespace Fuse { struct Node; } }
namespace app { namespace Uno { struct EventArgs; } }

namespace app {
namespace Fuse {
namespace Triggers {

struct WhileEnabledDisabledTrigger;

struct WhileEnabledDisabledTrigger__uType : ::app::Fuse::Triggers::WhileTrigger__uType
{
    bool(*__fp_get_IsActive)(WhileEnabledDisabledTrigger*);
};

WhileEnabledDisabledTrigger__uType* WhileEnabledDisabledTrigger__typeof();

void WhileEnabledDisabledTrigger___ObjInit_3(WhileEnabledDisabledTrigger* __this);
void WhileEnabledDisabledTrigger__OnIsEnabledChanged(WhileEnabledDisabledTrigger* __this, ::uObject* sender, ::app::Uno::EventArgs* args);
void WhileEnabledDisabledTrigger__OnRooted(WhileEnabledDisabledTrigger* __this, ::app::Fuse::Node* elm);
void WhileEnabledDisabledTrigger__OnUnrooted(WhileEnabledDisabledTrigger* __this, ::app::Fuse::Node* elm);

struct WhileEnabledDisabledTrigger : ::app::Fuse::Triggers::WhileTrigger
{
    void _ObjInit_3() { WhileEnabledDisabledTrigger___ObjInit_3(this); }
    bool IsActive() { return (((WhileEnabledDisabledTrigger__uType*)this->__obj_type)->__fp_get_IsActive)(this); }
    void OnIsEnabledChanged(::uObject* sender, ::app::Uno::EventArgs* args) { WhileEnabledDisabledTrigger__OnIsEnabledChanged(this, sender, args); }
};

}}}


#endif
