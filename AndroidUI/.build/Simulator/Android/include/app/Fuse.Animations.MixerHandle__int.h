// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Animations\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_FUSE_ANIMATIONS_MIXER_HANDLE__INT_H__
#define __APP_FUSE_ANIMATIONS_MIXER_HANDLE__INT_H__

#include <app/Fuse.Animations.IMixerHandle__int.h>
#include <app/Uno.Object.h>
#include <Uno.h>
namespace app { namespace Fuse { namespace Animations { struct MasterBase__int; } } }

namespace app {
namespace Fuse {
namespace Animations {

struct MixerHandle__int;

struct MixerHandle__int__uType : ::uClassType
{
    ::app::Fuse::Animations::IMixerHandle__int __interface_0;
};

MixerHandle__int__uType* MixerHandle__int__typeof();

void MixerHandle__int___ObjInit(MixerHandle__int* __this, ::app::Fuse::Animations::MasterBase__int* master, int mode, int priority);
bool MixerHandle__int__get_HasValue(MixerHandle__int* __this);
int MixerHandle__int__get_MixOp(MixerHandle__int* __this);
int MixerHandle__int__get_Priority(MixerHandle__int* __this);
int MixerHandle__int__get_RestValue(MixerHandle__int* __this);
MixerHandle__int* MixerHandle__int__New_1(::uStatic* __this, ::app::Fuse::Animations::MasterBase__int* master, int mode, int priority);
void MixerHandle__int__Set(MixerHandle__int* __this, int value, float strength);
void MixerHandle__int__set_MixOp(MixerHandle__int* __this, int value);
void MixerHandle__int__set_Priority(MixerHandle__int* __this, int value);
void MixerHandle__int__Unregister(MixerHandle__int* __this);

struct MixerHandle__int : ::uObject
{
    int Value;
    float Strength;
    bool _hasValue;
    ::uStrong< ::app::Fuse::Animations::MasterBase__int*> Master;
    int _MixOp;
    int _Priority;

    void _ObjInit(::app::Fuse::Animations::MasterBase__int* master, int mode, int priority) { MixerHandle__int___ObjInit(this, master, mode, priority); }
    bool HasValue() { return MixerHandle__int__get_HasValue(this); }
    int MixOp() { return MixerHandle__int__get_MixOp(this); }
    int Priority() { return MixerHandle__int__get_Priority(this); }
    int RestValue() { return MixerHandle__int__get_RestValue(this); }
    void Set(int value, float strength) { MixerHandle__int__Set(this, value, strength); }
    void MixOp(int value) { MixerHandle__int__set_MixOp(this, value); }
    void Priority(int value) { MixerHandle__int__set_Priority(this, value); }
    void Unregister() { MixerHandle__int__Unregister(this); }
};

}}}


#endif
