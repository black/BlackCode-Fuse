// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Animations\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_FUSE_ANIMATIONS_MIXER_HANDLE__FUSE_LAYOUTS_ORIENTATION_H__
#define __APP_FUSE_ANIMATIONS_MIXER_HANDLE__FUSE_LAYOUTS_ORIENTATION_H__

#include <app/Fuse.Animations.IMixerHandle__Fuse_Layouts_Orientation.h>
#include <app/Uno.Object.h>
#include <Uno.h>
namespace app { namespace Fuse { namespace Animations { struct MasterBase__Fuse_Layouts_Orientation; } } }

namespace app {
namespace Fuse {
namespace Animations {

struct MixerHandle__Fuse_Layouts_Orientation;

struct MixerHandle__Fuse_Layouts_Orientation__uType : ::uClassType
{
    ::app::Fuse::Animations::IMixerHandle__Fuse_Layouts_Orientation __interface_0;
};

MixerHandle__Fuse_Layouts_Orientation__uType* MixerHandle__Fuse_Layouts_Orientation__typeof();

void MixerHandle__Fuse_Layouts_Orientation___ObjInit(MixerHandle__Fuse_Layouts_Orientation* __this, ::app::Fuse::Animations::MasterBase__Fuse_Layouts_Orientation* master, int mode, int priority);
bool MixerHandle__Fuse_Layouts_Orientation__get_HasValue(MixerHandle__Fuse_Layouts_Orientation* __this);
int MixerHandle__Fuse_Layouts_Orientation__get_MixOp(MixerHandle__Fuse_Layouts_Orientation* __this);
int MixerHandle__Fuse_Layouts_Orientation__get_Priority(MixerHandle__Fuse_Layouts_Orientation* __this);
int MixerHandle__Fuse_Layouts_Orientation__get_RestValue(MixerHandle__Fuse_Layouts_Orientation* __this);
MixerHandle__Fuse_Layouts_Orientation* MixerHandle__Fuse_Layouts_Orientation__New_1(::uStatic* __this, ::app::Fuse::Animations::MasterBase__Fuse_Layouts_Orientation* master, int mode, int priority);
void MixerHandle__Fuse_Layouts_Orientation__Set(MixerHandle__Fuse_Layouts_Orientation* __this, int value, float strength);
void MixerHandle__Fuse_Layouts_Orientation__set_MixOp(MixerHandle__Fuse_Layouts_Orientation* __this, int value);
void MixerHandle__Fuse_Layouts_Orientation__set_Priority(MixerHandle__Fuse_Layouts_Orientation* __this, int value);
void MixerHandle__Fuse_Layouts_Orientation__Unregister(MixerHandle__Fuse_Layouts_Orientation* __this);

struct MixerHandle__Fuse_Layouts_Orientation : ::uObject
{
    int Value;
    float Strength;
    bool _hasValue;
    ::uStrong< ::app::Fuse::Animations::MasterBase__Fuse_Layouts_Orientation*> Master;
    int _MixOp;
    int _Priority;

    void _ObjInit(::app::Fuse::Animations::MasterBase__Fuse_Layouts_Orientation* master, int mode, int priority) { MixerHandle__Fuse_Layouts_Orientation___ObjInit(this, master, mode, priority); }
    bool HasValue() { return MixerHandle__Fuse_Layouts_Orientation__get_HasValue(this); }
    int MixOp() { return MixerHandle__Fuse_Layouts_Orientation__get_MixOp(this); }
    int Priority() { return MixerHandle__Fuse_Layouts_Orientation__get_Priority(this); }
    int RestValue() { return MixerHandle__Fuse_Layouts_Orientation__get_RestValue(this); }
    void Set(int value, float strength) { MixerHandle__Fuse_Layouts_Orientation__Set(this, value, strength); }
    void MixOp(int value) { MixerHandle__Fuse_Layouts_Orientation__set_MixOp(this, value); }
    void Priority(int value) { MixerHandle__Fuse_Layouts_Orientation__set_Priority(this, value); }
    void Unregister() { MixerHandle__Fuse_Layouts_Orientation__Unregister(this); }
};

}}}


#endif
