// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Animations\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_FUSE_ANIMATIONS_MIXER_HANDLE__UNO_PLATFORM_I_O_S_STATUS_BAR_STYLE_H__
#define __APP_FUSE_ANIMATIONS_MIXER_HANDLE__UNO_PLATFORM_I_O_S_STATUS_BAR_STYLE_H__

#include <app/Fuse.Animations.IMixerHandle__Uno_Platform_iOS_StatusBarStyle.h>
#include <app/Uno.Object.h>
#include <Uno.h>
namespace app { namespace Fuse { namespace Animations { struct MasterBase__Uno_Platform_iOS_StatusBarStyle; } } }

namespace app {
namespace Fuse {
namespace Animations {

struct MixerHandle__Uno_Platform_iOS_StatusBarStyle;

struct MixerHandle__Uno_Platform_iOS_StatusBarStyle__uType : ::uClassType
{
    ::app::Fuse::Animations::IMixerHandle__Uno_Platform_iOS_StatusBarStyle __interface_0;
};

MixerHandle__Uno_Platform_iOS_StatusBarStyle__uType* MixerHandle__Uno_Platform_iOS_StatusBarStyle__typeof();

void MixerHandle__Uno_Platform_iOS_StatusBarStyle___ObjInit(MixerHandle__Uno_Platform_iOS_StatusBarStyle* __this, ::app::Fuse::Animations::MasterBase__Uno_Platform_iOS_StatusBarStyle* master, int mode, int priority);
bool MixerHandle__Uno_Platform_iOS_StatusBarStyle__get_HasValue(MixerHandle__Uno_Platform_iOS_StatusBarStyle* __this);
int MixerHandle__Uno_Platform_iOS_StatusBarStyle__get_MixOp(MixerHandle__Uno_Platform_iOS_StatusBarStyle* __this);
int MixerHandle__Uno_Platform_iOS_StatusBarStyle__get_Priority(MixerHandle__Uno_Platform_iOS_StatusBarStyle* __this);
int MixerHandle__Uno_Platform_iOS_StatusBarStyle__get_RestValue(MixerHandle__Uno_Platform_iOS_StatusBarStyle* __this);
MixerHandle__Uno_Platform_iOS_StatusBarStyle* MixerHandle__Uno_Platform_iOS_StatusBarStyle__New_1(::uStatic* __this, ::app::Fuse::Animations::MasterBase__Uno_Platform_iOS_StatusBarStyle* master, int mode, int priority);
void MixerHandle__Uno_Platform_iOS_StatusBarStyle__Set(MixerHandle__Uno_Platform_iOS_StatusBarStyle* __this, int value, float strength);
void MixerHandle__Uno_Platform_iOS_StatusBarStyle__set_MixOp(MixerHandle__Uno_Platform_iOS_StatusBarStyle* __this, int value);
void MixerHandle__Uno_Platform_iOS_StatusBarStyle__set_Priority(MixerHandle__Uno_Platform_iOS_StatusBarStyle* __this, int value);
void MixerHandle__Uno_Platform_iOS_StatusBarStyle__Unregister(MixerHandle__Uno_Platform_iOS_StatusBarStyle* __this);

struct MixerHandle__Uno_Platform_iOS_StatusBarStyle : ::uObject
{
    int Value;
    float Strength;
    bool _hasValue;
    ::uStrong< ::app::Fuse::Animations::MasterBase__Uno_Platform_iOS_StatusBarStyle*> Master;
    int _MixOp;
    int _Priority;

    void _ObjInit(::app::Fuse::Animations::MasterBase__Uno_Platform_iOS_StatusBarStyle* master, int mode, int priority) { MixerHandle__Uno_Platform_iOS_StatusBarStyle___ObjInit(this, master, mode, priority); }
    bool HasValue() { return MixerHandle__Uno_Platform_iOS_StatusBarStyle__get_HasValue(this); }
    int MixOp() { return MixerHandle__Uno_Platform_iOS_StatusBarStyle__get_MixOp(this); }
    int Priority() { return MixerHandle__Uno_Platform_iOS_StatusBarStyle__get_Priority(this); }
    int RestValue() { return MixerHandle__Uno_Platform_iOS_StatusBarStyle__get_RestValue(this); }
    void Set(int value, float strength) { MixerHandle__Uno_Platform_iOS_StatusBarStyle__Set(this, value, strength); }
    void MixOp(int value) { MixerHandle__Uno_Platform_iOS_StatusBarStyle__set_MixOp(this, value); }
    void Priority(int value) { MixerHandle__Uno_Platform_iOS_StatusBarStyle__set_Priority(this, value); }
    void Unregister() { MixerHandle__Uno_Platform_iOS_StatusBarStyle__Unregister(this); }
};

}}}


#endif
