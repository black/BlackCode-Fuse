// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Animations\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_FUSE_ANIMATIONS_MIXER_HANDLE__INT3_H__
#define __APP_FUSE_ANIMATIONS_MIXER_HANDLE__INT3_H__

#include <app/Fuse.Animations.IMixerHandle__int3.h>
#include <app/Uno.Int3.h>
#include <app/Uno.Object.h>
#include <Uno.h>
namespace app { namespace Fuse { namespace Animations { struct MasterBase__int3; } } }

namespace app {
namespace Fuse {
namespace Animations {

struct MixerHandle__int3;

struct MixerHandle__int3__uType : ::uClassType
{
    ::app::Fuse::Animations::IMixerHandle__int3 __interface_0;
};

MixerHandle__int3__uType* MixerHandle__int3__typeof();

void MixerHandle__int3___ObjInit(MixerHandle__int3* __this, ::app::Fuse::Animations::MasterBase__int3* master, int mode, int priority);
bool MixerHandle__int3__get_HasValue(MixerHandle__int3* __this);
int MixerHandle__int3__get_MixOp(MixerHandle__int3* __this);
int MixerHandle__int3__get_Priority(MixerHandle__int3* __this);
::app::Uno::Int3 MixerHandle__int3__get_RestValue(MixerHandle__int3* __this);
MixerHandle__int3* MixerHandle__int3__New_1(::uStatic* __this, ::app::Fuse::Animations::MasterBase__int3* master, int mode, int priority);
void MixerHandle__int3__Set(MixerHandle__int3* __this, ::app::Uno::Int3 value, float strength);
void MixerHandle__int3__set_MixOp(MixerHandle__int3* __this, int value);
void MixerHandle__int3__set_Priority(MixerHandle__int3* __this, int value);
void MixerHandle__int3__Unregister(MixerHandle__int3* __this);

struct MixerHandle__int3 : ::uObject
{
    ::app::Uno::Int3 Value;
    float Strength;
    bool _hasValue;
    ::uStrong< ::app::Fuse::Animations::MasterBase__int3*> Master;
    int _MixOp;
    int _Priority;

    void _ObjInit(::app::Fuse::Animations::MasterBase__int3* master, int mode, int priority) { MixerHandle__int3___ObjInit(this, master, mode, priority); }
    bool HasValue() { return MixerHandle__int3__get_HasValue(this); }
    int MixOp() { return MixerHandle__int3__get_MixOp(this); }
    int Priority() { return MixerHandle__int3__get_Priority(this); }
    ::app::Uno::Int3 RestValue() { return MixerHandle__int3__get_RestValue(this); }
    void Set(::app::Uno::Int3 value, float strength) { MixerHandle__int3__Set(this, value, strength); }
    void MixOp(int value) { MixerHandle__int3__set_MixOp(this, value); }
    void Priority(int value) { MixerHandle__int3__set_Priority(this, value); }
    void Unregister() { MixerHandle__int3__Unregister(this); }
};

}}}


#endif
