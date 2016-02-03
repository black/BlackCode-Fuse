// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Triggers\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_FUSE_TRIGGERS_WHILE_DISABLED_H__
#define __APP_FUSE_TRIGGERS_WHILE_DISABLED_H__

#include <app/Fuse.Triggers.WhileEnabledDisabledTrigger.h>
#include <Uno.h>

namespace app {
namespace Fuse {
namespace Triggers {

struct WhileDisabled;

struct WhileDisabled__uType : ::app::Fuse::Triggers::WhileEnabledDisabledTrigger__uType
{
};

WhileDisabled__uType* WhileDisabled__typeof();

void WhileDisabled___ObjInit_4(WhileDisabled* __this);
bool WhileDisabled__get_IsActive(WhileDisabled* __this);
WhileDisabled* WhileDisabled__New_1(::uStatic* __this);

struct WhileDisabled : ::app::Fuse::Triggers::WhileEnabledDisabledTrigger
{
    void _ObjInit_4() { WhileDisabled___ObjInit_4(this); }
};

}}}


#endif
