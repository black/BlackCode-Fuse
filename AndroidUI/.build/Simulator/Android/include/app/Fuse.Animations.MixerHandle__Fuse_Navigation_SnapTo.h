// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Animations\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_FUSE_ANIMATIONS_MIXER_HANDLE__FUSE_NAVIGATION_SNAP_TO_H__
#define __APP_FUSE_ANIMATIONS_MIXER_HANDLE__FUSE_NAVIGATION_SNAP_TO_H__

#include <app/Fuse.Animations.IMixerHandle__Fuse_Navigation_SnapTo.h>
#include <app/Uno.Object.h>
#include <Uno.h>
namespace app { namespace Fuse { namespace Animations { struct MasterBase__Fuse_Navigation_SnapTo; } } }

namespace app {
namespace Fuse {
namespace Animations {

struct MixerHandle__Fuse_Navigation_SnapTo;

struct MixerHandle__Fuse_Navigation_SnapTo__uType : ::uClassType
{
    ::app::Fuse::Animations::IMixerHandle__Fuse_Navigation_SnapTo __interface_0;
};

MixerHandle__Fuse_Navigation_SnapTo__uType* MixerHandle__Fuse_Navigation_SnapTo__typeof();

void MixerHandle__Fuse_Navigation_SnapTo___ObjInit(MixerHandle__Fuse_Navigation_SnapTo* __this, ::app::Fuse::Animations::MasterBase__Fuse_Navigation_SnapTo* master, int mode, int priority);
bool MixerHandle__Fuse_Navigation_SnapTo__get_HasValue(MixerHandle__Fuse_Navigation_SnapTo* __this);
int MixerHandle__Fuse_Navigation_SnapTo__get_MixOp(MixerHandle__Fuse_Navigation_SnapTo* __this);
int MixerHandle__Fuse_Navigation_SnapTo__get_Priority(MixerHandle__Fuse_Navigation_SnapTo* __this);
int MixerHandle__Fuse_Navigation_SnapTo__get_RestValue(MixerHandle__Fuse_Navigation_SnapTo* __this);
MixerHandle__Fuse_Navigation_SnapTo* MixerHandle__Fuse_Navigation_SnapTo__New_1(::uStatic* __this, ::app::Fuse::Animations::MasterBase__Fuse_Navigation_SnapTo* master, int mode, int priority);
void MixerHandle__Fuse_Navigation_SnapTo__Set(MixerHandle__Fuse_Navigation_SnapTo* __this, int value, float strength);
void MixerHandle__Fuse_Navigation_SnapTo__set_MixOp(MixerHandle__Fuse_Navigation_SnapTo* __this, int value);
void MixerHandle__Fuse_Navigation_SnapTo__set_Priority(MixerHandle__Fuse_Navigation_SnapTo* __this, int value);
void MixerHandle__Fuse_Navigation_SnapTo__Unregister(MixerHandle__Fuse_Navigation_SnapTo* __this);

struct MixerHandle__Fuse_Navigation_SnapTo : ::uObject
{
    int Value;
    float Strength;
    bool _hasValue;
    ::uStrong< ::app::Fuse::Animations::MasterBase__Fuse_Navigation_SnapTo*> Master;
    int _MixOp;
    int _Priority;

    void _ObjInit(::app::Fuse::Animations::MasterBase__Fuse_Navigation_SnapTo* master, int mode, int priority) { MixerHandle__Fuse_Navigation_SnapTo___ObjInit(this, master, mode, priority); }
    bool HasValue() { return MixerHandle__Fuse_Navigation_SnapTo__get_HasValue(this); }
    int MixOp() { return MixerHandle__Fuse_Navigation_SnapTo__get_MixOp(this); }
    int Priority() { return MixerHandle__Fuse_Navigation_SnapTo__get_Priority(this); }
    int RestValue() { return MixerHandle__Fuse_Navigation_SnapTo__get_RestValue(this); }
    void Set(int value, float strength) { MixerHandle__Fuse_Navigation_SnapTo__Set(this, value, strength); }
    void MixOp(int value) { MixerHandle__Fuse_Navigation_SnapTo__set_MixOp(this, value); }
    void Priority(int value) { MixerHandle__Fuse_Navigation_SnapTo__set_Priority(this, value); }
    void Unregister() { MixerHandle__Fuse_Navigation_SnapTo__Unregister(this); }
};

}}}


#endif
