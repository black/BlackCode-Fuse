// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Animations\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_FUSE_ANIMATIONS_MIXER_HANDLE__FUSE_TRIGGERS_ACTIONS_TRIGGER_DIRECTION_H__
#define __APP_FUSE_ANIMATIONS_MIXER_HANDLE__FUSE_TRIGGERS_ACTIONS_TRIGGER_DIRECTION_H__

#include <app/Fuse.Animations.IMixerHandle__Fuse_Triggers_Actions_TriggerDirection.h>
#include <app/Uno.Object.h>
#include <Uno.h>
namespace app { namespace Fuse { namespace Animations { struct MasterBase__Fuse_Triggers_Actions_TriggerDirection; } } }

namespace app {
namespace Fuse {
namespace Animations {

struct MixerHandle__Fuse_Triggers_Actions_TriggerDirection;

struct MixerHandle__Fuse_Triggers_Actions_TriggerDirection__uType : ::uClassType
{
    ::app::Fuse::Animations::IMixerHandle__Fuse_Triggers_Actions_TriggerDirection __interface_0;
};

MixerHandle__Fuse_Triggers_Actions_TriggerDirection__uType* MixerHandle__Fuse_Triggers_Actions_TriggerDirection__typeof();

void MixerHandle__Fuse_Triggers_Actions_TriggerDirection___ObjInit(MixerHandle__Fuse_Triggers_Actions_TriggerDirection* __this, ::app::Fuse::Animations::MasterBase__Fuse_Triggers_Actions_TriggerDirection* master, int mode, int priority);
bool MixerHandle__Fuse_Triggers_Actions_TriggerDirection__get_HasValue(MixerHandle__Fuse_Triggers_Actions_TriggerDirection* __this);
int MixerHandle__Fuse_Triggers_Actions_TriggerDirection__get_MixOp(MixerHandle__Fuse_Triggers_Actions_TriggerDirection* __this);
int MixerHandle__Fuse_Triggers_Actions_TriggerDirection__get_Priority(MixerHandle__Fuse_Triggers_Actions_TriggerDirection* __this);
int MixerHandle__Fuse_Triggers_Actions_TriggerDirection__get_RestValue(MixerHandle__Fuse_Triggers_Actions_TriggerDirection* __this);
MixerHandle__Fuse_Triggers_Actions_TriggerDirection* MixerHandle__Fuse_Triggers_Actions_TriggerDirection__New_1(::uStatic* __this, ::app::Fuse::Animations::MasterBase__Fuse_Triggers_Actions_TriggerDirection* master, int mode, int priority);
void MixerHandle__Fuse_Triggers_Actions_TriggerDirection__Set(MixerHandle__Fuse_Triggers_Actions_TriggerDirection* __this, int value, float strength);
void MixerHandle__Fuse_Triggers_Actions_TriggerDirection__set_MixOp(MixerHandle__Fuse_Triggers_Actions_TriggerDirection* __this, int value);
void MixerHandle__Fuse_Triggers_Actions_TriggerDirection__set_Priority(MixerHandle__Fuse_Triggers_Actions_TriggerDirection* __this, int value);
void MixerHandle__Fuse_Triggers_Actions_TriggerDirection__Unregister(MixerHandle__Fuse_Triggers_Actions_TriggerDirection* __this);

struct MixerHandle__Fuse_Triggers_Actions_TriggerDirection : ::uObject
{
    int Value;
    float Strength;
    bool _hasValue;
    ::uStrong< ::app::Fuse::Animations::MasterBase__Fuse_Triggers_Actions_TriggerDirection*> Master;
    int _MixOp;
    int _Priority;

    void _ObjInit(::app::Fuse::Animations::MasterBase__Fuse_Triggers_Actions_TriggerDirection* master, int mode, int priority) { MixerHandle__Fuse_Triggers_Actions_TriggerDirection___ObjInit(this, master, mode, priority); }
    bool HasValue() { return MixerHandle__Fuse_Triggers_Actions_TriggerDirection__get_HasValue(this); }
    int MixOp() { return MixerHandle__Fuse_Triggers_Actions_TriggerDirection__get_MixOp(this); }
    int Priority() { return MixerHandle__Fuse_Triggers_Actions_TriggerDirection__get_Priority(this); }
    int RestValue() { return MixerHandle__Fuse_Triggers_Actions_TriggerDirection__get_RestValue(this); }
    void Set(int value, float strength) { MixerHandle__Fuse_Triggers_Actions_TriggerDirection__Set(this, value, strength); }
    void MixOp(int value) { MixerHandle__Fuse_Triggers_Actions_TriggerDirection__set_MixOp(this, value); }
    void Priority(int value) { MixerHandle__Fuse_Triggers_Actions_TriggerDirection__set_Priority(this, value); }
    void Unregister() { MixerHandle__Fuse_Triggers_Actions_TriggerDirection__Unregister(this); }
};

}}}


#endif
