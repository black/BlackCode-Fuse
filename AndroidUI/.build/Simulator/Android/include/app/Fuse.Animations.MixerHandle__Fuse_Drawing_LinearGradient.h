// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Animations\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_FUSE_ANIMATIONS_MIXER_HANDLE__FUSE_DRAWING_LINEAR_GRADIENT_H__
#define __APP_FUSE_ANIMATIONS_MIXER_HANDLE__FUSE_DRAWING_LINEAR_GRADIENT_H__

#include <app/Fuse.Animations.IMixerHandle__Fuse_Drawing_LinearGradient.h>
#include <app/Uno.Object.h>
#include <Uno.h>
namespace app { namespace Fuse { namespace Animations { struct MasterBase__Fuse_Drawing_LinearGradient; } } }
namespace app { namespace Fuse { namespace Drawing { struct LinearGradient; } } }

namespace app {
namespace Fuse {
namespace Animations {

struct MixerHandle__Fuse_Drawing_LinearGradient;

struct MixerHandle__Fuse_Drawing_LinearGradient__uType : ::uClassType
{
    ::app::Fuse::Animations::IMixerHandle__Fuse_Drawing_LinearGradient __interface_0;
};

MixerHandle__Fuse_Drawing_LinearGradient__uType* MixerHandle__Fuse_Drawing_LinearGradient__typeof();

void MixerHandle__Fuse_Drawing_LinearGradient___ObjInit(MixerHandle__Fuse_Drawing_LinearGradient* __this, ::app::Fuse::Animations::MasterBase__Fuse_Drawing_LinearGradient* master, int mode, int priority);
bool MixerHandle__Fuse_Drawing_LinearGradient__get_HasValue(MixerHandle__Fuse_Drawing_LinearGradient* __this);
int MixerHandle__Fuse_Drawing_LinearGradient__get_MixOp(MixerHandle__Fuse_Drawing_LinearGradient* __this);
int MixerHandle__Fuse_Drawing_LinearGradient__get_Priority(MixerHandle__Fuse_Drawing_LinearGradient* __this);
::app::Fuse::Drawing::LinearGradient* MixerHandle__Fuse_Drawing_LinearGradient__get_RestValue(MixerHandle__Fuse_Drawing_LinearGradient* __this);
MixerHandle__Fuse_Drawing_LinearGradient* MixerHandle__Fuse_Drawing_LinearGradient__New_1(::uStatic* __this, ::app::Fuse::Animations::MasterBase__Fuse_Drawing_LinearGradient* master, int mode, int priority);
void MixerHandle__Fuse_Drawing_LinearGradient__Set(MixerHandle__Fuse_Drawing_LinearGradient* __this, ::app::Fuse::Drawing::LinearGradient* value, float strength);
void MixerHandle__Fuse_Drawing_LinearGradient__set_MixOp(MixerHandle__Fuse_Drawing_LinearGradient* __this, int value);
void MixerHandle__Fuse_Drawing_LinearGradient__set_Priority(MixerHandle__Fuse_Drawing_LinearGradient* __this, int value);
void MixerHandle__Fuse_Drawing_LinearGradient__Unregister(MixerHandle__Fuse_Drawing_LinearGradient* __this);

struct MixerHandle__Fuse_Drawing_LinearGradient : ::uObject
{
    ::uStrong< ::app::Fuse::Drawing::LinearGradient*> Value;
    float Strength;
    bool _hasValue;
    ::uStrong< ::app::Fuse::Animations::MasterBase__Fuse_Drawing_LinearGradient*> Master;
    int _MixOp;
    int _Priority;

    void _ObjInit(::app::Fuse::Animations::MasterBase__Fuse_Drawing_LinearGradient* master, int mode, int priority) { MixerHandle__Fuse_Drawing_LinearGradient___ObjInit(this, master, mode, priority); }
    bool HasValue() { return MixerHandle__Fuse_Drawing_LinearGradient__get_HasValue(this); }
    int MixOp() { return MixerHandle__Fuse_Drawing_LinearGradient__get_MixOp(this); }
    int Priority() { return MixerHandle__Fuse_Drawing_LinearGradient__get_Priority(this); }
    ::app::Fuse::Drawing::LinearGradient* RestValue() { return MixerHandle__Fuse_Drawing_LinearGradient__get_RestValue(this); }
    void Set(::app::Fuse::Drawing::LinearGradient* value, float strength) { MixerHandle__Fuse_Drawing_LinearGradient__Set(this, value, strength); }
    void MixOp(int value) { MixerHandle__Fuse_Drawing_LinearGradient__set_MixOp(this, value); }
    void Priority(int value) { MixerHandle__Fuse_Drawing_LinearGradient__set_Priority(this, value); }
    void Unregister() { MixerHandle__Fuse_Drawing_LinearGradient__Unregister(this); }
};

}}}


#endif
