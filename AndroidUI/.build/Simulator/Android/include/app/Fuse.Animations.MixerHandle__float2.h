// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Animations\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_FUSE_ANIMATIONS_MIXER_HANDLE__FLOAT2_H__
#define __APP_FUSE_ANIMATIONS_MIXER_HANDLE__FLOAT2_H__

#include <app/Fuse.Animations.IMixerHandle__float2.h>
#include <app/Uno.Float2.h>
#include <app/Uno.Object.h>
#include <Uno.h>
namespace app { namespace Fuse { namespace Animations { struct MasterBase__float2; } } }

namespace app {
namespace Fuse {
namespace Animations {

struct MixerHandle__float2;

struct MixerHandle__float2__uType : ::uClassType
{
    ::app::Fuse::Animations::IMixerHandle__float2 __interface_0;
};

MixerHandle__float2__uType* MixerHandle__float2__typeof();

void MixerHandle__float2___ObjInit(MixerHandle__float2* __this, ::app::Fuse::Animations::MasterBase__float2* master, int mode, int priority);
bool MixerHandle__float2__get_HasValue(MixerHandle__float2* __this);
int MixerHandle__float2__get_MixOp(MixerHandle__float2* __this);
int MixerHandle__float2__get_Priority(MixerHandle__float2* __this);
::app::Uno::Float2 MixerHandle__float2__get_RestValue(MixerHandle__float2* __this);
MixerHandle__float2* MixerHandle__float2__New_1(::uStatic* __this, ::app::Fuse::Animations::MasterBase__float2* master, int mode, int priority);
void MixerHandle__float2__Set(MixerHandle__float2* __this, ::app::Uno::Float2 value, float strength);
void MixerHandle__float2__set_MixOp(MixerHandle__float2* __this, int value);
void MixerHandle__float2__set_Priority(MixerHandle__float2* __this, int value);
void MixerHandle__float2__Unregister(MixerHandle__float2* __this);

struct MixerHandle__float2 : ::uObject
{
    ::app::Uno::Float2 Value;
    float Strength;
    bool _hasValue;
    ::uStrong< ::app::Fuse::Animations::MasterBase__float2*> Master;
    int _MixOp;
    int _Priority;

    void _ObjInit(::app::Fuse::Animations::MasterBase__float2* master, int mode, int priority) { MixerHandle__float2___ObjInit(this, master, mode, priority); }
    bool HasValue() { return MixerHandle__float2__get_HasValue(this); }
    int MixOp() { return MixerHandle__float2__get_MixOp(this); }
    int Priority() { return MixerHandle__float2__get_Priority(this); }
    ::app::Uno::Float2 RestValue() { return MixerHandle__float2__get_RestValue(this); }
    void Set(::app::Uno::Float2 value, float strength) { MixerHandle__float2__Set(this, value, strength); }
    void MixOp(int value) { MixerHandle__float2__set_MixOp(this, value); }
    void Priority(int value) { MixerHandle__float2__set_Priority(this, value); }
    void Unregister() { MixerHandle__float2__Unregister(this); }
};

}}}


#endif
