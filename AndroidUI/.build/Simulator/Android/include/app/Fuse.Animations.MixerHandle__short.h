// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Animations\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_FUSE_ANIMATIONS_MIXER_HANDLE__SHORT_H__
#define __APP_FUSE_ANIMATIONS_MIXER_HANDLE__SHORT_H__

#include <app/Fuse.Animations.IMixerHandle__short.h>
#include <app/Uno.Object.h>
#include <Uno.h>
namespace app { namespace Fuse { namespace Animations { struct MasterBase__short; } } }

namespace app {
namespace Fuse {
namespace Animations {

struct MixerHandle__short;

struct MixerHandle__short__uType : ::uClassType
{
    ::app::Fuse::Animations::IMixerHandle__short __interface_0;
};

MixerHandle__short__uType* MixerHandle__short__typeof();

void MixerHandle__short___ObjInit(MixerHandle__short* __this, ::app::Fuse::Animations::MasterBase__short* master, int mode, int priority);
bool MixerHandle__short__get_HasValue(MixerHandle__short* __this);
int MixerHandle__short__get_MixOp(MixerHandle__short* __this);
int MixerHandle__short__get_Priority(MixerHandle__short* __this);
::uShort MixerHandle__short__get_RestValue(MixerHandle__short* __this);
MixerHandle__short* MixerHandle__short__New_1(::uStatic* __this, ::app::Fuse::Animations::MasterBase__short* master, int mode, int priority);
void MixerHandle__short__Set(MixerHandle__short* __this, ::uShort value, float strength);
void MixerHandle__short__set_MixOp(MixerHandle__short* __this, int value);
void MixerHandle__short__set_Priority(MixerHandle__short* __this, int value);
void MixerHandle__short__Unregister(MixerHandle__short* __this);

struct MixerHandle__short : ::uObject
{
    ::uShort Value;
    float Strength;
    bool _hasValue;
    ::uStrong< ::app::Fuse::Animations::MasterBase__short*> Master;
    int _MixOp;
    int _Priority;

    void _ObjInit(::app::Fuse::Animations::MasterBase__short* master, int mode, int priority) { MixerHandle__short___ObjInit(this, master, mode, priority); }
    bool HasValue() { return MixerHandle__short__get_HasValue(this); }
    int MixOp() { return MixerHandle__short__get_MixOp(this); }
    int Priority() { return MixerHandle__short__get_Priority(this); }
    ::uShort RestValue() { return MixerHandle__short__get_RestValue(this); }
    void Set(::uShort value, float strength) { MixerHandle__short__Set(this, value, strength); }
    void MixOp(int value) { MixerHandle__short__set_MixOp(this, value); }
    void Priority(int value) { MixerHandle__short__set_Priority(this, value); }
    void Unregister() { MixerHandle__short__Unregister(this); }
};

}}}


#endif
