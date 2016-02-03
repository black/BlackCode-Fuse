// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Animations\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_FUSE_ANIMATIONS_MIXER_HANDLE__FUSE_TRIGGERS_STATE_H__
#define __APP_FUSE_ANIMATIONS_MIXER_HANDLE__FUSE_TRIGGERS_STATE_H__

#include <app/Fuse.Animations.IMixerHandle__Fuse_Triggers_State.h>
#include <app/Uno.Object.h>
#include <Uno.h>
namespace app { namespace Fuse { namespace Animations { struct MasterBase__Fuse_Triggers_State; } } }
namespace app { namespace Fuse { namespace Triggers { struct State; } } }

namespace app {
namespace Fuse {
namespace Animations {

struct MixerHandle__Fuse_Triggers_State;

struct MixerHandle__Fuse_Triggers_State__uType : ::uClassType
{
    ::app::Fuse::Animations::IMixerHandle__Fuse_Triggers_State __interface_0;
};

MixerHandle__Fuse_Triggers_State__uType* MixerHandle__Fuse_Triggers_State__typeof();

void MixerHandle__Fuse_Triggers_State___ObjInit(MixerHandle__Fuse_Triggers_State* __this, ::app::Fuse::Animations::MasterBase__Fuse_Triggers_State* master, int mode, int priority);
bool MixerHandle__Fuse_Triggers_State__get_HasValue(MixerHandle__Fuse_Triggers_State* __this);
int MixerHandle__Fuse_Triggers_State__get_MixOp(MixerHandle__Fuse_Triggers_State* __this);
int MixerHandle__Fuse_Triggers_State__get_Priority(MixerHandle__Fuse_Triggers_State* __this);
::app::Fuse::Triggers::State* MixerHandle__Fuse_Triggers_State__get_RestValue(MixerHandle__Fuse_Triggers_State* __this);
MixerHandle__Fuse_Triggers_State* MixerHandle__Fuse_Triggers_State__New_1(::uStatic* __this, ::app::Fuse::Animations::MasterBase__Fuse_Triggers_State* master, int mode, int priority);
void MixerHandle__Fuse_Triggers_State__Set(MixerHandle__Fuse_Triggers_State* __this, ::app::Fuse::Triggers::State* value, float strength);
void MixerHandle__Fuse_Triggers_State__set_MixOp(MixerHandle__Fuse_Triggers_State* __this, int value);
void MixerHandle__Fuse_Triggers_State__set_Priority(MixerHandle__Fuse_Triggers_State* __this, int value);
void MixerHandle__Fuse_Triggers_State__Unregister(MixerHandle__Fuse_Triggers_State* __this);

struct MixerHandle__Fuse_Triggers_State : ::uObject
{
    ::uStrong< ::app::Fuse::Triggers::State*> Value;
    float Strength;
    bool _hasValue;
    ::uStrong< ::app::Fuse::Animations::MasterBase__Fuse_Triggers_State*> Master;
    int _MixOp;
    int _Priority;

    void _ObjInit(::app::Fuse::Animations::MasterBase__Fuse_Triggers_State* master, int mode, int priority) { MixerHandle__Fuse_Triggers_State___ObjInit(this, master, mode, priority); }
    bool HasValue() { return MixerHandle__Fuse_Triggers_State__get_HasValue(this); }
    int MixOp() { return MixerHandle__Fuse_Triggers_State__get_MixOp(this); }
    int Priority() { return MixerHandle__Fuse_Triggers_State__get_Priority(this); }
    ::app::Fuse::Triggers::State* RestValue() { return MixerHandle__Fuse_Triggers_State__get_RestValue(this); }
    void Set(::app::Fuse::Triggers::State* value, float strength) { MixerHandle__Fuse_Triggers_State__Set(this, value, strength); }
    void MixOp(int value) { MixerHandle__Fuse_Triggers_State__set_MixOp(this, value); }
    void Priority(int value) { MixerHandle__Fuse_Triggers_State__set_Priority(this, value); }
    void Unregister() { MixerHandle__Fuse_Triggers_State__Unregister(this); }
};

}}}


#endif
