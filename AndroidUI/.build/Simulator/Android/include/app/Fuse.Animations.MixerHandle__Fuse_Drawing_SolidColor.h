// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Animations\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_FUSE_ANIMATIONS_MIXER_HANDLE__FUSE_DRAWING_SOLID_COLOR_H__
#define __APP_FUSE_ANIMATIONS_MIXER_HANDLE__FUSE_DRAWING_SOLID_COLOR_H__

#include <app/Fuse.Animations.IMixerHandle__Fuse_Drawing_SolidColor.h>
#include <app/Uno.Object.h>
#include <Uno.h>
namespace app { namespace Fuse { namespace Animations { struct MasterBase__Fuse_Drawing_SolidColor; } } }
namespace app { namespace Fuse { namespace Drawing { struct SolidColor; } } }

namespace app {
namespace Fuse {
namespace Animations {

struct MixerHandle__Fuse_Drawing_SolidColor;

struct MixerHandle__Fuse_Drawing_SolidColor__uType : ::uClassType
{
    ::app::Fuse::Animations::IMixerHandle__Fuse_Drawing_SolidColor __interface_0;
};

MixerHandle__Fuse_Drawing_SolidColor__uType* MixerHandle__Fuse_Drawing_SolidColor__typeof();

void MixerHandle__Fuse_Drawing_SolidColor___ObjInit(MixerHandle__Fuse_Drawing_SolidColor* __this, ::app::Fuse::Animations::MasterBase__Fuse_Drawing_SolidColor* master, int mode, int priority);
bool MixerHandle__Fuse_Drawing_SolidColor__get_HasValue(MixerHandle__Fuse_Drawing_SolidColor* __this);
int MixerHandle__Fuse_Drawing_SolidColor__get_MixOp(MixerHandle__Fuse_Drawing_SolidColor* __this);
int MixerHandle__Fuse_Drawing_SolidColor__get_Priority(MixerHandle__Fuse_Drawing_SolidColor* __this);
::app::Fuse::Drawing::SolidColor* MixerHandle__Fuse_Drawing_SolidColor__get_RestValue(MixerHandle__Fuse_Drawing_SolidColor* __this);
MixerHandle__Fuse_Drawing_SolidColor* MixerHandle__Fuse_Drawing_SolidColor__New_1(::uStatic* __this, ::app::Fuse::Animations::MasterBase__Fuse_Drawing_SolidColor* master, int mode, int priority);
void MixerHandle__Fuse_Drawing_SolidColor__Set(MixerHandle__Fuse_Drawing_SolidColor* __this, ::app::Fuse::Drawing::SolidColor* value, float strength);
void MixerHandle__Fuse_Drawing_SolidColor__set_MixOp(MixerHandle__Fuse_Drawing_SolidColor* __this, int value);
void MixerHandle__Fuse_Drawing_SolidColor__set_Priority(MixerHandle__Fuse_Drawing_SolidColor* __this, int value);
void MixerHandle__Fuse_Drawing_SolidColor__Unregister(MixerHandle__Fuse_Drawing_SolidColor* __this);

struct MixerHandle__Fuse_Drawing_SolidColor : ::uObject
{
    ::uStrong< ::app::Fuse::Drawing::SolidColor*> Value;
    float Strength;
    bool _hasValue;
    ::uStrong< ::app::Fuse::Animations::MasterBase__Fuse_Drawing_SolidColor*> Master;
    int _MixOp;
    int _Priority;

    void _ObjInit(::app::Fuse::Animations::MasterBase__Fuse_Drawing_SolidColor* master, int mode, int priority) { MixerHandle__Fuse_Drawing_SolidColor___ObjInit(this, master, mode, priority); }
    bool HasValue() { return MixerHandle__Fuse_Drawing_SolidColor__get_HasValue(this); }
    int MixOp() { return MixerHandle__Fuse_Drawing_SolidColor__get_MixOp(this); }
    int Priority() { return MixerHandle__Fuse_Drawing_SolidColor__get_Priority(this); }
    ::app::Fuse::Drawing::SolidColor* RestValue() { return MixerHandle__Fuse_Drawing_SolidColor__get_RestValue(this); }
    void Set(::app::Fuse::Drawing::SolidColor* value, float strength) { MixerHandle__Fuse_Drawing_SolidColor__Set(this, value, strength); }
    void MixOp(int value) { MixerHandle__Fuse_Drawing_SolidColor__set_MixOp(this, value); }
    void Priority(int value) { MixerHandle__Fuse_Drawing_SolidColor__set_Priority(this, value); }
    void Unregister() { MixerHandle__Fuse_Drawing_SolidColor__Unregister(this); }
};

}}}


#endif
