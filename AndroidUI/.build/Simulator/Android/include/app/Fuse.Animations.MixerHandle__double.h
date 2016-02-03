// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Animations\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_FUSE_ANIMATIONS_MIXER_HANDLE__DOUBLE_H__
#define __APP_FUSE_ANIMATIONS_MIXER_HANDLE__DOUBLE_H__

#include <app/Fuse.Animations.IMixerHandle__double.h>
#include <app/Uno.Object.h>
#include <Uno.h>
namespace app { namespace Fuse { namespace Animations { struct MasterBase__double; } } }

namespace app {
namespace Fuse {
namespace Animations {

struct MixerHandle__double;

struct MixerHandle__double__uType : ::uClassType
{
    ::app::Fuse::Animations::IMixerHandle__double __interface_0;
};

MixerHandle__double__uType* MixerHandle__double__typeof();

void MixerHandle__double___ObjInit(MixerHandle__double* __this, ::app::Fuse::Animations::MasterBase__double* master, int mode, int priority);
bool MixerHandle__double__get_HasValue(MixerHandle__double* __this);
int MixerHandle__double__get_MixOp(MixerHandle__double* __this);
int MixerHandle__double__get_Priority(MixerHandle__double* __this);
double MixerHandle__double__get_RestValue(MixerHandle__double* __this);
MixerHandle__double* MixerHandle__double__New_1(::uStatic* __this, ::app::Fuse::Animations::MasterBase__double* master, int mode, int priority);
void MixerHandle__double__Set(MixerHandle__double* __this, double value, float strength);
void MixerHandle__double__set_MixOp(MixerHandle__double* __this, int value);
void MixerHandle__double__set_Priority(MixerHandle__double* __this, int value);
void MixerHandle__double__Unregister(MixerHandle__double* __this);

struct MixerHandle__double : ::uObject
{
    double Value;
    float Strength;
    bool _hasValue;
    ::uStrong< ::app::Fuse::Animations::MasterBase__double*> Master;
    int _MixOp;
    int _Priority;

    void _ObjInit(::app::Fuse::Animations::MasterBase__double* master, int mode, int priority) { MixerHandle__double___ObjInit(this, master, mode, priority); }
    bool HasValue() { return MixerHandle__double__get_HasValue(this); }
    int MixOp() { return MixerHandle__double__get_MixOp(this); }
    int Priority() { return MixerHandle__double__get_Priority(this); }
    double RestValue() { return MixerHandle__double__get_RestValue(this); }
    void Set(double value, float strength) { MixerHandle__double__Set(this, value, strength); }
    void MixOp(int value) { MixerHandle__double__set_MixOp(this, value); }
    void Priority(int value) { MixerHandle__double__set_Priority(this, value); }
    void Unregister() { MixerHandle__double__Unregister(this); }
};

}}}


#endif
