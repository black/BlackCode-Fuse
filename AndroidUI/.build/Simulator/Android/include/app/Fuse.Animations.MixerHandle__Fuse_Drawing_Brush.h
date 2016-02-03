// This file was generated based on 'C:\ProgramData\Uno\Packages\Fuse.Animations\0.11.3\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_FUSE_ANIMATIONS_MIXER_HANDLE__FUSE_DRAWING_BRUSH_H__
#define __APP_FUSE_ANIMATIONS_MIXER_HANDLE__FUSE_DRAWING_BRUSH_H__

#include <app/Fuse.Animations.IMixerHandle__Fuse_Drawing_Brush.h>
#include <app/Uno.Object.h>
#include <Uno.h>
namespace app { namespace Fuse { namespace Animations { struct MasterBase__Fuse_Drawing_Brush; } } }
namespace app { namespace Fuse { namespace Drawing { struct Brush; } } }

namespace app {
namespace Fuse {
namespace Animations {

struct MixerHandle__Fuse_Drawing_Brush;

struct MixerHandle__Fuse_Drawing_Brush__uType : ::uClassType
{
    ::app::Fuse::Animations::IMixerHandle__Fuse_Drawing_Brush __interface_0;
};

MixerHandle__Fuse_Drawing_Brush__uType* MixerHandle__Fuse_Drawing_Brush__typeof();

void MixerHandle__Fuse_Drawing_Brush___ObjInit(MixerHandle__Fuse_Drawing_Brush* __this, ::app::Fuse::Animations::MasterBase__Fuse_Drawing_Brush* master, int mode, int priority);
bool MixerHandle__Fuse_Drawing_Brush__get_HasValue(MixerHandle__Fuse_Drawing_Brush* __this);
int MixerHandle__Fuse_Drawing_Brush__get_MixOp(MixerHandle__Fuse_Drawing_Brush* __this);
int MixerHandle__Fuse_Drawing_Brush__get_Priority(MixerHandle__Fuse_Drawing_Brush* __this);
::app::Fuse::Drawing::Brush* MixerHandle__Fuse_Drawing_Brush__get_RestValue(MixerHandle__Fuse_Drawing_Brush* __this);
MixerHandle__Fuse_Drawing_Brush* MixerHandle__Fuse_Drawing_Brush__New_1(::uStatic* __this, ::app::Fuse::Animations::MasterBase__Fuse_Drawing_Brush* master, int mode, int priority);
void MixerHandle__Fuse_Drawing_Brush__Set(MixerHandle__Fuse_Drawing_Brush* __this, ::app::Fuse::Drawing::Brush* value, float strength);
void MixerHandle__Fuse_Drawing_Brush__set_MixOp(MixerHandle__Fuse_Drawing_Brush* __this, int value);
void MixerHandle__Fuse_Drawing_Brush__set_Priority(MixerHandle__Fuse_Drawing_Brush* __this, int value);
void MixerHandle__Fuse_Drawing_Brush__Unregister(MixerHandle__Fuse_Drawing_Brush* __this);

struct MixerHandle__Fuse_Drawing_Brush : ::uObject
{
    ::uStrong< ::app::Fuse::Drawing::Brush*> Value;
    float Strength;
    bool _hasValue;
    ::uStrong< ::app::Fuse::Animations::MasterBase__Fuse_Drawing_Brush*> Master;
    int _MixOp;
    int _Priority;

    void _ObjInit(::app::Fuse::Animations::MasterBase__Fuse_Drawing_Brush* master, int mode, int priority) { MixerHandle__Fuse_Drawing_Brush___ObjInit(this, master, mode, priority); }
    bool HasValue() { return MixerHandle__Fuse_Drawing_Brush__get_HasValue(this); }
    int MixOp() { return MixerHandle__Fuse_Drawing_Brush__get_MixOp(this); }
    int Priority() { return MixerHandle__Fuse_Drawing_Brush__get_Priority(this); }
    ::app::Fuse::Drawing::Brush* RestValue() { return MixerHandle__Fuse_Drawing_Brush__get_RestValue(this); }
    void Set(::app::Fuse::Drawing::Brush* value, float strength) { MixerHandle__Fuse_Drawing_Brush__Set(this, value, strength); }
    void MixOp(int value) { MixerHandle__Fuse_Drawing_Brush__set_MixOp(this, value); }
    void Priority(int value) { MixerHandle__Fuse_Drawing_Brush__set_Priority(this, value); }
    void Unregister() { MixerHandle__Fuse_Drawing_Brush__Unregister(this); }
};

}}}


#endif
