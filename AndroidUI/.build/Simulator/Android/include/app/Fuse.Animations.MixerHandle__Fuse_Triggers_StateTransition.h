// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Animations\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_FUSE_ANIMATIONS_MIXER_HANDLE__FUSE_TRIGGERS_STATE_TRANSITION_H__
#define __APP_FUSE_ANIMATIONS_MIXER_HANDLE__FUSE_TRIGGERS_STATE_TRANSITION_H__

#include <app/Fuse.Animations.IMixerHandle__Fuse_Triggers_StateTransition.h>
#include <app/Uno.Object.h>
#include <Uno.h>
namespace app { namespace Fuse { namespace Animations { struct MasterBase__Fuse_Triggers_StateTransition; } } }

namespace app {
namespace Fuse {
namespace Animations {

struct MixerHandle__Fuse_Triggers_StateTransition;

struct MixerHandle__Fuse_Triggers_StateTransition__uType : ::uClassType
{
    ::app::Fuse::Animations::IMixerHandle__Fuse_Triggers_StateTransition __interface_0;
};

MixerHandle__Fuse_Triggers_StateTransition__uType* MixerHandle__Fuse_Triggers_StateTransition__typeof();

void MixerHandle__Fuse_Triggers_StateTransition___ObjInit(MixerHandle__Fuse_Triggers_StateTransition* __this, ::app::Fuse::Animations::MasterBase__Fuse_Triggers_StateTransition* master, int mode, int priority);
bool MixerHandle__Fuse_Triggers_StateTransition__get_HasValue(MixerHandle__Fuse_Triggers_StateTransition* __this);
int MixerHandle__Fuse_Triggers_StateTransition__get_MixOp(MixerHandle__Fuse_Triggers_StateTransition* __this);
int MixerHandle__Fuse_Triggers_StateTransition__get_Priority(MixerHandle__Fuse_Triggers_StateTransition* __this);
int MixerHandle__Fuse_Triggers_StateTransition__get_RestValue(MixerHandle__Fuse_Triggers_StateTransition* __this);
MixerHandle__Fuse_Triggers_StateTransition* MixerHandle__Fuse_Triggers_StateTransition__New_1(::uStatic* __this, ::app::Fuse::Animations::MasterBase__Fuse_Triggers_StateTransition* master, int mode, int priority);
void MixerHandle__Fuse_Triggers_StateTransition__Set(MixerHandle__Fuse_Triggers_StateTransition* __this, int value, float strength);
void MixerHandle__Fuse_Triggers_StateTransition__set_MixOp(MixerHandle__Fuse_Triggers_StateTransition* __this, int value);
void MixerHandle__Fuse_Triggers_StateTransition__set_Priority(MixerHandle__Fuse_Triggers_StateTransition* __this, int value);
void MixerHandle__Fuse_Triggers_StateTransition__Unregister(MixerHandle__Fuse_Triggers_StateTransition* __this);

struct MixerHandle__Fuse_Triggers_StateTransition : ::uObject
{
    int Value;
    float Strength;
    bool _hasValue;
    ::uStrong< ::app::Fuse::Animations::MasterBase__Fuse_Triggers_StateTransition*> Master;
    int _MixOp;
    int _Priority;

    void _ObjInit(::app::Fuse::Animations::MasterBase__Fuse_Triggers_StateTransition* master, int mode, int priority) { MixerHandle__Fuse_Triggers_StateTransition___ObjInit(this, master, mode, priority); }
    bool HasValue() { return MixerHandle__Fuse_Triggers_StateTransition__get_HasValue(this); }
    int MixOp() { return MixerHandle__Fuse_Triggers_StateTransition__get_MixOp(this); }
    int Priority() { return MixerHandle__Fuse_Triggers_StateTransition__get_Priority(this); }
    int RestValue() { return MixerHandle__Fuse_Triggers_StateTransition__get_RestValue(this); }
    void Set(int value, float strength) { MixerHandle__Fuse_Triggers_StateTransition__Set(this, value, strength); }
    void MixOp(int value) { MixerHandle__Fuse_Triggers_StateTransition__set_MixOp(this, value); }
    void Priority(int value) { MixerHandle__Fuse_Triggers_StateTransition__set_Priority(this, value); }
    void Unregister() { MixerHandle__Fuse_Triggers_StateTransition__Unregister(this); }
};

}}}


#endif
