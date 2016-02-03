// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Triggers\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_FUSE_TRIGGERS_WHILE_TRIGGER_H__
#define __APP_FUSE_TRIGGERS_WHILE_TRIGGER_H__

#include <app/Fuse.Triggers.Trigger.h>
#include <Uno.h>

namespace app {
namespace Fuse {
namespace Triggers {

struct WhileTrigger;

struct WhileTrigger__uType : ::app::Fuse::Triggers::Trigger__uType
{
};

WhileTrigger__uType* WhileTrigger__typeof();

void WhileTrigger___ObjInit_2(WhileTrigger* __this);
void WhileTrigger__ActionDeactivate(WhileTrigger* __this);
void WhileTrigger__BypassSetActive(WhileTrigger* __this, bool on);
bool WhileTrigger__get_Invert(WhileTrigger* __this);
void WhileTrigger__set_Invert(WhileTrigger* __this, bool value);
void WhileTrigger__SetActive(WhileTrigger* __this, bool on);

struct WhileTrigger : ::app::Fuse::Triggers::Trigger
{
    bool _Invert;

    void _ObjInit_2() { WhileTrigger___ObjInit_2(this); }
    void ActionDeactivate() { WhileTrigger__ActionDeactivate(this); }
    void BypassSetActive(bool on) { WhileTrigger__BypassSetActive(this, on); }
    bool Invert() { return WhileTrigger__get_Invert(this); }
    void Invert(bool value) { WhileTrigger__set_Invert(this, value); }
    void SetActive(bool on) { WhileTrigger__SetActive(this, on); }
};

}}}


#endif
