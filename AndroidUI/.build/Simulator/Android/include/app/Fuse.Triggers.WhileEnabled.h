// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Triggers\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_FUSE_TRIGGERS_WHILE_ENABLED_H__
#define __APP_FUSE_TRIGGERS_WHILE_ENABLED_H__

#include <app/Fuse.Triggers.WhileEnabledDisabledTrigger.h>
#include <Uno.h>

namespace app {
namespace Fuse {
namespace Triggers {

struct WhileEnabled;

struct WhileEnabled__uType : ::app::Fuse::Triggers::WhileEnabledDisabledTrigger__uType
{
};

WhileEnabled__uType* WhileEnabled__typeof();

void WhileEnabled___ObjInit_4(WhileEnabled* __this);
bool WhileEnabled__get_IsActive(WhileEnabled* __this);
WhileEnabled* WhileEnabled__New_1(::uStatic* __this);

struct WhileEnabled : ::app::Fuse::Triggers::WhileEnabledDisabledTrigger
{
    void _ObjInit_4() { WhileEnabled___ObjInit_4(this); }
};

}}}


#endif
