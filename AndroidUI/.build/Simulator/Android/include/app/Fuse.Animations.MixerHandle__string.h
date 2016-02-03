// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Animations\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_FUSE_ANIMATIONS_MIXER_HANDLE__STRING_H__
#define __APP_FUSE_ANIMATIONS_MIXER_HANDLE__STRING_H__

#include <app/Fuse.Animations.IMixerHandle__string.h>
#include <app/Uno.Object.h>
#include <Uno.h>
namespace app { namespace Fuse { namespace Animations { struct MasterBase__string; } } }

namespace app {
namespace Fuse {
namespace Animations {

struct MixerHandle__string;

struct MixerHandle__string__uType : ::uClassType
{
    ::app::Fuse::Animations::IMixerHandle__string __interface_0;
};

MixerHandle__string__uType* MixerHandle__string__typeof();

void MixerHandle__string___ObjInit(MixerHandle__string* __this, ::app::Fuse::Animations::MasterBase__string* master, int mode, int priority);
bool MixerHandle__string__get_HasValue(MixerHandle__string* __this);
int MixerHandle__string__get_MixOp(MixerHandle__string* __this);
int MixerHandle__string__get_Priority(MixerHandle__string* __this);
::uString* MixerHandle__string__get_RestValue(MixerHandle__string* __this);
MixerHandle__string* MixerHandle__string__New_1(::uStatic* __this, ::app::Fuse::Animations::MasterBase__string* master, int mode, int priority);
void MixerHandle__string__Set(MixerHandle__string* __this, ::uString* value, float strength);
void MixerHandle__string__set_MixOp(MixerHandle__string* __this, int value);
void MixerHandle__string__set_Priority(MixerHandle__string* __this, int value);
void MixerHandle__string__Unregister(MixerHandle__string* __this);

struct MixerHandle__string : ::uObject
{
    ::uStrong< ::uString*> Value;
    float Strength;
    bool _hasValue;
    ::uStrong< ::app::Fuse::Animations::MasterBase__string*> Master;
    int _MixOp;
    int _Priority;

    void _ObjInit(::app::Fuse::Animations::MasterBase__string* master, int mode, int priority) { MixerHandle__string___ObjInit(this, master, mode, priority); }
    bool HasValue() { return MixerHandle__string__get_HasValue(this); }
    int MixOp() { return MixerHandle__string__get_MixOp(this); }
    int Priority() { return MixerHandle__string__get_Priority(this); }
    ::uString* RestValue() { return MixerHandle__string__get_RestValue(this); }
    void Set(::uString* value, float strength) { MixerHandle__string__Set(this, value, strength); }
    void MixOp(int value) { MixerHandle__string__set_MixOp(this, value); }
    void Priority(int value) { MixerHandle__string__set_Priority(this, value); }
    void Unregister() { MixerHandle__string__Unregister(this); }
};

}}}


#endif
