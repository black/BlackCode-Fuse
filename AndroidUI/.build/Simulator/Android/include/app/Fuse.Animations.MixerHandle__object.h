// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Animations\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_FUSE_ANIMATIONS_MIXER_HANDLE__OBJECT_H__
#define __APP_FUSE_ANIMATIONS_MIXER_HANDLE__OBJECT_H__

#include <app/Fuse.Animations.IMixerHandle__object.h>
#include <app/Uno.Object.h>
#include <Uno.h>
namespace app { namespace Fuse { namespace Animations { struct MasterBase__object; } } }

namespace app {
namespace Fuse {
namespace Animations {

struct MixerHandle__object;

struct MixerHandle__object__uType : ::uClassType
{
    ::app::Fuse::Animations::IMixerHandle__object __interface_0;
};

MixerHandle__object__uType* MixerHandle__object__typeof();

void MixerHandle__object___ObjInit(MixerHandle__object* __this, ::app::Fuse::Animations::MasterBase__object* master, int mode, int priority);
bool MixerHandle__object__get_HasValue(MixerHandle__object* __this);
int MixerHandle__object__get_MixOp(MixerHandle__object* __this);
int MixerHandle__object__get_Priority(MixerHandle__object* __this);
::uObject* MixerHandle__object__get_RestValue(MixerHandle__object* __this);
MixerHandle__object* MixerHandle__object__New_1(::uStatic* __this, ::app::Fuse::Animations::MasterBase__object* master, int mode, int priority);
void MixerHandle__object__Set(MixerHandle__object* __this, ::uObject* value, float strength);
void MixerHandle__object__set_MixOp(MixerHandle__object* __this, int value);
void MixerHandle__object__set_Priority(MixerHandle__object* __this, int value);
void MixerHandle__object__Unregister(MixerHandle__object* __this);

struct MixerHandle__object : ::uObject
{
    ::uStrong< ::uObject*> Value;
    float Strength;
    bool _hasValue;
    ::uStrong< ::app::Fuse::Animations::MasterBase__object*> Master;
    int _MixOp;
    int _Priority;

    void _ObjInit(::app::Fuse::Animations::MasterBase__object* master, int mode, int priority) { MixerHandle__object___ObjInit(this, master, mode, priority); }
    bool HasValue() { return MixerHandle__object__get_HasValue(this); }
    int MixOp() { return MixerHandle__object__get_MixOp(this); }
    int Priority() { return MixerHandle__object__get_Priority(this); }
    ::uObject* RestValue() { return MixerHandle__object__get_RestValue(this); }
    void Set(::uObject* value, float strength) { MixerHandle__object__Set(this, value, strength); }
    void MixOp(int value) { MixerHandle__object__set_MixOp(this, value); }
    void Priority(int value) { MixerHandle__object__set_Priority(this, value); }
    void Unregister() { MixerHandle__object__Unregister(this); }
};

}}}


#endif
