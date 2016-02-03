// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Navigation\0.19.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Triggers.WhileTrigger.h>
namespace g{namespace Fuse{namespace Navigation{struct WhileHistoryTrigger;}}}
namespace g{namespace Fuse{struct Node;}}

namespace g{
namespace Fuse{
namespace Navigation{

// public abstract class WhileHistoryTrigger :2108
// {
struct WhileHistoryTrigger_type : ::g::Fuse::Triggers::Trigger_type
{
    void(*fp_get_IsOn)(::g::Fuse::Navigation::WhileHistoryTrigger*, bool*);
};

WhileHistoryTrigger_type* WhileHistoryTrigger_typeof();
void WhileHistoryTrigger__ctor_3_fn(WhileHistoryTrigger* __this);
void WhileHistoryTrigger__get_NavigationContext_fn(WhileHistoryTrigger* __this, uObject** __retval);
void WhileHistoryTrigger__set_NavigationContext_fn(WhileHistoryTrigger* __this, uObject* value);
void WhileHistoryTrigger__OnHistoryChanged_fn(WhileHistoryTrigger* __this, uObject* sender);
void WhileHistoryTrigger__OnRooted_fn(WhileHistoryTrigger* __this, ::g::Fuse::Node* parentNode);
void WhileHistoryTrigger__OnUnrooted_fn(WhileHistoryTrigger* __this, ::g::Fuse::Node* parentNode);

struct WhileHistoryTrigger : ::g::Fuse::Triggers::WhileTrigger
{
    uStrong<uObject*> _context;

    void ctor_3();
    bool IsOn() { bool __retval; return (((WhileHistoryTrigger_type*)__type)->fp_get_IsOn)(this, &__retval), __retval; }
    uObject* NavigationContext();
    void NavigationContext(uObject* value);
    void OnHistoryChanged(uObject* sender);
};
// }

}}} // ::g::Fuse::Navigation
