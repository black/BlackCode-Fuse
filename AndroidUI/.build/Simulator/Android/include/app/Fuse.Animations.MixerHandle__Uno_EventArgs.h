// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Animations\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_FUSE_ANIMATIONS_MIXER_HANDLE__UNO_EVENT_ARGS_H__
#define __APP_FUSE_ANIMATIONS_MIXER_HANDLE__UNO_EVENT_ARGS_H__

#include <app/Fuse.Animations.IMixerHandle__Uno_EventArgs.h>
#include <app/Uno.Object.h>
#include <Uno.h>
namespace app { namespace Fuse { namespace Animations { struct MasterBase__Uno_EventArgs; } } }
namespace app { namespace Uno { struct EventArgs; } }

namespace app {
namespace Fuse {
namespace Animations {

struct MixerHandle__Uno_EventArgs;

struct MixerHandle__Uno_EventArgs__uType : ::uClassType
{
    ::app::Fuse::Animations::IMixerHandle__Uno_EventArgs __interface_0;
};

MixerHandle__Uno_EventArgs__uType* MixerHandle__Uno_EventArgs__typeof();

void MixerHandle__Uno_EventArgs___ObjInit(MixerHandle__Uno_EventArgs* __this, ::app::Fuse::Animations::MasterBase__Uno_EventArgs* master, int mode, int priority);
bool MixerHandle__Uno_EventArgs__get_HasValue(MixerHandle__Uno_EventArgs* __this);
int MixerHandle__Uno_EventArgs__get_MixOp(MixerHandle__Uno_EventArgs* __this);
int MixerHandle__Uno_EventArgs__get_Priority(MixerHandle__Uno_EventArgs* __this);
::app::Uno::EventArgs* MixerHandle__Uno_EventArgs__get_RestValue(MixerHandle__Uno_EventArgs* __this);
MixerHandle__Uno_EventArgs* MixerHandle__Uno_EventArgs__New_1(::uStatic* __this, ::app::Fuse::Animations::MasterBase__Uno_EventArgs* master, int mode, int priority);
void MixerHandle__Uno_EventArgs__Set(MixerHandle__Uno_EventArgs* __this, ::app::Uno::EventArgs* value, float strength);
void MixerHandle__Uno_EventArgs__set_MixOp(MixerHandle__Uno_EventArgs* __this, int value);
void MixerHandle__Uno_EventArgs__set_Priority(MixerHandle__Uno_EventArgs* __this, int value);
void MixerHandle__Uno_EventArgs__Unregister(MixerHandle__Uno_EventArgs* __this);

struct MixerHandle__Uno_EventArgs : ::uObject
{
    ::uStrong< ::app::Uno::EventArgs*> Value;
    float Strength;
    bool _hasValue;
    ::uStrong< ::app::Fuse::Animations::MasterBase__Uno_EventArgs*> Master;
    int _MixOp;
    int _Priority;

    void _ObjInit(::app::Fuse::Animations::MasterBase__Uno_EventArgs* master, int mode, int priority) { MixerHandle__Uno_EventArgs___ObjInit(this, master, mode, priority); }
    bool HasValue() { return MixerHandle__Uno_EventArgs__get_HasValue(this); }
    int MixOp() { return MixerHandle__Uno_EventArgs__get_MixOp(this); }
    int Priority() { return MixerHandle__Uno_EventArgs__get_Priority(this); }
    ::app::Uno::EventArgs* RestValue() { return MixerHandle__Uno_EventArgs__get_RestValue(this); }
    void Set(::app::Uno::EventArgs* value, float strength) { MixerHandle__Uno_EventArgs__Set(this, value, strength); }
    void MixOp(int value) { MixerHandle__Uno_EventArgs__set_MixOp(this, value); }
    void Priority(int value) { MixerHandle__Uno_EventArgs__set_Priority(this, value); }
    void Unregister() { MixerHandle__Uno_EventArgs__Unregister(this); }
};

}}}


#endif
