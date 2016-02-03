// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Animations\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_FUSE_ANIMATIONS_MIXER_HANDLE__BOOL_H__
#define __APP_FUSE_ANIMATIONS_MIXER_HANDLE__BOOL_H__

#include <app/Fuse.Animations.IMixerHandle__bool.h>
#include <app/Uno.Object.h>
#include <Uno.h>
namespace app { namespace Fuse { namespace Animations { struct MasterBase__bool; } } }

namespace app {
namespace Fuse {
namespace Animations {

struct MixerHandle__bool;

struct MixerHandle__bool__uType : ::uClassType
{
    ::app::Fuse::Animations::IMixerHandle__bool __interface_0;
};

MixerHandle__bool__uType* MixerHandle__bool__typeof();

void MixerHandle__bool___ObjInit(MixerHandle__bool* __this, ::app::Fuse::Animations::MasterBase__bool* master, int mode, int priority);
bool MixerHandle__bool__get_HasValue(MixerHandle__bool* __this);
int MixerHandle__bool__get_MixOp(MixerHandle__bool* __this);
int MixerHandle__bool__get_Priority(MixerHandle__bool* __this);
bool MixerHandle__bool__get_RestValue(MixerHandle__bool* __this);
MixerHandle__bool* MixerHandle__bool__New_1(::uStatic* __this, ::app::Fuse::Animations::MasterBase__bool* master, int mode, int priority);
void MixerHandle__bool__Set(MixerHandle__bool* __this, bool value, float strength);
void MixerHandle__bool__set_MixOp(MixerHandle__bool* __this, int value);
void MixerHandle__bool__set_Priority(MixerHandle__bool* __this, int value);
void MixerHandle__bool__Unregister(MixerHandle__bool* __this);

struct MixerHandle__bool : ::uObject
{
    bool Value;
    float Strength;
    bool _hasValue;
    ::uStrong< ::app::Fuse::Animations::MasterBase__bool*> Master;
    int _MixOp;
    int _Priority;

    void _ObjInit(::app::Fuse::Animations::MasterBase__bool* master, int mode, int priority) { MixerHandle__bool___ObjInit(this, master, mode, priority); }
    bool HasValue() { return MixerHandle__bool__get_HasValue(this); }
    int MixOp() { return MixerHandle__bool__get_MixOp(this); }
    int Priority() { return MixerHandle__bool__get_Priority(this); }
    bool RestValue() { return MixerHandle__bool__get_RestValue(this); }
    void Set(bool value, float strength) { MixerHandle__bool__Set(this, value, strength); }
    void MixOp(int value) { MixerHandle__bool__set_MixOp(this, value); }
    void Priority(int value) { MixerHandle__bool__set_Priority(this, value); }
    void Unregister() { MixerHandle__bool__Unregister(this); }
};

}}}


#endif
