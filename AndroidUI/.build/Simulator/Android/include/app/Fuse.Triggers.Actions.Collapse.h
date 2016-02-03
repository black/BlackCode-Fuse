// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Triggers\0.11.3\Actions\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_FUSE_TRIGGERS_ACTIONS_COLLAPSE_H__
#define __APP_FUSE_TRIGGERS_ACTIONS_COLLAPSE_H__

#include <app/Fuse.Triggers.Actions.TriggerAction.h>
#include <Uno.h>
namespace app { namespace Fuse { struct Node; } }

namespace app {
namespace Fuse {
namespace Triggers {
namespace Actions {

struct Collapse;

struct Collapse__uType : ::app::Fuse::Triggers::Actions::TriggerAction__uType
{
};

Collapse__uType* Collapse__typeof();

void Collapse___ObjInit_1(Collapse* __this);
Collapse* Collapse__New_1(::uStatic* __this);
void Collapse__Perform(Collapse* __this, ::app::Fuse::Node* target);

struct Collapse : ::app::Fuse::Triggers::Actions::TriggerAction
{
    void _ObjInit_1() { Collapse___ObjInit_1(this); }
};

}}}}


#endif
