// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Animations\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_FUSE_ANIMATIONS_MIXER_HANDLE__FUSE_ELEMENTS_SIZE_UNIT_H__
#define __APP_FUSE_ANIMATIONS_MIXER_HANDLE__FUSE_ELEMENTS_SIZE_UNIT_H__

#include <app/Fuse.Animations.IMixerHandle__Fuse_Elements_SizeUnit.h>
#include <app/Uno.Object.h>
#include <Uno.h>
namespace app { namespace Fuse { namespace Animations { struct MasterBase__Fuse_Elements_SizeUnit; } } }

namespace app {
namespace Fuse {
namespace Animations {

struct MixerHandle__Fuse_Elements_SizeUnit;

struct MixerHandle__Fuse_Elements_SizeUnit__uType : ::uClassType
{
    ::app::Fuse::Animations::IMixerHandle__Fuse_Elements_SizeUnit __interface_0;
};

MixerHandle__Fuse_Elements_SizeUnit__uType* MixerHandle__Fuse_Elements_SizeUnit__typeof();

void MixerHandle__Fuse_Elements_SizeUnit___ObjInit(MixerHandle__Fuse_Elements_SizeUnit* __this, ::app::Fuse::Animations::MasterBase__Fuse_Elements_SizeUnit* master, int mode, int priority);
bool MixerHandle__Fuse_Elements_SizeUnit__get_HasValue(MixerHandle__Fuse_Elements_SizeUnit* __this);
int MixerHandle__Fuse_Elements_SizeUnit__get_MixOp(MixerHandle__Fuse_Elements_SizeUnit* __this);
int MixerHandle__Fuse_Elements_SizeUnit__get_Priority(MixerHandle__Fuse_Elements_SizeUnit* __this);
int MixerHandle__Fuse_Elements_SizeUnit__get_RestValue(MixerHandle__Fuse_Elements_SizeUnit* __this);
MixerHandle__Fuse_Elements_SizeUnit* MixerHandle__Fuse_Elements_SizeUnit__New_1(::uStatic* __this, ::app::Fuse::Animations::MasterBase__Fuse_Elements_SizeUnit* master, int mode, int priority);
void MixerHandle__Fuse_Elements_SizeUnit__Set(MixerHandle__Fuse_Elements_SizeUnit* __this, int value, float strength);
void MixerHandle__Fuse_Elements_SizeUnit__set_MixOp(MixerHandle__Fuse_Elements_SizeUnit* __this, int value);
void MixerHandle__Fuse_Elements_SizeUnit__set_Priority(MixerHandle__Fuse_Elements_SizeUnit* __this, int value);
void MixerHandle__Fuse_Elements_SizeUnit__Unregister(MixerHandle__Fuse_Elements_SizeUnit* __this);

struct MixerHandle__Fuse_Elements_SizeUnit : ::uObject
{
    int Value;
    float Strength;
    bool _hasValue;
    ::uStrong< ::app::Fuse::Animations::MasterBase__Fuse_Elements_SizeUnit*> Master;
    int _MixOp;
    int _Priority;

    void _ObjInit(::app::Fuse::Animations::MasterBase__Fuse_Elements_SizeUnit* master, int mode, int priority) { MixerHandle__Fuse_Elements_SizeUnit___ObjInit(this, master, mode, priority); }
    bool HasValue() { return MixerHandle__Fuse_Elements_SizeUnit__get_HasValue(this); }
    int MixOp() { return MixerHandle__Fuse_Elements_SizeUnit__get_MixOp(this); }
    int Priority() { return MixerHandle__Fuse_Elements_SizeUnit__get_Priority(this); }
    int RestValue() { return MixerHandle__Fuse_Elements_SizeUnit__get_RestValue(this); }
    void Set(int value, float strength) { MixerHandle__Fuse_Elements_SizeUnit__Set(this, value, strength); }
    void MixOp(int value) { MixerHandle__Fuse_Elements_SizeUnit__set_MixOp(this, value); }
    void Priority(int value) { MixerHandle__Fuse_Elements_SizeUnit__set_Priority(this, value); }
    void Unregister() { MixerHandle__Fuse_Elements_SizeUnit__Unregister(this); }
};

}}}


#endif
