// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Navigation\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_FUSE_NAVIGATION_WHILE_HISTORY_TRIGGER_H__
#define __APP_FUSE_NAVIGATION_WHILE_HISTORY_TRIGGER_H__

#include <app/Fuse.Triggers.WhileTrigger.h>
#include <Uno.h>
namespace app { namespace Fuse { struct Node; } }

namespace app {
namespace Fuse {
namespace Navigation {

struct WhileHistoryTrigger;

struct WhileHistoryTrigger__uType : ::app::Fuse::Triggers::WhileTrigger__uType
{
    bool(*__fp_get_IsOn)(WhileHistoryTrigger*);
};

WhileHistoryTrigger__uType* WhileHistoryTrigger__typeof();

void WhileHistoryTrigger___ObjInit_3(WhileHistoryTrigger* __this);
::uObject* WhileHistoryTrigger__get_Context(WhileHistoryTrigger* __this);
void WhileHistoryTrigger__OnHistoryChanged(WhileHistoryTrigger* __this, ::uObject* sender);
void WhileHistoryTrigger__OnRooted(WhileHistoryTrigger* __this, ::app::Fuse::Node* elm);
void WhileHistoryTrigger__OnUnrooted(WhileHistoryTrigger* __this, ::app::Fuse::Node* elm);

struct WhileHistoryTrigger : ::app::Fuse::Triggers::WhileTrigger
{
    ::uStrong< ::uObject*> _context;

    void _ObjInit_3() { WhileHistoryTrigger___ObjInit_3(this); }
    ::uObject* Context() { return WhileHistoryTrigger__get_Context(this); }
    bool IsOn() { return (((WhileHistoryTrigger__uType*)this->__obj_type)->__fp_get_IsOn)(this); }
    void OnHistoryChanged(::uObject* sender) { WhileHistoryTrigger__OnHistoryChanged(this, sender); }
};

}}}


#endif
