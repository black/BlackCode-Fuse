// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Animations\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_FUSE_ANIMATIONS_MIXER_HANDLE__FUSE_TRANSFORM_H__
#define __APP_FUSE_ANIMATIONS_MIXER_HANDLE__FUSE_TRANSFORM_H__

#include <app/Fuse.Animations.IMixerHandle__Fuse_Transform.h>
#include <app/Uno.Object.h>
#include <Uno.h>
namespace app { namespace Fuse { namespace Animations { struct MasterBase__Fuse_Transform; } } }
namespace app { namespace Fuse { struct Transform; } }

namespace app {
namespace Fuse {
namespace Animations {

struct MixerHandle__Fuse_Transform;

struct MixerHandle__Fuse_Transform__uType : ::uClassType
{
    ::app::Fuse::Animations::IMixerHandle__Fuse_Transform __interface_0;
};

MixerHandle__Fuse_Transform__uType* MixerHandle__Fuse_Transform__typeof();

void MixerHandle__Fuse_Transform___ObjInit(MixerHandle__Fuse_Transform* __this, ::app::Fuse::Animations::MasterBase__Fuse_Transform* master, int mode, int priority);
bool MixerHandle__Fuse_Transform__get_HasValue(MixerHandle__Fuse_Transform* __this);
int MixerHandle__Fuse_Transform__get_MixOp(MixerHandle__Fuse_Transform* __this);
int MixerHandle__Fuse_Transform__get_Priority(MixerHandle__Fuse_Transform* __this);
::app::Fuse::Transform* MixerHandle__Fuse_Transform__get_RestValue(MixerHandle__Fuse_Transform* __this);
MixerHandle__Fuse_Transform* MixerHandle__Fuse_Transform__New_1(::uStatic* __this, ::app::Fuse::Animations::MasterBase__Fuse_Transform* master, int mode, int priority);
void MixerHandle__Fuse_Transform__Set(MixerHandle__Fuse_Transform* __this, ::app::Fuse::Transform* value, float strength);
void MixerHandle__Fuse_Transform__set_MixOp(MixerHandle__Fuse_Transform* __this, int value);
void MixerHandle__Fuse_Transform__set_Priority(MixerHandle__Fuse_Transform* __this, int value);
void MixerHandle__Fuse_Transform__Unregister(MixerHandle__Fuse_Transform* __this);

struct MixerHandle__Fuse_Transform : ::uObject
{
    ::uStrong< ::app::Fuse::Transform*> Value;
    float Strength;
    bool _hasValue;
    ::uStrong< ::app::Fuse::Animations::MasterBase__Fuse_Transform*> Master;
    int _MixOp;
    int _Priority;

    void _ObjInit(::app::Fuse::Animations::MasterBase__Fuse_Transform* master, int mode, int priority) { MixerHandle__Fuse_Transform___ObjInit(this, master, mode, priority); }
    bool HasValue() { return MixerHandle__Fuse_Transform__get_HasValue(this); }
    int MixOp() { return MixerHandle__Fuse_Transform__get_MixOp(this); }
    int Priority() { return MixerHandle__Fuse_Transform__get_Priority(this); }
    ::app::Fuse::Transform* RestValue() { return MixerHandle__Fuse_Transform__get_RestValue(this); }
    void Set(::app::Fuse::Transform* value, float strength) { MixerHandle__Fuse_Transform__Set(this, value, strength); }
    void MixOp(int value) { MixerHandle__Fuse_Transform__set_MixOp(this, value); }
    void Priority(int value) { MixerHandle__Fuse_Transform__set_Priority(this, value); }
    void Unregister() { MixerHandle__Fuse_Transform__Unregister(this); }
};

}}}


#endif
