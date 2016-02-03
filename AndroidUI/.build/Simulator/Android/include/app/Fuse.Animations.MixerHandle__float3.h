// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Animations\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_FUSE_ANIMATIONS_MIXER_HANDLE__FLOAT3_H__
#define __APP_FUSE_ANIMATIONS_MIXER_HANDLE__FLOAT3_H__

#include <app/Fuse.Animations.IMixerHandle__float3.h>
#include <app/Uno.Float3.h>
#include <app/Uno.Object.h>
#include <Uno.h>
namespace app { namespace Fuse { namespace Animations { struct MasterBase__float3; } } }

namespace app {
namespace Fuse {
namespace Animations {

struct MixerHandle__float3;

struct MixerHandle__float3__uType : ::uClassType
{
    ::app::Fuse::Animations::IMixerHandle__float3 __interface_0;
};

MixerHandle__float3__uType* MixerHandle__float3__typeof();

void MixerHandle__float3___ObjInit(MixerHandle__float3* __this, ::app::Fuse::Animations::MasterBase__float3* master, int mode, int priority);
bool MixerHandle__float3__get_HasValue(MixerHandle__float3* __this);
int MixerHandle__float3__get_MixOp(MixerHandle__float3* __this);
int MixerHandle__float3__get_Priority(MixerHandle__float3* __this);
::app::Uno::Float3 MixerHandle__float3__get_RestValue(MixerHandle__float3* __this);
MixerHandle__float3* MixerHandle__float3__New_1(::uStatic* __this, ::app::Fuse::Animations::MasterBase__float3* master, int mode, int priority);
void MixerHandle__float3__Set(MixerHandle__float3* __this, ::app::Uno::Float3 value, float strength);
void MixerHandle__float3__set_MixOp(MixerHandle__float3* __this, int value);
void MixerHandle__float3__set_Priority(MixerHandle__float3* __this, int value);
void MixerHandle__float3__Unregister(MixerHandle__float3* __this);

struct MixerHandle__float3 : ::uObject
{
    ::app::Uno::Float3 Value;
    float Strength;
    bool _hasValue;
    ::uStrong< ::app::Fuse::Animations::MasterBase__float3*> Master;
    int _MixOp;
    int _Priority;

    void _ObjInit(::app::Fuse::Animations::MasterBase__float3* master, int mode, int priority) { MixerHandle__float3___ObjInit(this, master, mode, priority); }
    bool HasValue() { return MixerHandle__float3__get_HasValue(this); }
    int MixOp() { return MixerHandle__float3__get_MixOp(this); }
    int Priority() { return MixerHandle__float3__get_Priority(this); }
    ::app::Uno::Float3 RestValue() { return MixerHandle__float3__get_RestValue(this); }
    void Set(::app::Uno::Float3 value, float strength) { MixerHandle__float3__Set(this, value, strength); }
    void MixOp(int value) { MixerHandle__float3__set_MixOp(this, value); }
    void Priority(int value) { MixerHandle__float3__set_Priority(this, value); }
    void Unregister() { MixerHandle__float3__Unregister(this); }
};

}}}


#endif
