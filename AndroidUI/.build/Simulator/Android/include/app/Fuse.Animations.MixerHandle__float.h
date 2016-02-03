// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Animations\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_FUSE_ANIMATIONS_MIXER_HANDLE__FLOAT_H__
#define __APP_FUSE_ANIMATIONS_MIXER_HANDLE__FLOAT_H__

#include <app/Fuse.Animations.IMixerHandle__float.h>
#include <app/Uno.Object.h>
#include <Uno.h>
namespace app { namespace Fuse { namespace Animations { struct MasterBase__float; } } }

namespace app {
namespace Fuse {
namespace Animations {

struct MixerHandle__float;

struct MixerHandle__float__uType : ::uClassType
{
    ::app::Fuse::Animations::IMixerHandle__float __interface_0;
};

MixerHandle__float__uType* MixerHandle__float__typeof();

void MixerHandle__float___ObjInit(MixerHandle__float* __this, ::app::Fuse::Animations::MasterBase__float* master, int mode, int priority);
bool MixerHandle__float__get_HasValue(MixerHandle__float* __this);
int MixerHandle__float__get_MixOp(MixerHandle__float* __this);
int MixerHandle__float__get_Priority(MixerHandle__float* __this);
float MixerHandle__float__get_RestValue(MixerHandle__float* __this);
MixerHandle__float* MixerHandle__float__New_1(::uStatic* __this, ::app::Fuse::Animations::MasterBase__float* master, int mode, int priority);
void MixerHandle__float__Set(MixerHandle__float* __this, float value, float strength);
void MixerHandle__float__set_MixOp(MixerHandle__float* __this, int value);
void MixerHandle__float__set_Priority(MixerHandle__float* __this, int value);
void MixerHandle__float__Unregister(MixerHandle__float* __this);

struct MixerHandle__float : ::uObject
{
    float Value;
    float Strength;
    bool _hasValue;
    ::uStrong< ::app::Fuse::Animations::MasterBase__float*> Master;
    int _MixOp;
    int _Priority;

    void _ObjInit(::app::Fuse::Animations::MasterBase__float* master, int mode, int priority) { MixerHandle__float___ObjInit(this, master, mode, priority); }
    bool HasValue() { return MixerHandle__float__get_HasValue(this); }
    int MixOp() { return MixerHandle__float__get_MixOp(this); }
    int Priority() { return MixerHandle__float__get_Priority(this); }
    float RestValue() { return MixerHandle__float__get_RestValue(this); }
    void Set(float value, float strength) { MixerHandle__float__Set(this, value, strength); }
    void MixOp(int value) { MixerHandle__float__set_MixOp(this, value); }
    void Priority(int value) { MixerHandle__float__set_Priority(this, value); }
    void Unregister() { MixerHandle__float__Unregister(this); }
};

}}}


#endif
