// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Triggers\0.11.3\Actions\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_FUSE_TRIGGERS_ACTIONS_PULSE_H__
#define __APP_FUSE_TRIGGERS_ACTIONS_PULSE_H__

#include <app/Fuse.Triggers.Actions.TriggerAction.h>
#include <Uno.h>
namespace app { namespace Fuse { namespace Triggers { struct WhileBool; } } }
namespace app { namespace Fuse { struct Node; } }

namespace app {
namespace Fuse {
namespace Triggers {
namespace Actions {

struct Pulse;

struct Pulse__uType : ::app::Fuse::Triggers::Actions::TriggerAction__uType
{
};

Pulse__uType* Pulse__typeof();

void Pulse___ObjInit_1(Pulse* __this);
::app::Fuse::Triggers::WhileBool* Pulse__get_Target(Pulse* __this);
Pulse* Pulse__New_1(::uStatic* __this);
void Pulse__Perform(Pulse* __this, ::app::Fuse::Node* target);
void Pulse__set_Target(Pulse* __this, ::app::Fuse::Triggers::WhileBool* value);

struct Pulse : ::app::Fuse::Triggers::Actions::TriggerAction
{
    ::uStrong< ::app::Fuse::Triggers::WhileBool*> _Target;

    void _ObjInit_1() { Pulse___ObjInit_1(this); }
    ::app::Fuse::Triggers::WhileBool* Target() { return Pulse__get_Target(this); }
    void Target(::app::Fuse::Triggers::WhileBool* value) { Pulse__set_Target(this, value); }
};

}}}}


#endif
