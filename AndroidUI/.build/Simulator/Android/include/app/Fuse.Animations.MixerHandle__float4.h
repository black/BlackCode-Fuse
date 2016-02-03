// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Animations\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_FUSE_ANIMATIONS_MIXER_HANDLE__FLOAT4_H__
#define __APP_FUSE_ANIMATIONS_MIXER_HANDLE__FLOAT4_H__

#include <app/Fuse.Animations.IMixerHandle__float4.h>
#include <app/Uno.Float4.h>
#include <app/Uno.Object.h>
#include <Uno.h>
namespace app { namespace Fuse { namespace Animations { struct MasterBase__float4; } } }

namespace app {
namespace Fuse {
namespace Animations {

struct MixerHandle__float4;

struct MixerHandle__float4__uType : ::uClassType
{
    ::app::Fuse::Animations::IMixerHandle__float4 __interface_0;
};

MixerHandle__float4__uType* MixerHandle__float4__typeof();

void MixerHandle__float4___ObjInit(MixerHandle__float4* __this, ::app::Fuse::Animations::MasterBase__float4* master, int mode, int priority);
bool MixerHandle__float4__get_HasValue(MixerHandle__float4* __this);
int MixerHandle__float4__get_MixOp(MixerHandle__float4* __this);
int MixerHandle__float4__get_Priority(MixerHandle__float4* __this);
::app::Uno::Float4 MixerHandle__float4__get_RestValue(MixerHandle__float4* __this);
MixerHandle__float4* MixerHandle__float4__New_1(::uStatic* __this, ::app::Fuse::Animations::MasterBase__float4* master, int mode, int priority);
void MixerHandle__float4__Set(MixerHandle__float4* __this, ::app::Uno::Float4 value, float strength);
void MixerHandle__float4__set_MixOp(MixerHandle__float4* __this, int value);
void MixerHandle__float4__set_Priority(MixerHandle__float4* __this, int value);
void MixerHandle__float4__Unregister(MixerHandle__float4* __this);

struct MixerHandle__float4 : ::uObject
{
    ::app::Uno::Float4 Value;
    float Strength;
    bool _hasValue;
    ::uStrong< ::app::Fuse::Animations::MasterBase__float4*> Master;
    int _MixOp;
    int _Priority;

    void _ObjInit(::app::Fuse::Animations::MasterBase__float4* master, int mode, int priority) { MixerHandle__float4___ObjInit(this, master, mode, priority); }
    bool HasValue() { return MixerHandle__float4__get_HasValue(this); }
    int MixOp() { return MixerHandle__float4__get_MixOp(this); }
    int Priority() { return MixerHandle__float4__get_Priority(this); }
    ::app::Uno::Float4 RestValue() { return MixerHandle__float4__get_RestValue(this); }
    void Set(::app::Uno::Float4 value, float strength) { MixerHandle__float4__Set(this, value, strength); }
    void MixOp(int value) { MixerHandle__float4__set_MixOp(this, value); }
    void Priority(int value) { MixerHandle__float4__set_Priority(this, value); }
    void Unregister() { MixerHandle__float4__Unregister(this); }
};

}}}


#endif
