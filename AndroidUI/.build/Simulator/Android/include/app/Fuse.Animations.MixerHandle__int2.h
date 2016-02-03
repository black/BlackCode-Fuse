// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Animations\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_FUSE_ANIMATIONS_MIXER_HANDLE__INT2_H__
#define __APP_FUSE_ANIMATIONS_MIXER_HANDLE__INT2_H__

#include <app/Fuse.Animations.IMixerHandle__int2.h>
#include <app/Uno.Int2.h>
#include <app/Uno.Object.h>
#include <Uno.h>
namespace app { namespace Fuse { namespace Animations { struct MasterBase__int2; } } }

namespace app {
namespace Fuse {
namespace Animations {

struct MixerHandle__int2;

struct MixerHandle__int2__uType : ::uClassType
{
    ::app::Fuse::Animations::IMixerHandle__int2 __interface_0;
};

MixerHandle__int2__uType* MixerHandle__int2__typeof();

void MixerHandle__int2___ObjInit(MixerHandle__int2* __this, ::app::Fuse::Animations::MasterBase__int2* master, int mode, int priority);
bool MixerHandle__int2__get_HasValue(MixerHandle__int2* __this);
int MixerHandle__int2__get_MixOp(MixerHandle__int2* __this);
int MixerHandle__int2__get_Priority(MixerHandle__int2* __this);
::app::Uno::Int2 MixerHandle__int2__get_RestValue(MixerHandle__int2* __this);
MixerHandle__int2* MixerHandle__int2__New_1(::uStatic* __this, ::app::Fuse::Animations::MasterBase__int2* master, int mode, int priority);
void MixerHandle__int2__Set(MixerHandle__int2* __this, ::app::Uno::Int2 value, float strength);
void MixerHandle__int2__set_MixOp(MixerHandle__int2* __this, int value);
void MixerHandle__int2__set_Priority(MixerHandle__int2* __this, int value);
void MixerHandle__int2__Unregister(MixerHandle__int2* __this);

struct MixerHandle__int2 : ::uObject
{
    ::app::Uno::Int2 Value;
    float Strength;
    bool _hasValue;
    ::uStrong< ::app::Fuse::Animations::MasterBase__int2*> Master;
    int _MixOp;
    int _Priority;

    void _ObjInit(::app::Fuse::Animations::MasterBase__int2* master, int mode, int priority) { MixerHandle__int2___ObjInit(this, master, mode, priority); }
    bool HasValue() { return MixerHandle__int2__get_HasValue(this); }
    int MixOp() { return MixerHandle__int2__get_MixOp(this); }
    int Priority() { return MixerHandle__int2__get_Priority(this); }
    ::app::Uno::Int2 RestValue() { return MixerHandle__int2__get_RestValue(this); }
    void Set(::app::Uno::Int2 value, float strength) { MixerHandle__int2__Set(this, value, strength); }
    void MixOp(int value) { MixerHandle__int2__set_MixOp(this, value); }
    void Priority(int value) { MixerHandle__int2__set_Priority(this, value); }
    void Unregister() { MixerHandle__int2__Unregister(this); }
};

}}}


#endif
