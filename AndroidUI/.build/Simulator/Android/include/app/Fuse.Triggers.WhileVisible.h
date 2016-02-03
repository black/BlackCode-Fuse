// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Triggers\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_FUSE_TRIGGERS_WHILE_VISIBLE_H__
#define __APP_FUSE_TRIGGERS_WHILE_VISIBLE_H__

#include <app/Fuse.Triggers.WhileTrigger.h>
#include <Uno.h>
namespace app { namespace Fuse { struct Node; } }
namespace app { namespace Uno { struct EventArgs; } }

namespace app {
namespace Fuse {
namespace Triggers {

struct WhileVisible;

struct WhileVisible__uType : ::app::Fuse::Triggers::WhileTrigger__uType
{
};

WhileVisible__uType* WhileVisible__typeof();

void WhileVisible___ObjInit_3(WhileVisible* __this);
WhileVisible* WhileVisible__New_1(::uStatic* __this);
void WhileVisible__OnIsVisibleChanged(WhileVisible* __this, ::uObject* sender, ::app::Uno::EventArgs* args);
void WhileVisible__OnRooted(WhileVisible* __this, ::app::Fuse::Node* elm);
void WhileVisible__OnUnrooted(WhileVisible* __this, ::app::Fuse::Node* elm);

struct WhileVisible : ::app::Fuse::Triggers::WhileTrigger
{
    void _ObjInit_3() { WhileVisible___ObjInit_3(this); }
    void OnIsVisibleChanged(::uObject* sender, ::app::Uno::EventArgs* args) { WhileVisible__OnIsVisibleChanged(this, sender, args); }
};

}}}


#endif
