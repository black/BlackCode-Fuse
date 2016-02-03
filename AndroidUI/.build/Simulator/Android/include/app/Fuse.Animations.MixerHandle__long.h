// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Animations\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_FUSE_ANIMATIONS_MIXER_HANDLE__LONG_H__
#define __APP_FUSE_ANIMATIONS_MIXER_HANDLE__LONG_H__

#include <app/Fuse.Animations.IMixerHandle__long.h>
#include <app/Uno.Object.h>
#include <Uno.h>
namespace app { namespace Fuse { namespace Animations { struct MasterBase__long; } } }

namespace app {
namespace Fuse {
namespace Animations {

struct MixerHandle__long;

struct MixerHandle__long__uType : ::uClassType
{
    ::app::Fuse::Animations::IMixerHandle__long __interface_0;
};

MixerHandle__long__uType* MixerHandle__long__typeof();

void MixerHandle__long___ObjInit(MixerHandle__long* __this, ::app::Fuse::Animations::MasterBase__long* master, int mode, int priority);
bool MixerHandle__long__get_HasValue(MixerHandle__long* __this);
int MixerHandle__long__get_MixOp(MixerHandle__long* __this);
int MixerHandle__long__get_Priority(MixerHandle__long* __this);
::uLong MixerHandle__long__get_RestValue(MixerHandle__long* __this);
MixerHandle__long* MixerHandle__long__New_1(::uStatic* __this, ::app::Fuse::Animations::MasterBase__long* master, int mode, int priority);
void MixerHandle__long__Set(MixerHandle__long* __this, ::uLong value, float strength);
void MixerHandle__long__set_MixOp(MixerHandle__long* __this, int value);
void MixerHandle__long__set_Priority(MixerHandle__long* __this, int value);
void MixerHandle__long__Unregister(MixerHandle__long* __this);

struct MixerHandle__long : ::uObject
{
    ::uLong Value;
    float Strength;
    bool _hasValue;
    ::uStrong< ::app::Fuse::Animations::MasterBase__long*> Master;
    int _MixOp;
    int _Priority;

    void _ObjInit(::app::Fuse::Animations::MasterBase__long* master, int mode, int priority) { MixerHandle__long___ObjInit(this, master, mode, priority); }
    bool HasValue() { return MixerHandle__long__get_HasValue(this); }
    int MixOp() { return MixerHandle__long__get_MixOp(this); }
    int Priority() { return MixerHandle__long__get_Priority(this); }
    ::uLong RestValue() { return MixerHandle__long__get_RestValue(this); }
    void Set(::uLong value, float strength) { MixerHandle__long__Set(this, value, strength); }
    void MixOp(int value) { MixerHandle__long__set_MixOp(this, value); }
    void Priority(int value) { MixerHandle__long__set_Priority(this, value); }
    void Unregister() { MixerHandle__long__Unregister(this); }
};

}}}


#endif
