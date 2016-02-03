// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Animations\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_FUSE_ANIMATIONS_MIXER_HANDLE__CHAR_H__
#define __APP_FUSE_ANIMATIONS_MIXER_HANDLE__CHAR_H__

#include <app/Fuse.Animations.IMixerHandle__char.h>
#include <app/Uno.Object.h>
#include <Uno.h>
namespace app { namespace Fuse { namespace Animations { struct MasterBase__char; } } }

namespace app {
namespace Fuse {
namespace Animations {

struct MixerHandle__char;

struct MixerHandle__char__uType : ::uClassType
{
    ::app::Fuse::Animations::IMixerHandle__char __interface_0;
};

MixerHandle__char__uType* MixerHandle__char__typeof();

void MixerHandle__char___ObjInit(MixerHandle__char* __this, ::app::Fuse::Animations::MasterBase__char* master, int mode, int priority);
bool MixerHandle__char__get_HasValue(MixerHandle__char* __this);
int MixerHandle__char__get_MixOp(MixerHandle__char* __this);
int MixerHandle__char__get_Priority(MixerHandle__char* __this);
::uChar MixerHandle__char__get_RestValue(MixerHandle__char* __this);
MixerHandle__char* MixerHandle__char__New_1(::uStatic* __this, ::app::Fuse::Animations::MasterBase__char* master, int mode, int priority);
void MixerHandle__char__Set(MixerHandle__char* __this, ::uChar value, float strength);
void MixerHandle__char__set_MixOp(MixerHandle__char* __this, int value);
void MixerHandle__char__set_Priority(MixerHandle__char* __this, int value);
void MixerHandle__char__Unregister(MixerHandle__char* __this);

struct MixerHandle__char : ::uObject
{
    ::uChar Value;
    float Strength;
    bool _hasValue;
    ::uStrong< ::app::Fuse::Animations::MasterBase__char*> Master;
    int _MixOp;
    int _Priority;

    void _ObjInit(::app::Fuse::Animations::MasterBase__char* master, int mode, int priority) { MixerHandle__char___ObjInit(this, master, mode, priority); }
    bool HasValue() { return MixerHandle__char__get_HasValue(this); }
    int MixOp() { return MixerHandle__char__get_MixOp(this); }
    int Priority() { return MixerHandle__char__get_Priority(this); }
    ::uChar RestValue() { return MixerHandle__char__get_RestValue(this); }
    void Set(::uChar value, float strength) { MixerHandle__char__Set(this, value, strength); }
    void MixOp(int value) { MixerHandle__char__set_MixOp(this, value); }
    void Priority(int value) { MixerHandle__char__set_Priority(this, value); }
    void Unregister() { MixerHandle__char__Unregister(this); }
};

}}}


#endif
