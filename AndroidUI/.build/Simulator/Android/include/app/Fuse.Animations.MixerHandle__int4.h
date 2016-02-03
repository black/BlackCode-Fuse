// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Animations\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_FUSE_ANIMATIONS_MIXER_HANDLE__INT4_H__
#define __APP_FUSE_ANIMATIONS_MIXER_HANDLE__INT4_H__

#include <app/Fuse.Animations.IMixerHandle__int4.h>
#include <app/Uno.Int4.h>
#include <app/Uno.Object.h>
#include <Uno.h>
namespace app { namespace Fuse { namespace Animations { struct MasterBase__int4; } } }

namespace app {
namespace Fuse {
namespace Animations {

struct MixerHandle__int4;

struct MixerHandle__int4__uType : ::uClassType
{
    ::app::Fuse::Animations::IMixerHandle__int4 __interface_0;
};

MixerHandle__int4__uType* MixerHandle__int4__typeof();

void MixerHandle__int4___ObjInit(MixerHandle__int4* __this, ::app::Fuse::Animations::MasterBase__int4* master, int mode, int priority);
bool MixerHandle__int4__get_HasValue(MixerHandle__int4* __this);
int MixerHandle__int4__get_MixOp(MixerHandle__int4* __this);
int MixerHandle__int4__get_Priority(MixerHandle__int4* __this);
::app::Uno::Int4 MixerHandle__int4__get_RestValue(MixerHandle__int4* __this);
MixerHandle__int4* MixerHandle__int4__New_1(::uStatic* __this, ::app::Fuse::Animations::MasterBase__int4* master, int mode, int priority);
void MixerHandle__int4__Set(MixerHandle__int4* __this, ::app::Uno::Int4 value, float strength);
void MixerHandle__int4__set_MixOp(MixerHandle__int4* __this, int value);
void MixerHandle__int4__set_Priority(MixerHandle__int4* __this, int value);
void MixerHandle__int4__Unregister(MixerHandle__int4* __this);

struct MixerHandle__int4 : ::uObject
{
    ::app::Uno::Int4 Value;
    float Strength;
    bool _hasValue;
    ::uStrong< ::app::Fuse::Animations::MasterBase__int4*> Master;
    int _MixOp;
    int _Priority;

    void _ObjInit(::app::Fuse::Animations::MasterBase__int4* master, int mode, int priority) { MixerHandle__int4___ObjInit(this, master, mode, priority); }
    bool HasValue() { return MixerHandle__int4__get_HasValue(this); }
    int MixOp() { return MixerHandle__int4__get_MixOp(this); }
    int Priority() { return MixerHandle__int4__get_Priority(this); }
    ::app::Uno::Int4 RestValue() { return MixerHandle__int4__get_RestValue(this); }
    void Set(::app::Uno::Int4 value, float strength) { MixerHandle__int4__Set(this, value, strength); }
    void MixOp(int value) { MixerHandle__int4__set_MixOp(this, value); }
    void Priority(int value) { MixerHandle__int4__set_Priority(this, value); }
    void Unregister() { MixerHandle__int4__Unregister(this); }
};

}}}


#endif
